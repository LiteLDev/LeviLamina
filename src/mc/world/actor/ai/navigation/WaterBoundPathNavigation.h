#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

class WaterBoundPathNavigation : public ::PathNavigation {
public:
    // prevent constructor by default
    WaterBoundPathNavigation& operator=(WaterBoundPathNavigation const&);
    WaterBoundPathNavigation(WaterBoundPathNavigation const&);
    WaterBoundPathNavigation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?initializeInternal@WaterBoundPathNavigation@@UEAAXAEAVMob@@PEAUNavigationDescription@@@Z
    virtual void initializeInternal(class Mob&, struct NavigationDescription*);

    // vIndex: 2, symbol: ?tick@WaterBoundPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void tick(class NavigationComponent&, class Mob&);

    // vIndex: 3, symbol: ?getTempMobPos@WaterBoundPathNavigation@@MEBA?AVVec3@@AEBVMob@@@Z
    virtual class Vec3 getTempMobPos(class Mob const&) const;

    // vIndex: 10, symbol: ?travel@WaterBoundPathNavigation@@MEAA_NAEAVNavigationComponent@@AEAVMob@@AEAM22@Z
    virtual bool travel(class NavigationComponent&, class Mob&, float&, float&, float&);

    // vIndex: 11, symbol: ?canUpdatePath@WaterBoundPathNavigation@@MEBA_NAEBVMob@@@Z
    virtual bool canUpdatePath(class Mob const&) const;

    // vIndex: 12, symbol: ?updatePath@WaterBoundPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void updatePath(class NavigationComponent&, class Mob&);

    // NOLINTEND
};
