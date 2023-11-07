#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class PeekSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    PeekSystem& operator=(PeekSystem const&);
    PeekSystem(PeekSystem const&);
    PeekSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PeekSystem@@UEAA@XZ
    virtual ~PeekSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@PeekSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
