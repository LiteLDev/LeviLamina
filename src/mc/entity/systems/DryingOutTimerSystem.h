#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class DryingOutTimerSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    DryingOutTimerSystem& operator=(DryingOutTimerSystem const&);
    DryingOutTimerSystem(DryingOutTimerSystem const&);
    DryingOutTimerSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DryingOutTimerSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@DryingOutTimerSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
