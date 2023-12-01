#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"
#include "mc/world/actor/player/Player.h"


namespace ll::event::player {
/**
 * @brief Player attack event.
 */
class PlayerDieEvent : public Event {
public:
    Player&                  player;
    ActorDamageSource const& source;

    constexpr explicit PlayerDieEvent(Player& player, ActorDamageSource const& source)
    : player(player),
      source(source) {}

    LLNDAPI static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
};

} // namespace ll::event::player
