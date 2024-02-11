#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BreathableSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BreathableSystem& operator=(BreathableSystem const&);
    BreathableSystem(BreathableSystem const&);
    BreathableSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BreathableSystem@@UEAA@XZ
    virtual ~BreathableSystem() = default;

    // vIndex: 2, symbol: ?tick@BreathableSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
