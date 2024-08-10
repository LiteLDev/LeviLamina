#include "ll/api/event/player/PlayerSwingEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/AnimatePacket.h"

namespace ll::event::inline player {

LL_TYPE_INSTANCE_HOOK(
    PlayerSwingEventHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    &ServerNetworkHandler::handle,
    void,
    NetworkIdentifier const& id,
    AnimatePacket const&     packet
) {
    if (packet.mAction == AnimatePacket::Action::Swing) {
        if (auto player = this->getServerPlayer(id, packet.mClientSubId); player) {
            EventBus::getInstance().publish(PlayerSwingEvent(player));
        }
    }
    origin(id, packet);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerSwingEventEmitter : public Emitter<emitterFactory, PlayerSwingEvent> {
    memory::HookRegistrar<PlayerSwingEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerSwingEventEmitter>();
}

} // namespace ll::event::inline player
