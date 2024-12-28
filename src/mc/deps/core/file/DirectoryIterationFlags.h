#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

enum class DirectoryIterationFlags : uint64 {
    None                     = 0,
    FullPathName             = 0,
    Name                     = 0,
    FileSize                 = 0,
    Type                     = 0,
    CreateTime               = 0,
    ModifyTime               = 0,
    CreateAndModifyTime      = 0,
    Files                    = 0,
    Directories              = 0,
    FilesAndDirectories      = 0,
    Recursive                = 0,
    TreatFlatFileAsFile      = 0,
    FileSizeAllocationOnDisk = 0,
};

}
