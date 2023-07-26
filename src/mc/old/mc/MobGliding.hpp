/**
 * @file  MobGliding.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace MobGliding {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?getFallFlyTicks\@MobGliding\@\@YAHAEBVEntityContext\@\@\@Z
     */
    MCAPI int getFallFlyTicks(class EntityContext const &);
    /**
     * @symbol  ?initializeMob\@MobGliding\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializeMob(class EntityContext &);
    /**
     * @symbol  ?setFallFlyTicks\@MobGliding\@\@YAXAEAVEntityContext\@\@H\@Z
     */
    MCAPI void setFallFlyTicks(class EntityContext &, int);

};