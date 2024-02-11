#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class TradeableSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    TradeableSystem& operator=(TradeableSystem const&);
    TradeableSystem(TradeableSystem const&);
    TradeableSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TradeableSystem@@UEAA@XZ
    virtual ~TradeableSystem() = default;

    // vIndex: 2, symbol: ?tick@TradeableSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
