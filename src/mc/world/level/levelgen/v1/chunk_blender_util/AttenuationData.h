#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ChunkBlenderUtil {

struct AttenuationData {
public:
    // prevent constructor by default
    AttenuationData& operator=(AttenuationData const&);
    AttenuationData(AttenuationData const&);
    AttenuationData();
};

}; // namespace ChunkBlenderUtil
