#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BuoyancySystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BuoyancySystem& operator=(BuoyancySystem const&);
    BuoyancySystem(BuoyancySystem const&);
    BuoyancySystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BuoyancySystem();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@BuoyancySystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
