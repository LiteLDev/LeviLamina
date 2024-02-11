#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class HurtOnConditionSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    HurtOnConditionSystem& operator=(HurtOnConditionSystem const&);
    HurtOnConditionSystem(HurtOnConditionSystem const&);
    HurtOnConditionSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HurtOnConditionSystem@@UEAA@XZ
    virtual ~HurtOnConditionSystem() = default;

    // vIndex: 2, symbol: ?tick@HurtOnConditionSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
