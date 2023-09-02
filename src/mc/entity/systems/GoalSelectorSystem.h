#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class GoalSelectorSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    GoalSelectorSystem& operator=(GoalSelectorSystem const&) = delete;
    GoalSelectorSystem(GoalSelectorSystem const&)            = delete;
    GoalSelectorSystem()                                     = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@GoalSelectorSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickGoalSelectorComponent@GoalSelectorSystem@@CAXAEAVActorOwnerComponent@@@Z
    MCAPI static void _tickGoalSelectorComponent(class ActorOwnerComponent&);

    // NOLINTEND
};
