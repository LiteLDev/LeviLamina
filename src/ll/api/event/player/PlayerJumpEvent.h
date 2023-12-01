#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"
#include "mc/world/actor/player/Player.h"


namespace ll::event::player {
/**
 * @brief Player jump event.
 */
class PlayerJumpEvent : public Event {
public:
    Player& player;

    constexpr explicit PlayerJumpEvent(Player& player) : player(player) {}

    LLNDAPI static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
};

} // namespace ll::event::player
