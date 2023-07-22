#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/Player.hpp"
#include "liteloader/api/utils/AccessorMacro.h"


namespace ll::event::player {

/**
 * @brief Player wear armor event.
 * @details This event is called when a player wears an armor.
 */
class PlayerWearArmorEvent : public Event<PlayerWearArmorEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RO_MEMBER(int, slot, getSlot);
    LL_RW_MEMBER(ItemStack*, armorItem, getArmorItem, setArmorItem);

    explicit PlayerWearArmorEvent(Player* player, int slot, ItemStack* armorItem);

    LL_DELETE_COPY(PlayerWearArmorEvent);
    LL_DELETE_MOVE(PlayerWearArmorEvent);
};

} // namespace ll::event::player
