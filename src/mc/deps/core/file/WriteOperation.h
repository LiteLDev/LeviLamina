#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

enum class WriteOperation : int {
    WriteFile   = 0,
    FlushFile   = 1,
    SetFileSize = 2,
#ifdef LL_PLAT_S
    CreateFileA      = 3,
    DeleteFileA      = 4,
    CreateDirectoryA = 5,
#else // LL_PLAT_C
    CreateFileW      = 3,
    DeleteFileW      = 4,
    CreateDirectoryW = 5,
#endif
    DeleteDirectory            = 6,
    DeleteDirectoryRecursively = 7,
    CleanDirectoryRecursively  = 8,
    RenameFile                 = 9,
    RenameDirectory            = 10,
    Commit                     = 11,
    CommitSaveData             = 12,
    ExtendSaveData             = 13,
    CreateCacheStorage         = 14,
    DeleteCacheStorage         = 15,
    SaveScreenshot             = 16,
    SaveAndShareScreenshot     = 17,
    Mount                      = 18,
    CreateApplicationArea      = 19,
    Flush                      = 20,
    MountCacheStorage          = 21,
};

} // namespace Core
