#pragma once

#include "ll/api/event/mob/MobEvent.h"

#include "mc/world/actor/ActorDamageSource.h"

namespace ll::event::inline mob {

class MobDieEvent : public MobEvent {
    ActorDamageSource const& mSource;

public:
    constexpr explicit MobDieEvent(Mob& mob, ActorDamageSource const& source) : MobEvent(mob), mSource(source) {}

    void serialize(CompoundTag&) const override;

    LLNDAPI ActorDamageSource const& source() const;
};
} // namespace ll::event::inline mob
