#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

class GameEventDynamicRegistration {
public:
    // prevent constructor by default
    GameEventDynamicRegistration& operator=(GameEventDynamicRegistration const&);
    GameEventDynamicRegistration(GameEventDynamicRegistration const&);
    GameEventDynamicRegistration();

public:
    // NOLINTBEGIN
    MCAPI explicit GameEventDynamicRegistration(std::shared_ptr<class GameEventListener> listener);

    MCAPI void
    onActorLoadedIntoChunk(class BlockSource const& region, class ChunkPos chunkPos, DimensionType dimensionId);

    MCAPI void
    onActorMovedBetweenChunks(class BlockSource const& region, class ChunkPos toChunkPos, DimensionType toDimensionId);

    MCAPI void onActorRemoved();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _onActorChangedChunk(class BlockSource const& region, class ChunkPos toChunkPos, DimensionType toDimensionId);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::shared_ptr<class GameEventListener> listener);

    // NOLINTEND
};
