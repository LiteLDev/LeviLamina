#include <llapi/event/EventManager.h>
#include <llapi/event/player/PlayerCloseContainerEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/BlockActor.hpp>
#include <llapi/mc/ChestBlockActor.hpp>
#include <llapi/mc/Level.hpp>
#include <llapi/mc/Player.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>

namespace ll::event::player {

PlayerCloseContainerEvent::PlayerCloseContainerEvent(Player* player, BlockInstance blockInstance, Container* container)
: player(player), blockInstance(blockInstance), container(container) {}

LL_GETTER_IMPL(PlayerCloseContainerEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(PlayerCloseContainerEvent, BlockInstance, blockInstance, getBlockInstance)
LL_GETTER_IMPL(PlayerCloseContainerEvent, Container*, container, getContainer)

using EventManager = EventManager<PlayerCloseContainerEvent>;

template <typename T>
void PlayerCloseContainerEventHookImpl(T* self, Player* player) {
    auto*         blockActor    = (BlockActor*)((char*)self - 240); // IDA ChestBlockActor::stopOpen
    BlockPos      blockPos      = blockActor->getPosition();
    BlockInstance blockInstance = Level::getBlockInstance(blockPos, player->getDimensionId());
    Container*    container     = blockInstance.getContainer();

    PlayerCloseContainerEvent event(player, blockInstance, container);
    EventManager::fireEvent(event);
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerCloseContainerEventHook,
    ChestBlockActor,
    HookPriority::Normal,
    "?stopOpen@ChestBlockActor@@UEAAXAEAVPlayer@@@Z",
    bool,
    Player* pl
) {
    PlayerCloseContainerEventHookImpl(this, pl);
    return origin(pl);
}

LL_AUTO_INSTANCE_HOOK(
    PlayerCloseContainerEventHook2,
    HookPriority::Normal,
    "?stopOpen@BarrelBlockActor@@UEAAXAEAVPlayer@@@Z",
    bool,
    Player* pl
) {
    PlayerCloseContainerEventHookImpl(this, pl);
    return origin(pl);
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerCloseContainerEvent)
