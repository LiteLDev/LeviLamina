/**
 * @file  PathNavigation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PathNavigation.
 *
 */
class PathNavigation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PATHNAVIGATION
public:
    class PathNavigation& operator=(class PathNavigation const &) = delete;
    PathNavigation(class PathNavigation const &) = delete;
    PathNavigation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PathNavigation();
    /**
     * @vftbl  1
     * @symbol  ?initializeInternal\@PathNavigation\@\@UEAAXAEAVMob\@\@PEAUNavigationDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob &, struct NavigationDescription *);
    /**
     * @vftbl  2
     * @symbol  ?tick\@PathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class NavigationComponent &, class Mob &);
    /**
     * @vftbl  3
     * @symbol  ?getTempMobPos\@PathNavigation\@\@MEBA?AVVec3\@\@AEBVMob\@\@\@Z
     */
    virtual class Vec3 getTempMobPos(class Mob const &) const;
    /**
     * @vftbl  4
     * @symbol  ?createPath\@PathNavigation\@\@MEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEBVVec3\@\@\@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Vec3 const &);
    /**
     * @vftbl  5
     * @symbol  ?createPath\@PathNavigation\@\@MEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEAVActor\@\@\@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Actor &);
    /**
     * @vftbl  6
     * @symbol  ?moveTo\@PathNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    virtual bool moveTo(class NavigationComponent &, class Mob &, class Vec3 const &, float);
    /**
     * @vftbl  7
     * @symbol  ?moveTo\@PathNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@AEAVActor\@\@M\@Z
     */
    virtual bool moveTo(class NavigationComponent &, class Mob &, class Actor &, float);
    /**
     * @vftbl  8
     * @symbol  ?moveTo\@PathNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@V?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@M\@Z
     */
    virtual bool moveTo(class NavigationComponent &, class Mob &, std::unique_ptr<class Path>, float);
    /**
     * @vftbl  9
     * @symbol  ?stop\@PathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void stop(class NavigationComponent &, class Mob &);
    /**
     * @vftbl  10
     * @symbol  ?travel\@PathNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@AEAM22\@Z
     */
    virtual bool travel(class NavigationComponent &, class Mob &, float &, float &, float &);
    /**
     * @vftbl  11
     * @symbol  ?canUpdatePath\@PathNavigation\@\@MEBA_NAEBVMob\@\@\@Z
     */
    virtual bool canUpdatePath(class Mob const &) const;
    /**
     * @vftbl  12
     * @symbol  ?updatePath\@PathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void updatePath(class NavigationComponent &, class Mob &);

//protected:
    /**
     * @symbol  ?_getHighestBlockHeight\@PathNavigation\@\@IEBAMAEAVBlockSource\@\@AEAVMob\@\@AEBVVec3\@\@AEBVVec2\@\@\@Z
     */
    MCAPI float _getHighestBlockHeight(class BlockSource &, class Mob &, class Vec3 const &, class Vec2 const &) const;
    /**
     * @symbol  ?_isPositionOnlyInAir\@PathNavigation\@\@IEBA_NAEBVBlockSource\@\@AEBVVec3\@\@AEBVVec2\@\@\@Z
     */
    MCAPI bool _isPositionOnlyInAir(class BlockSource const &, class Vec3 const &, class Vec2 const &) const;
    /**
     * @symbol  ?isFree\@PathNavigation\@\@IEAA?AW4NodeType\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEBVBlockPos\@\@22W4CanJumpIntoNode\@\@\@Z
     */
    MCAPI enum class NodeType isFree(class NavigationComponent &, class Mob &, class BlockPos const &, class BlockPos const &, class BlockPos const &, enum class CanJumpIntoNode);

protected:

};