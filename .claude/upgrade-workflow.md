# Upgrading qemu-pinning to a new QEMU version

## Repository structure

- `master` always equals the latest patched version (the newest `vX.Y.Z-pinning` branch).
- Each released QEMU version has a `vX.Y.Z-pinning` branch (local + `origin`): the fork patches rebased on top of the upstream `vX.Y.Z` tag.
- The fork patches are 3 commits on top of the upstream version tag, HEAD → down:
  1. `Pinning patch for vX.Y.Z` — the pinning patch (touches `hw/core/machine.c`, `include/hw/core/boards.h`, `qemu-options.hx`, `system/cpus.c`, `system/vl.c`, `util/qemu-thread-posix.c`)
  2. `Add README, build script, upgrade doc and update gitignore` — fork tooling (`README.md`, `build_pinning_qemu_binary.sh`, `.claude/upgrade-workflow.md`, `.gitignore`)
  3. `Samba share tweaks: ...` — `net/slirp.c`
- Remotes: `upstream` = `qemu/qemu`, `origin` = `64kramsystem/qemu-pinning`.

## Upgrade steps (OLD = current version, NEW = target, e.g. v11.0.0 → v11.0.1)

1. Fetch the target upstream tag: `git fetch upstream --tags`. The `NEW` tag (e.g. `v11.0.1`) must exist locally.
2. Create the new branch and rebase the 3 fork patches onto the new tag (`master~3` is the upstream base commit, i.e. the `OLD` tag):

       git switch -c <NEW>-pinning master
       git rebase --onto <NEW> master~3

3. Resolve conflicts if the upstream delta overlaps a patched file. Verify patch integrity:

       diff <(git diff <OLD>..<OLD>-pinning) <(git diff <NEW>..<NEW>-pinning)

   It should differ only in the `index ..` blob lines of files upstream also changed.
4. Update the tip commit message (`git commit --amend`): title `Pinning patch for <NEW>`; a `Changes:` section (usually `- (none)` for routine bumps); a `Notes:` section listing files git auto-merged and any conflicts resolved. Add `Closes #NN` if there is a tracking issue.
5. Reset master:

       git switch master && git reset --hard <NEW>-pinning

6. Build to verify it compiles: `./build_pinning_qemu_binary.sh --yes` (installs missing deps via `sudo apt-get`; the script aborts on Ubuntu ≥ 24.10).
7. Push when ready:

       git push origin <NEW>-pinning
       git push --force-with-lease origin master
