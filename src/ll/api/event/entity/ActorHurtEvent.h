#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/entity/ActorEvent.h"

#include "mc/world/actor/ActorDamageSource.h"

namespace ll::event::inline entity {

class ActorHurtEvent final : public Cancellable<ActorEvent> {
    ActorDamageSource const& mSource;
    float&                   mDamage;

public:
    constexpr explicit ActorHurtEvent(Actor& actor, ActorDamageSource const& source, float& damage)
    : Cancellable(actor),
      mSource(source),
      mDamage(damage) {}

    LLAPI void serialize(CompoundTag&) const override;
    LLAPI void deserialize(CompoundTag const&) override;

    LLNDAPI ActorDamageSource const& source() const;
    LLNDAPI float&                   damage() const;
};
} // namespace ll::event::inline entity
