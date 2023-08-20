#include "mc/world/actor/Actor.h"
#include "liteloader/api/memory/MemoryUtils.h"
#include "mc/common/HitDetection.h"
#include "mc/dataloadhelper/DefaultDataLoadHelper.h"
#include "mc/entity/EntityContext.h"
#include "mc/entity/systems/OnFireSystem.h"
#include "mc/entity/utilities/ActorCategory.h"
#include "mc/entity/utilities/ActorCollision.h"
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/server/SimulatedPlayer.h"
#include "mc/server/commands/CommandUtils.h"
#include "mc/server/commands/RotationData.h"
#include "mc/server/commands/standard/TeleportCommand.h"
#include "mc/server/commands/standard/TeleportTarget.h"
#include "mc/util/ExpressionNode.h"
#include "mc/world/actor/ActorDamageByActorSource.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"

class EntityContext&       Actor::getEntityContext() { return ll::memory::dAccess<EntityContext>(this, 8); }
class EntityContext const& Actor::getEntityContext() const { return ll::memory::dAccess<EntityContext>(this, 8); }

void Actor::refresh() { _sendDirtyActorData(); }

std::string const& Actor::getTypeName() const { return getActorIdentifier().getCanonicalName(); }

class Vec3 Actor::getFeetPos() const { return CommandUtils::getFeetPos(this); }

class Vec3 Actor::getHeadPos() const { return getAttachPos(ActorLocation::Head); }

class BlockPos Actor::getFeetBlockPos() const { return CommandUtils::getFeetBlockPos(this); }

bool Actor::isSimulatedPlayer() const { return dynamic_cast<SimulatedPlayer const*>(this) != nullptr; }

bool Actor::isPlayer(bool allowSimulatedPlayer) const {
    if (isSimulatedPlayer()) {
        return allowSimulatedPlayer;
    }
    return dynamic_cast<ServerPlayer const*>(this) != nullptr;
}
bool Actor::isItemActor() const { return hasCategory(ActorCategory::Item); }
bool Actor::isOnGround() const { return ActorCollision::isOnGround(getEntityContext()); }

void Actor::setOnFire(int num, bool isEffect) {
    if (isEffect) {
        OnFireSystem::setOnFire(*this, num);
    } else {
        OnFireSystem::setOnFireNoEffects(*this, num);
    }
}
void Actor::stopFire() { OnFireSystem::stopFire(*this); }

float Actor::getPosDeltaPerSecLength() const { return static_cast<float>(getPosDelta().length() * 20.0); }

bool Actor::hurt(float damage, ActorDamageCause cause, optional_ref<Actor> attacker) {
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

    if (includeActor) {
        auto player = dynamic_cast<Player*>(const_cast<Actor*>(this));

        float  resDistance = -1.0f;
        Actor* resActor    = nullptr;
        Vec3   resPos{};

        HitDetection::searchActors(
            rayDir,
            tMax,
            origin,
            getAABB(),
            const_cast<Actor*>(this),
            player,
            resDistance,
            resActor,
            resPos,
            player != nullptr
        );
        if (resActor != nullptr) {
            result = std::move(HitResult{origin, rayDir, *resActor, resPos});
        }
    }

    if (includeBlock) {
        HitResult blockRes{getDimensionBlockSource().clip(
            origin,
            origin + rayDir * tMax,
            true,
            false,
            ((static_cast<int>(tMax) + 1) * 2),
            false,
            false,
            nullptr,
            blockCheckFunction
        )};

        if (result.mType != HitResult::HitResultType::Entity ||
            (blockRes.mType == HitResult::HitResultType::Tile &&
             origin.distanceTo(blockRes.mPos) < origin.distanceTo(result.mPos))) {
            result = std::move(blockRes);
        }
    }
    return result;
}

bool Actor::teleport(class Vec3 const& pos, int dimID, class Vec2 const& rotation) {
    Vec2 relativeRotation = rotation - getRotation();
    TeleportCommand::applyTarget(
        *this,
        TeleportCommand::computeTarget(
            *this,
            pos,
            nullptr,
            dimID,
            RotationCommandUtils::RotationData{relativeRotation.x, relativeRotation.y, std::nullopt},
            1
        ),
        false
    );
}

bool Actor::teleport(class Vec3 const& pos, int dimID) {
    TeleportCommand::applyTarget(
        *this, TeleportCommand::computeTarget(*this, pos, nullptr, dimID, std::nullopt, 1), false
    );
}

void Actor::setName(std::string const& name) {
    setNameTag(name);
    refresh();
}

float Actor::quickEvalMolangScript(std::string const& expression) {
    return ExpressionNode(expression).evalAsFloat(getRenderParams());
}

std::unique_ptr<CompoundTag> Actor::saveToNBT() const {
    auto res = std::make_unique<CompoundTag>();

    bool success = save(*res);

    if (success) {
        return res;
    }
    return nullptr;
}

bool Actor::loadFromNBT(class CompoundTag const& nbt) {
    bool res = load(nbt, DefaultDataLoadHelper::globalHelper);
    refresh();
    return res;
}