#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BurnsInDaylightSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BurnsInDaylightSystem& operator=(BurnsInDaylightSystem const&);
    BurnsInDaylightSystem(BurnsInDaylightSystem const&);
    BurnsInDaylightSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BurnsInDaylightSystem@@UEAA@XZ
    virtual ~BurnsInDaylightSystem() = default;

    // vIndex: 2, symbol: ?tick@BurnsInDaylightSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
