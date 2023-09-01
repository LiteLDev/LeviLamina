#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BlockClimberSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BlockClimberSystem& operator=(BlockClimberSystem const&) = delete;
    BlockClimberSystem(BlockClimberSystem const&)            = delete;
    BlockClimberSystem()                                     = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@BlockClimberSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
