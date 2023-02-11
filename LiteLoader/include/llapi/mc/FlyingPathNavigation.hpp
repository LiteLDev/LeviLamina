/**
 * @file  FlyingPathNavigation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "PathNavigation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlyingPathNavigation.
 *
 */
class FlyingPathNavigation : public PathNavigation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYINGPATHNAVIGATION
public:
    class FlyingPathNavigation& operator=(class FlyingPathNavigation const &) = delete;
    FlyingPathNavigation(class FlyingPathNavigation const &) = delete;
    FlyingPathNavigation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FlyingPathNavigation();
    /**
     * @hash   -673738237
     * @vftbl  1
     * @symbol  ?initializeInternal\@FlyingPathNavigation\@\@UEAAXAEAVMob\@\@PEAUNavigationDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob &, struct NavigationDescription *);
    /**
     * @hash   -728091186
     * @vftbl  2
     * @symbol  ?tick\@FlyingPathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class NavigationComponent &, class Mob &);
    /**
     * @hash   1381610632
     * @vftbl  3
     * @symbol  ?getTempMobPos\@FlyingPathNavigation\@\@MEBA?AVVec3\@\@AEBVMob\@\@\@Z
     */
    virtual class Vec3 getTempMobPos(class Mob const &) const;
    /**
     * @hash   -1797807555
     * @vftbl  4
     * @symbol  ?createPath\@FlyingPathNavigation\@\@MEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEBVVec3\@\@\@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Vec3 const &);
    /**
     * @hash   462402450
     * @vftbl  5
     * @symbol  ?createPath\@FlyingPathNavigation\@\@MEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEAVActor\@\@\@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Actor &);
    /**
     * @hash   -1584420653
     * @vftbl  9
     * @symbol  ?stop\@FlyingPathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void stop(class NavigationComponent &, class Mob &);
    /**
     * @hash   -506829072
     * @vftbl  11
     * @symbol  ?canUpdatePath\@FlyingPathNavigation\@\@MEBA_NAEBVMob\@\@\@Z
     */
    virtual bool canUpdatePath(class Mob const &) const;
    /**
     * @hash   -1880665729
     * @vftbl  12
     * @symbol  ?updatePath\@FlyingPathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void updatePath(class NavigationComponent &, class Mob &);

//private:
    /**
     * @hash   -314588028
     * @symbol  ?_restorePreviousGravityFlag\@FlyingPathNavigation\@\@AEAAXAEAVMob\@\@\@Z
     */
    MCAPI void _restorePreviousGravityFlag(class Mob &);
    /**
     * @hash   438732071
     * @symbol  ?_storePreviousGravityFlag\@FlyingPathNavigation\@\@AEAAXAEAVMob\@\@\@Z
     */
    MCAPI void _storePreviousGravityFlag(class Mob &);

private:

};