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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~AttackCooldownSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@AttackCooldownSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
