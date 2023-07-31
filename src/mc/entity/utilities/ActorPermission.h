#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorPermission {
// NOLINTBEGIN
/**
 * @symbol ?getUnmappedGameType\@ActorPermission\@\@YA?AW4GameType\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI enum class GameType getUnmappedGameType(class EntityContext const&);
/**
 * @symbol ?initialize\@ActorPermission\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initialize(class EntityContext&);
/**
 * @symbol ?setUnmappedGameType\@ActorPermission\@\@YAXAEAVEntityContext\@\@W4GameType\@\@\@Z
 */
MCAPI void setUnmappedGameType(class EntityContext&, enum class GameType);
// NOLINTEND

}; // namespace ActorPermission
