#include "mc/world/actor/Actor.h"

#include <functional>
#include <optional>
#include <string>

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/ecs/gamerefs_entity/EntityRegistry.h"
#include "mc/deps/ecs/strict/StrictEntityContext.h"
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/OnFireComponent.h"
#include "mc/entity/components/PostTickPositionDeltaComponent.h"
#include "mc/entity/systems/OnFireSystem.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/commands/CommandUtils.h"
#include "mc/server/commands/standard/TeleportCommand.h"
#include "mc/server/commands/standard/TeleportTarget.h" // IWYU pragma: keep for TeleportCommand::computeTarget
#include "mc/util/ExpressionNode.h"
#include "mc/util/rotation_command_utils/RotationData.h"
#include "mc/world//actor/player/Player.h"
#include "mc/world/actor/ActorDamageByActorSource.h"
#include "mc/world/actor/ActorDamageSource.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/BuiltInActorComponents.h"
#include "mc/world/actor/animation/AnimationComponent.h"
#include "mc/world/actor/provider/ActorCollision.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/phys/HitDetection.h"
#include "mc/world/phys/HitResult.h"

class EntityContext&       Actor::getEntityContext() { return *mEntityContext; }
class EntityContext const& Actor::getEntityContext() const { return *mEntityContext; }
void                       Actor::refresh() { _sendDirtyActorData(); }

optional_ref<Actor> Actor::clone(Vec3 const& pos, std::optional<DimensionType> dimId) const {
    StackRefResult<Dimension> dim{};
    if (dimId) {
        dim = const_cast<Actor*>(this)->mLevel->getOrCreateDimension(*dimId).lock();
    } else {
        dim = mDimension->lock();
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

std::string const& Actor::getTypeName() const { return getActorIdentifier().mCanonicalName->getString(); }

class Vec3 Actor::getFeetPos() const { return CommandUtils::getFeetPos(this); }

class Vec3 Actor::getHeadPos() const { return getAttachPos(SharedTypes::Legacy::ActorLocation::Head); }

class BlockPos Actor::getFeetBlockPos() const { return {CommandUtils::getFeetPos(this)}; }

bool Actor::isSimulatedPlayer() const { return isPlayer() && static_cast<Player const*>(this)->isSimulated(); }

bool Actor::isOnGround() const { return ActorCollision::isOnGround(getEntityContext()); }

void Actor::setOnFire(int time, bool isEffect) {
    if (isEffect) {
        OnFireSystem::setOnFire(*this, time);
    } else {
        OnFireSystem::setOnFireNoEffects(*this, time);
    }
}
void Actor::stopFire() {
    if (!isClientSide()) {
        getEntityContext().removeComponent<OnFireComponent>();
        setStatusFlag(ActorFlags::Onfire, false);
    }
}

Vec3 Actor::getVelocity() const {
    // Refer to ScriptModuleMinecraft::ScriptActor::getVelocity
    if (!hasCategory(ActorCategory::Mob) && !hasCategory(ActorCategory::Ridable)) {
        return getPosDelta();
    }
    Actor const* actor = getVehicle();
    if (!actor) actor = this;
    return actor->getEntityContext()
        .tryGetComponent<PostTickPositionDeltaComponent>()
        .transform([](auto& comp) { return *comp.mValue; })
        .value_or(actor->getPosDelta());
}

float Actor::getPosDeltaPerSecLength() const { return static_cast<float>(getPosDelta().length() * 20.0); }

bool Actor::hurtByCause(float damage, ::SharedTypes::Legacy::ActorDamageCause cause, optional_ref<Actor> attacker) {
    if (attacker) {
        return _hurt(ActorDamageByActorSource(attacker.value(), cause), damage, true, false);
    }
    ActorDamageSource src;
    src.mCause = cause;
    return _hurt(src, damage, true, false);
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
            ShapeType::Outline,
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
            resPos,
            false
        );
        if (resActor != nullptr && resDistance >= 0 && resDistance <= tMax) {
            result = HitResult{origin, rayDir, *resActor, resPos};
        }
    }
    return result;
}

void Actor::teleport(class Vec3 const& pos, DimensionType dimId, class Vec2 const& rotation) {
    Vec2 relativeRotation = rotation - mBuiltInComponents->mActorRotationComponent->mRotationDegree;
    TeleportCommand::applyTarget(
        *this,
        TeleportCommand::computeTarget(
            *this,
            pos,
            nullptr,
            dimId,
            RotationCommandUtils::RotationData{
                RelativeFloat{relativeRotation.x, true},
                RelativeFloat{relativeRotation.y, true},
                std::nullopt
    },
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
    return ExpressionNode(expression, MolangVersion::Latest, {{HashedString{"default"}}})
        .evalAsFloat(getAnimationComponent().mRenderParams);
}

const AABB& Actor::getAABB() const { return mBuiltInComponents->mAABBShapeComponent->mAABB; }

Actor* Actor::tryGetFromEntity(::EntityContext& entity, bool includeRemoved) {
    return tryGetFromEntity(
        StrictEntityContext{.mEntity = entity.mEntity, .mRegistryId = entity.mRegistry.mId},
        entity.mRegistry,
        includeRemoved
    );
}
