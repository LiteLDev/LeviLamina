#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

class HoverPathNavigation : public ::PathNavigation {
public:
    // prevent constructor by default
    HoverPathNavigation& operator=(HoverPathNavigation const&);
    HoverPathNavigation(HoverPathNavigation const&);
    HoverPathNavigation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HoverPathNavigation@@UEAA@XZ
    virtual ~HoverPathNavigation() = default;

    // vIndex: 1, symbol: ?initializeInternal@HoverPathNavigation@@UEAAXAEAVMob@@PEAUNavigationDescription@@@Z
    virtual void initializeInternal(class Mob& mob, struct NavigationDescription* description);

    // vIndex: 2, symbol: ?tick@HoverPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void tick(class NavigationComponent& parent, class Mob& mob);

    // vIndex: 3, symbol: ?getTempMobPos@HoverPathNavigation@@MEBA?AVVec3@@AEBVMob@@@Z
    virtual class Vec3 getTempMobPos(class Mob const& mob) const;

    // vIndex: 4, symbol:
    // ?createPath@HoverPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEBVVec3@@@Z
    virtual std::unique_ptr<class Path>
    createPath(class NavigationComponent& parent, class Mob& mob, class Vec3 const& pos);

    // vIndex: 5, symbol:
    // ?createPath@HoverPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEAVActor@@@Z
    virtual std::unique_ptr<class Path>
    createPath(class NavigationComponent& parent, class Mob& mob, class Actor& target);

    // vIndex: 9, symbol: ?stop@HoverPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void stop(class NavigationComponent& parent, class Mob& mob);

    // vIndex: 11, symbol: ?canUpdatePath@HoverPathNavigation@@MEBA_NAEBVMob@@@Z
    virtual bool canUpdatePath(class Mob const& mob) const;

    // vIndex: 12, symbol: ?updatePath@HoverPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void updatePath(class NavigationComponent& parent, class Mob& mob);

    // NOLINTEND
};
