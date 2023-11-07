#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CanJumpIntoNode.h"
#include "mc/enums/NodeType.h"

class PathNavigation {
public:
    // prevent constructor by default
    PathNavigation& operator=(PathNavigation const&);
    PathNavigation(PathNavigation const&);
    PathNavigation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PathNavigation@@UEAA@XZ
    virtual ~PathNavigation();

    // vIndex: 1, symbol: ?initializeInternal@PathNavigation@@UEAAXAEAVMob@@PEAUNavigationDescription@@@Z
    virtual void initializeInternal(class Mob&, struct NavigationDescription*);

    // vIndex: 2, symbol: ?tick@PathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void tick(class NavigationComponent&, class Mob&);

    // vIndex: 3, symbol: ?getTempMobPos@PathNavigation@@MEBA?AVVec3@@AEBVMob@@@Z
    virtual class Vec3 getTempMobPos(class Mob const&) const;

    // vIndex: 4, symbol:
    // ?createPath@PathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEBVVec3@@@Z
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Vec3 const&);

    // vIndex: 5, symbol:
    // ?createPath@PathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEAVActor@@@Z
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Actor&);

    // vIndex: 6, symbol: ?moveTo@PathNavigation@@MEAA_NAEAVNavigationComponent@@AEAVMob@@AEBVVec3@@M@Z
    virtual bool moveTo(class NavigationComponent&, class Mob&, class Vec3 const&, float);

    // vIndex: 7, symbol: ?moveTo@PathNavigation@@MEAA_NAEAVNavigationComponent@@AEAVMob@@AEAVActor@@M@Z
    virtual bool moveTo(class NavigationComponent&, class Mob&, class Actor&, float);

    // vIndex: 8, symbol:
    // ?moveTo@PathNavigation@@MEAA_NAEAVNavigationComponent@@AEAVMob@@V?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@M@Z
    virtual bool moveTo(class NavigationComponent&, class Mob&, std::unique_ptr<class Path>, float);

    // vIndex: 9, symbol: ?stop@PathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void stop(class NavigationComponent&, class Mob&);

    // vIndex: 10, symbol: ?travel@PathNavigation@@MEAA_NAEAVNavigationComponent@@AEAVMob@@AEAM22@Z
    virtual bool travel(class NavigationComponent&, class Mob&, float&, float&, float&);

    // vIndex: 11, symbol: ?canUpdatePath@PathNavigation@@MEBA_NAEBVMob@@@Z
    virtual bool canUpdatePath(class Mob const&) const;

    // vIndex: 12, symbol: ?updatePath@PathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void updatePath(class NavigationComponent&, class Mob&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getHighestBlockHeight@PathNavigation@@IEBAMAEAVBlockSource@@AEAVMob@@AEBVVec3@@AEBVVec2@@@Z
    MCAPI float _getHighestBlockHeight(class BlockSource&, class Mob&, class Vec3 const&, class Vec2 const&) const;

    // symbol: ?_isPositionOnlyInAir@PathNavigation@@IEBA_NAEBVBlockSource@@AEBVVec3@@AEBVVec2@@@Z
    MCAPI bool _isPositionOnlyInAir(class BlockSource const&, class Vec3 const&, class Vec2 const&) const;

    // symbol:
    // ?isFree@PathNavigation@@IEAA?AW4NodeType@@AEAVNavigationComponent@@AEAVMob@@AEBVBlockPos@@22W4CanJumpIntoNode@@@Z
    MCAPI ::NodeType isFree(
        class NavigationComponent&,
        class Mob&,
        class BlockPos const&,
        class BlockPos const&,
        class BlockPos const&,
        ::CanJumpIntoNode
    );

    // NOLINTEND
};
