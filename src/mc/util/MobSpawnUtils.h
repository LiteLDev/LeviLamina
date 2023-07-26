#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace MobSpawnUtils { enum class SurfaceDetectionType; }
template<typename T0> class OwnerPtrT;
// clang-format on

namespace MobSpawnUtils {
/**
 * @symbol
 * ?spawnIfSummonable\@MobSpawnUtils\@\@YA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBUActorDefinitionIdentifier\@\@AEAVActorDefinitionGroup\@\@AEAVActorFactory\@\@AEBVVec3\@\@AEBVVec2\@\@\@Z
 */
MCAPI class OwnerPtrT<struct EntityRefTraits>
spawnIfSummonable(struct ActorDefinitionIdentifier const&, class ActorDefinitionGroup&, class ActorFactory&, class Vec3 const&, class Vec2 const&); // NOLINT
/**
 * @symbol
 * ?trySpawnMob\@MobSpawnUtils\@\@YAPEAVMob\@\@AEAVBlockSource\@\@AEBUActorDefinitionIdentifier\@\@VBlockPos\@\@HHHAEBV?$function\@$$A6A_NVBlockPos\@\@\@Z\@std\@\@W4SurfaceDetectionType\@1\@\@Z
 */
MCAPI class Mob* trySpawnMob(
    class BlockSource&,
    struct ActorDefinitionIdentifier const&,
    class BlockPos,
    int,
    int,
    int,
    class std::function<bool(class BlockPos)> const&,
    enum class MobSpawnUtils::SurfaceDetectionType
); // NOLINT

}; // namespace MobSpawnUtils
