#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BalloonSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BalloonSystem& operator=(BalloonSystem const&);
    BalloonSystem(BalloonSystem const&);
    BalloonSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BalloonSystem@@UEAA@XZ
    virtual ~BalloonSystem() = default;

    // vIndex: 2, symbol: ?tick@BalloonSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
