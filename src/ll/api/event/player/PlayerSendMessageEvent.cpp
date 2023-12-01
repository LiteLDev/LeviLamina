#include "ll/api/event/player/PlayerSendMessageEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/network/NetworkIdentifier.h"
#include "mc/network/packet/TextPacket.h"

#include "mc/network/ServerNetworkHandler.h"

namespace ll::event::inline player {

LL_TYPED_INSTANCE_HOOK(
    PlayerSendMessageEventHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z",
    void,
    NetworkIdentifier const& identifier,
    TextPacket const&        packet
) {
    if (auto player = getServerPlayer(identifier, packet.mClientSubId); player) {
        auto event = PlayerSendMessageEvent{player, const_cast<TextPacket&>(packet).mMessage};
        EventBus::getInstance().publish(event);
        if (event.isCancelled()) {
            return;
        }
    }
    origin(identifier, packet);
}

class PlayerSendMessageEventEmitter : public Emitter<PlayerSendMessageEvent> {
public:
    PlayerSendMessageEventEmitter() { PlayerSendMessageEventHook::hook(); }
    ~PlayerSendMessageEventEmitter() override { PlayerSendMessageEventHook::unhook(); }
};

std::unique_ptr<EmitterBase> PlayerSendMessageEvent::emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerSendMessageEventEmitter>();
}
} // namespace ll::event::inline player
