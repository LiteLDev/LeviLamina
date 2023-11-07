#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class InsideBlockNotifierSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    InsideBlockNotifierSystem& operator=(InsideBlockNotifierSystem const&);
    InsideBlockNotifierSystem(InsideBlockNotifierSystem const&);
    InsideBlockNotifierSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InsideBlockNotifierSystem@@UEAA@XZ
    virtual ~InsideBlockNotifierSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@InsideBlockNotifierSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
