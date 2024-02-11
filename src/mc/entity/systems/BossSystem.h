#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BossSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BossSystem& operator=(BossSystem const&);
    BossSystem(BossSystem const&);
    BossSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BossSystem@@UEAA@XZ
    virtual ~BossSystem() = default;

    // vIndex: 2, symbol: ?tick@BossSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
