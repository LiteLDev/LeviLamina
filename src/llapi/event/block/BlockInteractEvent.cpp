#include <llapi/event/EventManager.h>
#include <llapi/event/block/BlockInteractEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/Level.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>

namespace ll::event::block {

BlockInteractEvent::BlockInteractEvent(BlockInstance const& blockInstance, Player* player)
: blockInstance(blockInstance), player(player) {}

LL_GETTER_IMPL(BlockInteractEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(BlockInteractEvent, BlockInstance, blockInstance, getBlockInstance)

LL_AUTO_INSTANCE_HOOK(
    BlockInteractEventHook,
    HookPriority::Normal,
    "?onBlockInteractedWith@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z",
    unsigned short,
    Player*   player,
    BlockPos* blockPos
) {
    BlockInteractEvent event(Level::getBlockInstance(*blockPos, player->getDimensionId()), player);
    EventManager<BlockInteractEvent>::fireEvent(event);
    if (event.isCancelled()) {
        return 0;
    }
    return origin(player, blockPos);
}

} // namespace ll::event::block

LL_EVENT_IMPL(block::BlockInteractEvent)
