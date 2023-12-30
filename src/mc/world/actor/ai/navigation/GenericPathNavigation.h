#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

class GenericPathNavigation : public ::PathNavigation {
public:
    // prevent constructor by default
    GenericPathNavigation& operator=(GenericPathNavigation const&);
    GenericPathNavigation(GenericPathNavigation const&);
    GenericPathNavigation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GenericPathNavigation@@UEAA@XZ
    virtual ~GenericPathNavigation() = default;

    // vIndex: 1, symbol: ?initializeInternal@GenericPathNavigation@@UEAAXAEAVMob@@PEAUNavigationDescription@@@Z
    virtual void initializeInternal(class Mob& mob, struct NavigationDescription* description);

    // vIndex: 2, symbol: ?tick@GenericPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void tick(class NavigationComponent& parent, class Mob& mob);

    // vIndex: 3, symbol: ?getTempMobPos@GenericPathNavigation@@MEBA?AVVec3@@AEBVMob@@@Z
    virtual class Vec3 getTempMobPos(class Mob const& mob) const;

    // vIndex: 9, symbol: ?stop@GenericPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void stop(class NavigationComponent& parent, class Mob& mob);

    // vIndex: 12, symbol: ?updatePath@GenericPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void updatePath(class NavigationComponent& parent, class Mob& mob);

    // NOLINTEND
};
