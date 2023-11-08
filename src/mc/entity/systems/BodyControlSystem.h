#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BodyControlSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BodyControlSystem& operator=(BodyControlSystem const&);
    BodyControlSystem(BodyControlSystem const&);
    BodyControlSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BodyControlSystem@@UEAA@XZ
    virtual ~BodyControlSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@BodyControlSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
