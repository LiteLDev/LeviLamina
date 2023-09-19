#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class InstantDespawnSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    InstantDespawnSystem& operator=(InstantDespawnSystem const&);
    InstantDespawnSystem(InstantDespawnSystem const&);
    InstantDespawnSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@InstantDespawnSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // symbol: ?createInstantDespawningPlayerCleanupSystem@InstantDespawnSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createInstantDespawningPlayerCleanupSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@InstantDespawnSystem@@CAXAEAVActorOwnerComponent@@AEAVInstantDespawnComponent@@@Z
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class InstantDespawnComponent&);

    // NOLINTEND
};
