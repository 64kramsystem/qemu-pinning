/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * schema-defined QAPI types
 *
 * Copyright IBM, Corp. 2011
 *
 * Authors:
 *  Anthony Liguori   <aliguori@us.ibm.com>
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 *
 */

#ifndef QAPI_TYPES_H
#define QAPI_TYPES_H


#ifndef QAPI_TYPES_BUILTIN
#define QAPI_TYPES_BUILTIN


typedef enum QType {
    QTYPE_NONE = 0,
    QTYPE_QNULL = 1,
    QTYPE_QINT = 2,
    QTYPE_QSTRING = 3,
    QTYPE_QDICT = 4,
    QTYPE_QLIST = 5,
    QTYPE_QFLOAT = 6,
    QTYPE_QBOOL = 7,
    QTYPE__MAX = 8,
} QType;

extern const char *const QType_lookup[];

typedef struct anyList anyList;

struct anyList {
    anyList *next;
    QObject *value;
};

void qapi_free_anyList(anyList *obj);

typedef struct boolList boolList;

struct boolList {
    boolList *next;
    bool value;
};

void qapi_free_boolList(boolList *obj);

typedef struct int16List int16List;

struct int16List {
    int16List *next;
    int16_t value;
};

void qapi_free_int16List(int16List *obj);

typedef struct int32List int32List;

struct int32List {
    int32List *next;
    int32_t value;
};

void qapi_free_int32List(int32List *obj);

typedef struct int64List int64List;

struct int64List {
    int64List *next;
    int64_t value;
};

void qapi_free_int64List(int64List *obj);

typedef struct int8List int8List;

struct int8List {
    int8List *next;
    int8_t value;
};

void qapi_free_int8List(int8List *obj);

typedef struct intList intList;

struct intList {
    intList *next;
    int64_t value;
};

void qapi_free_intList(intList *obj);

typedef struct numberList numberList;

struct numberList {
    numberList *next;
    double value;
};

void qapi_free_numberList(numberList *obj);

typedef struct sizeList sizeList;

struct sizeList {
    sizeList *next;
    uint64_t value;
};

void qapi_free_sizeList(sizeList *obj);

typedef struct strList strList;

struct strList {
    strList *next;
    char *value;
};

void qapi_free_strList(strList *obj);

typedef struct uint16List uint16List;

struct uint16List {
    uint16List *next;
    uint16_t value;
};

void qapi_free_uint16List(uint16List *obj);

typedef struct uint32List uint32List;

struct uint32List {
    uint32List *next;
    uint32_t value;
};

void qapi_free_uint32List(uint32List *obj);

typedef struct uint64List uint64List;

struct uint64List {
    uint64List *next;
    uint64_t value;
};

void qapi_free_uint64List(uint64List *obj);

typedef struct uint8List uint8List;

struct uint8List {
    uint8List *next;
    uint8_t value;
};

void qapi_free_uint8List(uint8List *obj);

#endif /* QAPI_TYPES_BUILTIN */


typedef struct ACPIOSTInfo ACPIOSTInfo;

typedef struct ACPIOSTInfoList ACPIOSTInfoList;

typedef enum ACPISlotType {
    ACPI_SLOT_TYPE_DIMM = 0,
    ACPI_SLOT_TYPE_CPU = 1,
    ACPI_SLOT_TYPE__MAX = 2,
} ACPISlotType;

extern const char *const ACPISlotType_lookup[];

typedef struct Abort Abort;

typedef struct AcpiTableOptions AcpiTableOptions;

typedef enum ActionCompletionMode {
    ACTION_COMPLETION_MODE_INDIVIDUAL = 0,
    ACTION_COMPLETION_MODE_GROUPED = 1,
    ACTION_COMPLETION_MODE__MAX = 2,
} ActionCompletionMode;

extern const char *const ActionCompletionMode_lookup[];

typedef struct AddfdInfo AddfdInfo;

typedef struct BalloonInfo BalloonInfo;

typedef enum BiosAtaTranslation {
    BIOS_ATA_TRANSLATION_AUTO = 0,
    BIOS_ATA_TRANSLATION_NONE = 1,
    BIOS_ATA_TRANSLATION_LBA = 2,
    BIOS_ATA_TRANSLATION_LARGE = 3,
    BIOS_ATA_TRANSLATION_RECHS = 4,
    BIOS_ATA_TRANSLATION__MAX = 5,
} BiosAtaTranslation;

extern const char *const BiosAtaTranslation_lookup[];

typedef enum BlkdebugEvent {
    BLKDBG_L1_UPDATE = 0,
    BLKDBG_L1_GROW_ALLOC_TABLE = 1,
    BLKDBG_L1_GROW_WRITE_TABLE = 2,
    BLKDBG_L1_GROW_ACTIVATE_TABLE = 3,
    BLKDBG_L2_LOAD = 4,
    BLKDBG_L2_UPDATE = 5,
    BLKDBG_L2_UPDATE_COMPRESSED = 6,
    BLKDBG_L2_ALLOC_COW_READ = 7,
    BLKDBG_L2_ALLOC_WRITE = 8,
    BLKDBG_READ_AIO = 9,
    BLKDBG_READ_BACKING_AIO = 10,
    BLKDBG_READ_COMPRESSED = 11,
    BLKDBG_WRITE_AIO = 12,
    BLKDBG_WRITE_COMPRESSED = 13,
    BLKDBG_VMSTATE_LOAD = 14,
    BLKDBG_VMSTATE_SAVE = 15,
    BLKDBG_COW_READ = 16,
    BLKDBG_COW_WRITE = 17,
    BLKDBG_REFTABLE_LOAD = 18,
    BLKDBG_REFTABLE_GROW = 19,
    BLKDBG_REFTABLE_UPDATE = 20,
    BLKDBG_REFBLOCK_LOAD = 21,
    BLKDBG_REFBLOCK_UPDATE = 22,
    BLKDBG_REFBLOCK_UPDATE_PART = 23,
    BLKDBG_REFBLOCK_ALLOC = 24,
    BLKDBG_REFBLOCK_ALLOC_HOOKUP = 25,
    BLKDBG_REFBLOCK_ALLOC_WRITE = 26,
    BLKDBG_REFBLOCK_ALLOC_WRITE_BLOCKS = 27,
    BLKDBG_REFBLOCK_ALLOC_WRITE_TABLE = 28,
    BLKDBG_REFBLOCK_ALLOC_SWITCH_TABLE = 29,
    BLKDBG_CLUSTER_ALLOC = 30,
    BLKDBG_CLUSTER_ALLOC_BYTES = 31,
    BLKDBG_CLUSTER_FREE = 32,
    BLKDBG_FLUSH_TO_OS = 33,
    BLKDBG_FLUSH_TO_DISK = 34,
    BLKDBG_PWRITEV_RMW_HEAD = 35,
    BLKDBG_PWRITEV_RMW_AFTER_HEAD = 36,
    BLKDBG_PWRITEV_RMW_TAIL = 37,
    BLKDBG_PWRITEV_RMW_AFTER_TAIL = 38,
    BLKDBG_PWRITEV = 39,
    BLKDBG_PWRITEV_ZERO = 40,
    BLKDBG_PWRITEV_DONE = 41,
    BLKDBG_EMPTY_IMAGE_PREPARE = 42,
    BLKDBG__MAX = 43,
} BlkdebugEvent;

extern const char *const BlkdebugEvent_lookup[];

typedef struct BlkdebugInjectErrorOptions BlkdebugInjectErrorOptions;

typedef struct BlkdebugInjectErrorOptionsList BlkdebugInjectErrorOptionsList;

typedef struct BlkdebugSetStateOptions BlkdebugSetStateOptions;

typedef struct BlkdebugSetStateOptionsList BlkdebugSetStateOptionsList;

typedef struct BlockDeviceInfo BlockDeviceInfo;

typedef struct BlockDeviceInfoList BlockDeviceInfoList;

typedef enum BlockDeviceIoStatus {
    BLOCK_DEVICE_IO_STATUS_OK = 0,
    BLOCK_DEVICE_IO_STATUS_FAILED = 1,
    BLOCK_DEVICE_IO_STATUS_NOSPACE = 2,
    BLOCK_DEVICE_IO_STATUS__MAX = 3,
} BlockDeviceIoStatus;

extern const char *const BlockDeviceIoStatus_lookup[];

typedef struct BlockDeviceMapEntry BlockDeviceMapEntry;

typedef struct BlockDeviceStats BlockDeviceStats;

typedef struct BlockDeviceTimedStats BlockDeviceTimedStats;

typedef struct BlockDeviceTimedStatsList BlockDeviceTimedStatsList;

typedef struct BlockDirtyBitmap BlockDirtyBitmap;

typedef struct BlockDirtyBitmapAdd BlockDirtyBitmapAdd;

typedef struct BlockDirtyInfo BlockDirtyInfo;

typedef struct BlockDirtyInfoList BlockDirtyInfoList;

typedef enum BlockErrorAction {
    BLOCK_ERROR_ACTION_IGNORE = 0,
    BLOCK_ERROR_ACTION_REPORT = 1,
    BLOCK_ERROR_ACTION_STOP = 2,
    BLOCK_ERROR_ACTION__MAX = 3,
} BlockErrorAction;

extern const char *const BlockErrorAction_lookup[];

typedef struct BlockIOThrottle BlockIOThrottle;

typedef struct BlockInfo BlockInfo;

typedef struct BlockInfoList BlockInfoList;

typedef struct BlockJobInfo BlockJobInfo;

typedef struct BlockJobInfoList BlockJobInfoList;

typedef enum BlockJobType {
    BLOCK_JOB_TYPE_COMMIT = 0,
    BLOCK_JOB_TYPE_STREAM = 1,
    BLOCK_JOB_TYPE_MIRROR = 2,
    BLOCK_JOB_TYPE_BACKUP = 3,
    BLOCK_JOB_TYPE__MAX = 4,
} BlockJobType;

extern const char *const BlockJobType_lookup[];

typedef struct BlockStats BlockStats;

typedef struct BlockStatsList BlockStatsList;

typedef enum BlockdevAioOptions {
    BLOCKDEV_AIO_OPTIONS_THREADS = 0,
    BLOCKDEV_AIO_OPTIONS_NATIVE = 1,
    BLOCKDEV_AIO_OPTIONS__MAX = 2,
} BlockdevAioOptions;

extern const char *const BlockdevAioOptions_lookup[];

typedef struct BlockdevBackup BlockdevBackup;

typedef struct BlockdevCacheInfo BlockdevCacheInfo;

typedef struct BlockdevCacheOptions BlockdevCacheOptions;

typedef enum BlockdevChangeReadOnlyMode {
    BLOCKDEV_CHANGE_READ_ONLY_MODE_RETAIN = 0,
    BLOCKDEV_CHANGE_READ_ONLY_MODE_READ_ONLY = 1,
    BLOCKDEV_CHANGE_READ_ONLY_MODE_READ_WRITE = 2,
    BLOCKDEV_CHANGE_READ_ONLY_MODE__MAX = 3,
} BlockdevChangeReadOnlyMode;

extern const char *const BlockdevChangeReadOnlyMode_lookup[];

typedef enum BlockdevDetectZeroesOptions {
    BLOCKDEV_DETECT_ZEROES_OPTIONS_OFF = 0,
    BLOCKDEV_DETECT_ZEROES_OPTIONS_ON = 1,
    BLOCKDEV_DETECT_ZEROES_OPTIONS_UNMAP = 2,
    BLOCKDEV_DETECT_ZEROES_OPTIONS__MAX = 3,
} BlockdevDetectZeroesOptions;

extern const char *const BlockdevDetectZeroesOptions_lookup[];

typedef enum BlockdevDiscardOptions {
    BLOCKDEV_DISCARD_OPTIONS_IGNORE = 0,
    BLOCKDEV_DISCARD_OPTIONS_UNMAP = 1,
    BLOCKDEV_DISCARD_OPTIONS__MAX = 2,
} BlockdevDiscardOptions;

extern const char *const BlockdevDiscardOptions_lookup[];

typedef enum BlockdevDriver {
    BLOCKDEV_DRIVER_ARCHIPELAGO = 0,
    BLOCKDEV_DRIVER_BLKDEBUG = 1,
    BLOCKDEV_DRIVER_BLKVERIFY = 2,
    BLOCKDEV_DRIVER_BOCHS = 3,
    BLOCKDEV_DRIVER_CLOOP = 4,
    BLOCKDEV_DRIVER_DMG = 5,
    BLOCKDEV_DRIVER_FILE = 6,
    BLOCKDEV_DRIVER_FTP = 7,
    BLOCKDEV_DRIVER_FTPS = 8,
    BLOCKDEV_DRIVER_GLUSTER = 9,
    BLOCKDEV_DRIVER_HOST_CDROM = 10,
    BLOCKDEV_DRIVER_HOST_DEVICE = 11,
    BLOCKDEV_DRIVER_HTTP = 12,
    BLOCKDEV_DRIVER_HTTPS = 13,
    BLOCKDEV_DRIVER_LUKS = 14,
    BLOCKDEV_DRIVER_NBD = 15,
    BLOCKDEV_DRIVER_NFS = 16,
    BLOCKDEV_DRIVER_NULL_AIO = 17,
    BLOCKDEV_DRIVER_NULL_CO = 18,
    BLOCKDEV_DRIVER_PARALLELS = 19,
    BLOCKDEV_DRIVER_QCOW = 20,
    BLOCKDEV_DRIVER_QCOW2 = 21,
    BLOCKDEV_DRIVER_QED = 22,
    BLOCKDEV_DRIVER_QUORUM = 23,
    BLOCKDEV_DRIVER_RAW = 24,
    BLOCKDEV_DRIVER_REPLICATION = 25,
    BLOCKDEV_DRIVER_SSH = 26,
    BLOCKDEV_DRIVER_VDI = 27,
    BLOCKDEV_DRIVER_VHDX = 28,
    BLOCKDEV_DRIVER_VMDK = 29,
    BLOCKDEV_DRIVER_VPC = 30,
    BLOCKDEV_DRIVER_VVFAT = 31,
    BLOCKDEV_DRIVER__MAX = 32,
} BlockdevDriver;

extern const char *const BlockdevDriver_lookup[];

typedef enum BlockdevOnError {
    BLOCKDEV_ON_ERROR_REPORT = 0,
    BLOCKDEV_ON_ERROR_IGNORE = 1,
    BLOCKDEV_ON_ERROR_ENOSPC = 2,
    BLOCKDEV_ON_ERROR_STOP = 3,
    BLOCKDEV_ON_ERROR_AUTO = 4,
    BLOCKDEV_ON_ERROR__MAX = 5,
} BlockdevOnError;

extern const char *const BlockdevOnError_lookup[];

typedef struct BlockdevOptions BlockdevOptions;

typedef struct BlockdevOptionsArchipelago BlockdevOptionsArchipelago;

typedef struct BlockdevOptionsBlkdebug BlockdevOptionsBlkdebug;

typedef struct BlockdevOptionsBlkverify BlockdevOptionsBlkverify;

typedef struct BlockdevOptionsCurl BlockdevOptionsCurl;

typedef struct BlockdevOptionsFile BlockdevOptionsFile;

typedef struct BlockdevOptionsGenericCOWFormat BlockdevOptionsGenericCOWFormat;

typedef struct BlockdevOptionsGenericFormat BlockdevOptionsGenericFormat;

typedef struct BlockdevOptionsGluster BlockdevOptionsGluster;

typedef struct BlockdevOptionsLUKS BlockdevOptionsLUKS;

typedef struct BlockdevOptionsNbd BlockdevOptionsNbd;

typedef struct BlockdevOptionsNfs BlockdevOptionsNfs;

typedef struct BlockdevOptionsNull BlockdevOptionsNull;

typedef struct BlockdevOptionsQcow2 BlockdevOptionsQcow2;

typedef struct BlockdevOptionsQuorum BlockdevOptionsQuorum;

typedef struct BlockdevOptionsRaw BlockdevOptionsRaw;

typedef struct BlockdevOptionsReplication BlockdevOptionsReplication;

typedef struct BlockdevOptionsSsh BlockdevOptionsSsh;

typedef struct BlockdevOptionsVVFAT BlockdevOptionsVVFAT;

typedef struct BlockdevRef BlockdevRef;

typedef struct BlockdevRefList BlockdevRefList;

typedef struct BlockdevSnapshot BlockdevSnapshot;

typedef struct BlockdevSnapshotInternal BlockdevSnapshotInternal;

typedef struct BlockdevSnapshotSync BlockdevSnapshotSync;

typedef enum COLOMessage {
    COLO_MESSAGE_CHECKPOINT_READY = 0,
    COLO_MESSAGE_CHECKPOINT_REQUEST = 1,
    COLO_MESSAGE_CHECKPOINT_REPLY = 2,
    COLO_MESSAGE_VMSTATE_SEND = 3,
    COLO_MESSAGE_VMSTATE_SIZE = 4,
    COLO_MESSAGE_VMSTATE_RECEIVED = 5,
    COLO_MESSAGE_VMSTATE_LOADED = 6,
    COLO_MESSAGE__MAX = 7,
} COLOMessage;

extern const char *const COLOMessage_lookup[];

typedef enum COLOMode {
    COLO_MODE_UNKNOWN = 0,
    COLO_MODE_PRIMARY = 1,
    COLO_MODE_SECONDARY = 2,
    COLO_MODE__MAX = 3,
} COLOMode;

extern const char *const COLOMode_lookup[];

typedef struct ChardevBackend ChardevBackend;

typedef struct ChardevBackendInfo ChardevBackendInfo;

typedef struct ChardevBackendInfoList ChardevBackendInfoList;

typedef enum ChardevBackendKind {
    CHARDEV_BACKEND_KIND_FILE = 0,
    CHARDEV_BACKEND_KIND_SERIAL = 1,
    CHARDEV_BACKEND_KIND_PARALLEL = 2,
    CHARDEV_BACKEND_KIND_PIPE = 3,
    CHARDEV_BACKEND_KIND_SOCKET = 4,
    CHARDEV_BACKEND_KIND_UDP = 5,
    CHARDEV_BACKEND_KIND_PTY = 6,
    CHARDEV_BACKEND_KIND_NULL = 7,
    CHARDEV_BACKEND_KIND_MUX = 8,
    CHARDEV_BACKEND_KIND_MSMOUSE = 9,
    CHARDEV_BACKEND_KIND_BRAILLE = 10,
    CHARDEV_BACKEND_KIND_TESTDEV = 11,
    CHARDEV_BACKEND_KIND_STDIO = 12,
    CHARDEV_BACKEND_KIND_CONSOLE = 13,
    CHARDEV_BACKEND_KIND_SPICEVMC = 14,
    CHARDEV_BACKEND_KIND_SPICEPORT = 15,
    CHARDEV_BACKEND_KIND_VC = 16,
    CHARDEV_BACKEND_KIND_RINGBUF = 17,
    CHARDEV_BACKEND_KIND_MEMORY = 18,
    CHARDEV_BACKEND_KIND__MAX = 19,
} ChardevBackendKind;

extern const char *const ChardevBackendKind_lookup[];

typedef struct ChardevCommon ChardevCommon;

typedef struct ChardevFile ChardevFile;

typedef struct ChardevHostdev ChardevHostdev;

typedef struct ChardevInfo ChardevInfo;

typedef struct ChardevInfoList ChardevInfoList;

typedef struct ChardevMux ChardevMux;

typedef struct ChardevReturn ChardevReturn;

typedef struct ChardevRingbuf ChardevRingbuf;

typedef struct ChardevSocket ChardevSocket;

typedef struct ChardevSpiceChannel ChardevSpiceChannel;

typedef struct ChardevSpicePort ChardevSpicePort;

typedef struct ChardevStdio ChardevStdio;

typedef struct ChardevUdp ChardevUdp;

typedef struct ChardevVC ChardevVC;

typedef struct CommandInfo CommandInfo;

typedef struct CommandInfoList CommandInfoList;

typedef struct CommandLineOptionInfo CommandLineOptionInfo;

typedef struct CommandLineOptionInfoList CommandLineOptionInfoList;

typedef struct CommandLineParameterInfo CommandLineParameterInfo;

typedef struct CommandLineParameterInfoList CommandLineParameterInfoList;

typedef enum CommandLineParameterType {
    COMMAND_LINE_PARAMETER_TYPE_STRING = 0,
    COMMAND_LINE_PARAMETER_TYPE_BOOLEAN = 1,
    COMMAND_LINE_PARAMETER_TYPE_NUMBER = 2,
    COMMAND_LINE_PARAMETER_TYPE_SIZE = 3,
    COMMAND_LINE_PARAMETER_TYPE__MAX = 4,
} CommandLineParameterType;

extern const char *const CommandLineParameterType_lookup[];

typedef struct CpuDefinitionInfo CpuDefinitionInfo;

typedef struct CpuDefinitionInfoList CpuDefinitionInfoList;

typedef struct CpuInfo CpuInfo;

typedef enum CpuInfoArch {
    CPU_INFO_ARCH_X86 = 0,
    CPU_INFO_ARCH_SPARC = 1,
    CPU_INFO_ARCH_PPC = 2,
    CPU_INFO_ARCH_MIPS = 3,
    CPU_INFO_ARCH_TRICORE = 4,
    CPU_INFO_ARCH_OTHER = 5,
    CPU_INFO_ARCH__MAX = 6,
} CpuInfoArch;

extern const char *const CpuInfoArch_lookup[];

typedef struct CpuInfoList CpuInfoList;

typedef struct CpuInfoMIPS CpuInfoMIPS;

typedef struct CpuInfoOther CpuInfoOther;

typedef struct CpuInfoPPC CpuInfoPPC;

typedef struct CpuInfoSPARC CpuInfoSPARC;

typedef struct CpuInfoTricore CpuInfoTricore;

typedef struct CpuInfoX86 CpuInfoX86;

typedef struct CpuInstanceProperties CpuInstanceProperties;

typedef struct CpuModelBaselineInfo CpuModelBaselineInfo;

typedef struct CpuModelCompareInfo CpuModelCompareInfo;

typedef enum CpuModelCompareResult {
    CPU_MODEL_COMPARE_RESULT_INCOMPATIBLE = 0,
    CPU_MODEL_COMPARE_RESULT_IDENTICAL = 1,
    CPU_MODEL_COMPARE_RESULT_SUPERSET = 2,
    CPU_MODEL_COMPARE_RESULT_SUBSET = 3,
    CPU_MODEL_COMPARE_RESULT__MAX = 4,
} CpuModelCompareResult;

