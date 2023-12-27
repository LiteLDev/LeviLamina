#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerClickEvent.h"

#include "mc/world/item/registry/ItemStack.h"

namespace ll::event::inline player {

class PlayerUseItemEvent : public Cancellable<PlayerRightClickEvent> {
    ItemStack& mItem;

public:
    constexpr PlayerUseItemEvent(Player& player, ItemStack& item) : Cancellable(player), mItem(item) {}

    void serialize(CompoundTag&) const override;

    LLNDAPI ItemStack& item() const;
};
} // namespace ll::event::inline player
