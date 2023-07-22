/**
 * @file  GameEventDynamicRegistration.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventDynamicRegistration.
 *
 */
class GameEventDynamicRegistration {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTDYNAMICREGISTRATION
public:
    class GameEventDynamicRegistration& operator=(class GameEventDynamicRegistration const &) = delete;
    GameEventDynamicRegistration(class GameEventDynamicRegistration const &) = delete;
    GameEventDynamicRegistration() = delete;
#endif

public:
    /**
     * @symbol  ??0GameEventDynamicRegistration\@\@QEAA\@V?$shared_ptr\@VGameEventListener\@\@\@std\@\@\@Z
     */
    MCAPI GameEventDynamicRegistration(class std::shared_ptr<class GameEventListener>);
    /**
     * @symbol  ?onActorLoadedIntoChunk\@GameEventDynamicRegistration\@\@QEAAXAEBVBlockSource\@\@VChunkPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void onActorLoadedIntoChunk(class BlockSource const &, class ChunkPos, class AutomaticID<class Dimension, int>);
    /**
     * @symbol  ?onActorMovedBetweenChunks\@GameEventDynamicRegistration\@\@QEAAXAEBVBlockSource\@\@VChunkPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void onActorMovedBetweenChunks(class BlockSource const &, class ChunkPos, class AutomaticID<class Dimension, int>);
    /**
     * @symbol  ?onActorRemoved\@GameEventDynamicRegistration\@\@QEAAXXZ
     */
    MCAPI void onActorRemoved();

//private:
    /**
     * @symbol  ?_onActorChangedChunk\@GameEventDynamicRegistration\@\@AEAAXAEBVBlockSource\@\@VChunkPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void _onActorChangedChunk(class BlockSource const &, class ChunkPos, class AutomaticID<class Dimension, int>);

private:

};