extern const char *const CpuModelCompareResult_lookup[];

typedef struct CpuModelExpansionInfo CpuModelExpansionInfo;

typedef enum CpuModelExpansionType {
    CPU_MODEL_EXPANSION_TYPE_STATIC = 0,
    CPU_MODEL_EXPANSION_TYPE_FULL = 1,
    CPU_MODEL_EXPANSION_TYPE__MAX = 2,
} CpuModelExpansionType;

extern const char *const CpuModelExpansionType_lookup[];

typedef struct CpuModelInfo CpuModelInfo;

typedef enum DataFormat {
    DATA_FORMAT_UTF8 = 0,
    DATA_FORMAT_BASE64 = 1,
    DATA_FORMAT__MAX = 2,
} DataFormat;

extern const char *const DataFormat_lookup[];

typedef struct DevicePropertyInfo DevicePropertyInfo;

typedef struct DevicePropertyInfoList DevicePropertyInfoList;

typedef enum DirtyBitmapStatus {
    DIRTY_BITMAP_STATUS_ACTIVE = 0,
    DIRTY_BITMAP_STATUS_DISABLED = 1,
    DIRTY_BITMAP_STATUS_FROZEN = 2,
    DIRTY_BITMAP_STATUS__MAX = 3,
} DirtyBitmapStatus;

extern const char *const DirtyBitmapStatus_lookup[];

typedef struct DriveBackup DriveBackup;

typedef struct DriveMirror DriveMirror;

typedef struct DummyForceArrays DummyForceArrays;

typedef struct DumpGuestMemoryCapability DumpGuestMemoryCapability;

typedef enum DumpGuestMemoryFormat {
    DUMP_GUEST_MEMORY_FORMAT_ELF = 0,
    DUMP_GUEST_MEMORY_FORMAT_KDUMP_ZLIB = 1,
    DUMP_GUEST_MEMORY_FORMAT_KDUMP_LZO = 2,
    DUMP_GUEST_MEMORY_FORMAT_KDUMP_SNAPPY = 3,
    DUMP_GUEST_MEMORY_FORMAT__MAX = 4,
} DumpGuestMemoryFormat;

extern const char *const DumpGuestMemoryFormat_lookup[];

typedef struct DumpGuestMemoryFormatList DumpGuestMemoryFormatList;

typedef struct DumpQueryResult DumpQueryResult;

typedef enum DumpStatus {
    DUMP_STATUS_NONE = 0,
    DUMP_STATUS_ACTIVE = 1,
    DUMP_STATUS_COMPLETED = 2,
    DUMP_STATUS_FAILED = 3,
    DUMP_STATUS__MAX = 4,
} DumpStatus;

extern const char *const DumpStatus_lookup[];

typedef struct EventInfo EventInfo;

typedef struct EventInfoList EventInfoList;

typedef enum FailoverStatus {
    FAILOVER_STATUS_NONE = 0,
    FAILOVER_STATUS_REQUIRE = 1,
    FAILOVER_STATUS_ACTIVE = 2,
    FAILOVER_STATUS_COMPLETED = 3,
    FAILOVER_STATUS__MAX = 4,
} FailoverStatus;

extern const char *const FailoverStatus_lookup[];

typedef struct FdsetFdInfo FdsetFdInfo;

typedef struct FdsetFdInfoList FdsetFdInfoList;

typedef struct FdsetInfo FdsetInfo;

typedef struct FdsetInfoList FdsetInfoList;

typedef enum FloppyDriveType {
    FLOPPY_DRIVE_TYPE_144 = 0,
    FLOPPY_DRIVE_TYPE_288 = 1,
    FLOPPY_DRIVE_TYPE_120 = 2,
    FLOPPY_DRIVE_TYPE_NONE = 3,
    FLOPPY_DRIVE_TYPE_AUTO = 4,
    FLOPPY_DRIVE_TYPE__MAX = 5,
} FloppyDriveType;

extern const char *const FloppyDriveType_lookup[];

typedef struct GICCapability GICCapability;

typedef struct GICCapabilityList GICCapabilityList;

typedef struct GlusterServer GlusterServer;

typedef struct GlusterServerList GlusterServerList;

typedef enum GlusterTransport {
    GLUSTER_TRANSPORT_UNIX = 0,
    GLUSTER_TRANSPORT_TCP = 1,
    GLUSTER_TRANSPORT__MAX = 2,
} GlusterTransport;

extern const char *const GlusterTransport_lookup[];

typedef enum GuestPanicAction {
    GUEST_PANIC_ACTION_PAUSE = 0,
    GUEST_PANIC_ACTION_POWEROFF = 1,
    GUEST_PANIC_ACTION__MAX = 2,
} GuestPanicAction;

extern const char *const GuestPanicAction_lookup[];

typedef enum HostMemPolicy {
    HOST_MEM_POLICY_DEFAULT = 0,
    HOST_MEM_POLICY_PREFERRED = 1,
    HOST_MEM_POLICY_BIND = 2,
    HOST_MEM_POLICY_INTERLEAVE = 3,
    HOST_MEM_POLICY__MAX = 4,
} HostMemPolicy;

extern const char *const HostMemPolicy_lookup[];

typedef struct HotpluggableCPU HotpluggableCPU;

typedef struct HotpluggableCPUList HotpluggableCPUList;

typedef struct IOThreadInfo IOThreadInfo;

typedef struct IOThreadInfoList IOThreadInfoList;

typedef struct ImageCheck ImageCheck;

typedef struct ImageInfo ImageInfo;

typedef struct ImageInfoList ImageInfoList;

typedef struct ImageInfoSpecific ImageInfoSpecific;

typedef enum ImageInfoSpecificKind {
    IMAGE_INFO_SPECIFIC_KIND_QCOW2 = 0,
    IMAGE_INFO_SPECIFIC_KIND_VMDK = 1,
    IMAGE_INFO_SPECIFIC_KIND_LUKS = 2,
    IMAGE_INFO_SPECIFIC_KIND__MAX = 3,
} ImageInfoSpecificKind;

extern const char *const ImageInfoSpecificKind_lookup[];

typedef struct ImageInfoSpecificQCow2 ImageInfoSpecificQCow2;

typedef struct ImageInfoSpecificVmdk ImageInfoSpecificVmdk;

typedef struct InetSocketAddress InetSocketAddress;

typedef enum InputAxis {
    INPUT_AXIS_X = 0,
    INPUT_AXIS_Y = 1,
    INPUT_AXIS__MAX = 2,
} InputAxis;

extern const char *const InputAxis_lookup[];

typedef struct InputBtnEvent InputBtnEvent;

typedef enum InputButton {
    INPUT_BUTTON_LEFT = 0,
    INPUT_BUTTON_MIDDLE = 1,
    INPUT_BUTTON_RIGHT = 2,
    INPUT_BUTTON_WHEEL_UP = 3,
    INPUT_BUTTON_WHEEL_DOWN = 4,
    INPUT_BUTTON__MAX = 5,
} InputButton;

extern const char *const InputButton_lookup[];

typedef struct InputEvent InputEvent;

typedef enum InputEventKind {
    INPUT_EVENT_KIND_KEY = 0,
    INPUT_EVENT_KIND_BTN = 1,
    INPUT_EVENT_KIND_REL = 2,
    INPUT_EVENT_KIND_ABS = 3,
    INPUT_EVENT_KIND__MAX = 4,
} InputEventKind;

extern const char *const InputEventKind_lookup[];

typedef struct InputEventList InputEventList;

typedef struct InputKeyEvent InputKeyEvent;

typedef struct InputMoveEvent InputMoveEvent;

typedef enum IoOperationType {
    IO_OPERATION_TYPE_READ = 0,
    IO_OPERATION_TYPE_WRITE = 1,
    IO_OPERATION_TYPE__MAX = 2,
} IoOperationType;

extern const char *const IoOperationType_lookup[];

typedef enum JSONType {
    JSON_TYPE_STRING = 0,
    JSON_TYPE_NUMBER = 1,
    JSON_TYPE_INT = 2,
    JSON_TYPE_BOOLEAN = 3,
    JSON_TYPE_NULL = 4,
    JSON_TYPE_OBJECT = 5,
    JSON_TYPE_ARRAY = 6,
    JSON_TYPE_VALUE = 7,
    JSON_TYPE__MAX = 8,
} JSONType;

extern const char *const JSONType_lookup[];

typedef struct KeyValue KeyValue;

typedef enum KeyValueKind {
    KEY_VALUE_KIND_NUMBER = 0,
    KEY_VALUE_KIND_QCODE = 1,
    KEY_VALUE_KIND__MAX = 2,
} KeyValueKind;

extern const char *const KeyValueKind_lookup[];

typedef struct KeyValueList KeyValueList;

typedef struct KvmInfo KvmInfo;

typedef enum LostTickPolicy {
    LOST_TICK_POLICY_DISCARD = 0,
    LOST_TICK_POLICY_DELAY = 1,
    LOST_TICK_POLICY_MERGE = 2,
    LOST_TICK_POLICY_SLEW = 3,
    LOST_TICK_POLICY__MAX = 4,
} LostTickPolicy;

extern const char *const LostTickPolicy_lookup[];

typedef struct MachineInfo MachineInfo;

typedef struct MachineInfoList MachineInfoList;

typedef struct MapEntry MapEntry;

typedef struct Memdev Memdev;

typedef struct MemdevList MemdevList;

typedef struct MemoryDeviceInfo MemoryDeviceInfo;

typedef enum MemoryDeviceInfoKind {
    MEMORY_DEVICE_INFO_KIND_DIMM = 0,
    MEMORY_DEVICE_INFO_KIND__MAX = 1,
} MemoryDeviceInfoKind;

extern const char *const MemoryDeviceInfoKind_lookup[];

typedef struct MemoryDeviceInfoList MemoryDeviceInfoList;

typedef enum MigrationCapability {
    MIGRATION_CAPABILITY_XBZRLE = 0,
    MIGRATION_CAPABILITY_RDMA_PIN_ALL = 1,
    MIGRATION_CAPABILITY_AUTO_CONVERGE = 2,
    MIGRATION_CAPABILITY_ZERO_BLOCKS = 3,
    MIGRATION_CAPABILITY_COMPRESS = 4,
    MIGRATION_CAPABILITY_EVENTS = 5,
    MIGRATION_CAPABILITY_POSTCOPY_RAM = 6,
    MIGRATION_CAPABILITY_X_COLO = 7,
    MIGRATION_CAPABILITY__MAX = 8,
} MigrationCapability;

extern const char *const MigrationCapability_lookup[];

typedef struct MigrationCapabilityStatus MigrationCapabilityStatus;

typedef struct MigrationCapabilityStatusList MigrationCapabilityStatusList;

typedef struct MigrationInfo MigrationInfo;

typedef enum MigrationParameter {
    MIGRATION_PARAMETER_COMPRESS_LEVEL = 0,
    MIGRATION_PARAMETER_COMPRESS_THREADS = 1,
    MIGRATION_PARAMETER_DECOMPRESS_THREADS = 2,
    MIGRATION_PARAMETER_CPU_THROTTLE_INITIAL = 3,
    MIGRATION_PARAMETER_CPU_THROTTLE_INCREMENT = 4,
    MIGRATION_PARAMETER_TLS_CREDS = 5,
    MIGRATION_PARAMETER_TLS_HOSTNAME = 6,
    MIGRATION_PARAMETER_MAX_BANDWIDTH = 7,
    MIGRATION_PARAMETER_DOWNTIME_LIMIT = 8,
    MIGRATION_PARAMETER_X_CHECKPOINT_DELAY = 9,
    MIGRATION_PARAMETER__MAX = 10,
} MigrationParameter;

extern const char *const MigrationParameter_lookup[];

typedef struct MigrationParameters MigrationParameters;

typedef struct MigrationStats MigrationStats;

typedef enum MigrationStatus {
    MIGRATION_STATUS_NONE = 0,
    MIGRATION_STATUS_SETUP = 1,
    MIGRATION_STATUS_CANCELLING = 2,
    MIGRATION_STATUS_CANCELLED = 3,
    MIGRATION_STATUS_ACTIVE = 4,
    MIGRATION_STATUS_POSTCOPY_ACTIVE = 5,
    MIGRATION_STATUS_COMPLETED = 6,
    MIGRATION_STATUS_FAILED = 7,
    MIGRATION_STATUS_COLO = 8,
    MIGRATION_STATUS__MAX = 9,
} MigrationStatus;

extern const char *const MigrationStatus_lookup[];

typedef enum MirrorSyncMode {
    MIRROR_SYNC_MODE_TOP = 0,
    MIRROR_SYNC_MODE_FULL = 1,
    MIRROR_SYNC_MODE_NONE = 2,
    MIRROR_SYNC_MODE_INCREMENTAL = 3,
    MIRROR_SYNC_MODE__MAX = 4,
} MirrorSyncMode;

extern const char *const MirrorSyncMode_lookup[];

typedef struct MouseInfo MouseInfo;

typedef struct MouseInfoList MouseInfoList;

typedef struct NFSServer NFSServer;

typedef enum NFSTransport {
    NFS_TRANSPORT_INET = 0,
    NFS_TRANSPORT__MAX = 1,
} NFSTransport;

extern const char *const NFSTransport_lookup[];

typedef struct NameInfo NameInfo;

typedef enum NetClientDriver {
    NET_CLIENT_DRIVER_NONE = 0,
    NET_CLIENT_DRIVER_NIC = 1,
    NET_CLIENT_DRIVER_USER = 2,
    NET_CLIENT_DRIVER_TAP = 3,
    NET_CLIENT_DRIVER_L2TPV3 = 4,
    NET_CLIENT_DRIVER_SOCKET = 5,
    NET_CLIENT_DRIVER_VDE = 6,
    NET_CLIENT_DRIVER_DUMP = 7,
    NET_CLIENT_DRIVER_BRIDGE = 8,
    NET_CLIENT_DRIVER_HUBPORT = 9,
    NET_CLIENT_DRIVER_NETMAP = 10,
    NET_CLIENT_DRIVER_VHOST_USER = 11,
    NET_CLIENT_DRIVER__MAX = 12,
} NetClientDriver;

extern const char *const NetClientDriver_lookup[];

typedef enum NetFilterDirection {
    NET_FILTER_DIRECTION_ALL = 0,
    NET_FILTER_DIRECTION_RX = 1,
    NET_FILTER_DIRECTION_TX = 2,
    NET_FILTER_DIRECTION__MAX = 3,
} NetFilterDirection;

extern const char *const NetFilterDirection_lookup[];

typedef struct NetLegacy NetLegacy;

typedef struct NetLegacyNicOptions NetLegacyNicOptions;

typedef struct NetLegacyOptions NetLegacyOptions;

typedef enum NetLegacyOptionsKind {
    NET_LEGACY_OPTIONS_KIND_NONE = 0,
    NET_LEGACY_OPTIONS_KIND_NIC = 1,
    NET_LEGACY_OPTIONS_KIND_USER = 2,
    NET_LEGACY_OPTIONS_KIND_TAP = 3,
    NET_LEGACY_OPTIONS_KIND_L2TPV3 = 4,
    NET_LEGACY_OPTIONS_KIND_SOCKET = 5,
    NET_LEGACY_OPTIONS_KIND_VDE = 6,
    NET_LEGACY_OPTIONS_KIND_DUMP = 7,
    NET_LEGACY_OPTIONS_KIND_BRIDGE = 8,
    NET_LEGACY_OPTIONS_KIND_NETMAP = 9,
    NET_LEGACY_OPTIONS_KIND_VHOST_USER = 10,
    NET_LEGACY_OPTIONS_KIND__MAX = 11,
} NetLegacyOptionsKind;

extern const char *const NetLegacyOptionsKind_lookup[];

typedef struct Netdev Netdev;

typedef struct NetdevBridgeOptions NetdevBridgeOptions;

typedef struct NetdevDumpOptions NetdevDumpOptions;

typedef struct NetdevHubPortOptions NetdevHubPortOptions;

typedef struct NetdevL2TPv3Options NetdevL2TPv3Options;

typedef struct NetdevNetmapOptions NetdevNetmapOptions;

typedef struct NetdevNoneOptions NetdevNoneOptions;

typedef struct NetdevSocketOptions NetdevSocketOptions;

typedef struct NetdevTapOptions NetdevTapOptions;

typedef struct NetdevUserOptions NetdevUserOptions;

typedef struct NetdevVdeOptions NetdevVdeOptions;

typedef struct NetdevVhostUserOptions NetdevVhostUserOptions;

typedef enum NetworkAddressFamily {
    NETWORK_ADDRESS_FAMILY_IPV4 = 0,
    NETWORK_ADDRESS_FAMILY_IPV6 = 1,
    NETWORK_ADDRESS_FAMILY_UNIX = 2,
    NETWORK_ADDRESS_FAMILY_VSOCK = 3,
    NETWORK_ADDRESS_FAMILY_UNKNOWN = 4,
    NETWORK_ADDRESS_FAMILY__MAX = 5,
} NetworkAddressFamily;

extern const char *const NetworkAddressFamily_lookup[];

typedef enum NewImageMode {
    NEW_IMAGE_MODE_EXISTING = 0,
    NEW_IMAGE_MODE_ABSOLUTE_PATHS = 1,
    NEW_IMAGE_MODE__MAX = 2,
} NewImageMode;

extern const char *const NewImageMode_lookup[];

typedef struct NumaNodeOptions NumaNodeOptions;

typedef struct NumaOptions NumaOptions;

typedef enum NumaOptionsKind {
    NUMA_OPTIONS_KIND_NODE = 0,
    NUMA_OPTIONS_KIND__MAX = 1,
} NumaOptionsKind;

extern const char *const NumaOptionsKind_lookup[];

typedef struct ObjectPropertyInfo ObjectPropertyInfo;

typedef struct ObjectPropertyInfoList ObjectPropertyInfoList;

typedef struct ObjectTypeInfo ObjectTypeInfo;

typedef struct ObjectTypeInfoList ObjectTypeInfoList;

typedef enum OnOffAuto {
    ON_OFF_AUTO_AUTO = 0,
    ON_OFF_AUTO_ON = 1,
    ON_OFF_AUTO_OFF = 2,
    ON_OFF_AUTO__MAX = 3,
} OnOffAuto;

extern const char *const OnOffAuto_lookup[];

typedef enum OnOffSplit {
    ON_OFF_SPLIT_ON = 0,
    ON_OFF_SPLIT_OFF = 1,
    ON_OFF_SPLIT_SPLIT = 2,
    ON_OFF_SPLIT__MAX = 3,
} OnOffSplit;

extern const char *const OnOffSplit_lookup[];

typedef struct PCDIMMDeviceInfo PCDIMMDeviceInfo;

typedef struct PciBridgeInfo PciBridgeInfo;

typedef struct PciBusInfo PciBusInfo;

typedef struct PciDeviceClass PciDeviceClass;

typedef struct PciDeviceId PciDeviceId;

typedef struct PciDeviceInfo PciDeviceInfo;

typedef struct PciDeviceInfoList PciDeviceInfoList;

typedef struct PciInfo PciInfo;

typedef struct PciInfoList PciInfoList;

typedef struct PciMemoryRange PciMemoryRange;

typedef struct PciMemoryRegion PciMemoryRegion;

typedef struct PciMemoryRegionList PciMemoryRegionList;

typedef enum PreallocMode {
    PREALLOC_MODE_OFF = 0,
    PREALLOC_MODE_METADATA = 1,
    PREALLOC_MODE_FALLOC = 2,
    PREALLOC_MODE_FULL = 3,
    PREALLOC_MODE__MAX = 4,
} PreallocMode;

extern const char *const PreallocMode_lookup[];

typedef struct QCryptoBlockCreateOptions QCryptoBlockCreateOptions;

typedef struct QCryptoBlockCreateOptionsLUKS QCryptoBlockCreateOptionsLUKS;

typedef enum QCryptoBlockFormat {
    Q_CRYPTO_BLOCK_FORMAT_QCOW = 0,
    Q_CRYPTO_BLOCK_FORMAT_LUKS = 1,
    Q_CRYPTO_BLOCK_FORMAT__MAX = 2,
} QCryptoBlockFormat;

extern const char *const QCryptoBlockFormat_lookup[];

typedef struct QCryptoBlockInfo QCryptoBlockInfo;

typedef struct QCryptoBlockInfoBase QCryptoBlockInfoBase;

typedef struct QCryptoBlockInfoLUKS QCryptoBlockInfoLUKS;

typedef struct QCryptoBlockInfoLUKSSlot QCryptoBlockInfoLUKSSlot;

typedef struct QCryptoBlockInfoLUKSSlotList QCryptoBlockInfoLUKSSlotList;

typedef struct QCryptoBlockInfoQCow QCryptoBlockInfoQCow;

typedef struct QCryptoBlockOpenOptions QCryptoBlockOpenOptions;

typedef struct QCryptoBlockOptionsBase QCryptoBlockOptionsBase;

typedef struct QCryptoBlockOptionsLUKS QCryptoBlockOptionsLUKS;

typedef struct QCryptoBlockOptionsQCow QCryptoBlockOptionsQCow;

typedef enum QCryptoCipherAlgorithm {
    QCRYPTO_CIPHER_ALG_AES_128 = 0,
    QCRYPTO_CIPHER_ALG_AES_192 = 1,
    QCRYPTO_CIPHER_ALG_AES_256 = 2,
    QCRYPTO_CIPHER_ALG_DES_RFB = 3,
    QCRYPTO_CIPHER_ALG_CAST5_128 = 4,
    QCRYPTO_CIPHER_ALG_SERPENT_128 = 5,
    QCRYPTO_CIPHER_ALG_SERPENT_192 = 6,
    QCRYPTO_CIPHER_ALG_SERPENT_256 = 7,
    QCRYPTO_CIPHER_ALG_TWOFISH_128 = 8,
    QCRYPTO_CIPHER_ALG_TWOFISH_192 = 9,
    QCRYPTO_CIPHER_ALG_TWOFISH_256 = 10,
    QCRYPTO_CIPHER_ALG__MAX = 11,
} QCryptoCipherAlgorithm;

extern const char *const QCryptoCipherAlgorithm_lookup[];

