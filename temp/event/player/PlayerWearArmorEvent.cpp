#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/player/PlayerWearArmorEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "liteloader/api/ScheduleAPI.h"

#include "mc/ItemStack.hpp"
#include "mc/Level.hpp"
#include "mc/Player.hpp"
#include "mc/PlayerInventory.hpp"
#include "mc/SimpleContainer.hpp"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"

namespace ll::event::player {

PlayerWearArmorEvent::PlayerWearArmorEvent(Player* player, int slot, ItemStack* armorItem)
: player(player), slot(slot), armorItem(armorItem) {}

LL_GETTER_IMPL(PlayerWearArmorEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(PlayerWearArmorEvent, int, slot, getSlot)
LL_GETTER_IMPL(PlayerWearArmorEvent, ItemStack*, armorItem, getArmorItem)
LL_SETTER_IMPL(PlayerWearArmorEvent, ItemStack*, armorItem, setArmorItem)

using EventManager = EventManager<PlayerWearArmorEvent>;

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerWearArmorEventHook,
    Player,
    HookPriority::Normal,
    "?setArmor@ServerPlayer@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z",
    void,
    int        slot,
    ItemStack* it
) {
    using ll::memory::dAccess;

    origin(slot, it);
    if (!this->isPlayer()) {
        return;
    }

    PlayerWearArmorEvent event(this, slot, it);
    EventManager::fireEvent(event);

    if (!event.isCancelled())
        return;

    auto& uid   = this->getUniqueID();
    auto& plInv = this->getSupplies();
    plInv.add(*it, true);
    this->getArmorContainer().setItem(slot, ItemStack::EMPTY_ITEM);
    Schedule::delay(
        [uid] {
            auto sp = Global<Level>->getPlayer(uid);
            if (sp) {
                sp->refreshInventory();
            }
        },
        1
    );
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerWearArmorEvent)
