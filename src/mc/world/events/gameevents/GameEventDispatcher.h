#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventDispatcher {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTDISPATCHER
public:
    GameEventDispatcher& operator=(GameEventDispatcher const&) = delete;
    GameEventDispatcher(GameEventDispatcher const&)            = delete;
    GameEventDispatcher()                                      = delete;
#endif

public:
    /**
     * @symbol
     * ?post\@GameEventDispatcher\@\@QEAAXAEAVBlockSource\@\@PEAVActor\@\@AEBVGameEvent\@\@AEBVVec3\@\@PEBVBlock\@\@\@Z
     */
    MCAPI void post(class BlockSource&, class Actor*, class GameEvent const&, class Vec3 const&, class Block const*);
    /**
     * @symbol
     * ?post\@GameEventDispatcher\@\@QEAAXAEAVBlockSource\@\@PEAVActor\@\@AEBVGameEvent\@\@AEBVBlockPos\@\@PEBVBlock\@\@\@Z
     */
    MCAPI void
    post(class BlockSource&, class Actor*, class GameEvent const&, class BlockPos const&, class Block const*);
};
