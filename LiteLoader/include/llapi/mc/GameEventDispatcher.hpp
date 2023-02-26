/**
 * @file  GameEventDispatcher.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventDispatcher.
 *
 */
class GameEventDispatcher {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTDISPATCHER
public:
    class GameEventDispatcher& operator=(class GameEventDispatcher const &) = delete;
    GameEventDispatcher(class GameEventDispatcher const &) = delete;
    GameEventDispatcher() = delete;
#endif

public:
    /**
     * @symbol  ?post\@GameEventDispatcher\@\@QEAAXAEAVBlockSource\@\@PEAVActor\@\@AEBVGameEvent\@\@AEBVBlockPos\@\@PEBVBlock\@\@\@Z
     */
    MCAPI void post(class BlockSource &, class Actor *, class GameEvent const &, class BlockPos const &, class Block const *);
    /**
     * @symbol  ?post\@GameEventDispatcher\@\@QEAAXAEAVBlockSource\@\@PEAVActor\@\@AEBVGameEvent\@\@AEBVVec3\@\@PEBVBlock\@\@\@Z
     */
    MCAPI void post(class BlockSource &, class Actor *, class GameEvent const &, class Vec3 const &, class Block const *);

};