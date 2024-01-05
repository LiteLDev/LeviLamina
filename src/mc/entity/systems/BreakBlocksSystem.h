#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BreakBlocksSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BreakBlocksSystem& operator=(BreakBlocksSystem const&);
    BreakBlocksSystem(BreakBlocksSystem const&);
    BreakBlocksSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BreakBlocksSystem@@UEAA@XZ
    virtual ~BreakBlocksSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@BreakBlocksSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@BreakBlocksSystem@@CAXAEAVActorOwnerComponent@@AEAVBreakBlocksComponent@@@Z
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class BreakBlocksComponent& breakBlocksComponent);

    // NOLINTEND
};
