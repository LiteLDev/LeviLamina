#include "llapi/event/EventManager.h"
#include "llapi/event/player/PlayerUseRespawnAnchorEvent.h"
#include "llapi/memory/Hook.h"

#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/BlockPos.hpp"
#include "llapi/mc/BlockSource.hpp"
#include "llapi/mc/Level.hpp"
#include "llapi/mc/Player.hpp"

#include "llapi/event/impl/EventImpl.inl"
#include "llapi/event/impl/EventManagerImpl.inl"
#include "llapi/event/impl/ListenerImpl.inl"

namespace ll::event::player {

PlayerUseRespawnAnchorEvent::PlayerUseRespawnAnchorEvent(Player* player, const BlockInstance& blockInstance)
: player(player), blockInstance(blockInstance) {}

LL_GETTER_IMPL(PlayerUseRespawnAnchorEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(PlayerUseRespawnAnchorEvent, BlockInstance, blockInstance, getBlockInstance)

using EventManager = EventManager<PlayerUseRespawnAnchorEvent>;

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerUseRespawnAnchorEventHook,
    Player,
    HookPriority::Normal,
    "?trySetSpawn@RespawnAnchorBlock@@CA_NAEAVPlayer@@AEBVBlockPos@@AEAVBlockSource@@AEAVLevel@@@Z",
    bool,
    BlockPos*    bp,
    BlockSource* bs,
    Level*       a4
) {
    Player*       player = this;
    BlockInstance block  = Level::getBlockInstance(bp, bs);

    PlayerUseRespawnAnchorEvent event(player, block);
    EventManager::fireEvent(event);

    if (event.isCancelled()) {
        return false;
    }

    return origin(bp, bs, a4);
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerUseRespawnAnchorEvent)
