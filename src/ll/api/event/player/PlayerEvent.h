#pragma once

#include "ll/api/event/entity/MobEvent.h"

#include "mc/world/actor/player/Player.h"

namespace ll::event::inline player {

class PlayerEvent : public MobEvent {
protected:
    constexpr explicit PlayerEvent(Player& player) : MobEvent(player) {}

public:
    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI Player& self() const;
};
} // namespace ll::event::inline player
