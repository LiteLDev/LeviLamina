#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerClickEvent.h"

#include "mc/world/gamemode/GameMode.h"

namespace ll::event::inline player {

class PlayerUseItemOnEvent : public Cancellable<PlayerRightClickEvent> {
    ItemStack&         mItemStack;
    BlockSource const& mBlockSource;
    unsigned char      mFace = 0;
    Vec3               mClickPos;

public:
    constexpr PlayerUseItemOnEvent(
        Player&            player,
        ItemStack&         item,
        BlockSource const& blocksource,
        unsigned char      face,
        Vec3               clickPos
    )
    : Cancellable(player),
      mItemStack(item),
      mBlockSource(blocksource),
      mFace(face),
      mClickPos(clickPos) {}

    void serialize(CompoundTag&) const override;

    LLNDAPI ItemStack&         item() const;
    LLNDAPI BlockSource const& blocksource() const;
    LLNDAPI unsigned char      face() const;
    LLNDAPI Vec3               clickPos() const;
};
} // namespace ll::event::inline player
