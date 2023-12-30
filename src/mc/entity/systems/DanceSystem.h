#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class DanceSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    DanceSystem& operator=(DanceSystem const&);
    DanceSystem(DanceSystem const&);
    DanceSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DanceSystem@@UEAA@XZ
    virtual ~DanceSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@DanceSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
