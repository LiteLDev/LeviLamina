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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DamageOverTimeSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@DamageOverTimeSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
