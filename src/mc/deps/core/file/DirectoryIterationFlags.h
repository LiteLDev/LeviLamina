#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

enum class DirectoryIterationFlags : uint64 {
    // bitfield representation
    None                     = 1ull << 0,
    FullPathName             = 1ull << 1,
    Name                     = 1ull << 2,
    FileSize                 = 1ull << 3,
    Type                     = 1ull << 4,
    CreateTime               = 1ull << 5,
    ModifyTime               = 1ull << 6,
    Files                    = 1ull << 7,
    Directories              = 1ull << 8,
    Recursive                = 1ull << 9,
    TreatFlatFileAsFile      = 1ull << 10,
    FileSizeAllocationOnDisk = 1ull << 11,
    IgnoreLRUCallback        = 1ull << 12,
    CreateAndModifyTime      = CreateTime | ModifyTime,
    FilesAndDirectories      = Files | Directories,
};

}
