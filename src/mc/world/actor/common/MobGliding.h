#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobGliding {
/**
 * @symbol ?getArmorFlyEnabled\@MobGliding\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool getArmorFlyEnabled(class EntityContext const&); // NOLINT
/**
 * @symbol ?getFallFlyTicks\@MobGliding\@\@YAHAEBVEntityContext\@\@\@Z
 */
MCAPI int getFallFlyTicks(class EntityContext const&); // NOLINT
/**
 * @symbol ?initializeMob\@MobGliding\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeMob(class EntityContext&); // NOLINT
/**
 * @symbol ?setArmorFlyEnabled\@MobGliding\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setArmorFlyEnabled(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setFallFlyTicks\@MobGliding\@\@YAXAEAVEntityContext\@\@H\@Z
 */
MCAPI void setFallFlyTicks(class EntityContext&, int); // NOLINT

}; // namespace MobGliding
