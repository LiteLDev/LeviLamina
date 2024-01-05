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
    // vIndex: 0, symbol: __gen_??1BuoyancySystem@@UEAA@XZ
    virtual ~BuoyancySystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@BuoyancySystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
