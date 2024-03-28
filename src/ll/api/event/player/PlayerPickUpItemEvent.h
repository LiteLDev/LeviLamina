#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

#include "mc/world/actor/item/ItemActor.h"

namespace ll::event::inline player {

class PlayerPickUpItemEvent final : public Cancellable<PlayerEvent> {
    ItemActor& mItemActor;
    int&       mOrgCount;
    int&       mFavoredSlot;

public:
    constexpr PlayerPickUpItemEvent(Player& player, ItemActor& itemActor, int& orgCount, int& favoredSlot)
    : Cancellable(player),
      mItemActor(itemActor),
      mOrgCount(orgCount),
      mFavoredSlot(favoredSlot) {}

    LLAPI void serialize(CompoundTag&) const override;
    LLAPI void deserialize(CompoundTag const&) override;

    LLNDAPI ItemActor& itemActor() const;
    LLNDAPI int&       orgCount() const;
    LLNDAPI int&       favoredSlot() const;
};

} // namespace ll::event::inline player
