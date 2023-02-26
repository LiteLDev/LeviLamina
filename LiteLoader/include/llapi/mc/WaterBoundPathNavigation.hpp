/**
 * @file  WaterBoundPathNavigation.hpp
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
 * @brief MC class WaterBoundPathNavigation.
 *
 */
class WaterBoundPathNavigation : public PathNavigation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERBOUNDPATHNAVIGATION
public:
    class WaterBoundPathNavigation& operator=(class WaterBoundPathNavigation const &) = delete;
    WaterBoundPathNavigation(class WaterBoundPathNavigation const &) = delete;
    WaterBoundPathNavigation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WaterBoundPathNavigation();
    /**
     * @vftbl  1
     * @symbol  ?initializeInternal\@WaterBoundPathNavigation\@\@UEAAXAEAVMob\@\@PEAUNavigationDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob &, struct NavigationDescription *);
    /**
     * @vftbl  2
     * @symbol  ?tick\@WaterBoundPathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class NavigationComponent &, class Mob &);
    /**
     * @vftbl  3
     * @symbol  ?getTempMobPos\@WaterBoundPathNavigation\@\@MEBA?AVVec3\@\@AEBVMob\@\@\@Z
     */
    virtual class Vec3 getTempMobPos(class Mob const &) const;
    /**
     * @vftbl  10
     * @symbol  ?travel\@WaterBoundPathNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@AEAM22\@Z
     */
    virtual bool travel(class NavigationComponent &, class Mob &, float &, float &, float &);
    /**
     * @vftbl  11
     * @symbol  ?canUpdatePath\@WaterBoundPathNavigation\@\@MEBA_NAEBVMob\@\@\@Z
     */
    virtual bool canUpdatePath(class Mob const &) const;
    /**
     * @vftbl  12
     * @symbol  ?updatePath\@WaterBoundPathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void updatePath(class NavigationComponent &, class Mob &);

};