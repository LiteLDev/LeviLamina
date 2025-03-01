#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
class Dimension;
class ILevelChunkEventManagerConnector;
class LevelChunk;
namespace Bedrock::PubSub { class Subscription; }
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
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkTickRangeManager(uint chunkTickRange, uint maxSimRadiusInChunks);

    MCAPI void _onChunkLoaded(::ChunkSource&, ::LevelChunk& levelChunk, int closestPlayerDistanceSquared);

    MCAPI bool isChunkInTickRange(::LevelChunk const& lc, ::std::optional<int> minDistToPlayer) const;

    MCAPI bool isChunkInTickRange(
        ::ChunkPos const&  chunkPos,
        ::Dimension const& dimension,
        bool               serverBuildRatio,
        float              chunkViewRadius,
        int                numActiveUsers,
        int                shouldServerGenerate
    ) const;

    MCAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI ~ChunkTickRangeManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint chunkTickRange, uint maxSimRadiusInChunks);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