typedef enum QCryptoCipherMode {
    QCRYPTO_CIPHER_MODE_ECB = 0,
    QCRYPTO_CIPHER_MODE_CBC = 1,
    QCRYPTO_CIPHER_MODE_XTS = 2,
    QCRYPTO_CIPHER_MODE_CTR = 3,
    QCRYPTO_CIPHER_MODE__MAX = 4,
} QCryptoCipherMode;

extern const char *const QCryptoCipherMode_lookup[];

typedef enum QCryptoHashAlgorithm {
    QCRYPTO_HASH_ALG_MD5 = 0,
    QCRYPTO_HASH_ALG_SHA1 = 1,
    QCRYPTO_HASH_ALG_SHA224 = 2,
    QCRYPTO_HASH_ALG_SHA256 = 3,
    QCRYPTO_HASH_ALG_SHA384 = 4,
    QCRYPTO_HASH_ALG_SHA512 = 5,
    QCRYPTO_HASH_ALG_RIPEMD160 = 6,
    QCRYPTO_HASH_ALG__MAX = 7,
} QCryptoHashAlgorithm;

extern const char *const QCryptoHashAlgorithm_lookup[];

typedef enum QCryptoIVGenAlgorithm {
    QCRYPTO_IVGEN_ALG_PLAIN = 0,
    QCRYPTO_IVGEN_ALG_PLAIN64 = 1,
    QCRYPTO_IVGEN_ALG_ESSIV = 2,
    QCRYPTO_IVGEN_ALG__MAX = 3,
} QCryptoIVGenAlgorithm;

extern const char *const QCryptoIVGenAlgorithm_lookup[];

typedef enum QCryptoSecretFormat {
    QCRYPTO_SECRET_FORMAT_RAW = 0,
    QCRYPTO_SECRET_FORMAT_BASE64 = 1,
    QCRYPTO_SECRET_FORMAT__MAX = 2,
} QCryptoSecretFormat;

extern const char *const QCryptoSecretFormat_lookup[];

typedef enum QCryptoTLSCredsEndpoint {
    QCRYPTO_TLS_CREDS_ENDPOINT_CLIENT = 0,
    QCRYPTO_TLS_CREDS_ENDPOINT_SERVER = 1,
    QCRYPTO_TLS_CREDS_ENDPOINT__MAX = 2,
} QCryptoTLSCredsEndpoint;

extern const char *const QCryptoTLSCredsEndpoint_lookup[];

typedef enum QKeyCode {
    Q_KEY_CODE_UNMAPPED = 0,
    Q_KEY_CODE_SHIFT = 1,
    Q_KEY_CODE_SHIFT_R = 2,
    Q_KEY_CODE_ALT = 3,
    Q_KEY_CODE_ALT_R = 4,
    Q_KEY_CODE_ALTGR = 5,
    Q_KEY_CODE_ALTGR_R = 6,
    Q_KEY_CODE_CTRL = 7,
    Q_KEY_CODE_CTRL_R = 8,
    Q_KEY_CODE_MENU = 9,
    Q_KEY_CODE_ESC = 10,
    Q_KEY_CODE_1 = 11,
    Q_KEY_CODE_2 = 12,
    Q_KEY_CODE_3 = 13,
    Q_KEY_CODE_4 = 14,
    Q_KEY_CODE_5 = 15,
    Q_KEY_CODE_6 = 16,
    Q_KEY_CODE_7 = 17,
    Q_KEY_CODE_8 = 18,
    Q_KEY_CODE_9 = 19,
    Q_KEY_CODE_0 = 20,
    Q_KEY_CODE_MINUS = 21,
    Q_KEY_CODE_EQUAL = 22,
    Q_KEY_CODE_BACKSPACE = 23,
    Q_KEY_CODE_TAB = 24,
    Q_KEY_CODE_Q = 25,
    Q_KEY_CODE_W = 26,
    Q_KEY_CODE_E = 27,
    Q_KEY_CODE_R = 28,
    Q_KEY_CODE_T = 29,
    Q_KEY_CODE_Y = 30,
    Q_KEY_CODE_U = 31,
    Q_KEY_CODE_I = 32,
    Q_KEY_CODE_O = 33,
    Q_KEY_CODE_P = 34,
    Q_KEY_CODE_BRACKET_LEFT = 35,
    Q_KEY_CODE_BRACKET_RIGHT = 36,
    Q_KEY_CODE_RET = 37,
    Q_KEY_CODE_A = 38,
    Q_KEY_CODE_S = 39,
    Q_KEY_CODE_D = 40,
    Q_KEY_CODE_F = 41,
    Q_KEY_CODE_G = 42,
    Q_KEY_CODE_H = 43,
    Q_KEY_CODE_J = 44,
    Q_KEY_CODE_K = 45,
    Q_KEY_CODE_L = 46,
    Q_KEY_CODE_SEMICOLON = 47,
    Q_KEY_CODE_APOSTROPHE = 48,
    Q_KEY_CODE_GRAVE_ACCENT = 49,
    Q_KEY_CODE_BACKSLASH = 50,
    Q_KEY_CODE_Z = 51,
    Q_KEY_CODE_X = 52,
    Q_KEY_CODE_C = 53,
    Q_KEY_CODE_V = 54,
    Q_KEY_CODE_B = 55,
    Q_KEY_CODE_N = 56,
    Q_KEY_CODE_M = 57,
    Q_KEY_CODE_COMMA = 58,
    Q_KEY_CODE_DOT = 59,
    Q_KEY_CODE_SLASH = 60,
    Q_KEY_CODE_ASTERISK = 61,
    Q_KEY_CODE_SPC = 62,
    Q_KEY_CODE_CAPS_LOCK = 63,
    Q_KEY_CODE_F1 = 64,
    Q_KEY_CODE_F2 = 65,
    Q_KEY_CODE_F3 = 66,
    Q_KEY_CODE_F4 = 67,
    Q_KEY_CODE_F5 = 68,
    Q_KEY_CODE_F6 = 69,
    Q_KEY_CODE_F7 = 70,
    Q_KEY_CODE_F8 = 71,
    Q_KEY_CODE_F9 = 72,
    Q_KEY_CODE_F10 = 73,
    Q_KEY_CODE_NUM_LOCK = 74,
    Q_KEY_CODE_SCROLL_LOCK = 75,
    Q_KEY_CODE_KP_DIVIDE = 76,
    Q_KEY_CODE_KP_MULTIPLY = 77,
    Q_KEY_CODE_KP_SUBTRACT = 78,
    Q_KEY_CODE_KP_ADD = 79,
    Q_KEY_CODE_KP_ENTER = 80,
    Q_KEY_CODE_KP_DECIMAL = 81,
    Q_KEY_CODE_SYSRQ = 82,
    Q_KEY_CODE_KP_0 = 83,
    Q_KEY_CODE_KP_1 = 84,
    Q_KEY_CODE_KP_2 = 85,
    Q_KEY_CODE_KP_3 = 86,
    Q_KEY_CODE_KP_4 = 87,
    Q_KEY_CODE_KP_5 = 88,
    Q_KEY_CODE_KP_6 = 89,
    Q_KEY_CODE_KP_7 = 90,
    Q_KEY_CODE_KP_8 = 91,
    Q_KEY_CODE_KP_9 = 92,
    Q_KEY_CODE_LESS = 93,
    Q_KEY_CODE_F11 = 94,
    Q_KEY_CODE_F12 = 95,
    Q_KEY_CODE_PRINT = 96,
    Q_KEY_CODE_HOME = 97,
    Q_KEY_CODE_PGUP = 98,
    Q_KEY_CODE_PGDN = 99,
    Q_KEY_CODE_END = 100,
    Q_KEY_CODE_LEFT = 101,
    Q_KEY_CODE_UP = 102,
    Q_KEY_CODE_DOWN = 103,
    Q_KEY_CODE_RIGHT = 104,
    Q_KEY_CODE_INSERT = 105,
    Q_KEY_CODE_DELETE = 106,
    Q_KEY_CODE_STOP = 107,
    Q_KEY_CODE_AGAIN = 108,
    Q_KEY_CODE_PROPS = 109,
    Q_KEY_CODE_UNDO = 110,
    Q_KEY_CODE_FRONT = 111,
    Q_KEY_CODE_COPY = 112,
    Q_KEY_CODE_OPEN = 113,
    Q_KEY_CODE_PASTE = 114,
    Q_KEY_CODE_FIND = 115,
    Q_KEY_CODE_CUT = 116,
    Q_KEY_CODE_LF = 117,
    Q_KEY_CODE_HELP = 118,
    Q_KEY_CODE_META_L = 119,
    Q_KEY_CODE_META_R = 120,
    Q_KEY_CODE_COMPOSE = 121,
    Q_KEY_CODE_PAUSE = 122,
    Q_KEY_CODE_RO = 123,
    Q_KEY_CODE_KP_COMMA = 124,
    Q_KEY_CODE_KP_EQUALS = 125,
    Q_KEY_CODE_POWER = 126,
    Q_KEY_CODE__MAX = 127,
} QKeyCode;

extern const char *const QKeyCode_lookup[];

typedef enum QapiErrorClass {
    QAPI_ERROR_CLASS_GENERICERROR = 0,
    QAPI_ERROR_CLASS_COMMANDNOTFOUND = 1,
    QAPI_ERROR_CLASS_DEVICEENCRYPTED = 2,
    QAPI_ERROR_CLASS_DEVICENOTACTIVE = 3,
    QAPI_ERROR_CLASS_DEVICENOTFOUND = 4,
    QAPI_ERROR_CLASS_KVMMISSINGCAP = 5,
    QAPI_ERROR_CLASS__MAX = 6,
} QapiErrorClass;

extern const char *const QapiErrorClass_lookup[];

typedef struct Qcow2OverlapCheckFlags Qcow2OverlapCheckFlags;

typedef enum Qcow2OverlapCheckMode {
    QCOW2_OVERLAP_CHECK_MODE_NONE = 0,
    QCOW2_OVERLAP_CHECK_MODE_CONSTANT = 1,
    QCOW2_OVERLAP_CHECK_MODE_CACHED = 2,
    QCOW2_OVERLAP_CHECK_MODE_ALL = 3,
    QCOW2_OVERLAP_CHECK_MODE__MAX = 4,
} Qcow2OverlapCheckMode;

extern const char *const Qcow2OverlapCheckMode_lookup[];

typedef struct Qcow2OverlapChecks Qcow2OverlapChecks;

typedef enum QuorumOpType {
    QUORUM_OP_TYPE_READ = 0,
    QUORUM_OP_TYPE_WRITE = 1,
    QUORUM_OP_TYPE_FLUSH = 2,
    QUORUM_OP_TYPE__MAX = 3,
} QuorumOpType;

extern const char *const QuorumOpType_lookup[];

typedef enum QuorumReadPattern {
    QUORUM_READ_PATTERN_QUORUM = 0,
    QUORUM_READ_PATTERN_FIFO = 1,
    QUORUM_READ_PATTERN__MAX = 2,
} QuorumReadPattern;

extern const char *const QuorumReadPattern_lookup[];

typedef enum ReplayMode {
    REPLAY_MODE_NONE = 0,
    REPLAY_MODE_RECORD = 1,
    REPLAY_MODE_PLAY = 2,
    REPLAY_MODE__MAX = 3,
} ReplayMode;

extern const char *const ReplayMode_lookup[];

typedef enum ReplicationMode {
    REPLICATION_MODE_PRIMARY = 0,
    REPLICATION_MODE_SECONDARY = 1,
    REPLICATION_MODE__MAX = 2,
} ReplicationMode;

extern const char *const ReplicationMode_lookup[];

typedef struct RockerOfDpaFlow RockerOfDpaFlow;

typedef struct RockerOfDpaFlowAction RockerOfDpaFlowAction;

typedef struct RockerOfDpaFlowKey RockerOfDpaFlowKey;

typedef struct RockerOfDpaFlowList RockerOfDpaFlowList;

typedef struct RockerOfDpaFlowMask RockerOfDpaFlowMask;

typedef struct RockerOfDpaGroup RockerOfDpaGroup;

typedef struct RockerOfDpaGroupList RockerOfDpaGroupList;

typedef struct RockerPort RockerPort;

typedef enum RockerPortAutoneg {
    ROCKER_PORT_AUTONEG_OFF = 0,
    ROCKER_PORT_AUTONEG_ON = 1,
    ROCKER_PORT_AUTONEG__MAX = 2,
} RockerPortAutoneg;

extern const char *const RockerPortAutoneg_lookup[];

typedef enum RockerPortDuplex {
    ROCKER_PORT_DUPLEX_HALF = 0,
    ROCKER_PORT_DUPLEX_FULL = 1,
    ROCKER_PORT_DUPLEX__MAX = 2,
} RockerPortDuplex;

extern const char *const RockerPortDuplex_lookup[];

typedef struct RockerPortList RockerPortList;

typedef struct RockerSwitch RockerSwitch;

typedef enum RunState {
    RUN_STATE_DEBUG = 0,
    RUN_STATE_INMIGRATE = 1,
    RUN_STATE_INTERNAL_ERROR = 2,
    RUN_STATE_IO_ERROR = 3,
    RUN_STATE_PAUSED = 4,
    RUN_STATE_POSTMIGRATE = 5,
    RUN_STATE_PRELAUNCH = 6,
    RUN_STATE_FINISH_MIGRATE = 7,
    RUN_STATE_RESTORE_VM = 8,
    RUN_STATE_RUNNING = 9,
    RUN_STATE_SAVE_VM = 10,
    RUN_STATE_SHUTDOWN = 11,
    RUN_STATE_SUSPENDED = 12,
    RUN_STATE_WATCHDOG = 13,
    RUN_STATE_GUEST_PANICKED = 14,
    RUN_STATE_COLO = 15,
    RUN_STATE__MAX = 16,
} RunState;

extern const char *const RunState_lookup[];

typedef struct RxFilterInfo RxFilterInfo;

typedef struct RxFilterInfoList RxFilterInfoList;

typedef enum RxState {
    RX_STATE_NORMAL = 0,
    RX_STATE_NONE = 1,
    RX_STATE_ALL = 2,
    RX_STATE__MAX = 3,
} RxState;

extern const char *const RxState_lookup[];

typedef struct SchemaInfo SchemaInfo;

typedef struct SchemaInfoAlternate SchemaInfoAlternate;

typedef struct SchemaInfoAlternateMember SchemaInfoAlternateMember;

typedef struct SchemaInfoAlternateMemberList SchemaInfoAlternateMemberList;

typedef struct SchemaInfoArray SchemaInfoArray;

typedef struct SchemaInfoBuiltin SchemaInfoBuiltin;

typedef struct SchemaInfoCommand SchemaInfoCommand;

typedef struct SchemaInfoEnum SchemaInfoEnum;

typedef struct SchemaInfoEvent SchemaInfoEvent;

typedef struct SchemaInfoList SchemaInfoList;

typedef struct SchemaInfoObject SchemaInfoObject;

typedef struct SchemaInfoObjectMember SchemaInfoObjectMember;

typedef struct SchemaInfoObjectMemberList SchemaInfoObjectMemberList;

typedef struct SchemaInfoObjectVariant SchemaInfoObjectVariant;

typedef struct SchemaInfoObjectVariantList SchemaInfoObjectVariantList;

typedef enum SchemaMetaType {
    SCHEMA_META_TYPE_BUILTIN = 0,
    SCHEMA_META_TYPE_ENUM = 1,
    SCHEMA_META_TYPE_ARRAY = 2,
    SCHEMA_META_TYPE_OBJECT = 3,
    SCHEMA_META_TYPE_ALTERNATE = 4,
    SCHEMA_META_TYPE_COMMAND = 5,
    SCHEMA_META_TYPE_EVENT = 6,
    SCHEMA_META_TYPE__MAX = 7,
} SchemaMetaType;

extern const char *const SchemaMetaType_lookup[];

typedef struct SnapshotInfo SnapshotInfo;

typedef struct SnapshotInfoList SnapshotInfoList;

typedef struct SocketAddress SocketAddress;

typedef enum SocketAddressKind {
    SOCKET_ADDRESS_KIND_INET = 0,
    SOCKET_ADDRESS_KIND_UNIX = 1,
    SOCKET_ADDRESS_KIND_VSOCK = 2,
    SOCKET_ADDRESS_KIND_FD = 3,
    SOCKET_ADDRESS_KIND__MAX = 4,
} SocketAddressKind;

extern const char *const SocketAddressKind_lookup[];

typedef struct SpiceBasicInfo SpiceBasicInfo;

typedef struct SpiceChannel SpiceChannel;

typedef struct SpiceChannelList SpiceChannelList;

typedef struct SpiceInfo SpiceInfo;

typedef enum SpiceQueryMouseMode {
    SPICE_QUERY_MOUSE_MODE_CLIENT = 0,
    SPICE_QUERY_MOUSE_MODE_SERVER = 1,
    SPICE_QUERY_MOUSE_MODE_UNKNOWN = 2,
    SPICE_QUERY_MOUSE_MODE__MAX = 3,
} SpiceQueryMouseMode;

extern const char *const SpiceQueryMouseMode_lookup[];

typedef struct SpiceServerInfo SpiceServerInfo;

typedef struct StatusInfo StatusInfo;

typedef struct String String;

typedef struct StringList StringList;

typedef struct TPMInfo TPMInfo;

typedef struct TPMInfoList TPMInfoList;

typedef struct TPMPassthroughOptions TPMPassthroughOptions;

typedef struct TargetInfo TargetInfo;

typedef enum TpmModel {
    TPM_MODEL_TPM_TIS = 0,
    TPM_MODEL__MAX = 1,
} TpmModel;

extern const char *const TpmModel_lookup[];

typedef struct TpmModelList TpmModelList;

typedef enum TpmType {
    TPM_TYPE_PASSTHROUGH = 0,
    TPM_TYPE__MAX = 1,
} TpmType;

extern const char *const TpmType_lookup[];

typedef struct TpmTypeList TpmTypeList;

typedef struct TpmTypeOptions TpmTypeOptions;

typedef enum TpmTypeOptionsKind {
    TPM_TYPE_OPTIONS_KIND_PASSTHROUGH = 0,
    TPM_TYPE_OPTIONS_KIND__MAX = 1,
} TpmTypeOptionsKind;

extern const char *const TpmTypeOptionsKind_lookup[];

typedef struct TraceEventInfo TraceEventInfo;

typedef struct TraceEventInfoList TraceEventInfoList;

typedef enum TraceEventState {
    TRACE_EVENT_STATE_UNAVAILABLE = 0,
    TRACE_EVENT_STATE_DISABLED = 1,
    TRACE_EVENT_STATE_ENABLED = 2,
    TRACE_EVENT_STATE__MAX = 3,
} TraceEventState;

extern const char *const TraceEventState_lookup[];

typedef struct TransactionAction TransactionAction;

typedef enum TransactionActionKind {
    TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT = 0,
    TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_SYNC = 1,
    TRANSACTION_ACTION_KIND_DRIVE_BACKUP = 2,
    TRANSACTION_ACTION_KIND_BLOCKDEV_BACKUP = 3,
    TRANSACTION_ACTION_KIND_ABORT = 4,
    TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_INTERNAL_SYNC = 5,
    TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_ADD = 6,
    TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_CLEAR = 7,
    TRANSACTION_ACTION_KIND__MAX = 8,
} TransactionActionKind;

extern const char *const TransactionActionKind_lookup[];

typedef struct TransactionActionList TransactionActionList;

typedef struct TransactionProperties TransactionProperties;

typedef struct UnixSocketAddress UnixSocketAddress;

typedef struct UuidInfo UuidInfo;

typedef struct VersionInfo VersionInfo;

typedef struct VersionTriple VersionTriple;

typedef struct VncBasicInfo VncBasicInfo;

typedef struct VncBasicInfoList VncBasicInfoList;

typedef struct VncClientInfo VncClientInfo;

typedef struct VncClientInfoList VncClientInfoList;

typedef struct VncInfo VncInfo;

typedef struct VncInfo2 VncInfo2;

typedef struct VncInfo2List VncInfo2List;

typedef enum VncPrimaryAuth {
    VNC_PRIMARY_AUTH_NONE = 0,
    VNC_PRIMARY_AUTH_VNC = 1,
    VNC_PRIMARY_AUTH_RA2 = 2,
    VNC_PRIMARY_AUTH_RA2NE = 3,
    VNC_PRIMARY_AUTH_TIGHT = 4,
    VNC_PRIMARY_AUTH_ULTRA = 5,
    VNC_PRIMARY_AUTH_TLS = 6,
    VNC_PRIMARY_AUTH_VENCRYPT = 7,
    VNC_PRIMARY_AUTH_SASL = 8,
    VNC_PRIMARY_AUTH__MAX = 9,
} VncPrimaryAuth;

extern const char *const VncPrimaryAuth_lookup[];

typedef struct VncServerInfo VncServerInfo;

typedef enum VncVencryptSubAuth {
    VNC_VENCRYPT_SUB_AUTH_PLAIN = 0,
    VNC_VENCRYPT_SUB_AUTH_TLS_NONE = 1,
    VNC_VENCRYPT_SUB_AUTH_X509_NONE = 2,
    VNC_VENCRYPT_SUB_AUTH_TLS_VNC = 3,
    VNC_VENCRYPT_SUB_AUTH_X509_VNC = 4,
    VNC_VENCRYPT_SUB_AUTH_TLS_PLAIN = 5,
    VNC_VENCRYPT_SUB_AUTH_X509_PLAIN = 6,
    VNC_VENCRYPT_SUB_AUTH_TLS_SASL = 7,
    VNC_VENCRYPT_SUB_AUTH_X509_SASL = 8,
    VNC_VENCRYPT_SUB_AUTH__MAX = 9,
} VncVencryptSubAuth;

extern const char *const VncVencryptSubAuth_lookup[];

typedef struct VsockSocketAddress VsockSocketAddress;

typedef enum WatchdogExpirationAction {
    WATCHDOG_EXPIRATION_ACTION_RESET = 0,
    WATCHDOG_EXPIRATION_ACTION_SHUTDOWN = 1,
    WATCHDOG_EXPIRATION_ACTION_POWEROFF = 2,
    WATCHDOG_EXPIRATION_ACTION_PAUSE = 3,
    WATCHDOG_EXPIRATION_ACTION_DEBUG = 4,
    WATCHDOG_EXPIRATION_ACTION_NONE = 5,
    WATCHDOG_EXPIRATION_ACTION_INJECT_NMI = 6,
    WATCHDOG_EXPIRATION_ACTION__MAX = 7,
} WatchdogExpirationAction;

