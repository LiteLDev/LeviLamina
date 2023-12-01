#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"
#include "mc/world/actor/player/Player.h"


namespace ll::event::player {
/**
 * @brief Player attack event.
 */
class PlayerAttackEvent : public Cancellable<Event> {
public:
    Player& source;
    Actor&  target;
    float&  damage;

    constexpr explicit PlayerAttackEvent(Player& source, Actor& target, float& damage)
    : source(source),
      target(target),
      damage(damage) {}

    LLNDAPI static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
};

} // namespace ll::event::player
