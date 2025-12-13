#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/BiomeIdType.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/ScalarOptional.h"

// auto generated forward declare list
// clang-format off
class BlendingData;
class ChunkBlender;
class ChunkSource;
namespace ChunkBlenderUtil { struct AttenuationData; }
// clang-format on

class ChunkBlenderFactory {
public:
    // ChunkBlenderFactory inner types declare
    // clang-format off
    struct BlendCheckEntry;
    struct IntermediateAttenuationData;
    // clang-format on

    // ChunkBlenderFactory inner types define
    struct IntermediateAttenuationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                                               mDistanceToBlendTarget;
        ::ll::TypedStorage<4, 4, float>                                               mWeightedHeight;
        ::ll::TypedStorage<4, 4, float>                                               mTotalHeightWeight;
        ::ll::TypedStorage<4, 4, float>                                               mTotalDensityWeight;
        ::ll::TypedStorage<4, 164, ::std::array<::ScalarOptional<float>, 41>>         mWeightedDensities;
        ::ll::TypedStorage<1, 41, ::std::array<::ScalarOptional<schar>, 41>>          mBlockTypeWeights;
        ::ll::TypedStorage<2, 192, ::std::array<::ScalarOptional<::BiomeIdType>, 96>> mBiome;
        ::ll::TypedStorage<1, 1, bool>                                                mHaveBlockTypes;
        ::ll::TypedStorage<1, 1, bool>                                                mSyncPoint;
        // NOLINTEND
    };

    struct BlendCheckEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ChunkPos> checkPosition;
        ::ll::TypedStorage<1, 1, bool>       adjacentChunk;
        // NOLINTEND
    };

    using ChunkIntermediateAttenuationData =
        ::std::vector<::std::array<::ChunkBlenderFactory::IntermediateAttenuationData, 4>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::shared_ptr<::ChunkBlender>>> mAttenuatorCache;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mAttenuatorSharedMutex;
    ::ll::TypedStorage<1, 1, bool const>          mIsClientSide;
    ::ll::TypedStorage<8, 8, ::ChunkSource*>      mChunkSource;
    ::ll::TypedStorage<2, 2, short const>         mDimensionMinHeight;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::ChunkBlender> _createChunkBlendingAttenuator(::ChunkPos const& lcPosition) const;

    MCAPI ::std::vector<::std::array<::ChunkBlenderUtil::AttenuationData, 4>> _finalizeChunkAttenuationData(
        ::std::vector<::std::array<::ChunkBlenderFactory::IntermediateAttenuationData, 4>> const&
            chunkIntermediateAttenuationData
    ) const;

    MCAPI void _updateIntermediateAttenuationData(
        ::std::vector<::std::array<::ChunkBlenderFactory::IntermediateAttenuationData, 4>>&
                              chunkIntermediateAttenuationData,
        ::ChunkPos const&     oldChunkPosition,
        ::ChunkPos const&     newChunkPosition,
        ::BlendingData const& blendingData,
        bool                  adjacentChunk
    ) const;

    MCAPI ::std::shared_ptr<::ChunkBlender> getOrCreateChunkBlender(::ChunkPos const& lcPosition);
    // NOLINTEND
};
