#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"
#include "mc/world/actor/player/Player.h"


namespace ll::event::inline player {
/**
 * @brief Player attacked event.
 */
class PlayerAttackedEvent : public Cancellable<Event> {
public:
    Player& source;
    Actor&  target;
    float&  damage;

    constexpr explicit PlayerAttackedEvent(Player& source, Actor& target, float& damage)
    : source(source),
      target(target),
      damage(damage) {}
};

} // namespace ll::event::inline player
