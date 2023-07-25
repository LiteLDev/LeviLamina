#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GoalSelectorSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOALSELECTORSYSTEM
public:
    GoalSelectorSystem& operator=(GoalSelectorSystem const&) = delete;
    GoalSelectorSystem(GoalSelectorSystem const&)            = delete;
    GoalSelectorSystem()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@GoalSelectorSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);

    // private:
    /**
     * @symbol ?_tickGoalSelectorComponent\@GoalSelectorSystem\@\@CAXAEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tickGoalSelectorComponent(class ActorOwnerComponent&);

private:
};
