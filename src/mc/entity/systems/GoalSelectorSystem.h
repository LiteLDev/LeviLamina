#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GoalSelectorSystem {

public:
    // prevent constructor by default
    GoalSelectorSystem& operator=(GoalSelectorSystem const&) = delete;
    GoalSelectorSystem(GoalSelectorSystem const&)            = delete;
    GoalSelectorSystem()                                     = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_tickGoalSelectorComponent\@GoalSelectorSystem\@\@CAXAEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tickGoalSelectorComponent(class ActorOwnerComponent&);
    // NOLINTEND
};
