/**
 * @file  BlockPosTrackerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockPosTrackerSystem.
 *
 */
class BlockPosTrackerSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPOSTRACKERSYSTEM
public:
    class BlockPosTrackerSystem& operator=(class BlockPosTrackerSystem const &) = delete;
    BlockPosTrackerSystem(class BlockPosTrackerSystem const &) = delete;
    BlockPosTrackerSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockPosTrackerSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@BlockPosTrackerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @symbol  ?_tickBlockPosTrackerComponent\@BlockPosTrackerSystem\@\@SAXAEAVActor\@\@AEAVBlockPosTrackerComponent\@\@\@Z
     */
    MCAPI static void _tickBlockPosTrackerComponent(class Actor &, class BlockPosTrackerComponent &);

};