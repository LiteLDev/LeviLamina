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
    // symbol: ??0GameEventDynamicRegistration@@QEAA@V?$shared_ptr@VGameEventListener@@@std@@@Z
    MCAPI explicit GameEventDynamicRegistration(std::shared_ptr<class GameEventListener> listener);

    // symbol:
    // ?onActorLoadedIntoChunk@GameEventDynamicRegistration@@QEAAXAEBVBlockSource@@VChunkPos@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI void
    onActorLoadedIntoChunk(class BlockSource const& region, class ChunkPos chunkPos, DimensionType dimensionId);

    // symbol:
    // ?onActorMovedBetweenChunks@GameEventDynamicRegistration@@QEAAXAEBVBlockSource@@VChunkPos@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI void onActorMovedBetweenChunks(class BlockSource const& region, class ChunkPos, DimensionType);

    // symbol: ?onActorRemoved@GameEventDynamicRegistration@@QEAAXXZ
    MCAPI void onActorRemoved();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_onActorChangedChunk@GameEventDynamicRegistration@@AEAAXAEBVBlockSource@@VChunkPos@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI void _onActorChangedChunk(class BlockSource const& region, class ChunkPos, DimensionType);

    // NOLINTEND
};
