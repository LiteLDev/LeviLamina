#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class LeashableSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    LeashableSystem& operator=(LeashableSystem const&);
    LeashableSystem(LeashableSystem const&);
    LeashableSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LeashableSystem@@UEAA@XZ
    virtual ~LeashableSystem() = default;

    // vIndex: 2, symbol: ?tick@LeashableSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
