/**
 * @file  BreakBlocksSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreakBlocksSystem.
 *
 */
class BreakBlocksSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKBLOCKSSYSTEM
public:
    class BreakBlocksSystem& operator=(class BreakBlocksSystem const &) = delete;
    BreakBlocksSystem(class BreakBlocksSystem const &) = delete;
    BreakBlocksSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BreakBlocksSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@BreakBlocksSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol  ?_tickComponent\@BreakBlocksSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVBreakBlocksComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent &, class BreakBlocksComponent &);

private:

};