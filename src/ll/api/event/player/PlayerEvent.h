#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Event.h"

#include "mc/server/ServerPlayer.h"

namespace ll::event::inline player {

class PlayerEvent : public Event {
    ServerPlayer& mPlayer;

protected:
    constexpr explicit PlayerEvent(Player& player) : mPlayer((ServerPlayer&)player) {}

public:
    void serialize(CompoundTag&) const override;

    LLNDAPI ServerPlayer& player() const;
};
} // namespace ll::event::inline player
