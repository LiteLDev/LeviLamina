#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class LookControlSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    LookControlSystem& operator=(LookControlSystem const&);
    LookControlSystem(LookControlSystem const&);
    LookControlSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LookControlSystem@@UEAA@XZ
    virtual ~LookControlSystem() = default;

    // vIndex: 2, symbol: ?tick@LookControlSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
