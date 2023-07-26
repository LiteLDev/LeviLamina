#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PathNavigation {

public:
    // prevent constructor by default
    PathNavigation& operator=(PathNavigation const&) = delete;
    PathNavigation(PathNavigation const&)            = delete;
    PathNavigation()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?initializeInternal\@PathNavigation\@\@UEAAXAEAVMob\@\@PEAUNavigationDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob&, struct NavigationDescription*); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@PathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class NavigationComponent&, class Mob&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getTempMobPos\@PathNavigation\@\@MEBA?AVVec3\@\@AEBVMob\@\@\@Z
     */
    virtual class Vec3 getTempMobPos(class Mob const&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?createPath\@PathNavigation\@\@MEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEBVVec3\@\@\@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Vec3 const&); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?createPath\@PathNavigation\@\@MEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEAVActor\@\@\@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Actor&); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?moveTo\@PathNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    virtual bool moveTo(class NavigationComponent&, class Mob&, class Vec3 const&, float); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?moveTo\@PathNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@AEAVActor\@\@M\@Z
     */
    virtual bool moveTo(class NavigationComponent&, class Mob&, class Actor&, float); // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?moveTo\@PathNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@V?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@M\@Z
     */
    virtual bool moveTo(class NavigationComponent&, class Mob&, std::unique_ptr<class Path>, float); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?stop\@PathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void stop(class NavigationComponent&, class Mob&); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?travel\@PathNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@AEAM22\@Z
     */
    virtual bool travel(class NavigationComponent&, class Mob&, float&, float&, float&); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?canUpdatePath\@PathNavigation\@\@MEBA_NAEBVMob\@\@\@Z
     */
    virtual bool canUpdatePath(class Mob const&) const; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?updatePath\@PathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void updatePath(class NavigationComponent&, class Mob&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PATHNAVIGATION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PathNavigation(); // NOLINT
#endif

    // protected:
    /**
     * @symbol ?_getHighestBlockHeight\@PathNavigation\@\@IEBAMAEAVBlockSource\@\@AEAVMob\@\@AEBVVec3\@\@AEBVVec2\@\@\@Z
     */
    MCAPI float
    _getHighestBlockHeight(class BlockSource&, class Mob&, class Vec3 const&, class Vec2 const&) const; // NOLINT
    /**
     * @symbol ?_isPositionOnlyInAir\@PathNavigation\@\@IEBA_NAEBVBlockSource\@\@AEBVVec3\@\@AEBVVec2\@\@\@Z
     */
    MCAPI bool _isPositionOnlyInAir(class BlockSource const&, class Vec3 const&, class Vec2 const&) const; // NOLINT
    /**
     * @symbol
     * ?isFree\@PathNavigation\@\@IEAA?AW4NodeType\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEBVBlockPos\@\@22W4CanJumpIntoNode\@\@\@Z
     */
    MCAPI enum class NodeType isFree(
        class NavigationComponent&,
        class Mob&,
        class BlockPos const&,
        class BlockPos const&,
        class BlockPos const&,
        enum class CanJumpIntoNode
    ); // NOLINT

protected:
};
