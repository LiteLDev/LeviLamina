#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DBStorageFolderWatcherSnapshotKind : uchar {
    WorldLoad   = 0,
    WorldUpdate = 1,
    WorldExit   = 2,
};
