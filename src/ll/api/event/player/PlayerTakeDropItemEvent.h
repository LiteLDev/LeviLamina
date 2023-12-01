#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"
#include "mc/world/actor/item/ItemActor.h"
#include "mc/world/actor/player/Player.h"


namespace ll::event::inline player {
/**
 * @brief Player take drop item event.
 */
class PlayerTakeDropItemEvent : public Cancellable<Event> {
public:
    Player&    player;
    ItemActor& itemActor;

    constexpr explicit PlayerTakeDropItemEvent(Player& player, ItemActor& itemActor)
    : player(player),
      itemActor(itemActor) {}

    LLNDAPI static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
};

} // namespace ll::event::inline player
