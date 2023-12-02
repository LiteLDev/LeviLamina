#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"

#include "mc/world/actor/player/Player.h"

namespace ll::event::inline player {
class PlayerSendMessageEvent : public Cancellable<Event> {
public:
    Player&      player;
    std::string& message;

    constexpr explicit PlayerSendMessageEvent(Player& player, std::string& message)
    : player(player),
      message(message) {}
};
} // namespace ll::event::inline player
