#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class DamageOverTimeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    DamageOverTimeSystem& operator=(DamageOverTimeSystem const&);
    DamageOverTimeSystem(DamageOverTimeSystem const&);
    DamageOverTimeSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DamageOverTimeSystem@@UEAA@XZ
    virtual ~DamageOverTimeSystem() = default;

    // vIndex: 2, symbol: ?tick@DamageOverTimeSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
