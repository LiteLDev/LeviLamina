#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class DespawnSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    DespawnSystem& operator=(DespawnSystem const&);
    DespawnSystem(DespawnSystem const&);
    DespawnSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DespawnSystem@@UEAA@XZ
    virtual ~DespawnSystem() = default;

    // vIndex: 2, symbol: ?tick@DespawnSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@DespawnSystem@@CAXAEAVActorOwnerComponent@@AEAVDespawnComponent@@@Z
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class DespawnComponent&);

    // NOLINTEND
};
