#pragma once

#include "ll/api/event/entity/MobEvent.h"

#include "mc/server/ServerPlayer.h"

namespace ll::event::inline player {

class PlayerEvent : public MobEvent {
protected:
    constexpr explicit PlayerEvent(Player& player) : MobEvent(player) {}

public:
    LLNDAPI ServerPlayer& self() const;
};
} // namespace ll::event::inline player
