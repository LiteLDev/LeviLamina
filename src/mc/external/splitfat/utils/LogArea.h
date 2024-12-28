#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

enum class LogArea : int {
    PhysicalDisk         = 0,
    FatRead              = 1,
    FatWrite             = 2,
    VolumeManager        = 3,
    VirtualDisk          = 4,
    LargeWrites          = 5,
    Transaction          = 6,
    BlockVirtualization  = 7,
    ExternalAreaFile     = 8,
    ExternalAreaPlatform = 9,
    AreasCount           = 10,
};

}
