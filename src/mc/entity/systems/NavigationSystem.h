#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class NavigationSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    NavigationSystem& operator=(NavigationSystem const&);
    NavigationSystem(NavigationSystem const&);
    NavigationSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NavigationSystem@@UEAA@XZ
    virtual ~NavigationSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@NavigationSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
