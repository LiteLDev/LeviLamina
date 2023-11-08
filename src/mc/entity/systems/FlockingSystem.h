#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class FlockingSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    FlockingSystem& operator=(FlockingSystem const&);
    FlockingSystem(FlockingSystem const&);
    FlockingSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FlockingSystem@@UEAA@XZ
    virtual ~FlockingSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@FlockingSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
