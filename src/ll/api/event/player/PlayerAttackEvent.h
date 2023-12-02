#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"
#include "mc/world/actor/player/Player.h"


namespace ll::event::inline player {
/**
 * @brief Player attack event.
 */
class PlayerAttackEvent : public Cancellable<Event> {
public:
    Player&                 source;
    Actor&                  target;
    ActorDamageCause const& cause;

    constexpr explicit PlayerAttackEvent(Player& source, Actor& target, ActorDamageCause const& cause)
    : source(source),
      target(target),
      cause(cause) {}
};

} // namespace ll::event::inline player