extern const char *const WatchdogExpirationAction_lookup[];

typedef struct X86CPUFeatureWordInfo X86CPUFeatureWordInfo;

typedef struct X86CPUFeatureWordInfoList X86CPUFeatureWordInfoList;

typedef enum X86CPURegister32 {
    X86_CPU_REGISTER32_EAX = 0,
    X86_CPU_REGISTER32_EBX = 1,
    X86_CPU_REGISTER32_ECX = 2,
    X86_CPU_REGISTER32_EDX = 3,
    X86_CPU_REGISTER32_ESP = 4,
    X86_CPU_REGISTER32_EBP = 5,
    X86_CPU_REGISTER32_ESI = 6,
    X86_CPU_REGISTER32_EDI = 7,
    X86_CPU_REGISTER32__MAX = 8,
} X86CPURegister32;

extern const char *const X86CPURegister32_lookup[];

typedef struct XBZRLECacheStats XBZRLECacheStats;

typedef struct q_obj_ACPI_DEVICE_OST_arg q_obj_ACPI_DEVICE_OST_arg;

typedef struct q_obj_Abort_wrapper q_obj_Abort_wrapper;

typedef struct q_obj_BALLOON_CHANGE_arg q_obj_BALLOON_CHANGE_arg;

typedef struct q_obj_BLOCK_IMAGE_CORRUPTED_arg q_obj_BLOCK_IMAGE_CORRUPTED_arg;

typedef struct q_obj_BLOCK_IO_ERROR_arg q_obj_BLOCK_IO_ERROR_arg;

typedef struct q_obj_BLOCK_JOB_CANCELLED_arg q_obj_BLOCK_JOB_CANCELLED_arg;

typedef struct q_obj_BLOCK_JOB_COMPLETED_arg q_obj_BLOCK_JOB_COMPLETED_arg;

typedef struct q_obj_BLOCK_JOB_ERROR_arg q_obj_BLOCK_JOB_ERROR_arg;

typedef struct q_obj_BLOCK_JOB_READY_arg q_obj_BLOCK_JOB_READY_arg;

typedef struct q_obj_BLOCK_WRITE_THRESHOLD_arg q_obj_BLOCK_WRITE_THRESHOLD_arg;

typedef struct q_obj_BlockDirtyBitmap_wrapper q_obj_BlockDirtyBitmap_wrapper;

typedef struct q_obj_BlockDirtyBitmapAdd_wrapper q_obj_BlockDirtyBitmapAdd_wrapper;

typedef struct q_obj_BlockdevBackup_wrapper q_obj_BlockdevBackup_wrapper;

typedef struct q_obj_BlockdevOptions_base q_obj_BlockdevOptions_base;

typedef struct q_obj_BlockdevSnapshot_wrapper q_obj_BlockdevSnapshot_wrapper;

typedef struct q_obj_BlockdevSnapshotInternal_wrapper q_obj_BlockdevSnapshotInternal_wrapper;

typedef struct q_obj_BlockdevSnapshotSync_wrapper q_obj_BlockdevSnapshotSync_wrapper;

typedef struct q_obj_ChardevCommon_wrapper q_obj_ChardevCommon_wrapper;

typedef struct q_obj_ChardevFile_wrapper q_obj_ChardevFile_wrapper;

typedef struct q_obj_ChardevHostdev_wrapper q_obj_ChardevHostdev_wrapper;

typedef struct q_obj_ChardevMux_wrapper q_obj_ChardevMux_wrapper;

typedef struct q_obj_ChardevRingbuf_wrapper q_obj_ChardevRingbuf_wrapper;

typedef struct q_obj_ChardevSocket_wrapper q_obj_ChardevSocket_wrapper;

typedef struct q_obj_ChardevSpiceChannel_wrapper q_obj_ChardevSpiceChannel_wrapper;

typedef struct q_obj_ChardevSpicePort_wrapper q_obj_ChardevSpicePort_wrapper;

typedef struct q_obj_ChardevStdio_wrapper q_obj_ChardevStdio_wrapper;

typedef struct q_obj_ChardevUdp_wrapper q_obj_ChardevUdp_wrapper;

typedef struct q_obj_ChardevVC_wrapper q_obj_ChardevVC_wrapper;

typedef struct q_obj_CpuInfo_base q_obj_CpuInfo_base;

typedef struct q_obj_DEVICE_DELETED_arg q_obj_DEVICE_DELETED_arg;

typedef struct q_obj_DEVICE_TRAY_MOVED_arg q_obj_DEVICE_TRAY_MOVED_arg;

typedef struct q_obj_DUMP_COMPLETED_arg q_obj_DUMP_COMPLETED_arg;

typedef struct q_obj_DriveBackup_wrapper q_obj_DriveBackup_wrapper;

typedef struct q_obj_GUEST_PANICKED_arg q_obj_GUEST_PANICKED_arg;

typedef struct q_obj_GlusterServer_base q_obj_GlusterServer_base;

typedef struct q_obj_ImageInfoSpecificQCow2_wrapper q_obj_ImageInfoSpecificQCow2_wrapper;

typedef struct q_obj_ImageInfoSpecificVmdk_wrapper q_obj_ImageInfoSpecificVmdk_wrapper;

typedef struct q_obj_InetSocketAddress_wrapper q_obj_InetSocketAddress_wrapper;

typedef struct q_obj_InputBtnEvent_wrapper q_obj_InputBtnEvent_wrapper;

typedef struct q_obj_InputKeyEvent_wrapper q_obj_InputKeyEvent_wrapper;

typedef struct q_obj_InputMoveEvent_wrapper q_obj_InputMoveEvent_wrapper;

typedef struct q_obj_MEM_UNPLUG_ERROR_arg q_obj_MEM_UNPLUG_ERROR_arg;

typedef struct q_obj_MIGRATION_arg q_obj_MIGRATION_arg;

typedef struct q_obj_MIGRATION_PASS_arg q_obj_MIGRATION_PASS_arg;

typedef struct q_obj_NIC_RX_FILTER_CHANGED_arg q_obj_NIC_RX_FILTER_CHANGED_arg;

typedef struct q_obj_NetLegacyNicOptions_wrapper q_obj_NetLegacyNicOptions_wrapper;

typedef struct q_obj_Netdev_base q_obj_Netdev_base;

typedef struct q_obj_NetdevBridgeOptions_wrapper q_obj_NetdevBridgeOptions_wrapper;

typedef struct q_obj_NetdevDumpOptions_wrapper q_obj_NetdevDumpOptions_wrapper;

typedef struct q_obj_NetdevL2TPv3Options_wrapper q_obj_NetdevL2TPv3Options_wrapper;

typedef struct q_obj_NetdevNetmapOptions_wrapper q_obj_NetdevNetmapOptions_wrapper;

typedef struct q_obj_NetdevNoneOptions_wrapper q_obj_NetdevNoneOptions_wrapper;

typedef struct q_obj_NetdevSocketOptions_wrapper q_obj_NetdevSocketOptions_wrapper;

typedef struct q_obj_NetdevTapOptions_wrapper q_obj_NetdevTapOptions_wrapper;

typedef struct q_obj_NetdevUserOptions_wrapper q_obj_NetdevUserOptions_wrapper;

typedef struct q_obj_NetdevVdeOptions_wrapper q_obj_NetdevVdeOptions_wrapper;

typedef struct q_obj_NetdevVhostUserOptions_wrapper q_obj_NetdevVhostUserOptions_wrapper;

typedef struct q_obj_NumaNodeOptions_wrapper q_obj_NumaNodeOptions_wrapper;

typedef struct q_obj_PCDIMMDeviceInfo_wrapper q_obj_PCDIMMDeviceInfo_wrapper;

typedef struct q_obj_QCryptoBlockInfoLUKS_wrapper q_obj_QCryptoBlockInfoLUKS_wrapper;

typedef struct q_obj_QKeyCode_wrapper q_obj_QKeyCode_wrapper;

typedef struct q_obj_QUORUM_FAILURE_arg q_obj_QUORUM_FAILURE_arg;

typedef struct q_obj_QUORUM_REPORT_BAD_arg q_obj_QUORUM_REPORT_BAD_arg;

typedef struct q_obj_RTC_CHANGE_arg q_obj_RTC_CHANGE_arg;

typedef struct q_obj_SPICE_CONNECTED_arg q_obj_SPICE_CONNECTED_arg;

typedef struct q_obj_SPICE_DISCONNECTED_arg q_obj_SPICE_DISCONNECTED_arg;

typedef struct q_obj_SPICE_INITIALIZED_arg q_obj_SPICE_INITIALIZED_arg;

typedef struct q_obj_SchemaInfo_base q_obj_SchemaInfo_base;

typedef struct q_obj_String_wrapper q_obj_String_wrapper;

typedef struct q_obj_TPMPassthroughOptions_wrapper q_obj_TPMPassthroughOptions_wrapper;

typedef struct q_obj_UnixSocketAddress_wrapper q_obj_UnixSocketAddress_wrapper;

typedef struct q_obj_VNC_CONNECTED_arg q_obj_VNC_CONNECTED_arg;

typedef struct q_obj_VNC_DISCONNECTED_arg q_obj_VNC_DISCONNECTED_arg;

typedef struct q_obj_VNC_INITIALIZED_arg q_obj_VNC_INITIALIZED_arg;

typedef struct q_obj_VSERPORT_CHANGE_arg q_obj_VSERPORT_CHANGE_arg;

typedef struct q_obj_VsockSocketAddress_wrapper q_obj_VsockSocketAddress_wrapper;

typedef struct q_obj_WATCHDOG_arg q_obj_WATCHDOG_arg;

typedef struct q_obj_add_fd_arg q_obj_add_fd_arg;

typedef struct q_obj_add_client_arg q_obj_add_client_arg;

typedef struct q_obj_balloon_arg q_obj_balloon_arg;

typedef struct q_obj_block_commit_arg q_obj_block_commit_arg;

typedef struct q_obj_block_job_cancel_arg q_obj_block_job_cancel_arg;

typedef struct q_obj_block_job_complete_arg q_obj_block_job_complete_arg;

typedef struct q_obj_block_job_pause_arg q_obj_block_job_pause_arg;

typedef struct q_obj_block_job_resume_arg q_obj_block_job_resume_arg;

typedef struct q_obj_block_job_set_speed_arg q_obj_block_job_set_speed_arg;

typedef struct q_obj_block_set_write_threshold_arg q_obj_block_set_write_threshold_arg;

typedef struct q_obj_block_stream_arg q_obj_block_stream_arg;

typedef struct q_obj_block_passwd_arg q_obj_block_passwd_arg;

typedef struct q_obj_block_resize_arg q_obj_block_resize_arg;

typedef struct q_obj_blockdev_change_medium_arg q_obj_blockdev_change_medium_arg;

typedef struct q_obj_blockdev_close_tray_arg q_obj_blockdev_close_tray_arg;

typedef struct q_obj_blockdev_mirror_arg q_obj_blockdev_mirror_arg;

typedef struct q_obj_blockdev_open_tray_arg q_obj_blockdev_open_tray_arg;

typedef struct q_obj_blockdev_snapshot_delete_internal_sync_arg q_obj_blockdev_snapshot_delete_internal_sync_arg;

typedef struct q_obj_change_arg q_obj_change_arg;

typedef struct q_obj_change_backing_file_arg q_obj_change_backing_file_arg;

typedef struct q_obj_change_vnc_password_arg q_obj_change_vnc_password_arg;

typedef struct q_obj_chardev_add_arg q_obj_chardev_add_arg;

typedef struct q_obj_chardev_remove_arg q_obj_chardev_remove_arg;

typedef struct q_obj_client_migrate_info_arg q_obj_client_migrate_info_arg;

typedef struct q_obj_closefd_arg q_obj_closefd_arg;

typedef struct q_obj_cpu_add_arg q_obj_cpu_add_arg;

typedef struct q_obj_cpu_arg q_obj_cpu_arg;

typedef struct q_obj_device_list_properties_arg q_obj_device_list_properties_arg;

typedef struct q_obj_device_add_arg q_obj_device_add_arg;

typedef struct q_obj_device_del_arg q_obj_device_del_arg;

typedef struct q_obj_dump_guest_memory_arg q_obj_dump_guest_memory_arg;

typedef struct q_obj_dump_skeys_arg q_obj_dump_skeys_arg;

typedef struct q_obj_eject_arg q_obj_eject_arg;

typedef struct q_obj_expire_password_arg q_obj_expire_password_arg;

typedef struct q_obj_getfd_arg q_obj_getfd_arg;

typedef struct q_obj_human_monitor_command_arg q_obj_human_monitor_command_arg;

typedef struct q_obj_input_send_event_arg q_obj_input_send_event_arg;

typedef struct q_obj_int_wrapper q_obj_int_wrapper;

typedef struct q_obj_memsave_arg q_obj_memsave_arg;

typedef struct q_obj_migrate_arg q_obj_migrate_arg;

typedef struct q_obj_migrate_incoming_arg q_obj_migrate_incoming_arg;

typedef struct q_obj_migrate_set_cache_size_arg q_obj_migrate_set_cache_size_arg;

typedef struct q_obj_migrate_set_capabilities_arg q_obj_migrate_set_capabilities_arg;

typedef struct q_obj_migrate_set_downtime_arg q_obj_migrate_set_downtime_arg;

typedef struct q_obj_migrate_set_speed_arg q_obj_migrate_set_speed_arg;

typedef struct q_obj_nbd_server_add_arg q_obj_nbd_server_add_arg;

typedef struct q_obj_nbd_server_start_arg q_obj_nbd_server_start_arg;

typedef struct q_obj_netdev_add_arg q_obj_netdev_add_arg;

typedef struct q_obj_netdev_del_arg q_obj_netdev_del_arg;

typedef struct q_obj_object_add_arg q_obj_object_add_arg;

typedef struct q_obj_object_del_arg q_obj_object_del_arg;

typedef struct q_obj_pmemsave_arg q_obj_pmemsave_arg;

typedef struct q_obj_qom_get_arg q_obj_qom_get_arg;

typedef struct q_obj_qom_list_arg q_obj_qom_list_arg;

typedef struct q_obj_qom_list_types_arg q_obj_qom_list_types_arg;

typedef struct q_obj_qom_set_arg q_obj_qom_set_arg;

typedef struct q_obj_query_blockstats_arg q_obj_query_blockstats_arg;

typedef struct q_obj_query_command_line_options_arg q_obj_query_command_line_options_arg;

typedef struct q_obj_query_cpu_model_baseline_arg q_obj_query_cpu_model_baseline_arg;

typedef struct q_obj_query_cpu_model_comparison_arg q_obj_query_cpu_model_comparison_arg;

typedef struct q_obj_query_cpu_model_expansion_arg q_obj_query_cpu_model_expansion_arg;

typedef struct q_obj_query_rocker_arg q_obj_query_rocker_arg;

typedef struct q_obj_query_rocker_of_dpa_flows_arg q_obj_query_rocker_of_dpa_flows_arg;

typedef struct q_obj_query_rocker_of_dpa_groups_arg q_obj_query_rocker_of_dpa_groups_arg;

typedef struct q_obj_query_rocker_ports_arg q_obj_query_rocker_ports_arg;

typedef struct q_obj_query_rx_filter_arg q_obj_query_rx_filter_arg;

typedef struct q_obj_remove_fd_arg q_obj_remove_fd_arg;

typedef struct q_obj_ringbuf_read_arg q_obj_ringbuf_read_arg;

typedef struct q_obj_ringbuf_write_arg q_obj_ringbuf_write_arg;

typedef struct q_obj_screendump_arg q_obj_screendump_arg;

typedef struct q_obj_send_key_arg q_obj_send_key_arg;

typedef struct q_obj_set_link_arg q_obj_set_link_arg;

typedef struct q_obj_set_password_arg q_obj_set_password_arg;

typedef struct q_obj_trace_event_get_state_arg q_obj_trace_event_get_state_arg;

typedef struct q_obj_trace_event_set_state_arg q_obj_trace_event_set_state_arg;

typedef struct q_obj_transaction_arg q_obj_transaction_arg;

typedef struct q_obj_x_blockdev_change_arg q_obj_x_blockdev_change_arg;

typedef struct q_obj_x_blockdev_del_arg q_obj_x_blockdev_del_arg;

typedef struct q_obj_x_blockdev_insert_medium_arg q_obj_x_blockdev_insert_medium_arg;

typedef struct q_obj_x_blockdev_remove_medium_arg q_obj_x_blockdev_remove_medium_arg;

typedef struct q_obj_xen_load_devices_state_arg q_obj_xen_load_devices_state_arg;

typedef struct q_obj_xen_save_devices_state_arg q_obj_xen_save_devices_state_arg;

typedef struct q_obj_xen_set_global_dirty_log_arg q_obj_xen_set_global_dirty_log_arg;

struct ACPIOSTInfo {
    bool has_device;
    char *device;
    char *slot;
    ACPISlotType slot_type;
    int64_t source;
    int64_t status;
};

void qapi_free_ACPIOSTInfo(ACPIOSTInfo *obj);

struct ACPIOSTInfoList {
    ACPIOSTInfoList *next;
    ACPIOSTInfo *value;
};

void qapi_free_ACPIOSTInfoList(ACPIOSTInfoList *obj);

struct Abort {
    char qapi_dummy_for_empty_struct;
};

void qapi_free_Abort(Abort *obj);

struct AcpiTableOptions {
    bool has_sig;
    char *sig;
    bool has_rev;
    uint8_t rev;
    bool has_oem_id;
    char *oem_id;
    bool has_oem_table_id;
    char *oem_table_id;
    bool has_oem_rev;
    uint32_t oem_rev;
    bool has_asl_compiler_id;
    char *asl_compiler_id;
    bool has_asl_compiler_rev;
    uint32_t asl_compiler_rev;
    bool has_file;
    char *file;
    bool has_data;
    char *data;
};

void qapi_free_AcpiTableOptions(AcpiTableOptions *obj);

struct AddfdInfo {
    int64_t fdset_id;
    int64_t fd;
};

void qapi_free_AddfdInfo(AddfdInfo *obj);

struct BalloonInfo {
    int64_t actual;
};

void qapi_free_BalloonInfo(BalloonInfo *obj);

struct BlkdebugInjectErrorOptions {
    BlkdebugEvent event;
    bool has_state;
    int64_t state;
    bool has_q_errno;
    int64_t q_errno;
    bool has_sector;
    int64_t sector;
    bool has_once;
    bool once;
    bool has_immediately;
    bool immediately;
};

void qapi_free_BlkdebugInjectErrorOptions(BlkdebugInjectErrorOptions *obj);

struct BlkdebugInjectErrorOptionsList {
    BlkdebugInjectErrorOptionsList *next;
    BlkdebugInjectErrorOptions *value;
};

void qapi_free_BlkdebugInjectErrorOptionsList(BlkdebugInjectErrorOptionsList *obj);

struct BlkdebugSetStateOptions {
    BlkdebugEvent event;
    bool has_state;
    int64_t state;
    int64_t new_state;
};

void qapi_free_BlkdebugSetStateOptions(BlkdebugSetStateOptions *obj);

struct BlkdebugSetStateOptionsList {
    BlkdebugSetStateOptionsList *next;
    BlkdebugSetStateOptions *value;
};

void qapi_free_BlkdebugSetStateOptionsList(BlkdebugSetStateOptionsList *obj);

struct BlockDeviceInfo {
    char *file;
    bool has_node_name;
    char *node_name;
    bool ro;
    char *drv;
    bool has_backing_file;
    char *backing_file;
    int64_t backing_file_depth;
    bool encrypted;
    bool encryption_key_missing;
    BlockdevDetectZeroesOptions detect_zeroes;
    int64_t bps;
    int64_t bps_rd;
    int64_t bps_wr;
    int64_t iops;
    int64_t iops_rd;
    int64_t iops_wr;
    ImageInfo *image;
    bool has_bps_max;
    int64_t bps_max;
    bool has_bps_rd_max;
    int64_t bps_rd_max;
    bool has_bps_wr_max;
    int64_t bps_wr_max;
    bool has_iops_max;
    int64_t iops_max;
    bool has_iops_rd_max;
    int64_t iops_rd_max;
    bool has_iops_wr_max;
    int64_t iops_wr_max;
    bool has_bps_max_length;
    int64_t bps_max_length;
    bool has_bps_rd_max_length;
    int64_t bps_rd_max_length;
    bool has_bps_wr_max_length;
    int64_t bps_wr_max_length;
    bool has_iops_max_length;
    int64_t iops_max_length;
    bool has_iops_rd_max_length;
    int64_t iops_rd_max_length;
    bool has_iops_wr_max_length;
    int64_t iops_wr_max_length;
    bool has_iops_size;
    int64_t iops_size;
    bool has_group;
    char *group;
    BlockdevCacheInfo *cache;
    int64_t write_threshold;
};

void qapi_free_BlockDeviceInfo(BlockDeviceInfo *obj);

struct BlockDeviceInfoList {
    BlockDeviceInfoList *next;
    BlockDeviceInfo *value;
};

void qapi_free_BlockDeviceInfoList(BlockDeviceInfoList *obj);

struct BlockDeviceMapEntry {
    int64_t start;
    int64_t length;
    int64_t depth;
    bool zero;
    bool data;
    bool has_offset;
    int64_t offset;
};

void qapi_free_BlockDeviceMapEntry(BlockDeviceMapEntry *obj);

struct BlockDeviceStats {
    int64_t rd_bytes;
    int64_t wr_bytes;
    int64_t rd_operations;
    int64_t wr_operations;
    int64_t flush_operations;
    int64_t flush_total_time_ns;
    int64_t wr_total_time_ns;
    int64_t rd_total_time_ns;
    int64_t wr_highest_offset;
    int64_t rd_merged;
    int64_t wr_merged;
    bool has_idle_time_ns;
    int64_t idle_time_ns;
    int64_t failed_rd_operations;
    int64_t failed_wr_operations;
    int64_t failed_flush_operations;
    int64_t invalid_rd_operations;
    int64_t invalid_wr_operations;
    int64_t invalid_flush_operations;
    bool account_invalid;
    bool account_failed;
    BlockDeviceTimedStatsList *timed_stats;
};

void qapi_free_BlockDeviceStats(BlockDeviceStats *obj);

