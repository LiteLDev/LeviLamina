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
     * @hash   1927109106
     * @vftbl  1
     * @symbol  ?initializeInternal\@PathNavigation\@\@UEAAXAEAVMob\@\@PEAUNavigationDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob &, struct NavigationDescription *);
    /**
     * @hash   350426189
     * @vftbl  2
     * @symbol  ?tick\@PathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class NavigationComponent &, class Mob &);
    /**
     * @hash   -1493185527
     * @vftbl  3
     * @symbol  ?getTempMobPos\@PathNavigation\@\@MEBA?AVVec3\@\@AEBVMob\@\@\@Z
     */
    virtual class Vec3 getTempMobPos(class Mob const &) const;
    /**
     * @hash   1627420926
     * @vftbl  4
     * @symbol  ?createPath\@PathNavigation\@\@MEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEBVVec3\@\@\@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Vec3 const &);
    /**
     * @hash   -1954418189
     * @vftbl  5
     * @symbol  ?createPath\@PathNavigation\@\@MEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEAVActor\@\@\@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Actor &);
    /**
     * @hash   2082506014
     * @vftbl  6
     * @symbol  ?moveTo\@PathNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    virtual bool moveTo(class NavigationComponent &, class Mob &, class Vec3 const &, float);
    /**
     * @hash   -1018101063
     * @vftbl  7
     * @symbol  ?moveTo\@PathNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@AEAVActor\@\@M\@Z
     */
    virtual bool moveTo(class NavigationComponent &, class Mob &, class Actor &, float);
    /**
     * @hash   1507511283
     * @vftbl  8
     * @symbol  ?moveTo\@PathNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@V?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@M\@Z
     */
    virtual bool moveTo(class NavigationComponent &, class Mob &, std::unique_ptr<class Path>, float);
    /**
     * @hash   -1210694846
     * @vftbl  9
     * @symbol  ?stop\@PathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void stop(class NavigationComponent &, class Mob &);
    /**
     * @hash   1704970836
     * @vftbl  10
     * @symbol  ?travel\@PathNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@AEAM22\@Z
     */
    virtual bool travel(class NavigationComponent &, class Mob &, float &, float &, float &);
    /**
     * @hash   -1005887951
     * @vftbl  11
     * @symbol  ?canUpdatePath\@PathNavigation\@\@MEBA_NAEBVMob\@\@\@Z
     */
    virtual bool canUpdatePath(class Mob const &) const;
    /**
     * @hash   -1116197010
     * @vftbl  12
     * @symbol  ?updatePath\@PathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void updatePath(class NavigationComponent &, class Mob &);

//protected:
    /**
     * @hash   817317313
     * @symbol  ?_getHighestBlockHeight\@PathNavigation\@\@IEBAMAEAVBlockSource\@\@AEAVMob\@\@AEBVVec3\@\@AEBVVec2\@\@\@Z
     */
    MCAPI float _getHighestBlockHeight(class BlockSource &, class Mob &, class Vec3 const &, class Vec2 const &) const;
    /**
     * @hash   -490990586
     * @symbol  ?_isPositionOnlyInAir\@PathNavigation\@\@IEBA_NAEBVBlockSource\@\@AEBVVec3\@\@AEBVVec2\@\@\@Z
     */
    MCAPI bool _isPositionOnlyInAir(class BlockSource const &, class Vec3 const &, class Vec2 const &) const;
    /**
     * @hash   98681927
     * @symbol  ?isFree\@PathNavigation\@\@IEAA?AW4NodeType\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEBVBlockPos\@\@22W4CanJumpIntoNode\@\@\@Z
     */
    MCAPI enum class NodeType isFree(class NavigationComponent &, class Mob &, class BlockPos const &, class BlockPos const &, class BlockPos const &, enum class CanJumpIntoNode);

protected:

};