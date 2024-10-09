#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

template <typename T0>
class VolumeOf {
public:
    // prevent constructor by default
    VolumeOf& operator=(VolumeOf const&);
    VolumeOf(VolumeOf const&);
    VolumeOf();
};

}; // namespace ClientBlockPipeline
