#include "ll/api/event/player/PlayerJoinEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/SetLocalPlayerAsInitializedPacket.h"
#include "mc/server/ServerPlayer.h"

namespace ll::event::inline player {

LL_TYPE_INSTANCE_HOOK(
    PlayerJoinEventHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    &ServerNetworkHandler::$handle,
    void,
    NetworkIdentifier const&                 identifier,
    SetLocalPlayerAsInitializedPacket const& packet
) {
    auto handle = static_cast<decltype(this)>(reinterpret_cast<NetEventCallback*>(this));
    if (auto player = handle->_getServerPlayer(identifier, packet.mClientSubId); player) {
        auto event = PlayerJoinEvent{*player};
        EventBus::getInstance().publish(event);
        if (event.isCancelled()) {
            return;
        }
    }
    origin(identifier, packet);
}

static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerJoinEventEmitter : public Emitter<emitterFactory, PlayerJoinEvent> {
    memory::HookRegistrar<PlayerJoinEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerJoinEventEmitter>(); }

} // namespace ll::event::inline player
