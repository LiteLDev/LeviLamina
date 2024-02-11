#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

class WallClimberPathNavigation : public ::PathNavigation {
public:
    // prevent constructor by default
    WallClimberPathNavigation& operator=(WallClimberPathNavigation const&);
    WallClimberPathNavigation(WallClimberPathNavigation const&);
    WallClimberPathNavigation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WallClimberPathNavigation@@UEAA@XZ
    virtual ~WallClimberPathNavigation() = default;

    // vIndex: 2, symbol: ?tick@WallClimberPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void tick(class NavigationComponent& parent, class Mob& mob);

    // vIndex: 4, symbol:
    // ?createPath@WallClimberPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEBVVec3@@@Z
    virtual std::unique_ptr<class Path>
    createPath(class NavigationComponent& parent, class Mob& mob, class Vec3 const& pos);

    // vIndex: 5, symbol:
    // ?createPath@WallClimberPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEAVActor@@@Z
    virtual std::unique_ptr<class Path>
    createPath(class NavigationComponent& parent, class Mob& mob, class Actor& target);

    // vIndex: 7, symbol: ?moveTo@WallClimberPathNavigation@@MEAA_NAEAVNavigationComponent@@AEAVMob@@AEAVActor@@M@Z
    virtual bool moveTo(class NavigationComponent& parent, class Mob& mob, class Actor& target, float speed);

    // vIndex: 11, symbol: ?canUpdatePath@WallClimberPathNavigation@@MEBA_NAEBVMob@@@Z
    virtual bool canUpdatePath(class Mob const& mob) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isInsideBorderBlock@WallClimberPathNavigation@@AEBA_NAEBVAABB@@AEBVBlockSource@@M@Z
    MCAPI bool _isInsideBorderBlock(class AABB const&, class BlockSource const&, float) const;

    // NOLINTEND
};
