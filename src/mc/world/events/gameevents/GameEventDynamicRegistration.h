#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class GameEventDynamicRegistration {

public:
    // prevent constructor by default
    GameEventDynamicRegistration& operator=(GameEventDynamicRegistration const&) = delete;
    GameEventDynamicRegistration(GameEventDynamicRegistration const&)            = delete;
    GameEventDynamicRegistration()                                               = delete;

public:
    /**
     * @symbol ??0GameEventDynamicRegistration\@\@QEAA\@V?$shared_ptr\@VGameEventListener\@\@\@std\@\@\@Z
     */
    MCAPI GameEventDynamicRegistration(class std::shared_ptr<class GameEventListener>); // NOLINT
    /**
     * @symbol
     * ?onActorLoadedIntoChunk\@GameEventDynamicRegistration\@\@QEAAXAEBVBlockSource\@\@VChunkPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void
    onActorLoadedIntoChunk(class BlockSource const&, class ChunkPos, class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @symbol
     * ?onActorMovedBetweenChunks\@GameEventDynamicRegistration\@\@QEAAXAEBVBlockSource\@\@VChunkPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void
    onActorMovedBetweenChunks(class BlockSource const&, class ChunkPos, class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @symbol ?onActorRemoved\@GameEventDynamicRegistration\@\@QEAAXXZ
     */
    MCAPI void onActorRemoved(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_onActorChangedChunk\@GameEventDynamicRegistration\@\@AEAAXAEBVBlockSource\@\@VChunkPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void
    _onActorChangedChunk(class BlockSource const&, class ChunkPos, class AutomaticID<class Dimension, int>); // NOLINT

private:
};
