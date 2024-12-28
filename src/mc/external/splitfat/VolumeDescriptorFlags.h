#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

enum class VolumeDescriptorFlags : uint {
    Default             = 0,
    SingleFileVolume    = 1,
    ScratchBlockSupport = 2,
};

}
