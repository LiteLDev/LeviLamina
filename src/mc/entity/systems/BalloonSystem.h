#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BalloonSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BalloonSystem& operator=(BalloonSystem const&) = delete;
    BalloonSystem(BalloonSystem const&)            = delete;
    BalloonSystem()                                = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@BalloonSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
