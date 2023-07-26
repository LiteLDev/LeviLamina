#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorPermission {
/**
 * @symbol ?getUnmappedGameType\@ActorPermission\@\@YA?AW4GameType\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI enum class GameType getUnmappedGameType(class EntityContext const&); // NOLINT
/**
 * @symbol ?initialize\@ActorPermission\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initialize(class EntityContext&); // NOLINT
/**
 * @symbol ?setUnmappedGameType\@ActorPermission\@\@YAXAEAVEntityContext\@\@W4GameType\@\@\@Z
 */
MCAPI void setUnmappedGameType(class EntityContext&, enum class GameType); // NOLINT

}; // namespace ActorPermission
