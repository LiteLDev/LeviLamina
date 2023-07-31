#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorEnvironment {
// NOLINTBEGIN
/**
 * @symbol ?getHeadInWater\@ActorEnvironment\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool getHeadInWater(class EntityContext const&);
/**
 * @symbol ?getIsInWater\@ActorEnvironment\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool getIsInWater(class EntityContext const&);
/**
 * @symbol ?setHeadInWater\@ActorEnvironment\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setHeadInWater(class EntityContext&, bool);
/**
 * @symbol ?setIsInWater\@ActorEnvironment\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setIsInWater(class EntityContext&, bool);
// NOLINTEND

}; // namespace ActorEnvironment
