#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/BiomeIdType.h"
#include "mc/world/level/ScalarOptional.h"
#include "mc/world/level/storage/BlendingBlockType.h"

namespace ChunkBlenderUtil {

struct AttenuationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mDistanceToBlendTarget;
    ::ll::TypedStorage<4, 4, ::ScalarOptional<float>> mBlendTargetHeight;
    ::ll::TypedStorage<4, 164, ::std::array<::ScalarOptional<float>, 41>> mBlendTargetDensities;
    ::ll::TypedStorage<2, 192, ::std::array<::ScalarOptional<::BiomeIdType>, 96>> mBiomes;
    ::ll::TypedStorage<1, 41, ::std::array<::ScalarOptional<::BlendingBlockType>, 41>> mBorderBlocks;
    // NOLINTEND

};

}
