#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

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

    MCAPI void onActorMovedBetweenChunks(class BlockSource const& region, class ChunkPos, DimensionType);

    MCAPI void onActorRemoved();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onActorChangedChunk(class BlockSource const& region, class ChunkPos, DimensionType);

    // NOLINTEND
};
