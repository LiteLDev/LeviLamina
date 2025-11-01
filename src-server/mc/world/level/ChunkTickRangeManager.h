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
// clang-format on

class ChunkTickRangeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkLoaded;
    ::ll::TypedStorage<4, 4, uint> mChunkTickRange;
    ::ll::TypedStorage<4, 4, uint> mMaxSimRadiusInChunks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onChunkLoaded(::ChunkSource&, ::LevelChunk& levelChunk, int closestPlayerDistanceSquared);

    MCNAPI bool isChunkInTickRange(::LevelChunk const& lc, ::std::optional<int> minDistToPlayer) const;

    MCNAPI bool isChunkInTickRange(::ChunkPos const& chunkPos, ::Dimension const& dimension, bool shouldServerGenerate, float serverBuildRatio, int chunkViewRadius, int numActiveUsers) const;

    MCNAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);
    // NOLINTEND

};
