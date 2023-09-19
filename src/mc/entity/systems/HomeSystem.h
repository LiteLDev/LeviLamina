#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class HomeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    HomeSystem& operator=(HomeSystem const&);
    HomeSystem(HomeSystem const&);
    HomeSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@HomeSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@HomeSystem@@CAXAEAVActorOwnerComponent@@AEAVHomeComponent@@@Z
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class HomeComponent&);

    // NOLINTEND
};
