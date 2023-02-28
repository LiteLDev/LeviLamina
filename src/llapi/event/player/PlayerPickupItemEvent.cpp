#include "llapi/event/EventManager.h"
#include "llapi/event/player/PlayerPickupItemEvent.h"
#include "llapi/memory/Hook.h"

#include "llapi/mc/ItemActor.hpp"
#include "llapi/mc/Player.hpp"

#include "llapi/event/impl/EventImpl.inl"
#include "llapi/event/impl/EventManagerImpl.inl"
#include "llapi/event/impl/ListenerImpl.inl"

namespace ll::event::player {

PlayerPickupItemEvent::PlayerPickupItemEvent(Player* player, Actor* itemEntity, ItemStack* itemStack)
: player(player), itemEntity(itemEntity), itemStack(itemStack) {}

LL_GETTER_IMPL(PlayerPickupItemEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(PlayerPickupItemEvent, Actor*, itemEntity, getItemEntity)
LL_GETTER_IMPL(PlayerPickupItemEvent, ItemStack*, itemStack, getItemStack)

using EventManager = EventManager<PlayerPickupItemEvent>;

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerPickupItemEventHook,
    Player,
    HookPriority::Normal,
    "?take@Player@@QEAA_NAEAVActor@@HH@Z",
    bool,
    Actor* actor,
    int    a2,
    int    a3
) {
    using ll::memory::dAccess;

    ItemStack* itemStack = nullptr;
    if (actor->isItemActor())
        itemStack = ((ItemActor*)actor)->getItemStack();

    PlayerPickupItemEvent event(this, actor, itemStack);
    EventManager::fireEvent(event);

    return !event.isCancelled() && origin(actor, a2, a3);
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerPickupItemEvent)
