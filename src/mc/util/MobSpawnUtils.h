#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/util/SurfaceDetectionType.h"

namespace MobSpawnUtils {
// NOLINTBEGIN
// symbol:
// ?spawnIfSummonable@MobSpawnUtils@@YA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBUActorDefinitionIdentifier@@AEAVActorDefinitionGroup@@AEAVActorFactory@@AEBVVec3@@AEBVVec2@@@Z
MCAPI class OwnerPtrT<struct EntityRefTraits>
spawnIfSummonable(struct ActorDefinitionIdentifier const&, class ActorDefinitionGroup&, class ActorFactory&, class Vec3 const&, class Vec2 const&);

// symbol:
// ?trySpawnMob@MobSpawnUtils@@YAPEAVMob@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@VBlockPos@@HHHAEBV?$function@$$A6A_NVBlockPos@@@Z@std@@W4SurfaceDetectionType@1@@Z
MCAPI class Mob* trySpawnMob(
    class BlockSource&,
    struct ActorDefinitionIdentifier const&,
    class BlockPos,
    int,
    int,
    int,
    std::function<bool(class BlockPos)> const&,
    ::MobSpawnUtils::SurfaceDetectionType
);
// NOLINTEND

}; // namespace MobSpawnUtils
