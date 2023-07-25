#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TeleportCommandHelpers {
/**
 * @symbol
 * ?actorToLocationTeleportAnalysis\@TeleportCommandHelpers\@\@YA?AW4TeleportAnalysis\@\@AEBVBlockSource\@\@AEBVActor\@\@VVec3\@\@\@Z
 */
MCAPI enum class TeleportAnalysis
actorToLocationTeleportAnalysis(class BlockSource const&, class Actor const&, class Vec3);
/**
 * @symbol ?getSafetyAABB\@TeleportCommandHelpers\@\@YA?AVAABB\@\@AEBVActor\@\@VVec3\@\@\@Z
 */
MCAPI class AABB getSafetyAABB(class Actor const&, class Vec3);

}; // namespace TeleportCommandHelpers
