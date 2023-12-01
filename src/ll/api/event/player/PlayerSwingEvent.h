#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"
#include "mc/world/actor/player/Player.h"


namespace ll::event::inline player {
/**
 * @brief Player swing event.
 */
class PlayerSwingEvent : public Event {
public:
    Player& player;

    constexpr explicit PlayerSwingEvent(Player& player) : player(player) {}

    LLNDAPI static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
};

} // namespace ll::event::inline player
