#pragma once

#include "ll/api/event/entity/MobEvent.h"

#include "mc/world/actor/ActorDamageSource.h"

namespace ll::event::inline entity {

class MobDieEvent final : public MobEvent {
    ActorDamageSource const& mSource;

public:
    constexpr explicit MobDieEvent(Mob& mob, ActorDamageSource const& source) : MobEvent(mob), mSource(source) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI ActorDamageSource const& source() const;
};
} // namespace ll::event::inline entity
