#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"
#include "mc/world/actor/player/Player.h"


namespace ll::event::player {
/**
 * @brief Player add experience event.
 */
class PlayerAddExperienceEvent : public Cancellable<Event> {
public:
    Player& player;
    int&    exp;

    constexpr explicit PlayerAddExperienceEvent(Player& player, int& exp) : player(player), exp(exp) {}

    LLNDAPI static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
};

} // namespace ll::event::player
