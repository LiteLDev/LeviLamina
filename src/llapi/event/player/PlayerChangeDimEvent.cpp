#include <llapi/event/EventManager.h>
#include <llapi/event/player/PlayerChangeDimEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/ChangeDimensionRequest.hpp>
#include <llapi/mc/Level.hpp>
#include <llapi/mc/Player.hpp>
#include <llapi/mc/ServerPlayer.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>

namespace ll::event::player {

PlayerChangeDimEvent::PlayerChangeDimEvent(Player* player, int toDimensionId)
: player(player), toDimensionId(toDimensionId) {}

LL_GETTER_IMPL(PlayerChangeDimEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(PlayerChangeDimEvent, int, toDimensionId, getToDimensionId)

using EventManager = EventManager<PlayerChangeDimEvent>;

LL_AUTO_INSTANCE_HOOK(
    PlayerChangeDimEventHook,
    HookPriority::Normal,
    "?requestPlayerChangeDimension@Level@@UEAAXAEAVPlayer@@V?$unique_ptr@VChangeDimensionRequest@@U?$default_delete@"
    "VChangeDimensionRequest@@@std@@@std@@@Z",
    bool,
    Player*                                 sp,
    std::unique_ptr<ChangeDimensionRequest> request
) {
    if (request->mToDimensionId == sp->getDimensionId())
        return origin(sp, std::move(request));

    PlayerChangeDimEvent event(sp, request->mToDimensionId);
    EventManager::fireEvent(event);
    if (event.isCancelled()) {
        return false;
    }

    return origin(sp, std::move(request));
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerChangeDimEvent)