struct BlockDeviceTimedStats {
    int64_t interval_length;
    int64_t min_rd_latency_ns;
    int64_t max_rd_latency_ns;
    int64_t avg_rd_latency_ns;
    int64_t min_wr_latency_ns;
    int64_t max_wr_latency_ns;
    int64_t avg_wr_latency_ns;
    int64_t min_flush_latency_ns;
    int64_t max_flush_latency_ns;
    int64_t avg_flush_latency_ns;
    double avg_rd_queue_depth;
    double avg_wr_queue_depth;
};

void qapi_free_BlockDeviceTimedStats(BlockDeviceTimedStats *obj);

struct BlockDeviceTimedStatsList {
    BlockDeviceTimedStatsList *next;
    BlockDeviceTimedStats *value;
};

void qapi_free_BlockDeviceTimedStatsList(BlockDeviceTimedStatsList *obj);

struct BlockDirtyBitmap {
    char *node;
    char *name;
};

void qapi_free_BlockDirtyBitmap(BlockDirtyBitmap *obj);

struct BlockDirtyBitmapAdd {
    char *node;
    char *name;
    bool has_granularity;
    uint32_t granularity;
};

void qapi_free_BlockDirtyBitmapAdd(BlockDirtyBitmapAdd *obj);

struct BlockDirtyInfo {
    bool has_name;
    char *name;
    int64_t count;
    uint32_t granularity;
    DirtyBitmapStatus status;
};

void qapi_free_BlockDirtyInfo(BlockDirtyInfo *obj);

struct BlockDirtyInfoList {
    BlockDirtyInfoList *next;
    BlockDirtyInfo *value;
};

void qapi_free_BlockDirtyInfoList(BlockDirtyInfoList *obj);

struct BlockIOThrottle {
    bool has_device;
    char *device;
    bool has_id;
    char *id;
    int64_t bps;
    int64_t bps_rd;
    int64_t bps_wr;
    int64_t iops;
    int64_t iops_rd;
    int64_t iops_wr;
    bool has_bps_max;
    int64_t bps_max;
    bool has_bps_rd_max;
    int64_t bps_rd_max;
    bool has_bps_wr_max;
    int64_t bps_wr_max;
    bool has_iops_max;
    int64_t iops_max;
    bool has_iops_rd_max;
    int64_t iops_rd_max;
    bool has_iops_wr_max;
    int64_t iops_wr_max;
    bool has_bps_max_length;
    int64_t bps_max_length;
    bool has_bps_rd_max_length;
    int64_t bps_rd_max_length;
    bool has_bps_wr_max_length;
    int64_t bps_wr_max_length;
    bool has_iops_max_length;
    int64_t iops_max_length;
    bool has_iops_rd_max_length;
    int64_t iops_rd_max_length;
    bool has_iops_wr_max_length;
    int64_t iops_wr_max_length;
    bool has_iops_size;
    int64_t iops_size;
    bool has_group;
    char *group;
};

void qapi_free_BlockIOThrottle(BlockIOThrottle *obj);

struct BlockInfo {
    char *device;
    char *type;
    bool removable;
    bool locked;
    bool has_inserted;
    BlockDeviceInfo *inserted;
    bool has_tray_open;
    bool tray_open;
    bool has_io_status;
    BlockDeviceIoStatus io_status;
    bool has_dirty_bitmaps;
    BlockDirtyInfoList *dirty_bitmaps;
};

void qapi_free_BlockInfo(BlockInfo *obj);

struct BlockInfoList {
    BlockInfoList *next;
    BlockInfo *value;
};

void qapi_free_BlockInfoList(BlockInfoList *obj);

struct BlockJobInfo {
    char *type;
    char *device;
    int64_t len;
    int64_t offset;
    bool busy;
    bool paused;
    int64_t speed;
    BlockDeviceIoStatus io_status;
    bool ready;
};

void qapi_free_BlockJobInfo(BlockJobInfo *obj);

struct BlockJobInfoList {
    BlockJobInfoList *next;
    BlockJobInfo *value;
};

void qapi_free_BlockJobInfoList(BlockJobInfoList *obj);

struct BlockStats {
    bool has_device;
    char *device;
    bool has_node_name;
    char *node_name;
    BlockDeviceStats *stats;
    bool has_parent;
    BlockStats *parent;
    bool has_backing;
    BlockStats *backing;
};

void qapi_free_BlockStats(BlockStats *obj);

struct BlockStatsList {
    BlockStatsList *next;
    BlockStats *value;
};

void qapi_free_BlockStatsList(BlockStatsList *obj);

struct BlockdevBackup {
    bool has_job_id;
    char *job_id;
    char *device;
    char *target;
    MirrorSyncMode sync;
    bool has_speed;
    int64_t speed;
    bool has_compress;
    bool compress;
    bool has_on_source_error;
    BlockdevOnError on_source_error;
    bool has_on_target_error;
    BlockdevOnError on_target_error;
};

void qapi_free_BlockdevBackup(BlockdevBackup *obj);

struct BlockdevCacheInfo {
    bool writeback;
    bool direct;
    bool no_flush;
};

void qapi_free_BlockdevCacheInfo(BlockdevCacheInfo *obj);

struct BlockdevCacheOptions {
    bool has_direct;
    bool direct;
    bool has_no_flush;
    bool no_flush;
};

void qapi_free_BlockdevCacheOptions(BlockdevCacheOptions *obj);

struct BlockdevOptionsArchipelago {
    char *volume;
    bool has_mport;
    int64_t mport;
    bool has_vport;
    int64_t vport;
    bool has_segment;
    char *segment;
};

struct BlockdevOptionsBlkdebug {
    BlockdevRef *image;
    bool has_config;
    char *config;
    bool has_align;
    int64_t align;
    bool has_inject_error;
    BlkdebugInjectErrorOptionsList *inject_error;
    bool has_set_state;
    BlkdebugSetStateOptionsList *set_state;
};

struct BlockdevOptionsBlkverify {
    BlockdevRef *test;
    BlockdevRef *raw;
};

struct BlockdevOptionsGenericFormat {
    BlockdevRef *file;
};

struct BlockdevOptionsFile {
    char *filename;
    bool has_aio;
    BlockdevAioOptions aio;
};

struct BlockdevOptionsCurl {
    char *filename;
};

struct BlockdevOptionsGluster {
    char *volume;
    char *path;
    GlusterServerList *server;
    bool has_debug;
    int64_t debug;
    bool has_logfile;
    char *logfile;
};

struct BlockdevOptionsLUKS {
    /* Members inherited from BlockdevOptionsGenericFormat: */
    BlockdevRef *file;
    /* Own members: */
    bool has_key_secret;
    char *key_secret;
};

struct BlockdevOptionsNbd {
    SocketAddress *server;
    bool has_export;
    char *export;
    bool has_tls_creds;
    char *tls_creds;
};

struct BlockdevOptionsNfs {
    NFSServer *server;
    char *path;
    bool has_user;
    int64_t user;
    bool has_group;
    int64_t group;
    bool has_tcp_syn_count;
    int64_t tcp_syn_count;
    bool has_readahead_size;
    int64_t readahead_size;
    bool has_page_cache_size;
    int64_t page_cache_size;
    bool has_debug;
    int64_t debug;
};

struct BlockdevOptionsNull {
    bool has_size;
    int64_t size;
    bool has_latency_ns;
    uint64_t latency_ns;
};

struct BlockdevOptionsQcow2 {
    /* Members inherited from BlockdevOptionsGenericCOWFormat: */
    BlockdevRef *file;
    bool has_backing;
    BlockdevRef *backing;
    /* Own members: */
    bool has_lazy_refcounts;
    bool lazy_refcounts;
    bool has_pass_discard_request;
    bool pass_discard_request;
    bool has_pass_discard_snapshot;
    bool pass_discard_snapshot;
    bool has_pass_discard_other;
    bool pass_discard_other;
    bool has_overlap_check;
    Qcow2OverlapChecks *overlap_check;
    bool has_cache_size;
    int64_t cache_size;
    bool has_l2_cache_size;
    int64_t l2_cache_size;
    bool has_refcount_cache_size;
    int64_t refcount_cache_size;
    bool has_cache_clean_interval;
    int64_t cache_clean_interval;
};

struct BlockdevOptionsGenericCOWFormat {
    /* Members inherited from BlockdevOptionsGenericFormat: */
    BlockdevRef *file;
    /* Own members: */
    bool has_backing;
    BlockdevRef *backing;
};

struct BlockdevOptionsQuorum {
    bool has_blkverify;
    bool blkverify;
    BlockdevRefList *children;
    int64_t vote_threshold;
    bool has_rewrite_corrupted;
    bool rewrite_corrupted;
    bool has_read_pattern;
    QuorumReadPattern read_pattern;
};

struct BlockdevOptionsRaw {
    /* Members inherited from BlockdevOptionsGenericFormat: */
    BlockdevRef *file;
    /* Own members: */
    bool has_offset;
    int64_t offset;
    bool has_size;
    int64_t size;
};

struct BlockdevOptionsReplication {
    /* Members inherited from BlockdevOptionsGenericFormat: */
    BlockdevRef *file;
    /* Own members: */
    ReplicationMode mode;
    bool has_top_id;
    char *top_id;
};

struct BlockdevOptionsSsh {
    InetSocketAddress *server;
    char *path;
    bool has_user;
    char *user;
};

struct BlockdevOptionsVVFAT {
    char *dir;
    bool has_fat_type;
    int64_t fat_type;
    bool has_floppy;
    bool floppy;
    bool has_label;
    char *label;
    bool has_rw;
    bool rw;
};

struct BlockdevOptions {
    BlockdevDriver driver;
    bool has_node_name;
    char *node_name;
    bool has_discard;
    BlockdevDiscardOptions discard;
    bool has_cache;
    BlockdevCacheOptions *cache;
    bool has_read_only;
    bool read_only;
    bool has_detect_zeroes;
    BlockdevDetectZeroesOptions detect_zeroes;
    union { /* union tag is @driver */
        BlockdevOptionsArchipelago archipelago;
        BlockdevOptionsBlkdebug blkdebug;
        BlockdevOptionsBlkverify blkverify;
        BlockdevOptionsGenericFormat bochs;
        BlockdevOptionsGenericFormat cloop;
        BlockdevOptionsGenericFormat dmg;
        BlockdevOptionsFile file;
        BlockdevOptionsCurl ftp;
        BlockdevOptionsCurl ftps;
        BlockdevOptionsGluster gluster;
        BlockdevOptionsFile host_cdrom;
        BlockdevOptionsFile host_device;
        BlockdevOptionsCurl http;
        BlockdevOptionsCurl https;
        BlockdevOptionsLUKS luks;
        BlockdevOptionsNbd nbd;
        BlockdevOptionsNfs nfs;
        BlockdevOptionsNull null_aio;
        BlockdevOptionsNull null_co;
        BlockdevOptionsGenericFormat parallels;
        BlockdevOptionsQcow2 qcow2;
        BlockdevOptionsGenericCOWFormat qcow;
        BlockdevOptionsGenericCOWFormat qed;
        BlockdevOptionsQuorum quorum;
        BlockdevOptionsRaw raw;
        BlockdevOptionsReplication replication;
        BlockdevOptionsSsh ssh;
        BlockdevOptionsGenericFormat vdi;
        BlockdevOptionsGenericFormat vhdx;
        BlockdevOptionsGenericCOWFormat vmdk;
        BlockdevOptionsGenericFormat vpc;
        BlockdevOptionsVVFAT vvfat;
    } u;
};

void qapi_free_BlockdevOptions(BlockdevOptions *obj);

void qapi_free_BlockdevOptionsArchipelago(BlockdevOptionsArchipelago *obj);

void qapi_free_BlockdevOptionsBlkdebug(BlockdevOptionsBlkdebug *obj);

void qapi_free_BlockdevOptionsBlkverify(BlockdevOptionsBlkverify *obj);

void qapi_free_BlockdevOptionsCurl(BlockdevOptionsCurl *obj);

void qapi_free_BlockdevOptionsFile(BlockdevOptionsFile *obj);

static inline BlockdevOptionsGenericFormat *qapi_BlockdevOptionsGenericCOWFormat_base(const BlockdevOptionsGenericCOWFormat *obj)
{
    return (BlockdevOptionsGenericFormat *)obj;
}

void qapi_free_BlockdevOptionsGenericCOWFormat(BlockdevOptionsGenericCOWFormat *obj);

void qapi_free_BlockdevOptionsGenericFormat(BlockdevOptionsGenericFormat *obj);

void qapi_free_BlockdevOptionsGluster(BlockdevOptionsGluster *obj);

static inline BlockdevOptionsGenericFormat *qapi_BlockdevOptionsLUKS_base(const BlockdevOptionsLUKS *obj)
{
    return (BlockdevOptionsGenericFormat *)obj;
}

void qapi_free_BlockdevOptionsLUKS(BlockdevOptionsLUKS *obj);

void qapi_free_BlockdevOptionsNbd(BlockdevOptionsNbd *obj);

void qapi_free_BlockdevOptionsNfs(BlockdevOptionsNfs *obj);

void qapi_free_BlockdevOptionsNull(BlockdevOptionsNull *obj);

static inline BlockdevOptionsGenericCOWFormat *qapi_BlockdevOptionsQcow2_base(const BlockdevOptionsQcow2 *obj)
{
    return (BlockdevOptionsGenericCOWFormat *)obj;
}

void qapi_free_BlockdevOptionsQcow2(BlockdevOptionsQcow2 *obj);

void qapi_free_BlockdevOptionsQuorum(BlockdevOptionsQuorum *obj);

static inline BlockdevOptionsGenericFormat *qapi_BlockdevOptionsRaw_base(const BlockdevOptionsRaw *obj)
{
    return (BlockdevOptionsGenericFormat *)obj;
}

void qapi_free_BlockdevOptionsRaw(BlockdevOptionsRaw *obj);

static inline BlockdevOptionsGenericFormat *qapi_BlockdevOptionsReplication_base(const BlockdevOptionsReplication *obj)
{
    return (BlockdevOptionsGenericFormat *)obj;
}

void qapi_free_BlockdevOptionsReplication(BlockdevOptionsReplication *obj);

void qapi_free_BlockdevOptionsSsh(BlockdevOptionsSsh *obj);

void qapi_free_BlockdevOptionsVVFAT(BlockdevOptionsVVFAT *obj);

struct BlockdevRef {
    QType type;
    union { /* union tag is @type */
        BlockdevOptions definition;
        char *reference;
    } u;
};

void qapi_free_BlockdevRef(BlockdevRef *obj);

struct BlockdevRefList {
    BlockdevRefList *next;
    BlockdevRef *value;
};

void qapi_free_BlockdevRefList(BlockdevRefList *obj);

struct BlockdevSnapshot {
    char *node;
    char *overlay;
};

void qapi_free_BlockdevSnapshot(BlockdevSnapshot *obj);

struct BlockdevSnapshotInternal {
    char *device;
    char *name;
};

void qapi_free_BlockdevSnapshotInternal(BlockdevSnapshotInternal *obj);

struct BlockdevSnapshotSync {
    bool has_device;
    char *device;
    bool has_node_name;
    char *node_name;
    char *snapshot_file;
    bool has_snapshot_node_name;
    char *snapshot_node_name;
    bool has_format;
    char *format;
    bool has_mode;
    NewImageMode mode;
};

void qapi_free_BlockdevSnapshotSync(BlockdevSnapshotSync *obj);

struct q_obj_ChardevFile_wrapper {
    ChardevFile *data;
};

struct q_obj_ChardevHostdev_wrapper {
    ChardevHostdev *data;
};

struct q_obj_ChardevSocket_wrapper {
    ChardevSocket *data;
};

struct q_obj_ChardevUdp_wrapper {
    ChardevUdp *data;
};

struct q_obj_ChardevCommon_wrapper {
    ChardevCommon *data;
};

struct q_obj_ChardevMux_wrapper {
    ChardevMux *data;
};

struct q_obj_ChardevStdio_wrapper {
    ChardevStdio *data;
};

struct q_obj_ChardevSpiceChannel_wrapper {
    ChardevSpiceChannel *data;
};

struct q_obj_ChardevSpicePort_wrapper {
    ChardevSpicePort *data;
};

struct q_obj_ChardevVC_wrapper {
    ChardevVC *data;
};

struct q_obj_ChardevRingbuf_wrapper {
    ChardevRingbuf *data;
};

struct ChardevBackend {
    ChardevBackendKind type;
    union { /* union tag is @type */
        q_obj_ChardevFile_wrapper file;
        q_obj_ChardevHostdev_wrapper serial;
        q_obj_ChardevHostdev_wrapper parallel;
        q_obj_ChardevHostdev_wrapper pipe;
        q_obj_ChardevSocket_wrapper socket;
        q_obj_ChardevUdp_wrapper udp;
        q_obj_ChardevCommon_wrapper pty;
        q_obj_ChardevCommon_wrapper null;
        q_obj_ChardevMux_wrapper mux;
        q_obj_ChardevCommon_wrapper msmouse;
        q_obj_ChardevCommon_wrapper braille;
        q_obj_ChardevCommon_wrapper testdev;
        q_obj_ChardevStdio_wrapper stdio;
        q_obj_ChardevCommon_wrapper console;
        q_obj_ChardevSpiceChannel_wrapper spicevmc;
        q_obj_ChardevSpicePort_wrapper spiceport;
        q_obj_ChardevVC_wrapper vc;
        q_obj_ChardevRingbuf_wrapper ringbuf;
        q_obj_ChardevRingbuf_wrapper memory;
    } u;
};

void qapi_free_ChardevBackend(ChardevBackend *obj);

struct ChardevBackendInfo {
    char *name;
};

void qapi_free_ChardevBackendInfo(ChardevBackendInfo *obj);

struct ChardevBackendInfoList {
    ChardevBackendInfoList *next;
    ChardevBackendInfo *value;
};

void qapi_free_ChardevBackendInfoList(ChardevBackendInfoList *obj);

struct ChardevCommon {
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
};

void qapi_free_ChardevCommon(ChardevCommon *obj);

struct ChardevFile {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    bool has_in;
    char *in;
    char *out;
    bool has_append;
    bool append;
};

