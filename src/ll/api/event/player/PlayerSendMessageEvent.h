#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

namespace ll::event::inline player {

class PlayerSendMessageEvent : public Cancellable<PlayerEvent> {
    std::string& mMessage;

public:
    constexpr explicit PlayerSendMessageEvent(Player& player, std::string& message)
    : Cancellable(player),
      mMessage(message) {}

    LLNDAPI std::string& message() const;
};
} // namespace ll::event::inline player
