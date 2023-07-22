#include "liteloader/api/event/player/PlayerChangeDimEvent.h"
#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/memory/Hook.h"

#include "mc/ChangeDimensionRequest.hpp"
#include "mc/Level.hpp"
#include "mc/Player.hpp"
#include "mc/ServerPlayer.hpp"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"

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
