#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class TrailSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    TrailSystem& operator=(TrailSystem const&);
    TrailSystem(TrailSystem const&);
    TrailSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TrailSystem@@UEAA@XZ
    virtual ~TrailSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@TrailSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@TrailSystem@@CAXAEAVActorOwnerComponent@@AEAVTrailComponent@@@Z
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class TrailComponent&);

    // NOLINTEND
};
