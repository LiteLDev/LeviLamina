#include "ll/api/event/player/PlayerAttackEvent.h"
#include "ll/api/base/ScopedValue.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventRefObjSerializer.h"
#include "ll/api/memory/Hook.h"

#include "mc/deps/nbt/CompoundTag.h"
#include "mc/entity/components/DealKineticDamageComponent.h"
#include "mc/entity/systems/DealKineticDamageSystem.h"
#include "mc/world/actor/ActorHurtResult.h"
#include "mc/world/phys/HitResult.h"
#include "mc/world/phys/MeleeTargeting.h"

namespace ll::event::inline player {

void PlayerAttackEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["target"] = serializeRefObj(target());
    nbt["cause"]  = magic_enum::enum_name(cause());
}

Actor&                                         PlayerAttackEvent::target() const { return mTarget; }
::SharedTypes::Legacy::ActorDamageCause const& PlayerAttackEvent::cause() const { return mCause; }

static bool
meetsKineticCondition(KineticEffectConditions const& cond, float speed, float relativeSpeed, uint ticks, ushort delay) {
    constexpr float epsilon = std::numeric_limits<float>::epsilon();

    auto minSpeed         = cond.mUnk992d2b.as<float>();
    auto minRelativeSpeed = cond.mUnka7d9bd.as<float>();
    auto maxDuration      = cond.mUnk7e79ec.as<ushort>();
    auto speedOk          = speed >= minSpeed || std::fabs(minSpeed) <= epsilon;
    auto relativeOk       = relativeSpeed >= minRelativeSpeed || std::fabs(minRelativeSpeed) <= epsilon;

    if (!speedOk || !relativeOk) return false;
    if ((maxDuration & 0x8000) != 0) return true;
    return ticks < static_cast<uint>(delay) + maxDuration;
}

static bool willDealKineticDamage(Actor& source, Actor& target, DealKineticDamageComponent const& component) {
    if (component.mTicks < component.mSettings->mDelay) return false;

    if (auto it = component.mHitEntities->find(target.getOrCreateUniqueID());
        it != component.mHitEntities->end() && component.mTicks - (*it).second < 11) {
        return false;
    }

    // clang-format off
    auto& settings = *component.mSettings;
    auto  meets    = [
        &,
        speed         = source.getPosDeltaPerSecLength(),
        relativeSpeed = static_cast<float>(source.getVelocity().distanceTo(target.getVelocity()) * 20.0)
    ](std::optional<KineticEffectConditions> const& cond) {
        return cond.has_value() && meetsKineticCondition(*cond, speed, relativeSpeed, component.mTicks, settings.mDelay);
    };
    return meets(*settings.mDamageConditions)
        || meets(*settings.mKnockbackConditions)
        || (target.getVehicle() && meets(*settings.mDismountConditions));
    // clang-format on
}

thread_local DealKineticDamageComponent* onSpearAttackWhenDealKineticDamage = nullptr;

LL_TYPE_INSTANCE_HOOK(
    PlayerAttackEventHook,
    HookPriority::Normal,
    Player,
    &Player::attack,
    ActorHurtResult,
    Actor&                                       ac,
    SharedTypes::Legacy::ActorDamageCause const& cause,
    Player::AttackParameters const&              parameters
) {
    auto ev = PlayerAttackEvent(*this, ac, cause);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return {};
    }
    return origin(ac, cause, parameters);
}

LL_STATIC_HOOK(
    TryApplyDealKineticDamageHook,
    HookPriority::Normal,
    &DealKineticDamageSystem::tryApplyDamageOrEffects,
    void,
    ActorOwnerComponent&        actorOwnerComponent,
    DealKineticDamageComponent& dealKineticDamageComponent
) {
    ScopedValue scope{onSpearAttackWhenDealKineticDamage, &dealKineticDamageComponent};
    origin(actorOwnerComponent, dealKineticDamageComponent);
}

LL_STATIC_HOOK(
    GetHitResultsHook,
    HookPriority::Normal,
    // TODO: Remove signature code
    // &HitDetection::MeleeTargeting::getHitResults,
    "55 41 57 41 56 56 57 53 48 81 EC ?? ?? ?? ?? 48 8D AC 24 ?? ?? ?? ?? 44 0F 29 8D ?? ?? ?? ?? 44 0F 29 85 ?? ?? ?? ?? 0F 29 BD ?? ?? ?? ?? 0F 29 B5 ?? ?? ?? ?? 48 C7 85 ?? ?? ?? ?? ?? ?? ?? ?? 4C 89 CB"_sig,
    std::vector<HitResult>,
    BlockSource&                   region,
    Actor&                         source,
    Vec3 const&                    direction,
    SharedTypes::FloatRange const& distance,
    float                          collisionMargin
) {
    auto result = origin(region, source, direction, distance, collisionMargin);
    if (onSpearAttackWhenDealKineticDamage && source.isPlayer()) {
        std::erase_if(result, [&](HitResult const& hit) {
            if (auto* entity = hit.getEntity(); entity) {
                if (!willDealKineticDamage(source, *entity, *onSpearAttackWhenDealKineticDamage)) {
                    return false;
                }
                auto ev = PlayerAttackEvent(
                    static_cast<Player&>(source),
                    *entity,
                    SharedTypes::Legacy::ActorDamageCause::EntityAttack
                );
                EventBus::getInstance().publish(ev);
                if (ev.isCancelled()) {
                    return true;
                }
            }
            return false;
        });
    }
    return result;
}

static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerAttackEventEmitter : public Emitter<emitterFactory, PlayerAttackEvent> {
    memory::HookRegistrar<PlayerAttackEventHook, TryApplyDealKineticDamageHook, GetHitResultsHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerAttackEventEmitter>(); }

} // namespace ll::event::inline player
