#include <llapi/event/EventManager.h>
#include <llapi/event/player/PlayerChatEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/Player.hpp>
#include <llapi/mc/ServerNetworkHandler.hpp>
#include <llapi/mc/ServerPlayer.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>
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
