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
        if (auto player = this->getServerPlayer(id, packet.mClientSubId)) {
            EventBus::getInstance().publish(PlayerSwingEvent(player));
        }
    }
    origin(id, packet);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerSwingEventEmitter : public Emitter<PlayerSwingEvent, emitterFactory> {
    memory::HookAutoRegister<PlayerSwingEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerSwingEventEmitter>();
}

} // namespace ll::event::inline player
