#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/OnFireSystem.h"

class OnFireServerSystem : public ::OnFireSystem {
public:
    // prevent constructor by default
    OnFireServerSystem& operator=(OnFireServerSystem const&);
    OnFireServerSystem(OnFireServerSystem const&);
    OnFireServerSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@OnFireServerSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickServer@OnFireServerSystem@@CAXAEAVEntityContext@@AEAVActorOwnerComponent@@AEAUOnFireComponent@@@Z
    MCAPI static void _tickServer(class EntityContext&, class ActorOwnerComponent&, struct OnFireComponent&);

    // NOLINTEND
};