static inline ChardevCommon *qapi_ChardevFile_base(const ChardevFile *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevFile(ChardevFile *obj);

struct ChardevHostdev {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    char *device;
};

static inline ChardevCommon *qapi_ChardevHostdev_base(const ChardevHostdev *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevHostdev(ChardevHostdev *obj);

struct ChardevInfo {
    char *label;
    char *filename;
    bool frontend_open;
};

void qapi_free_ChardevInfo(ChardevInfo *obj);

struct ChardevInfoList {
    ChardevInfoList *next;
    ChardevInfo *value;
};

void qapi_free_ChardevInfoList(ChardevInfoList *obj);

struct ChardevMux {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    char *chardev;
};

static inline ChardevCommon *qapi_ChardevMux_base(const ChardevMux *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevMux(ChardevMux *obj);

struct ChardevReturn {
    bool has_pty;
    char *pty;
};

void qapi_free_ChardevReturn(ChardevReturn *obj);

struct ChardevRingbuf {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    bool has_size;
    int64_t size;
};

static inline ChardevCommon *qapi_ChardevRingbuf_base(const ChardevRingbuf *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevRingbuf(ChardevRingbuf *obj);

struct ChardevSocket {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    SocketAddress *addr;
    bool has_tls_creds;
    char *tls_creds;
    bool has_server;
    bool server;
    bool has_wait;
    bool wait;
    bool has_nodelay;
    bool nodelay;
    bool has_telnet;
    bool telnet;
    bool has_reconnect;
    int64_t reconnect;
};

static inline ChardevCommon *qapi_ChardevSocket_base(const ChardevSocket *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevSocket(ChardevSocket *obj);

struct ChardevSpiceChannel {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    char *type;
};

static inline ChardevCommon *qapi_ChardevSpiceChannel_base(const ChardevSpiceChannel *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevSpiceChannel(ChardevSpiceChannel *obj);

struct ChardevSpicePort {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    char *fqdn;
};

static inline ChardevCommon *qapi_ChardevSpicePort_base(const ChardevSpicePort *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevSpicePort(ChardevSpicePort *obj);

struct ChardevStdio {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    bool has_signal;
    bool signal;
};

static inline ChardevCommon *qapi_ChardevStdio_base(const ChardevStdio *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevStdio(ChardevStdio *obj);

struct ChardevUdp {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    SocketAddress *remote;
    bool has_local;
    SocketAddress *local;
};

static inline ChardevCommon *qapi_ChardevUdp_base(const ChardevUdp *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevUdp(ChardevUdp *obj);

struct ChardevVC {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    bool has_width;
    int64_t width;
    bool has_height;
    int64_t height;
    bool has_cols;
    int64_t cols;
    bool has_rows;
    int64_t rows;
};

static inline ChardevCommon *qapi_ChardevVC_base(const ChardevVC *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevVC(ChardevVC *obj);

struct CommandInfo {
    char *name;
};

void qapi_free_CommandInfo(CommandInfo *obj);

struct CommandInfoList {
    CommandInfoList *next;
    CommandInfo *value;
};

void qapi_free_CommandInfoList(CommandInfoList *obj);

struct CommandLineOptionInfo {
    char *option;
    CommandLineParameterInfoList *parameters;
};

void qapi_free_CommandLineOptionInfo(CommandLineOptionInfo *obj);

struct CommandLineOptionInfoList {
    CommandLineOptionInfoList *next;
    CommandLineOptionInfo *value;
};

void qapi_free_CommandLineOptionInfoList(CommandLineOptionInfoList *obj);

struct CommandLineParameterInfo {
    char *name;
    CommandLineParameterType type;
    bool has_help;
    char *help;
    bool has_q_default;
    char *q_default;
};

void qapi_free_CommandLineParameterInfo(CommandLineParameterInfo *obj);

struct CommandLineParameterInfoList {
    CommandLineParameterInfoList *next;
    CommandLineParameterInfo *value;
};

void qapi_free_CommandLineParameterInfoList(CommandLineParameterInfoList *obj);

struct CpuDefinitionInfo {
    char *name;
    bool has_migration_safe;
    bool migration_safe;
    bool q_static;
    bool has_unavailable_features;
    strList *unavailable_features;
};

void qapi_free_CpuDefinitionInfo(CpuDefinitionInfo *obj);

struct CpuDefinitionInfoList {
    CpuDefinitionInfoList *next;
    CpuDefinitionInfo *value;
};

void qapi_free_CpuDefinitionInfoList(CpuDefinitionInfoList *obj);

struct CpuInfoX86 {
    int64_t pc;
};

struct CpuInfoSPARC {
    int64_t pc;
    int64_t npc;
};

struct CpuInfoPPC {
    int64_t nip;
};

struct CpuInfoMIPS {
    int64_t PC;
};

struct CpuInfoTricore {
    int64_t PC;
};

struct CpuInfoOther {
    char qapi_dummy_for_empty_struct;
};

struct CpuInfo {
    int64_t CPU;
    bool current;
    bool halted;
    char *qom_path;
    int64_t thread_id;
    CpuInfoArch arch;
    union { /* union tag is @arch */
        CpuInfoX86 x86;
        CpuInfoSPARC q_sparc;
        CpuInfoPPC ppc;
        CpuInfoMIPS q_mips;
        CpuInfoTricore tricore;
        CpuInfoOther other;
    } u;
};

void qapi_free_CpuInfo(CpuInfo *obj);

struct CpuInfoList {
    CpuInfoList *next;
    CpuInfo *value;
};

void qapi_free_CpuInfoList(CpuInfoList *obj);

void qapi_free_CpuInfoMIPS(CpuInfoMIPS *obj);

void qapi_free_CpuInfoOther(CpuInfoOther *obj);

void qapi_free_CpuInfoPPC(CpuInfoPPC *obj);

void qapi_free_CpuInfoSPARC(CpuInfoSPARC *obj);

void qapi_free_CpuInfoTricore(CpuInfoTricore *obj);

void qapi_free_CpuInfoX86(CpuInfoX86 *obj);

struct CpuInstanceProperties {
    bool has_node_id;
    int64_t node_id;
    bool has_socket_id;
    int64_t socket_id;
    bool has_core_id;
    int64_t core_id;
    bool has_thread_id;
    int64_t thread_id;
};

void qapi_free_CpuInstanceProperties(CpuInstanceProperties *obj);

struct CpuModelBaselineInfo {
    CpuModelInfo *model;
};

void qapi_free_CpuModelBaselineInfo(CpuModelBaselineInfo *obj);

struct CpuModelCompareInfo {
    CpuModelCompareResult result;
    strList *responsible_properties;
};

void qapi_free_CpuModelCompareInfo(CpuModelCompareInfo *obj);

struct CpuModelExpansionInfo {
    CpuModelInfo *model;
};

void qapi_free_CpuModelExpansionInfo(CpuModelExpansionInfo *obj);

struct CpuModelInfo {
    char *name;
    bool has_props;
    QObject *props;
};

void qapi_free_CpuModelInfo(CpuModelInfo *obj);

struct DevicePropertyInfo {
    char *name;
    char *type;
    bool has_description;
    char *description;
};

void qapi_free_DevicePropertyInfo(DevicePropertyInfo *obj);

struct DevicePropertyInfoList {
    DevicePropertyInfoList *next;
    DevicePropertyInfo *value;
};

void qapi_free_DevicePropertyInfoList(DevicePropertyInfoList *obj);

struct DriveBackup {
    bool has_job_id;
    char *job_id;
    char *device;
    char *target;
    bool has_format;
    char *format;
    MirrorSyncMode sync;
    bool has_mode;
    NewImageMode mode;
    bool has_speed;
    int64_t speed;
    bool has_bitmap;
    char *bitmap;
    bool has_compress;
    bool compress;
    bool has_on_source_error;
    BlockdevOnError on_source_error;
    bool has_on_target_error;
    BlockdevOnError on_target_error;
};

void qapi_free_DriveBackup(DriveBackup *obj);

struct DriveMirror {
    bool has_job_id;
    char *job_id;
    char *device;
    char *target;
    bool has_format;
    char *format;
    bool has_node_name;
    char *node_name;
    bool has_replaces;
    char *replaces;
    MirrorSyncMode sync;
    bool has_mode;
    NewImageMode mode;
    bool has_speed;
    int64_t speed;
    bool has_granularity;
    uint32_t granularity;
    bool has_buf_size;
    int64_t buf_size;
    bool has_on_source_error;
    BlockdevOnError on_source_error;
    bool has_on_target_error;
    BlockdevOnError on_target_error;
    bool has_unmap;
    bool unmap;
};

void qapi_free_DriveMirror(DriveMirror *obj);

struct DummyForceArrays {
    X86CPUFeatureWordInfoList *unused;
};

void qapi_free_DummyForceArrays(DummyForceArrays *obj);

struct DumpGuestMemoryCapability {
    DumpGuestMemoryFormatList *formats;
};

void qapi_free_DumpGuestMemoryCapability(DumpGuestMemoryCapability *obj);

struct DumpGuestMemoryFormatList {
    DumpGuestMemoryFormatList *next;
    DumpGuestMemoryFormat value;
};

void qapi_free_DumpGuestMemoryFormatList(DumpGuestMemoryFormatList *obj);

struct DumpQueryResult {
    DumpStatus status;
    int64_t completed;
    int64_t total;
};

void qapi_free_DumpQueryResult(DumpQueryResult *obj);

struct EventInfo {
    char *name;
};

void qapi_free_EventInfo(EventInfo *obj);

struct EventInfoList {
    EventInfoList *next;
    EventInfo *value;
};

void qapi_free_EventInfoList(EventInfoList *obj);

struct FdsetFdInfo {
    int64_t fd;
    bool has_opaque;
    char *opaque;
};

void qapi_free_FdsetFdInfo(FdsetFdInfo *obj);

struct FdsetFdInfoList {
    FdsetFdInfoList *next;
    FdsetFdInfo *value;
};

void qapi_free_FdsetFdInfoList(FdsetFdInfoList *obj);

struct FdsetInfo {
    int64_t fdset_id;
    FdsetFdInfoList *fds;
};

void qapi_free_FdsetInfo(FdsetInfo *obj);

struct FdsetInfoList {
    FdsetInfoList *next;
    FdsetInfo *value;
};

void qapi_free_FdsetInfoList(FdsetInfoList *obj);

struct GICCapability {
    int64_t version;
    bool emulated;
    bool kernel;
};

void qapi_free_GICCapability(GICCapability *obj);

struct GICCapabilityList {
    GICCapabilityList *next;
    GICCapability *value;
};

void qapi_free_GICCapabilityList(GICCapabilityList *obj);

struct UnixSocketAddress {
    char *path;
};

struct InetSocketAddress {
    char *host;
    char *port;
    bool has_to;
    uint16_t to;
    bool has_ipv4;
    bool ipv4;
    bool has_ipv6;
    bool ipv6;
};

struct GlusterServer {
    GlusterTransport type;
    union { /* union tag is @type */
        UnixSocketAddress q_unix;
        InetSocketAddress tcp;
    } u;
};

void qapi_free_GlusterServer(GlusterServer *obj);

struct GlusterServerList {
    GlusterServerList *next;
    GlusterServer *value;
};

void qapi_free_GlusterServerList(GlusterServerList *obj);

struct HotpluggableCPU {
    char *type;
    int64_t vcpus_count;
    CpuInstanceProperties *props;
    bool has_qom_path;
    char *qom_path;
};

void qapi_free_HotpluggableCPU(HotpluggableCPU *obj);

struct HotpluggableCPUList {
    HotpluggableCPUList *next;
    HotpluggableCPU *value;
};

void qapi_free_HotpluggableCPUList(HotpluggableCPUList *obj);

struct IOThreadInfo {
    char *id;
    int64_t thread_id;
};

void qapi_free_IOThreadInfo(IOThreadInfo *obj);

struct IOThreadInfoList {
    IOThreadInfoList *next;
    IOThreadInfo *value;
};

void qapi_free_IOThreadInfoList(IOThreadInfoList *obj);

struct ImageCheck {
    char *filename;
    char *format;
    int64_t check_errors;
    bool has_image_end_offset;
    int64_t image_end_offset;
    bool has_corruptions;
    int64_t corruptions;
    bool has_leaks;
    int64_t leaks;
    bool has_corruptions_fixed;
    int64_t corruptions_fixed;
    bool has_leaks_fixed;
    int64_t leaks_fixed;
    bool has_total_clusters;
    int64_t total_clusters;
    bool has_allocated_clusters;
    int64_t allocated_clusters;
    bool has_fragmented_clusters;
    int64_t fragmented_clusters;
    bool has_compressed_clusters;
    int64_t compressed_clusters;
};

void qapi_free_ImageCheck(ImageCheck *obj);

struct ImageInfo {
    char *filename;
    char *format;
    bool has_dirty_flag;
    bool dirty_flag;
    bool has_actual_size;
    int64_t actual_size;
    int64_t virtual_size;
    bool has_cluster_size;
    int64_t cluster_size;
    bool has_encrypted;
    bool encrypted;
    bool has_compressed;
    bool compressed;
    bool has_backing_filename;
    char *backing_filename;
    bool has_full_backing_filename;
    char *full_backing_filename;
    bool has_backing_filename_format;
    char *backing_filename_format;
    bool has_snapshots;
    SnapshotInfoList *snapshots;
    bool has_backing_image;
    ImageInfo *backing_image;
    bool has_format_specific;
    ImageInfoSpecific *format_specific;
};

void qapi_free_ImageInfo(ImageInfo *obj);

struct ImageInfoList {
    ImageInfoList *next;
    ImageInfo *value;
};

void qapi_free_ImageInfoList(ImageInfoList *obj);

struct q_obj_ImageInfoSpecificQCow2_wrapper {
    ImageInfoSpecificQCow2 *data;
};

struct q_obj_ImageInfoSpecificVmdk_wrapper {
    ImageInfoSpecificVmdk *data;
};

struct q_obj_QCryptoBlockInfoLUKS_wrapper {
    QCryptoBlockInfoLUKS *data;
};

struct ImageInfoSpecific {
    ImageInfoSpecificKind type;
    union { /* union tag is @type */
        q_obj_ImageInfoSpecificQCow2_wrapper qcow2;
        q_obj_ImageInfoSpecificVmdk_wrapper vmdk;
        q_obj_QCryptoBlockInfoLUKS_wrapper luks;
    } u;
};

void qapi_free_ImageInfoSpecific(ImageInfoSpecific *obj);

struct ImageInfoSpecificQCow2 {
    char *compat;
    bool has_lazy_refcounts;
    bool lazy_refcounts;
    bool has_corrupt;
    bool corrupt;
    int64_t refcount_bits;
};

void qapi_free_ImageInfoSpecificQCow2(ImageInfoSpecificQCow2 *obj);

struct ImageInfoSpecificVmdk {
    char *create_type;
    int64_t cid;
    int64_t parent_cid;
    ImageInfoList *extents;
};

void qapi_free_ImageInfoSpecificVmdk(ImageInfoSpecificVmdk *obj);

void qapi_free_InetSocketAddress(InetSocketAddress *obj);

struct InputBtnEvent {
    InputButton button;
    bool down;
};

void qapi_free_InputBtnEvent(InputBtnEvent *obj);

struct q_obj_InputKeyEvent_wrapper {
    InputKeyEvent *data;
};

struct q_obj_InputBtnEvent_wrapper {
    InputBtnEvent *data;
};

struct q_obj_InputMoveEvent_wrapper {
    InputMoveEvent *data;
};

struct InputEvent {
    InputEventKind type;
    union { /* union tag is @type */
        q_obj_InputKeyEvent_wrapper key;
        q_obj_InputBtnEvent_wrapper btn;
        q_obj_InputMoveEvent_wrapper rel;
        q_obj_InputMoveEvent_wrapper abs;
    } u;
};

void qapi_free_InputEvent(InputEvent *obj);

struct InputEventList {
    InputEventList *next;
    InputEvent *value;
};

void qapi_free_InputEventList(InputEventList *obj);

struct InputKeyEvent {
    KeyValue *key;
    bool down;
};

void qapi_free_InputKeyEvent(InputKeyEvent *obj);

struct InputMoveEvent {
    InputAxis axis;
    int64_t value;
};

void qapi_free_InputMoveEvent(InputMoveEvent *obj);

struct q_obj_int_wrapper {
    int64_t data;
};

struct q_obj_QKeyCode_wrapper {
    QKeyCode data;
};

struct KeyValue {
    KeyValueKind type;
    union { /* union tag is @type */
        q_obj_int_wrapper number;
        q_obj_QKeyCode_wrapper qcode;
    } u;
};

void qapi_free_KeyValue(KeyValue *obj);

struct KeyValueList {
    KeyValueList *next;
    KeyValue *value;
};

void qapi_free_KeyValueList(KeyValueList *obj);

struct KvmInfo {
    bool enabled;
    bool present;
};

void qapi_free_KvmInfo(KvmInfo *obj);

struct MachineInfo {
    char *name;
    bool has_alias;
    char *alias;
    bool has_is_default;
    bool is_default;
    int64_t cpu_max;
    bool hotpluggable_cpus;
};

void qapi_free_MachineInfo(MachineInfo *obj);

struct MachineInfoList {
    MachineInfoList *next;
    MachineInfo *value;
};

void qapi_free_MachineInfoList(MachineInfoList *obj);

struct MapEntry {
    int64_t start;
    int64_t length;
    bool data;
    bool zero;
    int64_t depth;
    bool has_offset;
    int64_t offset;
    bool has_filename;
    char *filename;
};

void qapi_free_MapEntry(MapEntry *obj);

struct Memdev {
    uint64_t size;
    bool merge;
    bool dump;
    bool prealloc;
    uint16List *host_nodes;
    HostMemPolicy policy;
};

void qapi_free_Memdev(Memdev *obj);

struct MemdevList {
    MemdevList *next;
    Memdev *value;
};

void qapi_free_MemdevList(MemdevList *obj);

struct q_obj_PCDIMMDeviceInfo_wrapper {
    PCDIMMDeviceInfo *data;
};

struct MemoryDeviceInfo {
    MemoryDeviceInfoKind type;
    union { /* union tag is @type */
        q_obj_PCDIMMDeviceInfo_wrapper dimm;
    } u;
};

void qapi_free_MemoryDeviceInfo(MemoryDeviceInfo *obj);

struct MemoryDeviceInfoList {
    MemoryDeviceInfoList *next;
    MemoryDeviceInfo *value;
};

void qapi_free_MemoryDeviceInfoList(MemoryDeviceInfoList *obj);

struct MigrationCapabilityStatus {
    MigrationCapability capability;
    bool state;
};

void qapi_free_MigrationCapabilityStatus(MigrationCapabilityStatus *obj);

struct MigrationCapabilityStatusList {
    MigrationCapabilityStatusList *next;
    MigrationCapabilityStatus *value;
};

void qapi_free_MigrationCapabilityStatusList(MigrationCapabilityStatusList *obj);

struct MigrationInfo {
    bool has_status;
    MigrationStatus status;
    bool has_ram;
    MigrationStats *ram;
    bool has_disk;
    MigrationStats *disk;
    bool has_xbzrle_cache;
    XBZRLECacheStats *xbzrle_cache;
    bool has_total_time;
    int64_t total_time;
    bool has_expected_downtime;
    int64_t expected_downtime;
    bool has_downtime;
    int64_t downtime;
    bool has_setup_time;
    int64_t setup_time;
    bool has_cpu_throttle_percentage;
    int64_t cpu_throttle_percentage;
    bool has_error_desc;
    char *error_desc;
};

void qapi_free_MigrationInfo(MigrationInfo *obj);

struct MigrationParameters {
    bool has_compress_level;
    int64_t compress_level;
    bool has_compress_threads;
    int64_t compress_threads;
    bool has_decompress_threads;
    int64_t decompress_threads;
    bool has_cpu_throttle_initial;
    int64_t cpu_throttle_initial;
    bool has_cpu_throttle_increment;
    int64_t cpu_throttle_increment;
    bool has_tls_creds;
    char *tls_creds;
    bool has_tls_hostname;
    char *tls_hostname;
    bool has_max_bandwidth;
    int64_t max_bandwidth;
    bool has_downtime_limit;
    int64_t downtime_limit;
    bool has_x_checkpoint_delay;
    int64_t x_checkpoint_delay;
};

void qapi_free_MigrationParameters(MigrationParameters *obj);

struct MigrationStats {
    int64_t transferred;
    int64_t remaining;
    int64_t total;
    int64_t duplicate;
    int64_t skipped;
    int64_t normal;
    int64_t normal_bytes;
    int64_t dirty_pages_rate;
    double mbps;
    int64_t dirty_sync_count;
    int64_t postcopy_requests;
};

void qapi_free_MigrationStats(MigrationStats *obj);

struct MouseInfo {
    char *name;
    int64_t index;
    bool current;
    bool absolute;
};

void qapi_free_MouseInfo(MouseInfo *obj);

struct MouseInfoList {
    MouseInfoList *next;
    MouseInfo *value;
};

void qapi_free_MouseInfoList(MouseInfoList *obj);

struct NFSServer {
    NFSTransport type;
    char *host;
};

void qapi_free_NFSServer(NFSServer *obj);

struct NameInfo {
    bool has_name;
    char *name;
};

void qapi_free_NameInfo(NameInfo *obj);

struct NetLegacy {
    bool has_vlan;
    int32_t vlan;
    bool has_id;
    char *id;
    bool has_name;
    char *name;
    NetLegacyOptions *opts;
};

void qapi_free_NetLegacy(NetLegacy *obj);

struct NetLegacyNicOptions {
    bool has_netdev;
    char *netdev;
    bool has_macaddr;
    char *macaddr;
    bool has_model;
    char *model;
    bool has_addr;
    char *addr;
    bool has_vectors;
    uint32_t vectors;
};

void qapi_free_NetLegacyNicOptions(NetLegacyNicOptions *obj);

struct q_obj_NetdevNoneOptions_wrapper {
    NetdevNoneOptions *data;
};

struct q_obj_NetLegacyNicOptions_wrapper {
    NetLegacyNicOptions *data;
};

struct q_obj_NetdevUserOptions_wrapper {
    NetdevUserOptions *data;
};

struct q_obj_NetdevTapOptions_wrapper {
    NetdevTapOptions *data;
};

struct q_obj_NetdevL2TPv3Options_wrapper {
    NetdevL2TPv3Options *data;
};

struct q_obj_NetdevSocketOptions_wrapper {
    NetdevSocketOptions *data;
};

struct q_obj_NetdevVdeOptions_wrapper {
    NetdevVdeOptions *data;
};

struct q_obj_NetdevDumpOptions_wrapper {
    NetdevDumpOptions *data;
};

struct q_obj_NetdevBridgeOptions_wrapper {
    NetdevBridgeOptions *data;
};

struct q_obj_NetdevNetmapOptions_wrapper {
    NetdevNetmapOptions *data;
};

struct q_obj_NetdevVhostUserOptions_wrapper {
    NetdevVhostUserOptions *data;
};

struct NetLegacyOptions {
    NetLegacyOptionsKind type;
    union { /* union tag is @type */
        q_obj_NetdevNoneOptions_wrapper none;
        q_obj_NetLegacyNicOptions_wrapper nic;
        q_obj_NetdevUserOptions_wrapper user;
        q_obj_NetdevTapOptions_wrapper tap;
        q_obj_NetdevL2TPv3Options_wrapper l2tpv3;
        q_obj_NetdevSocketOptions_wrapper socket;
        q_obj_NetdevVdeOptions_wrapper vde;
        q_obj_NetdevDumpOptions_wrapper dump;
        q_obj_NetdevBridgeOptions_wrapper bridge;
        q_obj_NetdevNetmapOptions_wrapper netmap;
        q_obj_NetdevVhostUserOptions_wrapper vhost_user;
    } u;
};

void qapi_free_NetLegacyOptions(NetLegacyOptions *obj);

struct NetdevNoneOptions {
    char qapi_dummy_for_empty_struct;
};

struct NetdevUserOptions {
    bool has_hostname;
    char *hostname;
    bool has_q_restrict;
    bool q_restrict;
    bool has_ipv4;
    bool ipv4;
    bool has_ipv6;
    bool ipv6;
    bool has_ip;
    char *ip;
    bool has_net;
    char *net;
    bool has_host;
    char *host;
    bool has_tftp;
    char *tftp;
    bool has_bootfile;
    char *bootfile;
    bool has_dhcpstart;
    char *dhcpstart;
    bool has_dns;
    char *dns;
    bool has_dnssearch;
    StringList *dnssearch;
    bool has_ipv6_prefix;
    char *ipv6_prefix;
    bool has_ipv6_prefixlen;
    int64_t ipv6_prefixlen;
    bool has_ipv6_host;
    char *ipv6_host;
    bool has_ipv6_dns;
    char *ipv6_dns;
    bool has_smb;
    char *smb;
    bool has_smbserver;
    char *smbserver;
    bool has_hostfwd;
    StringList *hostfwd;
    bool has_guestfwd;
    StringList *guestfwd;
};

struct NetdevTapOptions {
    bool has_ifname;
    char *ifname;
    bool has_fd;
    char *fd;
    bool has_fds;
    char *fds;
    bool has_script;
    char *script;
    bool has_downscript;
    char *downscript;
    bool has_br;
    char *br;
    bool has_helper;
    char *helper;
    bool has_sndbuf;
    uint64_t sndbuf;
    bool has_vnet_hdr;
    bool vnet_hdr;
    bool has_vhost;
    bool vhost;
    bool has_vhostfd;
    char *vhostfd;
    bool has_vhostfds;
    char *vhostfds;
    bool has_vhostforce;
    bool vhostforce;
    bool has_queues;
    uint32_t queues;
    bool has_poll_us;
    uint32_t poll_us;
};

struct NetdevL2TPv3Options {
    char *src;
    char *dst;
    bool has_srcport;
    char *srcport;
    bool has_dstport;
    char *dstport;
    bool has_ipv6;
    bool ipv6;
    bool has_udp;
    bool udp;
    bool has_cookie64;
    bool cookie64;
    bool has_counter;
    bool counter;
    bool has_pincounter;
    bool pincounter;
    bool has_txcookie;
    uint64_t txcookie;
    bool has_rxcookie;
    uint64_t rxcookie;
    uint32_t txsession;
    bool has_rxsession;
    uint32_t rxsession;
    bool has_offset;
    uint32_t offset;
};

struct NetdevSocketOptions {
    bool has_fd;
    char *fd;
    bool has_listen;
    char *listen;
    bool has_connect;
    char *connect;
    bool has_mcast;
    char *mcast;
    bool has_localaddr;
    char *localaddr;
    bool has_udp;
    char *udp;
};

struct NetdevVdeOptions {
    bool has_sock;
    char *sock;
    bool has_port;
    uint16_t port;
    bool has_group;
    char *group;
    bool has_mode;
    uint16_t mode;
};

struct NetdevDumpOptions {
    bool has_len;
    uint64_t len;
    bool has_file;
    char *file;
};

struct NetdevBridgeOptions {
    bool has_br;
    char *br;
    bool has_helper;
    char *helper;
};

struct NetdevHubPortOptions {
    int32_t hubid;
};

struct NetdevNetmapOptions {
    char *ifname;
    bool has_devname;
    char *devname;
};

struct NetdevVhostUserOptions {
    char *chardev;
    bool has_vhostforce;
    bool vhostforce;
    bool has_queues;
    int64_t queues;
};

struct Netdev {
    char *id;
    NetClientDriver type;
    union { /* union tag is @type */
        NetdevNoneOptions none;
        NetLegacyNicOptions nic;
        NetdevUserOptions user;
        NetdevTapOptions tap;
        NetdevL2TPv3Options l2tpv3;
        NetdevSocketOptions socket;
        NetdevVdeOptions vde;
        NetdevDumpOptions dump;
        NetdevBridgeOptions bridge;
        NetdevHubPortOptions hubport;
        NetdevNetmapOptions netmap;
        NetdevVhostUserOptions vhost_user;
    } u;
};

void qapi_free_Netdev(Netdev *obj);

void qapi_free_NetdevBridgeOptions(NetdevBridgeOptions *obj);

void qapi_free_NetdevDumpOptions(NetdevDumpOptions *obj);

void qapi_free_NetdevHubPortOptions(NetdevHubPortOptions *obj);

void qapi_free_NetdevL2TPv3Options(NetdevL2TPv3Options *obj);

void qapi_free_NetdevNetmapOptions(NetdevNetmapOptions *obj);

void qapi_free_NetdevNoneOptions(NetdevNoneOptions *obj);

void qapi_free_NetdevSocketOptions(NetdevSocketOptions *obj);

void qapi_free_NetdevTapOptions(NetdevTapOptions *obj);

void qapi_free_NetdevUserOptions(NetdevUserOptions *obj);

void qapi_free_NetdevVdeOptions(NetdevVdeOptions *obj);

void qapi_free_NetdevVhostUserOptions(NetdevVhostUserOptions *obj);

struct NumaNodeOptions {
    bool has_nodeid;
    uint16_t nodeid;
    bool has_cpus;
    uint16List *cpus;
    bool has_mem;
    uint64_t mem;
    bool has_memdev;
    char *memdev;
};

void qapi_free_NumaNodeOptions(NumaNodeOptions *obj);

struct q_obj_NumaNodeOptions_wrapper {
    NumaNodeOptions *data;
};

struct NumaOptions {
    NumaOptionsKind type;
    union { /* union tag is @type */
        q_obj_NumaNodeOptions_wrapper node;
    } u;
};

void qapi_free_NumaOptions(NumaOptions *obj);

struct ObjectPropertyInfo {
    char *name;
    char *type;
};

void qapi_free_ObjectPropertyInfo(ObjectPropertyInfo *obj);

struct ObjectPropertyInfoList {
    ObjectPropertyInfoList *next;
    ObjectPropertyInfo *value;
};

void qapi_free_ObjectPropertyInfoList(ObjectPropertyInfoList *obj);

struct ObjectTypeInfo {
    char *name;
};

void qapi_free_ObjectTypeInfo(ObjectTypeInfo *obj);

struct ObjectTypeInfoList {
    ObjectTypeInfoList *next;
    ObjectTypeInfo *value;
};

void qapi_free_ObjectTypeInfoList(ObjectTypeInfoList *obj);

struct PCDIMMDeviceInfo {
    bool has_id;
    char *id;
    int64_t addr;
    int64_t size;
    int64_t slot;
    int64_t node;
    char *memdev;
    bool hotplugged;
    bool hotpluggable;
};

void qapi_free_PCDIMMDeviceInfo(PCDIMMDeviceInfo *obj);

struct PciBridgeInfo {
    PciBusInfo *bus;
    bool has_devices;
    PciDeviceInfoList *devices;
};

void qapi_free_PciBridgeInfo(PciBridgeInfo *obj);

struct PciBusInfo {
    int64_t number;
    int64_t secondary;
    int64_t subordinate;
    PciMemoryRange *io_range;
    PciMemoryRange *memory_range;
    PciMemoryRange *prefetchable_range;
};

void qapi_free_PciBusInfo(PciBusInfo *obj);

struct PciDeviceClass {
    bool has_desc;
    char *desc;
    int64_t q_class;
};

void qapi_free_PciDeviceClass(PciDeviceClass *obj);

struct PciDeviceId {
    int64_t device;
    int64_t vendor;
};

void qapi_free_PciDeviceId(PciDeviceId *obj);

struct PciDeviceInfo {
    int64_t bus;
    int64_t slot;
    int64_t function;
    PciDeviceClass *class_info;
    PciDeviceId *id;
    bool has_irq;
    int64_t irq;
    char *qdev_id;
    bool has_pci_bridge;
    PciBridgeInfo *pci_bridge;
    PciMemoryRegionList *regions;
};

void qapi_free_PciDeviceInfo(PciDeviceInfo *obj);

struct PciDeviceInfoList {
    PciDeviceInfoList *next;
    PciDeviceInfo *value;
};

void qapi_free_PciDeviceInfoList(PciDeviceInfoList *obj);

struct PciInfo {
    int64_t bus;
    PciDeviceInfoList *devices;
};

void qapi_free_PciInfo(PciInfo *obj);

struct PciInfoList {
    PciInfoList *next;
    PciInfo *value;
};

void qapi_free_PciInfoList(PciInfoList *obj);

struct PciMemoryRange {
    int64_t base;
    int64_t limit;
};

void qapi_free_PciMemoryRange(PciMemoryRange *obj);

struct PciMemoryRegion {
    int64_t bar;
    char *type;
    int64_t address;
    int64_t size;
    bool has_prefetch;
    bool prefetch;
    bool has_mem_type_64;
    bool mem_type_64;
};

void qapi_free_PciMemoryRegion(PciMemoryRegion *obj);

struct PciMemoryRegionList {
    PciMemoryRegionList *next;
    PciMemoryRegion *value;
};

void qapi_free_PciMemoryRegionList(PciMemoryRegionList *obj);

struct QCryptoBlockOptionsQCow {
    bool has_key_secret;
    char *key_secret;
};

struct QCryptoBlockCreateOptionsLUKS {
    /* Members inherited from QCryptoBlockOptionsLUKS: */
    bool has_key_secret;
    char *key_secret;
    /* Own members: */
    bool has_cipher_alg;
    QCryptoCipherAlgorithm cipher_alg;
    bool has_cipher_mode;
    QCryptoCipherMode cipher_mode;
    bool has_ivgen_alg;
    QCryptoIVGenAlgorithm ivgen_alg;
    bool has_ivgen_hash_alg;
    QCryptoHashAlgorithm ivgen_hash_alg;
    bool has_hash_alg;
    QCryptoHashAlgorithm hash_alg;
    bool has_iter_time;
    int64_t iter_time;
};

struct QCryptoBlockCreateOptions {
    /* Members inherited from QCryptoBlockOptionsBase: */
    QCryptoBlockFormat format;
    /* Own members: */
    union { /* union tag is @format */
        QCryptoBlockOptionsQCow qcow;
        QCryptoBlockCreateOptionsLUKS luks;
    } u;
};

static inline QCryptoBlockOptionsBase *qapi_QCryptoBlockCreateOptions_base(const QCryptoBlockCreateOptions *obj)
{
    return (QCryptoBlockOptionsBase *)obj;
}

void qapi_free_QCryptoBlockCreateOptions(QCryptoBlockCreateOptions *obj);

static inline QCryptoBlockOptionsLUKS *qapi_QCryptoBlockCreateOptionsLUKS_base(const QCryptoBlockCreateOptionsLUKS *obj)
{
    return (QCryptoBlockOptionsLUKS *)obj;
}

void qapi_free_QCryptoBlockCreateOptionsLUKS(QCryptoBlockCreateOptionsLUKS *obj);

struct QCryptoBlockInfoQCow {
    char qapi_dummy_for_empty_struct;
};

struct QCryptoBlockInfoLUKS {
    QCryptoCipherAlgorithm cipher_alg;
    QCryptoCipherMode cipher_mode;
    QCryptoIVGenAlgorithm ivgen_alg;
    bool has_ivgen_hash_alg;
    QCryptoHashAlgorithm ivgen_hash_alg;
    QCryptoHashAlgorithm hash_alg;
    int64_t payload_offset;
    int64_t master_key_iters;
    char *uuid;
    QCryptoBlockInfoLUKSSlotList *slots;
};

struct QCryptoBlockInfo {
    /* Members inherited from QCryptoBlockInfoBase: */
    QCryptoBlockFormat format;
    /* Own members: */
    union { /* union tag is @format */
        QCryptoBlockInfoQCow qcow;
        QCryptoBlockInfoLUKS luks;
    } u;
};

static inline QCryptoBlockInfoBase *qapi_QCryptoBlockInfo_base(const QCryptoBlockInfo *obj)
{
    return (QCryptoBlockInfoBase *)obj;
}

void qapi_free_QCryptoBlockInfo(QCryptoBlockInfo *obj);

struct QCryptoBlockInfoBase {
    QCryptoBlockFormat format;
};

void qapi_free_QCryptoBlockInfoBase(QCryptoBlockInfoBase *obj);

void qapi_free_QCryptoBlockInfoLUKS(QCryptoBlockInfoLUKS *obj);

struct QCryptoBlockInfoLUKSSlot {
    bool active;
    bool has_iters;
    int64_t iters;
    bool has_stripes;
    int64_t stripes;
    int64_t key_offset;
};

void qapi_free_QCryptoBlockInfoLUKSSlot(QCryptoBlockInfoLUKSSlot *obj);

struct QCryptoBlockInfoLUKSSlotList {
    QCryptoBlockInfoLUKSSlotList *next;
    QCryptoBlockInfoLUKSSlot *value;
};

void qapi_free_QCryptoBlockInfoLUKSSlotList(QCryptoBlockInfoLUKSSlotList *obj);

void qapi_free_QCryptoBlockInfoQCow(QCryptoBlockInfoQCow *obj);

struct QCryptoBlockOptionsLUKS {
    bool has_key_secret;
    char *key_secret;
};

struct QCryptoBlockOpenOptions {
    /* Members inherited from QCryptoBlockOptionsBase: */
    QCryptoBlockFormat format;
    /* Own members: */
    union { /* union tag is @format */
        QCryptoBlockOptionsQCow qcow;
        QCryptoBlockOptionsLUKS luks;
    } u;
};

static inline QCryptoBlockOptionsBase *qapi_QCryptoBlockOpenOptions_base(const QCryptoBlockOpenOptions *obj)
{
    return (QCryptoBlockOptionsBase *)obj;
}

void qapi_free_QCryptoBlockOpenOptions(QCryptoBlockOpenOptions *obj);

struct QCryptoBlockOptionsBase {
    QCryptoBlockFormat format;
};

void qapi_free_QCryptoBlockOptionsBase(QCryptoBlockOptionsBase *obj);

void qapi_free_QCryptoBlockOptionsLUKS(QCryptoBlockOptionsLUKS *obj);

void qapi_free_QCryptoBlockOptionsQCow(QCryptoBlockOptionsQCow *obj);

struct Qcow2OverlapCheckFlags {
    bool has_q_template;
    Qcow2OverlapCheckMode q_template;
    bool has_main_header;
    bool main_header;
    bool has_active_l1;
    bool active_l1;
    bool has_active_l2;
    bool active_l2;
    bool has_refcount_table;
    bool refcount_table;
    bool has_refcount_block;
    bool refcount_block;
    bool has_snapshot_table;
    bool snapshot_table;
    bool has_inactive_l1;
    bool inactive_l1;
    bool has_inactive_l2;
    bool inactive_l2;
};

void qapi_free_Qcow2OverlapCheckFlags(Qcow2OverlapCheckFlags *obj);

struct Qcow2OverlapChecks {
    QType type;
    union { /* union tag is @type */
        Qcow2OverlapCheckFlags flags;
        Qcow2OverlapCheckMode mode;
    } u;
};

void qapi_free_Qcow2OverlapChecks(Qcow2OverlapChecks *obj);

struct RockerOfDpaFlow {
    uint64_t cookie;
    uint64_t hits;
    RockerOfDpaFlowKey *key;
    RockerOfDpaFlowMask *mask;
    RockerOfDpaFlowAction *action;
};

void qapi_free_RockerOfDpaFlow(RockerOfDpaFlow *obj);

struct RockerOfDpaFlowAction {
    bool has_goto_tbl;
    uint32_t goto_tbl;
    bool has_group_id;
    uint32_t group_id;
    bool has_tunnel_lport;
    uint32_t tunnel_lport;
    bool has_vlan_id;
    uint16_t vlan_id;
    bool has_new_vlan_id;
    uint16_t new_vlan_id;
    bool has_out_pport;
    uint32_t out_pport;
};

void qapi_free_RockerOfDpaFlowAction(RockerOfDpaFlowAction *obj);

struct RockerOfDpaFlowKey {
    uint32_t priority;
    uint32_t tbl_id;
    bool has_in_pport;
    uint32_t in_pport;
    bool has_tunnel_id;
    uint32_t tunnel_id;
    bool has_vlan_id;
    uint16_t vlan_id;
    bool has_eth_type;
    uint16_t eth_type;
    bool has_eth_src;
    char *eth_src;
    bool has_eth_dst;
    char *eth_dst;
    bool has_ip_proto;
    uint8_t ip_proto;
    bool has_ip_tos;
    uint8_t ip_tos;
    bool has_ip_dst;
    char *ip_dst;
};

void qapi_free_RockerOfDpaFlowKey(RockerOfDpaFlowKey *obj);

struct RockerOfDpaFlowList {
    RockerOfDpaFlowList *next;
    RockerOfDpaFlow *value;
};

void qapi_free_RockerOfDpaFlowList(RockerOfDpaFlowList *obj);

struct RockerOfDpaFlowMask {
    bool has_in_pport;
    uint32_t in_pport;
    bool has_tunnel_id;
    uint32_t tunnel_id;
    bool has_vlan_id;
    uint16_t vlan_id;
    bool has_eth_src;
    char *eth_src;
    bool has_eth_dst;
    char *eth_dst;
    bool has_ip_proto;
    uint8_t ip_proto;
    bool has_ip_tos;
    uint8_t ip_tos;
};

void qapi_free_RockerOfDpaFlowMask(RockerOfDpaFlowMask *obj);

struct RockerOfDpaGroup {
    uint32_t id;
    uint8_t type;
    bool has_vlan_id;
    uint16_t vlan_id;
    bool has_pport;
    uint32_t pport;
    bool has_index;
    uint32_t index;
    bool has_out_pport;
    uint32_t out_pport;
    bool has_group_id;
    uint32_t group_id;
    bool has_set_vlan_id;
    uint16_t set_vlan_id;
    bool has_pop_vlan;
    uint8_t pop_vlan;
    bool has_group_ids;
    uint32List *group_ids;
    bool has_set_eth_src;
    char *set_eth_src;
    bool has_set_eth_dst;
    char *set_eth_dst;
    bool has_ttl_check;
    uint8_t ttl_check;
};

void qapi_free_RockerOfDpaGroup(RockerOfDpaGroup *obj);

struct RockerOfDpaGroupList {
    RockerOfDpaGroupList *next;
    RockerOfDpaGroup *value;
};

void qapi_free_RockerOfDpaGroupList(RockerOfDpaGroupList *obj);

struct RockerPort {
    char *name;
    bool enabled;
    bool link_up;
    uint32_t speed;
    RockerPortDuplex duplex;
    RockerPortAutoneg autoneg;
};

void qapi_free_RockerPort(RockerPort *obj);

struct RockerPortList {
    RockerPortList *next;
    RockerPort *value;
};

void qapi_free_RockerPortList(RockerPortList *obj);

struct RockerSwitch {
    char *name;
    uint64_t id;
    uint32_t ports;
};

void qapi_free_RockerSwitch(RockerSwitch *obj);

struct RxFilterInfo {
    char *name;
    bool promiscuous;
    RxState multicast;
    RxState unicast;
    RxState vlan;
    bool broadcast_allowed;
    bool multicast_overflow;
    bool unicast_overflow;
    char *main_mac;
    intList *vlan_table;
    strList *unicast_table;
    strList *multicast_table;
};

void qapi_free_RxFilterInfo(RxFilterInfo *obj);

struct RxFilterInfoList {
    RxFilterInfoList *next;
    RxFilterInfo *value;
};

void qapi_free_RxFilterInfoList(RxFilterInfoList *obj);

struct SchemaInfoBuiltin {
    JSONType json_type;
};

struct SchemaInfoEnum {
    strList *values;
};

struct SchemaInfoArray {
    char *element_type;
};

struct SchemaInfoObject {
    SchemaInfoObjectMemberList *members;
    bool has_tag;
    char *tag;
    bool has_variants;
    SchemaInfoObjectVariantList *variants;
};

struct SchemaInfoAlternate {
    SchemaInfoAlternateMemberList *members;
};

struct SchemaInfoCommand {
    char *arg_type;
    char *ret_type;
};

struct SchemaInfoEvent {
    char *arg_type;
};

struct SchemaInfo {
    char *name;
    SchemaMetaType meta_type;
    union { /* union tag is @meta_type */
        SchemaInfoBuiltin builtin;
        SchemaInfoEnum q_enum;
        SchemaInfoArray array;
        SchemaInfoObject object;
        SchemaInfoAlternate alternate;
        SchemaInfoCommand command;
        SchemaInfoEvent event;
    } u;
};

void qapi_free_SchemaInfo(SchemaInfo *obj);

void qapi_free_SchemaInfoAlternate(SchemaInfoAlternate *obj);

struct SchemaInfoAlternateMember {
    char *type;
};

void qapi_free_SchemaInfoAlternateMember(SchemaInfoAlternateMember *obj);

struct SchemaInfoAlternateMemberList {
    SchemaInfoAlternateMemberList *next;
    SchemaInfoAlternateMember *value;
};

void qapi_free_SchemaInfoAlternateMemberList(SchemaInfoAlternateMemberList *obj);

void qapi_free_SchemaInfoArray(SchemaInfoArray *obj);

void qapi_free_SchemaInfoBuiltin(SchemaInfoBuiltin *obj);

void qapi_free_SchemaInfoCommand(SchemaInfoCommand *obj);

void qapi_free_SchemaInfoEnum(SchemaInfoEnum *obj);

void qapi_free_SchemaInfoEvent(SchemaInfoEvent *obj);

struct SchemaInfoList {
    SchemaInfoList *next;
    SchemaInfo *value;
};

void qapi_free_SchemaInfoList(SchemaInfoList *obj);

void qapi_free_SchemaInfoObject(SchemaInfoObject *obj);

struct SchemaInfoObjectMember {
    char *name;
    char *type;
    bool has_q_default;
    QObject *q_default;
};

void qapi_free_SchemaInfoObjectMember(SchemaInfoObjectMember *obj);

struct SchemaInfoObjectMemberList {
    SchemaInfoObjectMemberList *next;
    SchemaInfoObjectMember *value;
};

void qapi_free_SchemaInfoObjectMemberList(SchemaInfoObjectMemberList *obj);

struct SchemaInfoObjectVariant {
    char *q_case;
    char *type;
};

void qapi_free_SchemaInfoObjectVariant(SchemaInfoObjectVariant *obj);

struct SchemaInfoObjectVariantList {
    SchemaInfoObjectVariantList *next;
    SchemaInfoObjectVariant *value;
};

void qapi_free_SchemaInfoObjectVariantList(SchemaInfoObjectVariantList *obj);

struct SnapshotInfo {
    char *id;
    char *name;
    int64_t vm_state_size;
    int64_t date_sec;
    int64_t date_nsec;
    int64_t vm_clock_sec;
    int64_t vm_clock_nsec;
};

void qapi_free_SnapshotInfo(SnapshotInfo *obj);

struct SnapshotInfoList {
    SnapshotInfoList *next;
    SnapshotInfo *value;
};

void qapi_free_SnapshotInfoList(SnapshotInfoList *obj);

struct q_obj_InetSocketAddress_wrapper {
    InetSocketAddress *data;
};

struct q_obj_UnixSocketAddress_wrapper {
    UnixSocketAddress *data;
};

struct q_obj_VsockSocketAddress_wrapper {
    VsockSocketAddress *data;
};

struct q_obj_String_wrapper {
    String *data;
};

struct SocketAddress {
    SocketAddressKind type;
    union { /* union tag is @type */
        q_obj_InetSocketAddress_wrapper inet;
        q_obj_UnixSocketAddress_wrapper q_unix;
        q_obj_VsockSocketAddress_wrapper vsock;
        q_obj_String_wrapper fd;
    } u;
};

void qapi_free_SocketAddress(SocketAddress *obj);

struct SpiceBasicInfo {
    char *host;
    char *port;
    NetworkAddressFamily family;
};

void qapi_free_SpiceBasicInfo(SpiceBasicInfo *obj);

struct SpiceChannel {
    /* Members inherited from SpiceBasicInfo: */
    char *host;
    char *port;
    NetworkAddressFamily family;
    /* Own members: */
    int64_t connection_id;
    int64_t channel_type;
    int64_t channel_id;
    bool tls;
};

static inline SpiceBasicInfo *qapi_SpiceChannel_base(const SpiceChannel *obj)
{
    return (SpiceBasicInfo *)obj;
}

void qapi_free_SpiceChannel(SpiceChannel *obj);

struct SpiceChannelList {
    SpiceChannelList *next;
    SpiceChannel *value;
};

void qapi_free_SpiceChannelList(SpiceChannelList *obj);

struct SpiceInfo {
    bool enabled;
    bool migrated;
    bool has_host;
    char *host;
    bool has_port;
    int64_t port;
    bool has_tls_port;
    int64_t tls_port;
    bool has_auth;
    char *auth;
    bool has_compiled_version;
    char *compiled_version;
    SpiceQueryMouseMode mouse_mode;
    bool has_channels;
    SpiceChannelList *channels;
};

void qapi_free_SpiceInfo(SpiceInfo *obj);

struct SpiceServerInfo {
    /* Members inherited from SpiceBasicInfo: */
    char *host;
    char *port;
    NetworkAddressFamily family;
    /* Own members: */
    bool has_auth;
    char *auth;
};

static inline SpiceBasicInfo *qapi_SpiceServerInfo_base(const SpiceServerInfo *obj)
{
    return (SpiceBasicInfo *)obj;
}

void qapi_free_SpiceServerInfo(SpiceServerInfo *obj);

struct StatusInfo {
    bool running;
    bool singlestep;
    RunState status;
};

void qapi_free_StatusInfo(StatusInfo *obj);

struct String {
    char *str;
};

void qapi_free_String(String *obj);

struct StringList {
    StringList *next;
    String *value;
};

void qapi_free_StringList(StringList *obj);

struct TPMInfo {
    char *id;
    TpmModel model;
    TpmTypeOptions *options;
};

void qapi_free_TPMInfo(TPMInfo *obj);

struct TPMInfoList {
    TPMInfoList *next;
    TPMInfo *value;
};

void qapi_free_TPMInfoList(TPMInfoList *obj);

struct TPMPassthroughOptions {
    bool has_path;
    char *path;
    bool has_cancel_path;
    char *cancel_path;
};

void qapi_free_TPMPassthroughOptions(TPMPassthroughOptions *obj);

struct TargetInfo {
    char *arch;
};

void qapi_free_TargetInfo(TargetInfo *obj);

struct TpmModelList {
    TpmModelList *next;
    TpmModel value;
};

void qapi_free_TpmModelList(TpmModelList *obj);

struct TpmTypeList {
    TpmTypeList *next;
    TpmType value;
};

void qapi_free_TpmTypeList(TpmTypeList *obj);

struct q_obj_TPMPassthroughOptions_wrapper {
    TPMPassthroughOptions *data;
};

struct TpmTypeOptions {
    TpmTypeOptionsKind type;
    union { /* union tag is @type */
        q_obj_TPMPassthroughOptions_wrapper passthrough;
    } u;
};

void qapi_free_TpmTypeOptions(TpmTypeOptions *obj);

struct TraceEventInfo {
    char *name;
    TraceEventState state;
    bool vcpu;
};

void qapi_free_TraceEventInfo(TraceEventInfo *obj);

struct TraceEventInfoList {
    TraceEventInfoList *next;
    TraceEventInfo *value;
};

void qapi_free_TraceEventInfoList(TraceEventInfoList *obj);

struct q_obj_BlockdevSnapshot_wrapper {
    BlockdevSnapshot *data;
};

struct q_obj_BlockdevSnapshotSync_wrapper {
    BlockdevSnapshotSync *data;
};

struct q_obj_DriveBackup_wrapper {
    DriveBackup *data;
};

struct q_obj_BlockdevBackup_wrapper {
    BlockdevBackup *data;
};

struct q_obj_Abort_wrapper {
    Abort *data;
};

struct q_obj_BlockdevSnapshotInternal_wrapper {
    BlockdevSnapshotInternal *data;
};

struct q_obj_BlockDirtyBitmapAdd_wrapper {
    BlockDirtyBitmapAdd *data;
};

struct q_obj_BlockDirtyBitmap_wrapper {
    BlockDirtyBitmap *data;
};

struct TransactionAction {
    TransactionActionKind type;
    union { /* union tag is @type */
        q_obj_BlockdevSnapshot_wrapper blockdev_snapshot;
        q_obj_BlockdevSnapshotSync_wrapper blockdev_snapshot_sync;
        q_obj_DriveBackup_wrapper drive_backup;
        q_obj_BlockdevBackup_wrapper blockdev_backup;
        q_obj_Abort_wrapper abort;
        q_obj_BlockdevSnapshotInternal_wrapper blockdev_snapshot_internal_sync;
        q_obj_BlockDirtyBitmapAdd_wrapper block_dirty_bitmap_add;
        q_obj_BlockDirtyBitmap_wrapper block_dirty_bitmap_clear;
    } u;
};

void qapi_free_TransactionAction(TransactionAction *obj);

struct TransactionActionList {
    TransactionActionList *next;
    TransactionAction *value;
};

void qapi_free_TransactionActionList(TransactionActionList *obj);

struct TransactionProperties {
    bool has_completion_mode;
    ActionCompletionMode completion_mode;
};

void qapi_free_TransactionProperties(TransactionProperties *obj);

void qapi_free_UnixSocketAddress(UnixSocketAddress *obj);

struct UuidInfo {
    char *UUID;
};

void qapi_free_UuidInfo(UuidInfo *obj);

struct VersionInfo {
    VersionTriple *qemu;
    char *package;
};

void qapi_free_VersionInfo(VersionInfo *obj);

struct VersionTriple {
    int64_t major;
    int64_t minor;
    int64_t micro;
};

void qapi_free_VersionTriple(VersionTriple *obj);

struct VncBasicInfo {
    char *host;
    char *service;
    NetworkAddressFamily family;
    bool websocket;
};

void qapi_free_VncBasicInfo(VncBasicInfo *obj);

struct VncBasicInfoList {
    VncBasicInfoList *next;
    VncBasicInfo *value;
};

void qapi_free_VncBasicInfoList(VncBasicInfoList *obj);

struct VncClientInfo {
    /* Members inherited from VncBasicInfo: */
    char *host;
    char *service;
    NetworkAddressFamily family;
    bool websocket;
    /* Own members: */
    bool has_x509_dname;
    char *x509_dname;
    bool has_sasl_username;
    char *sasl_username;
};

static inline VncBasicInfo *qapi_VncClientInfo_base(const VncClientInfo *obj)
{
    return (VncBasicInfo *)obj;
}

void qapi_free_VncClientInfo(VncClientInfo *obj);

struct VncClientInfoList {
    VncClientInfoList *next;
    VncClientInfo *value;
};

void qapi_free_VncClientInfoList(VncClientInfoList *obj);

struct VncInfo {
    bool enabled;
    bool has_host;
    char *host;
    bool has_family;
    NetworkAddressFamily family;
    bool has_service;
    char *service;
    bool has_auth;
    char *auth;
    bool has_clients;
    VncClientInfoList *clients;
};

void qapi_free_VncInfo(VncInfo *obj);

struct VncInfo2 {
    char *id;
    VncBasicInfoList *server;
    VncClientInfoList *clients;
    VncPrimaryAuth auth;
    bool has_vencrypt;
    VncVencryptSubAuth vencrypt;
    bool has_display;
    char *display;
};

void qapi_free_VncInfo2(VncInfo2 *obj);

struct VncInfo2List {
    VncInfo2List *next;
    VncInfo2 *value;
};

void qapi_free_VncInfo2List(VncInfo2List *obj);

struct VncServerInfo {
    /* Members inherited from VncBasicInfo: */
    char *host;
    char *service;
    NetworkAddressFamily family;
    bool websocket;
    /* Own members: */
    bool has_auth;
    char *auth;
};

static inline VncBasicInfo *qapi_VncServerInfo_base(const VncServerInfo *obj)
{
    return (VncBasicInfo *)obj;
}

void qapi_free_VncServerInfo(VncServerInfo *obj);

struct VsockSocketAddress {
    char *cid;
    char *port;
};

void qapi_free_VsockSocketAddress(VsockSocketAddress *obj);

struct X86CPUFeatureWordInfo {
    int64_t cpuid_input_eax;
    bool has_cpuid_input_ecx;
    int64_t cpuid_input_ecx;
    X86CPURegister32 cpuid_register;
    int64_t features;
};

void qapi_free_X86CPUFeatureWordInfo(X86CPUFeatureWordInfo *obj);

struct X86CPUFeatureWordInfoList {
    X86CPUFeatureWordInfoList *next;
    X86CPUFeatureWordInfo *value;
};

void qapi_free_X86CPUFeatureWordInfoList(X86CPUFeatureWordInfoList *obj);

struct XBZRLECacheStats {
    int64_t cache_size;
    int64_t bytes;
    int64_t pages;
    int64_t cache_miss;
    double cache_miss_rate;
    int64_t overflow;
};

void qapi_free_XBZRLECacheStats(XBZRLECacheStats *obj);

struct q_obj_ACPI_DEVICE_OST_arg {
    ACPIOSTInfo *info;
};

struct q_obj_BALLOON_CHANGE_arg {
    int64_t actual;
};

struct q_obj_BLOCK_IMAGE_CORRUPTED_arg {
    char *device;
    bool has_node_name;
    char *node_name;
    char *msg;
    bool has_offset;
    int64_t offset;
    bool has_size;
    int64_t size;
    bool fatal;
};

struct q_obj_BLOCK_IO_ERROR_arg {
    char *device;
    char *node_name;
    IoOperationType operation;
    BlockErrorAction action;
    bool has_nospace;
    bool nospace;
    char *reason;
};

struct q_obj_BLOCK_JOB_CANCELLED_arg {
    BlockJobType type;
    char *device;
    int64_t len;
    int64_t offset;
    int64_t speed;
};

struct q_obj_BLOCK_JOB_COMPLETED_arg {
    BlockJobType type;
    char *device;
    int64_t len;
    int64_t offset;
    int64_t speed;
    bool has_error;
    char *error;
};

struct q_obj_BLOCK_JOB_ERROR_arg {
    char *device;
    IoOperationType operation;
    BlockErrorAction action;
};

struct q_obj_BLOCK_JOB_READY_arg {
    BlockJobType type;
    char *device;
    int64_t len;
    int64_t offset;
    int64_t speed;
};

struct q_obj_BLOCK_WRITE_THRESHOLD_arg {
    char *node_name;
    uint64_t amount_exceeded;
    uint64_t write_threshold;
};

struct q_obj_BlockdevOptions_base {
    BlockdevDriver driver;
    bool has_node_name;
    char *node_name;
    bool has_discard;
    BlockdevDiscardOptions discard;
    bool has_cache;
    BlockdevCacheOptions *cache;
    bool has_read_only;
    bool read_only;
    bool has_detect_zeroes;
    BlockdevDetectZeroesOptions detect_zeroes;
};

struct q_obj_CpuInfo_base {
    int64_t CPU;
    bool current;
    bool halted;
    char *qom_path;
    int64_t thread_id;
    CpuInfoArch arch;
};

struct q_obj_DEVICE_DELETED_arg {
    bool has_device;
    char *device;
    char *path;
};

struct q_obj_DEVICE_TRAY_MOVED_arg {
    char *device;
    char *id;
    bool tray_open;
};

struct q_obj_DUMP_COMPLETED_arg {
    DumpQueryResult *result;
    bool has_error;
    char *error;
};

struct q_obj_GUEST_PANICKED_arg {
    GuestPanicAction action;
};

struct q_obj_GlusterServer_base {
    GlusterTransport type;
};

struct q_obj_MEM_UNPLUG_ERROR_arg {
    char *device;
    char *msg;
};

struct q_obj_MIGRATION_arg {
    MigrationStatus status;
};

struct q_obj_MIGRATION_PASS_arg {
    int64_t pass;
};

struct q_obj_NIC_RX_FILTER_CHANGED_arg {
    bool has_name;
    char *name;
    char *path;
};

struct q_obj_Netdev_base {
    char *id;
    NetClientDriver type;
};

struct q_obj_QUORUM_FAILURE_arg {
    char *reference;
    int64_t sector_num;
    int64_t sectors_count;
};

struct q_obj_QUORUM_REPORT_BAD_arg {
    QuorumOpType type;
    bool has_error;
    char *error;
    char *node_name;
    int64_t sector_num;
    int64_t sectors_count;
};

struct q_obj_RTC_CHANGE_arg {
    int64_t offset;
};

struct q_obj_SPICE_CONNECTED_arg {
    SpiceBasicInfo *server;
    SpiceBasicInfo *client;
};

struct q_obj_SPICE_DISCONNECTED_arg {
    SpiceBasicInfo *server;
    SpiceBasicInfo *client;
};

struct q_obj_SPICE_INITIALIZED_arg {
    SpiceServerInfo *server;
    SpiceChannel *client;
};

struct q_obj_SchemaInfo_base {
    char *name;
    SchemaMetaType meta_type;
};

struct q_obj_VNC_CONNECTED_arg {
    VncServerInfo *server;
    VncBasicInfo *client;
};

struct q_obj_VNC_DISCONNECTED_arg {
    VncServerInfo *server;
    VncClientInfo *client;
};

struct q_obj_VNC_INITIALIZED_arg {
    VncServerInfo *server;
    VncClientInfo *client;
};

struct q_obj_VSERPORT_CHANGE_arg {
    char *id;
    bool open;
};

struct q_obj_WATCHDOG_arg {
    WatchdogExpirationAction action;
};

struct q_obj_add_fd_arg {
    bool has_fdset_id;
    int64_t fdset_id;
    bool has_opaque;
    char *opaque;
};

struct q_obj_add_client_arg {
    char *protocol;
    char *fdname;
    bool has_skipauth;
    bool skipauth;
    bool has_tls;
    bool tls;
};

struct q_obj_balloon_arg {
    int64_t value;
};

struct q_obj_block_commit_arg {
    bool has_job_id;
    char *job_id;
    char *device;
    bool has_base;
    char *base;
    bool has_top;
    char *top;
    bool has_backing_file;
    char *backing_file;
    bool has_speed;
    int64_t speed;
};

struct q_obj_block_job_cancel_arg {
    char *device;
    bool has_force;
    bool force;
};

struct q_obj_block_job_complete_arg {
    char *device;
};

struct q_obj_block_job_pause_arg {
    char *device;
};

struct q_obj_block_job_resume_arg {
    char *device;
};

struct q_obj_block_job_set_speed_arg {
    char *device;
    int64_t speed;
};

struct q_obj_block_set_write_threshold_arg {
    char *node_name;
    uint64_t write_threshold;
};

struct q_obj_block_stream_arg {
    bool has_job_id;
    char *job_id;
    char *device;
    bool has_base;
    char *base;
    bool has_base_node;
    char *base_node;
    bool has_backing_file;
    char *backing_file;
    bool has_speed;
    int64_t speed;
    bool has_on_error;
    BlockdevOnError on_error;
};

struct q_obj_block_passwd_arg {
    bool has_device;
    char *device;
    bool has_node_name;
    char *node_name;
    char *password;
};

struct q_obj_block_resize_arg {
    bool has_device;
    char *device;
    bool has_node_name;
    char *node_name;
    int64_t size;
};

struct q_obj_blockdev_change_medium_arg {
    bool has_device;
    char *device;
    bool has_id;
    char *id;
    char *filename;
    bool has_format;
    char *format;
    bool has_read_only_mode;
    BlockdevChangeReadOnlyMode read_only_mode;
};

struct q_obj_blockdev_close_tray_arg {
    bool has_device;
    char *device;
    bool has_id;
    char *id;
};

struct q_obj_blockdev_mirror_arg {
    bool has_job_id;
    char *job_id;
    char *device;
    char *target;
    bool has_replaces;
    char *replaces;
    MirrorSyncMode sync;
    bool has_speed;
    int64_t speed;
    bool has_granularity;
    uint32_t granularity;
    bool has_buf_size;
    int64_t buf_size;
    bool has_on_source_error;
    BlockdevOnError on_source_error;
    bool has_on_target_error;
    BlockdevOnError on_target_error;
};

struct q_obj_blockdev_open_tray_arg {
    bool has_device;
    char *device;
    bool has_id;
    char *id;
    bool has_force;
    bool force;
};

struct q_obj_blockdev_snapshot_delete_internal_sync_arg {
    char *device;
    bool has_id;
    char *id;
    bool has_name;
    char *name;
};

struct q_obj_change_arg {
    char *device;
    char *target;
    bool has_arg;
    char *arg;
};

struct q_obj_change_backing_file_arg {
    char *device;
    char *image_node_name;
    char *backing_file;
};

struct q_obj_change_vnc_password_arg {
    char *password;
};

struct q_obj_chardev_add_arg {
    char *id;
    ChardevBackend *backend;
};

struct q_obj_chardev_remove_arg {
    char *id;
};

struct q_obj_client_migrate_info_arg {
    char *protocol;
    char *hostname;
    bool has_port;
    int64_t port;
    bool has_tls_port;
    int64_t tls_port;
    bool has_cert_subject;
    char *cert_subject;
};

struct q_obj_closefd_arg {
    char *fdname;
};

struct q_obj_cpu_add_arg {
    int64_t id;
};

struct q_obj_cpu_arg {
    int64_t index;
};

struct q_obj_device_list_properties_arg {
    char *q_typename;
};

struct q_obj_device_add_arg {
    char *driver;
    char *id;
};

struct q_obj_device_del_arg {
    char *id;
};

struct q_obj_dump_guest_memory_arg {
    bool paging;
    char *protocol;
    bool has_detach;
    bool detach;
    bool has_begin;
    int64_t begin;
    bool has_length;
    int64_t length;
    bool has_format;
    DumpGuestMemoryFormat format;
};

struct q_obj_dump_skeys_arg {
    char *filename;
};

struct q_obj_eject_arg {
    bool has_device;
    char *device;
    bool has_id;
    char *id;
    bool has_force;
    bool force;
};

struct q_obj_expire_password_arg {
    char *protocol;
    char *time;
};

struct q_obj_getfd_arg {
    char *fdname;
};

struct q_obj_human_monitor_command_arg {
    char *command_line;
    bool has_cpu_index;
    int64_t cpu_index;
};

struct q_obj_input_send_event_arg {
    bool has_device;
    char *device;
    bool has_head;
    int64_t head;
    InputEventList *events;
};

struct q_obj_memsave_arg {
    int64_t val;
    int64_t size;
    char *filename;
    bool has_cpu_index;
    int64_t cpu_index;
};

struct q_obj_migrate_arg {
    char *uri;
    bool has_blk;
    bool blk;
    bool has_inc;
    bool inc;
    bool has_detach;
    bool detach;
};

struct q_obj_migrate_incoming_arg {
    char *uri;
};

struct q_obj_migrate_set_cache_size_arg {
    int64_t value;
};

struct q_obj_migrate_set_capabilities_arg {
    MigrationCapabilityStatusList *capabilities;
};

struct q_obj_migrate_set_downtime_arg {
    double value;
};

struct q_obj_migrate_set_speed_arg {
    int64_t value;
};

struct q_obj_nbd_server_add_arg {
    char *device;
    bool has_writable;
    bool writable;
};

struct q_obj_nbd_server_start_arg {
    SocketAddress *addr;
    bool has_tls_creds;
    char *tls_creds;
};

struct q_obj_netdev_add_arg {
    char *type;
    char *id;
};

struct q_obj_netdev_del_arg {
    char *id;
};

struct q_obj_object_add_arg {
    char *qom_type;
    char *id;
    bool has_props;
    QObject *props;
};

struct q_obj_object_del_arg {
    char *id;
};

struct q_obj_pmemsave_arg {
    int64_t val;
    int64_t size;
    char *filename;
};

struct q_obj_qom_get_arg {
    char *path;
    char *property;
};

struct q_obj_qom_list_arg {
    char *path;
};

struct q_obj_qom_list_types_arg {
    bool has_implements;
    char *implements;
    bool has_abstract;
    bool abstract;
};

struct q_obj_qom_set_arg {
    char *path;
    char *property;
    QObject *value;
};

struct q_obj_query_blockstats_arg {
    bool has_query_nodes;
    bool query_nodes;
};

struct q_obj_query_command_line_options_arg {
    bool has_option;
    char *option;
};

struct q_obj_query_cpu_model_baseline_arg {
    CpuModelInfo *modela;
    CpuModelInfo *modelb;
};

struct q_obj_query_cpu_model_comparison_arg {
    CpuModelInfo *modela;
    CpuModelInfo *modelb;
};

struct q_obj_query_cpu_model_expansion_arg {
    CpuModelExpansionType type;
    CpuModelInfo *model;
};

struct q_obj_query_rocker_arg {
    char *name;
};

struct q_obj_query_rocker_of_dpa_flows_arg {
    char *name;
    bool has_tbl_id;
    uint32_t tbl_id;
};

struct q_obj_query_rocker_of_dpa_groups_arg {
    char *name;
    bool has_type;
    uint8_t type;
};

struct q_obj_query_rocker_ports_arg {
    char *name;
};

struct q_obj_query_rx_filter_arg {
    bool has_name;
    char *name;
};

struct q_obj_remove_fd_arg {
    int64_t fdset_id;
    bool has_fd;
    int64_t fd;
};

struct q_obj_ringbuf_read_arg {
    char *device;
    int64_t size;
    bool has_format;
    DataFormat format;
};

struct q_obj_ringbuf_write_arg {
    char *device;
    char *data;
    bool has_format;
    DataFormat format;
};

struct q_obj_screendump_arg {
    char *filename;
};

struct q_obj_send_key_arg {
    KeyValueList *keys;
    bool has_hold_time;
    int64_t hold_time;
};

struct q_obj_set_link_arg {
    char *name;
    bool up;
};

struct q_obj_set_password_arg {
    char *protocol;
    char *password;
    bool has_connected;
    char *connected;
};

struct q_obj_trace_event_get_state_arg {
    char *name;
    bool has_vcpu;
    int64_t vcpu;
};

struct q_obj_trace_event_set_state_arg {
    char *name;
    bool enable;
    bool has_ignore_unavailable;
    bool ignore_unavailable;
    bool has_vcpu;
    int64_t vcpu;
};

struct q_obj_transaction_arg {
    TransactionActionList *actions;
    bool has_properties;
    TransactionProperties *properties;
};

struct q_obj_x_blockdev_change_arg {
    char *parent;
    bool has_child;
    char *child;
    bool has_node;
    char *node;
};

struct q_obj_x_blockdev_del_arg {
    char *node_name;
};

struct q_obj_x_blockdev_insert_medium_arg {
    bool has_device;
    char *device;
    bool has_id;
    char *id;
    char *node_name;
};

struct q_obj_x_blockdev_remove_medium_arg {
    bool has_device;
    char *device;
    bool has_id;
    char *id;
};

struct q_obj_xen_load_devices_state_arg {
    char *filename;
};

struct q_obj_xen_save_devices_state_arg {
    char *filename;
};

struct q_obj_xen_set_global_dirty_log_arg {
    bool enable;
};

#endif
