#include "ll/api/event/player/PlayerChatEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/TextPacket.h"

namespace ll::event::inline player {

void PlayerChatEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["message"] = message();
}

void PlayerChatEvent::deserialize(CompoundTag const& nbt) {
    Cancellable::deserialize(nbt);
    message() = nbt["message"];
}

std::string& PlayerChatEvent::message() const { return mMessage; }

LL_TYPE_INSTANCE_HOOK(
    PlayerSendMessageEventHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    &ServerNetworkHandler::handle,
    void,
    NetworkIdentifier const& identifier,
    TextPacket const&        packet
) {
    if (auto player = getServerPlayer(identifier, packet.mClientSubId); player) {
        auto event = PlayerChatEvent{player, const_cast<TextPacket&>(packet).mMessage};
        EventBus::getInstance().publish(event);
        if (event.isCancelled()) {
            return;
        }
    }
    origin(identifier, packet);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerSendMessageEventEmitter : public Emitter<emitterFactory, PlayerChatEvent> {
    memory::HookRegistrar<PlayerSendMessageEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerSendMessageEventEmitter>();
}

} // namespace ll::event::inline player
