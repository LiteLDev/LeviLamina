#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class RailActivatorSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    RailActivatorSystem& operator=(RailActivatorSystem const&);
    RailActivatorSystem(RailActivatorSystem const&);
    RailActivatorSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~RailActivatorSystem();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@RailActivatorSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tickComponent@RailActivatorSystem@@CAXAEAVEntityContext@@AEAVActorOwnerComponent@@AEAVRailActivatorComponent@@@Z
    MCAPI static void _tickComponent(class EntityContext&, class ActorOwnerComponent&, class RailActivatorComponent&);

    // NOLINTEND
};
