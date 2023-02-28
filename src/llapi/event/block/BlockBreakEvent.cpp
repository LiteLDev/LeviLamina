#include "llapi/event/EventManager.h"
#include "llapi/event/block/BlockBreakEvent.h"
#include "llapi/memory/Hook.h"

#include "llapi/mc/Block.hpp"
#include "llapi/mc/GameMode.hpp"
#include "llapi/mc/Level.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/mc/ServerPlayer.hpp"

#include "llapi/event/impl/EventImpl.inl"
#include "llapi/event/impl/EventManagerImpl.inl"
#include "llapi/event/impl/ListenerImpl.inl"

namespace ll::event::block {

BlockBreakEvent::BlockBreakEvent(Player* player, const BlockInstance& blockInstance)
: player(player), blockInstance(blockInstance) {}

LL_GETTER_IMPL(BlockBreakEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(BlockBreakEvent, BlockInstance, blockInstance, getBlockInstance)

using EventManager = EventManager<BlockBreakEvent>;

LL_AUTO_TYPED_INSTANCE_HOOK(
    BlockBreakEventHook,
    GameMode,
    HookPriority::Normal,
    "?destroyBlock@GameMode@@UEAA_NAEBVBlockPos@@E@Z",
    bool,
    BlockPos        a3,
    unsigned __int8 a4
) {
    using ll::memory::dAccess;
    Player* player = this->getPlayer();
    if (!player) {
        return origin(a3, a4);
    }
    BlockInstance   blockInstance = Level::getBlockInstance(a3, player->getDimensionId());
    BlockBreakEvent event(player, blockInstance);

    EventManager::fireEvent(event);
    if (event.isCancelled()) {
        return false;
    }

    return origin(a3, a4);
}

} // namespace ll::event::block

LL_EVENT_IMPL(block::BlockBreakEvent)
