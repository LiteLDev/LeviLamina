#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BehaviorSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BehaviorSystem& operator=(BehaviorSystem const&);
    BehaviorSystem(BehaviorSystem const&);
    BehaviorSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BehaviorSystem@@UEAA@XZ
    virtual ~BehaviorSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@BehaviorSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
