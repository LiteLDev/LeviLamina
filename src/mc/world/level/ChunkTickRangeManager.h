#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
class Dimension;
class ILevelChunkEventManagerConnector;
class LevelChunk;
// clang-format on

class ChunkTickRangeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkaf70ed;
    ::ll::UntypedStorage<4, 4>  mUnked1b1f;
    ::ll::UntypedStorage<4, 4>  mUnkbfc781;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkTickRangeManager& operator=(ChunkTickRangeManager const&);
    ChunkTickRangeManager(ChunkTickRangeManager const&);
    ChunkTickRangeManager();

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
