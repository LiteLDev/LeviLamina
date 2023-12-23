#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/mob/MobEvent.h"

namespace ll::event::inline mob {

class MobDieEvent : public Cancellable<MobEvent> {
    ActorDamageSource const& mDamageSource;

public:
    constexpr MobDieEvent(Mob& mob, ActorDamageSource const& source) : Cancellable(mob), mDamageSource(source) {}

    LLNDAPI ActorDamageSource const& source() const;
};
} // namespace ll::event::inline mob
