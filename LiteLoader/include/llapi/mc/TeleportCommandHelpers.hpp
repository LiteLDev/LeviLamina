/**
 * @file  TeleportCommandHelpers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace TeleportCommandHelpers {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?actorToLocationTeleportAnalysis\@TeleportCommandHelpers\@\@YA?AW4TeleportAnalysis\@\@AEBVBlockSource\@\@AEBVActor\@\@VVec3\@\@\@Z
     */
    MCAPI enum class TeleportAnalysis actorToLocationTeleportAnalysis(class BlockSource const &, class Actor const &, class Vec3);
    /**
     * @symbol ?getSafetyAABB\@TeleportCommandHelpers\@\@YA?AVAABB\@\@AEBVActor\@\@VVec3\@\@\@Z
     */
    MCAPI class AABB getSafetyAABB(class Actor const &, class Vec3);

};