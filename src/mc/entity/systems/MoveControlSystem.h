#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class MoveControlSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    MoveControlSystem& operator=(MoveControlSystem const&);
    MoveControlSystem(MoveControlSystem const&);
    MoveControlSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveControlSystem@@UEAA@XZ
    virtual ~MoveControlSystem() = default;

    // vIndex: 2, symbol: ?tick@MoveControlSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
