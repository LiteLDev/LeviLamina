#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class GroupSizeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    GroupSizeSystem& operator=(GroupSizeSystem const&);
    GroupSizeSystem(GroupSizeSystem const&);
    GroupSizeSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GroupSizeSystem@@UEAA@XZ
    virtual ~GroupSizeSystem() = default;

    // vIndex: 2, symbol: ?tick@GroupSizeSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@GroupSizeSystem@@CAXAEAVActorOwnerComponent@@AEAVGroupSizeComponent@@@Z
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class GroupSizeComponent&);

    // NOLINTEND
};
