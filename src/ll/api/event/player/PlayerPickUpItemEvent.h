#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

#include "mc/world/actor/item/ItemActor.h"

namespace ll::event::inline player {

class PlayerPickUpItemEvent : public Cancellable<PlayerEvent> {
    ItemActor& mItemActor;

public:
    constexpr PlayerPickUpItemEvent(Player& player, ItemActor& itemActor)
    : Cancellable(player),
      mItemActor(itemActor) {}

    void serialize(CompoundTag&) const override;

    LLNDAPI ItemActor& itemActor() const;
};

} // namespace ll::event::inline player
