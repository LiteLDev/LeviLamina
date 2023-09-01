#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class JumpControlSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    JumpControlSystem& operator=(JumpControlSystem const&) = delete;
    JumpControlSystem(JumpControlSystem const&)            = delete;
    JumpControlSystem()                                    = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@JumpControlSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
