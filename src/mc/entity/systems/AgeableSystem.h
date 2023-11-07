#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AgeableSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgeableSystem& operator=(AgeableSystem const&);
    AgeableSystem(AgeableSystem const&);
    AgeableSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~AgeableSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@AgeableSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
