#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
class Dimension;
class ILevelChunkEventManagerConnector;
class LevelChunk;
class LevelSettings;
// clang-format on

class ChunkTickRangeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkLoaded;
    ::ll::TypedStorage<4, 4, uint>                             mChunkTickRange;
    ::ll::TypedStorage<4, 4, uint>                             mMaxSimRadiusInChunks;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkTickRangeManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkTickRangeManager(uint chunkTickRange, uint maxSimRadiusInChunks);

    MCAPI void _onChunkLoaded(::ChunkSource& levelChunk, ::LevelChunk& closestPlayerDistanceSquared, int);

    MCAPI uint getAdjustedChunkTickRange(::LevelSettings const& levelSettings);

    MCAPI bool isChunkInTickRange(::LevelChunk const& lc, ::std::optional<int> minDistToPlayer) const;

    MCAPI bool isChunkInTickRange(
        ::ChunkPos const&  chunkPos,
        ::Dimension const& dimension,
        bool               shouldServerGenerate,
        float              serverBuildRatio,
        int                chunkViewRadius,
        int                numActiveUsers
    ) const;

    MCAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint chunkTickRange, uint maxSimRadiusInChunks);
    // NOLINTEND
};
