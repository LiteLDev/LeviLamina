#include <llapi/event/EventManager.h>
#include <llapi/event/player/PlayerWearArmorEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/ScheduleAPI.h>

#include <llapi/mc/ItemStack.hpp>
#include <llapi/mc/Level.hpp>
#include <llapi/mc/Player.hpp>
#include <llapi/mc/PlayerInventory.hpp>
#include <llapi/mc/SimpleContainer.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>

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
