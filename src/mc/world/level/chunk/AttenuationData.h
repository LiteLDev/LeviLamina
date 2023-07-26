#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ChunkBlenderUtil {

struct AttenuationData {

public:
    // prevent constructor by default
    AttenuationData& operator=(AttenuationData const&) = delete;
    AttenuationData(AttenuationData const&)            = delete;
    AttenuationData()                                  = delete;
};

}; // namespace ChunkBlenderUtil
