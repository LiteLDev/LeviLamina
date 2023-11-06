#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

struct DispatcherUpdateSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    DispatcherUpdateSystem& operator=(DispatcherUpdateSystem const&);
    DispatcherUpdateSystem(DispatcherUpdateSystem const&);
    DispatcherUpdateSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DispatcherUpdateSystem();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@DispatcherUpdateSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
