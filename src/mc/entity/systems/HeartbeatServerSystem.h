#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class HeartbeatServerSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    HeartbeatServerSystem& operator=(HeartbeatServerSystem const&);
    HeartbeatServerSystem(HeartbeatServerSystem const&);
    HeartbeatServerSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HeartbeatServerSystem@@UEAA@XZ
    virtual ~HeartbeatServerSystem() = default;

    // vIndex: 2, symbol: ?tick@HeartbeatServerSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
