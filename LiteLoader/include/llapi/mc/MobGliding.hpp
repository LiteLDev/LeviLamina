/**
 * @file  MobGliding.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace MobGliding {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?getArmorFlyEnabled\@MobGliding\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool getArmorFlyEnabled(class EntityContext const &);
    /**
     * @symbol ?getFallFlyTicks\@MobGliding\@\@YAHAEBVEntityContext\@\@\@Z
     */
    MCAPI int getFallFlyTicks(class EntityContext const &);
    /**
     * @symbol ?initializeMob\@MobGliding\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializeMob(class EntityContext &);
    /**
     * @symbol ?setArmorFlyEnabled\@MobGliding\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setArmorFlyEnabled(class EntityContext &, bool);
    /**
     * @symbol ?setFallFlyTicks\@MobGliding\@\@YAXAEAVEntityContext\@\@H\@Z
     */
    MCAPI void setFallFlyTicks(class EntityContext &, int);

};