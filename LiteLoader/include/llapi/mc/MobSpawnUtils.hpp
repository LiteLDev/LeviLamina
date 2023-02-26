/**
 * @file  MobSpawnUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace MobSpawnUtils.
 *
 */
namespace MobSpawnUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?spawnIfSummonable\@MobSpawnUtils\@\@YA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBUActorDefinitionIdentifier\@\@AEAVActorDefinitionGroup\@\@AEAVActorFactory\@\@AEBVVec3\@\@AEBVVec2\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> spawnIfSummonable(struct ActorDefinitionIdentifier const &, class ActorDefinitionGroup &, class ActorFactory &, class Vec3 const &, class Vec2 const &);
    /**
     * @symbol  ?trySpawnMob\@MobSpawnUtils\@\@YAPEAVMob\@\@AEAVBlockSource\@\@AEBUActorDefinitionIdentifier\@\@VBlockPos\@\@HHHAEBV?$function\@$$A6A_NVBlockPos\@\@\@Z\@std\@\@W4SurfaceDetectionType\@1\@\@Z
     */
    MCAPI class Mob * trySpawnMob(class BlockSource &, struct ActorDefinitionIdentifier const &, class BlockPos, int, int, int, class std::function<bool (class BlockPos)> const &, enum class MobSpawnUtils::SurfaceDetectionType);

};