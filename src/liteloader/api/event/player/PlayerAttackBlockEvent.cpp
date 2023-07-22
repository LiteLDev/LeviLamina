#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/player/PlayerAttackBlockEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "mc/Block.hpp"
#include "mc/Player.hpp"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"
#include <utility>

namespace ll::event::player {

PlayerAttackBlockEvent::PlayerAttackBlockEvent(Player* player, BlockInstance const& blockInstance, ItemStack* itemStack)
: player(player), blockInstance(blockInstance), itemStack(itemStack) {}

LL_GETTER_IMPL(PlayerAttackBlockEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(PlayerAttackBlockEvent, BlockInstance, blockInstance, getBlockInstance)
LL_GETTER_IMPL(PlayerAttackBlockEvent, ItemStack*, itemStack, getItemStack)

using EventManager = EventManager<PlayerAttackBlockEvent>;

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerAttackBlockEventHook,
    Block,
    HookPriority::Normal,
    "?attack@Block@@QEBA_NPEAVPlayer@@AEBVBlockPos@@@Z",
    bool,
    Player*   pl,
    BlockPos* bp
) {
    BlockInstance          blockInstance = BlockInstance::createBlockInstance(this, *bp, pl->getDimensionId());
    ItemStack*             itemStack     = pl->getHandSlot();
    PlayerAttackBlockEvent event(pl, blockInstance, itemStack);
    EventManager::fireEvent(event);
    return !event.isCancelled() && origin(pl, bp);
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerAttackBlockEvent)
