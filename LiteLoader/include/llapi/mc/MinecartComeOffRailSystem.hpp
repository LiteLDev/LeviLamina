/**
 * @file  MinecartComeOffRailSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecartComeOffRailSystem.
 *
 */
class MinecartComeOffRailSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTCOMEOFFRAILSYSTEM
public:
    class MinecartComeOffRailSystem& operator=(class MinecartComeOffRailSystem const &) = delete;
    MinecartComeOffRailSystem(class MinecartComeOffRailSystem const &) = delete;
    MinecartComeOffRailSystem() = delete;
#endif

public:
    /**
     * @hash   -1564585130
     * @symbol ?evaluatePosDeltaComingOffRail@MinecartComeOffRailSystem@@SA?AVVec3@@AEBV2@M_N@Z
     */
    MCAPI static class Vec3 evaluatePosDeltaComingOffRail(class Vec3 const &, float, bool);

};