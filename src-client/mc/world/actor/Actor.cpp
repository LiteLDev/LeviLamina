#include "mc/world/actor/Actor.h"

#include <functional>
#include <optional>
#include <string>

#include "ll/api/memory/Memory.h"

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/HitDetection.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/entity/systems/OnFireSystem.h"
#include "mc/entity/utilities/ActorCollision.h"
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/commands/CommandUtils.h"
#include "mc/server/commands/RotationData.h"
#include "mc/server/commands/standard/TeleportCommand.h"
#include "mc/server/commands/standard/TeleportTarget.h" // IWYU pragma: keep for TeleportCommand::computeTarget
#include "mc/util/ExpressionNode.h"
#include "mc/world//actor/player/Player.h"
#include "mc/world/actor/ActorDamageByActorSource.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/components/FlagComponent.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/ClipDefaults.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/phys/HitResult.h"

class EntityContext&       Actor::getEntityContext() { return ll::memory::dAccess<EntityContext>(this, 8); }
class EntityContext const& Actor::getEntityContext() const { return ll::memory::dAccess<EntityContext>(this, 8); }

void Actor::refresh() { _sendDirtyActorData(); }

void Actor::teleport(class Vec3 const& pos, DimensionType dimId) {
    TeleportCommand::applyTarget(
        *this,
        TeleportCommand::computeTarget(*this, pos, nullptr, dimId, std::nullopt, 1),
        false
    );
}
