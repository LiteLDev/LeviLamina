#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorMovement {
/**
 * @symbol ?getHasTeleported\@ActorMovement\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool getHasTeleported(class EntityContext const&); // NOLINT
/**
 * @symbol ?getWalkDist\@ActorMovement\@\@YAMAEBVEntityContext\@\@\@Z
 */
MCAPI float getWalkDist(class EntityContext const&); // NOLINT
/**
 * @symbol ?getWalkDistPrev\@ActorMovement\@\@YAMAEBVEntityContext\@\@\@Z
 */
MCAPI float getWalkDistPrev(class EntityContext const&); // NOLINT
/**
 * @symbol ?initializeActor\@ActorMovement\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeActor(class EntityContext&); // NOLINT
/**
 * @symbol ?isImmobile\@ActorMovement\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool isImmobile(class EntityContext const&); // NOLINT
/**
 * @symbol ?setHasTeleported\@ActorMovement\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setHasTeleported(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setIsImmobile\@ActorMovement\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setIsImmobile(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setWalkDist\@ActorMovement\@\@YAXAEAVEntityContext\@\@M\@Z
 */
MCAPI void setWalkDist(class EntityContext&, float); // NOLINT

}; // namespace ActorMovement
