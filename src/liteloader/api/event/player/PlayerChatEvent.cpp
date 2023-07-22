#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/player/PlayerChatEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "mc/Player.hpp"
#include "mc/ServerNetworkHandler.hpp"
#include "mc/ServerPlayer.hpp"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"
#include <utility>

namespace ll::event::player {

PlayerChatEvent::PlayerChatEvent(Player* player, std::string message) : player(player), message(std::move(message)) {}

LL_GETTER_IMPL(PlayerChatEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(PlayerChatEvent, std::string, message, getMessage)
LL_SETTER_IMPL(PlayerChatEvent, std::string, message, setMessage)

using EventManager = EventManager<PlayerChatEvent>;

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerChatEventHook,
    ServerNetworkHandler,
    HookPriority::Normal,
    "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z",
    void,
    NetworkIdentifier* id,
    void*              text
) {
    using ll::memory::dAccess;

    std::string     originMessage = dAccess<std::string>(text, 88);
    PlayerChatEvent event(this->getServerPlayer(*id), originMessage);
    if (!event.getPlayer())
        return;

    EventManager::fireEvent(event);
    if (event.isCancelled()) {
        return;
    }

    dAccess<std::string>(text, 88) = event.getMessage();
    return origin(id, text);
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerChatEvent)
