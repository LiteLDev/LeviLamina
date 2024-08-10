#include "ll/api/event/player/PlayerSneakEvent.h"
#include "ll/api/event/player/PlayerSprintEvent.h"

#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/PlayerActionPacket.h"

namespace ll::event::inline player {
LL_TYPE_INSTANCE_HOOK(
    PlayerActionEventHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    &ServerNetworkHandler::handle,
    void,
    NetworkIdentifier const&  id,
    PlayerActionPacket const& packet
) {
    switch (packet.mAction) {
    case PlayerActionType::StartSprinting:
        if (auto player = this->getServerPlayer(id, packet.mClientSubId); player) {
            EventBus::getInstance().publish(PlayerSprintingEvent(player));
            break;
        }
    case PlayerActionType::StopSprinting:
        if (auto player = this->getServerPlayer(id, packet.mClientSubId); player) {
            EventBus::getInstance().publish(PlayerSprintedEvent(player));
            break;
        }
    case PlayerActionType::StartSneaking:
        if (auto player = this->getServerPlayer(id, packet.mClientSubId); player) {
            auto ev = PlayerSneakingEvent(player);
            EventBus::getInstance().publish(ev);
            if (ev.isCancelled()) {
                return;
            }
            break;
        }
    case PlayerActionType::StopSneaking:
        if (auto player = this->getServerPlayer(id, packet.mClientSubId); player) {
            auto ev = PlayerSneakedEvent(player);
            EventBus::getInstance().publish(ev);
            if (ev.isCancelled()) {
                return;
            }
            break;
        }
    default:
        break;
    }
    origin(id, packet);
}

static std::unique_ptr<EmitterBase> startSprintEmitterFactory(ListenerBase&);
class PlayerStartSprintEventEmitter : public Emitter<startSprintEmitterFactory, PlayerSprintingEvent> {
    ll::memory::HookRegistrar<PlayerActionEventHook> hook;
};

static std::unique_ptr<EmitterBase> stopSprintEmitterFactory(ListenerBase&);
class PlayerStopSprintEventEmitter : public Emitter<stopSprintEmitterFactory, PlayerSprintedEvent> {
    ll::memory::HookRegistrar<PlayerActionEventHook> hook;
};

static std::unique_ptr<EmitterBase> startSneakEmitterFactory(ListenerBase&);
class PlayerStartSneakEventEmitter : public Emitter<startSneakEmitterFactory, PlayerSneakingEvent> {
    ll::memory::HookRegistrar<PlayerActionEventHook> hook;
};

static std::unique_ptr<EmitterBase> stopSneakEmitterFactory(ListenerBase&);
class PlayerStopSneakEventEmitter : public Emitter<stopSneakEmitterFactory, PlayerSneakedEvent> {
    ll::memory::HookRegistrar<PlayerActionEventHook> hook;
};

std::unique_ptr<EmitterBase> startSprintEmitterFactory(ListenerBase&) {
    return std::make_unique<PlayerStartSprintEventEmitter>();
}

std::unique_ptr<EmitterBase> stopSprintEmitterFactory(ListenerBase&) {
    return std::make_unique<PlayerStopSprintEventEmitter>();
}

std::unique_ptr<EmitterBase> startSneakEmitterFactory(ListenerBase&) {
    return std::make_unique<PlayerStartSneakEventEmitter>();
}

std::unique_ptr<EmitterBase> stopSneakEmitterFactory(ListenerBase&) {
    return std::make_unique<PlayerStartSneakEventEmitter>();
}

} // namespace ll::event::inline player
