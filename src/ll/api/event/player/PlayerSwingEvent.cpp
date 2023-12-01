#include "ll/api/event/player/PlayerSwingEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/AnimatePacket.h"

namespace ll::event::inline player {

LL_TYPED_INSTANCE_HOOK(
    PlayerSwingEventHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVAnimatePacket@@@Z",
    void,
    NetworkIdentifier const& id,
    AnimatePacket const&     packet
) {
    if (packet.mAction == AnimatePacket::Action::Swing) {
        EventBus::getInstance().publish(PlayerSwingEvent(this->getServerPlayer(id, packet.mClientSubId)));
    }
    origin(id, packet);
}

class PlayerSwingEventEmitter : public Emitter<PlayerSwingEvent> {
public:
    PlayerSwingEventEmitter() { PlayerSwingEventHook::hook(); }
    ~PlayerSwingEventEmitter() override { PlayerSwingEventHook::unhook(); }
};

std::unique_ptr<EmitterBase> PlayerSwingEvent::emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerSwingEventEmitter>();
}

} // namespace ll::event::inline player
