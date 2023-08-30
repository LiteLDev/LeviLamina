#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobGliding {
// NOLINTBEGIN
/**
 * @symbol ?getArmorFlyEnabled\@MobGliding\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool getArmorFlyEnabled(class EntityContext const&);
/**
 * @symbol ?getFallFlyTicks\@MobGliding\@\@YAHAEBVEntityContext\@\@\@Z
 */
MCAPI int32_t getFallFlyTicks(class EntityContext const&);
/**
 * @symbol ?initializeMob\@MobGliding\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeMob(class EntityContext&);
/**
 * @symbol ?setArmorFlyEnabled\@MobGliding\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setArmorFlyEnabled(class EntityContext&, bool);
/**
 * @symbol ?setFallFlyTicks\@MobGliding\@\@YAXAEAVEntityContext\@\@H\@Z
 */
MCAPI void setFallFlyTicks(class EntityContext&, int32_t);
// NOLINTEND

}; // namespace MobGliding
