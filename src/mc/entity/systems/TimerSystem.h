#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class TimerSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    TimerSystem& operator=(TimerSystem const&);
    TimerSystem(TimerSystem const&);
    TimerSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TimerSystem@@UEAA@XZ
    virtual ~TimerSystem() = default;

    // vIndex: 2, symbol: ?tick@TimerSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
