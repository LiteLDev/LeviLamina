#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AreaAttackSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AreaAttackSystem& operator=(AreaAttackSystem const&);
    AreaAttackSystem(AreaAttackSystem const&);
    AreaAttackSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AreaAttackSystem@@UEAA@XZ
    virtual ~AreaAttackSystem() = default;

    // vIndex: 2, symbol: ?tick@AreaAttackSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@AreaAttackSystem@@CAXAEAVActorOwnerComponent@@AEAVAreaAttackComponent@@@Z
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class AreaAttackComponent&);

    // NOLINTEND
};
