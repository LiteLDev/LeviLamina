#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AttackCooldownSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AttackCooldownSystem& operator=(AttackCooldownSystem const&);
    AttackCooldownSystem(AttackCooldownSystem const&);
    AttackCooldownSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AttackCooldownSystem@@UEAA@XZ
    virtual ~AttackCooldownSystem() = default;

    // vIndex: 2, symbol: ?tick@AttackCooldownSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
