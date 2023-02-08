/**
 * @file  GenericPathNavigation.hpp
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
 * @brief MC class GenericPathNavigation.
 *
 */
class GenericPathNavigation : public PathNavigation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENERICPATHNAVIGATION
public:
    class GenericPathNavigation& operator=(class GenericPathNavigation const &) = delete;
    GenericPathNavigation(class GenericPathNavigation const &) = delete;
    GenericPathNavigation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GenericPathNavigation();
    /**
     * @hash   -1587760405
     * @vftbl  1
     * @symbol  ?initializeInternal\@GenericPathNavigation\@\@UEAAXAEAVMob\@\@PEAUNavigationDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob &, struct NavigationDescription *);
    /**
     * @hash   -1167294810
     * @vftbl  2
     * @symbol  ?tick\@GenericPathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class NavigationComponent &, class Mob &);
    /**
     * @hash   441417456
     * @vftbl  3
     * @symbol  ?getTempMobPos\@GenericPathNavigation\@\@MEBA?AVVec3\@\@AEBVMob\@\@\@Z
     */
    virtual class Vec3 getTempMobPos(class Mob const &) const;
    /**
     * @hash   -115888037
     * @vftbl  9
     * @symbol  ?stop\@GenericPathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void stop(class NavigationComponent &, class Mob &);
    /**
     * @hash   -2019036137
     * @vftbl  12
     * @symbol  ?updatePath\@GenericPathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void updatePath(class NavigationComponent &, class Mob &);

};