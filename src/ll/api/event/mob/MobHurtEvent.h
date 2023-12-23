#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/mob/MobEvent.h"

#include "mc/world/actor/ActorDamageSource.h"

namespace ll::event::inline mob {

class MobHurtEvent : public Cancellable<MobEvent> {
    ActorDamageSource const& mDamageSource;
    float                    mDamage;

public:
    constexpr MobHurtEvent(Mob& mob, ActorDamageSource const& source, float damage)
    : Cancellable(mob),
      mDamageSource(source),
      mDamage(damage) {}

    LLNDAPI ActorDamageSource const& source() const;
    LLNDAPI float                    damage() const;
};
} // namespace ll::event::inline mob
