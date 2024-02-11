#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class InteractSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    InteractSystem& operator=(InteractSystem const&);
    InteractSystem(InteractSystem const&);
    InteractSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InteractSystem@@UEAA@XZ
    virtual ~InteractSystem() = default;

    // vIndex: 2, symbol: ?tick@InteractSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
