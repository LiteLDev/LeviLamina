#include "mc/world/actor/Actor.h"

#include <optional>

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/entity/systems/OnFireSystem.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/commands/CommandUtils.h"
#include "mc/server/commands/standard/TeleportCommand.h"
#include "mc/server/commands/standard/TeleportTarget.h" // IWYU pragma: keep for TeleportCommand::computeTarget
#include "mc/util/rotation_command_utils/RotationData.h"
#include "mc/world//actor/player/Player.h"
#include "mc/world/actor/ActorDamageByActorSource.h"
#include "mc/world/actor/provider/ActorCollision.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/phys/HitDetection.h"
#include "mc/world/phys/HitResult.h"

class EntityContext&       Actor::getEntityContext() { return mEntityContext.get(); }
class EntityContext const& Actor::getEntityContext() const { return mEntityContext.get(); }

void Actor::refresh() { _sendDirtyActorData(); }

void Actor::teleport(class Vec3 const& pos, DimensionType dimId) {
    TeleportCommand::applyTarget(
        *this,
        TeleportCommand::computeTarget(*this, pos, nullptr, dimId, std::nullopt, 1),
        false
    );
}

bool Actor::hasCategory(::ActorCategory categories) const {
    return (std::to_underlying(this->mCategories) & std::to_underlying(categories)) == std::to_underlying(categories);
}
