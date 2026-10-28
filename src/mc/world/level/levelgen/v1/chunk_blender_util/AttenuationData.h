#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/DefaultSmallOptionalTraits.h"
#include "mc/deps/core/utility/SmallOptional.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/storage/BlendingBlockType.h"

namespace ChunkBlenderUtil {

struct AttenuationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mDistanceToBlendTarget;
    ::ll::TypedStorage<4, 4, ::Bedrock::SmallOptional<float, ::Bedrock::DefaultSmallOptionalTraits<float>>>
        mBlendTargetHeight;
    ::ll::TypedStorage<
        4,
        164,
        ::std::array<::Bedrock::SmallOptional<float, ::Bedrock::DefaultSmallOptionalTraits<float>>, 41>>
        mBlendTargetDensities;
    ::ll::TypedStorage<
        2,
        192,
        ::std::array<::Bedrock::SmallOptional<::BiomeIdType, ::Bedrock::DefaultSmallOptionalTraits<::BiomeIdType>>, 96>>
        mBiomes;
    ::ll::TypedStorage<
        1,
        41,
        ::std::array<
            ::Bedrock::SmallOptional<::BlendingBlockType, ::Bedrock::DefaultSmallOptionalTraits<::BlendingBlockType>>,
            41>>
        mBorderBlocks;
    // NOLINTEND
};

} // namespace ChunkBlenderUtil
