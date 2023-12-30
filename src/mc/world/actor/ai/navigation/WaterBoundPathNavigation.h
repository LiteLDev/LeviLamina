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
    // vIndex: 0, symbol: __gen_??1WaterBoundPathNavigation@@UEAA@XZ
    virtual ~WaterBoundPathNavigation() = default;

    // vIndex: 1, symbol: ?initializeInternal@WaterBoundPathNavigation@@UEAAXAEAVMob@@PEAUNavigationDescription@@@Z
    virtual void initializeInternal(class Mob& mob, struct NavigationDescription* description);

    // vIndex: 2, symbol: ?tick@WaterBoundPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void tick(class NavigationComponent& parent, class Mob& mob);

    // vIndex: 3, symbol: ?getTempMobPos@WaterBoundPathNavigation@@MEBA?AVVec3@@AEBVMob@@@Z
    virtual class Vec3 getTempMobPos(class Mob const& mob) const;

    // vIndex: 10, symbol: ?travel@WaterBoundPathNavigation@@MEAA_NAEAVNavigationComponent@@AEAVMob@@AEAM22@Z
    virtual bool travel(class NavigationComponent& parent, class Mob& mob, float& xa, float& ya, float& za);

    // vIndex: 11, symbol: ?canUpdatePath@WaterBoundPathNavigation@@MEBA_NAEBVMob@@@Z
    virtual bool canUpdatePath(class Mob const& mob) const;

    // vIndex: 12, symbol: ?updatePath@WaterBoundPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void updatePath(class NavigationComponent& parent, class Mob& mob);

    // NOLINTEND
};
