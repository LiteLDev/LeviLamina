#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class OutOfWorldSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    OutOfWorldSystem& operator=(OutOfWorldSystem const&);
    OutOfWorldSystem(OutOfWorldSystem const&);
    OutOfWorldSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OutOfWorldSystem@@UEAA@XZ
    virtual ~OutOfWorldSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@OutOfWorldSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
