#include "mc/world/actor/Actor.h"

#include <functional>
#include <optional>
#include <string>

#include "ll/api/memory/Memory.h"

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/HitDetection.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/EntityContext.h"
#include "mc/entity/systems/OnFireSystem.h"
#include "mc/entity/utilities/ActorCollision.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/ShapeType.h"
#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/commands/CommandUtils.h"
#include "mc/server/commands/RotationData.h"
#include "mc/server/commands/standard/TeleportCommand.h"
#include "mc/server/commands/standard/TeleportTarget.h" // IWYU pragma: keep for TeleportCommand::computeTarget
#include "mc/util/ExpressionNode.h"
#include "mc/world//actor/player/Player.h"
#include "mc/world/actor/ActorDamageByActorSource.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/common/ClipDefaults.h"
#include "mc/world/components/FlagComponent.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/phys/HitResult.h"

class EntityContext&       Actor::getEntityContext() { return ll::memory::dAccess<EntityContext>(this, 8); }
class EntityContext const& Actor::getEntityContext() const { return ll::memory::dAccess<EntityContext>(this, 8); }

void Actor::refresh() { _sendDirtyActorData(); }

optional_ref<Actor> Actor::clone(Vec3 const& pos, std::optional<DimensionType> dimId) const {
    WeakRef<Dimension> dim{};
    if (dimId) {
        dim = const_cast<Actor*>(this)->getLevel().getOrCreateDimension(*dimId);
    } else {
        dim = getDimension().getWeakRef();
    }
    if (!dim) {
        return nullptr;
    }
    CompoundTag nbt;
    if (!save(nbt)) {
        return nullptr;
    }
    if (nbt.contains("Pos", Tag::List)) {
        nbt["Pos"] = ListTag{pos.x, pos.y, pos.z};
    }
    return dim->getBlockSourceFromMainChunkSource().spawnActor(nbt);
}

std::string const& Actor::getTypeName() const { return getActorIdentifier().getCanonicalName(); }

class Vec3 Actor::getFeetPos() const { return CommandUtils::getFeetPos(this); }

class Vec3 Actor::getHeadPos() const { return getAttachPos(ActorLocation::Head); }

class BlockPos Actor::getFeetBlockPos() const { return {CommandUtils::getFeetPos(this)}; }

bool Actor::isSimulatedPlayer() const {
    return isPlayer() && static_cast<Player const*>(this)->isSimulated();
    //  return getEntityContext().hasComponent<FlagComponent<SimulatedPlayerFlag>>();
}

bool Actor::isOnGround() const { return ActorCollision::isOnGround(getEntityContext()); }

void Actor::setOnFire(int time, bool isEffect) {
    if (isEffect) {
        OnFireSystem::setOnFire(*this, time);
    } else {
        OnFireSystem::setOnFireNoEffects(*this, time);
    }
}
void Actor::stopFire() { OnFireSystem::stopFire(*this); }

float Actor::getPosDeltaPerSecLength() const { return static_cast<float>(getPosDelta().length() * 20.0); }

bool Actor::hurtByCause(float damage, ActorDamageCause cause, optional_ref<Actor> attacker) {
    if (attacker) {
        return _hurt(ActorDamageByActorSource(attacker.value(), cause), damage, true, false);
    }
    return _hurt(ActorDamageSource(cause), damage, true, false);
}

class HitResult Actor::traceRay(
    float                                                                          tMax,
    bool                                                                           includeActor,
    bool                                                                           includeBlock,
    std::function<bool(class BlockSource const&, class Block const&, bool)> const& blockCheckFunction
) const {
    Vec3      origin{getHeadPos()};
    Vec3      rayDir{getViewVector()};
    HitResult result{};
    if (includeBlock) {
        result = getDimensionBlockSource().clip(
            origin,
            origin + rayDir * tMax,
            true,
            ShapeType::All,
            ((static_cast<int>(tMax) + 1) * 2),
            false,
            false,
            nullptr,
            blockCheckFunction
        );
        if (result) {
            tMax = static_cast<float>((origin - result.mPos).length());
        }
    }
    if (includeActor) {
        float  resDistance = 0.0f;
        Actor* resActor    = nullptr;
        Vec3   resPos{};

        HitDetection::searchActors(
            rayDir,
            tMax,
            origin,
            getAABB(),
            (Actor*)(this),
            (Player*)(this),
            resDistance,
            resActor,
            resPos
        );
        if (resActor != nullptr && resDistance >= 0 && resDistance <= tMax) {
            result = HitResult{origin, rayDir, *resActor, resPos};
        }
    }
    return result;
}

void Actor::teleport(class Vec3 const& pos, DimensionType dimId, class Vec2 const& rotation) {
    Vec2 relativeRotation = rotation - getRotation();
    TeleportCommand::applyTarget(
        *this,
        TeleportCommand::computeTarget(
            *this,
            pos,
            nullptr,
            dimId,
            RotationCommandUtils::RotationData{relativeRotation.x, relativeRotation.y, std::nullopt},
            1
        ),
        false
    );
}

void Actor::teleport(class Vec3 const& pos, DimensionType dimId) {
    TeleportCommand::applyTarget(
        *this,
        TeleportCommand::computeTarget(*this, pos, nullptr, dimId, std::nullopt, 1),
        false
    );
}

void Actor::setName(std::string const& name) {
    setNameTag(name);
    refresh();
}

float Actor::evalMolang(std::string const& expression) {
    return ExpressionNode(expression).evalAsFloat(getRenderParams());
}
