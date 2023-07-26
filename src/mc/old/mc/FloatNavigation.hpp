/**
 * @file  FloatNavigation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "PathNavigation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FloatNavigation.
 *
 */
class FloatNavigation : public PathNavigation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOATNAVIGATION
public:
    class FloatNavigation& operator=(class FloatNavigation const &) = delete;
    FloatNavigation(class FloatNavigation const &) = delete;
    FloatNavigation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FloatNavigation();
    /**
     * @vftbl  10
     * @symbol  ?travel\@FloatNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@AEAM22\@Z
     */
    virtual bool travel(class NavigationComponent &, class Mob &, float &, float &, float &);

};