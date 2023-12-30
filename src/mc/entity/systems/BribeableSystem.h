#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BribeableSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BribeableSystem& operator=(BribeableSystem const&);
    BribeableSystem(BribeableSystem const&);
    BribeableSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BribeableSystem@@UEAA@XZ
    virtual ~BribeableSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@BribeableSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
