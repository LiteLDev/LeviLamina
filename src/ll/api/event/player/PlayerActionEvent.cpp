#include "ll/api/event/player/PlayerActionEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "ll/core/LeviLamina.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/PlayerActionPacket.h"


namespace ll::event::inline player {
LL_TYPED_INSTANCE_HOOK(
    PlayerActionEventHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerActionPacket@@@Z",
    void,
    NetworkIdentifier const&  id,
    PlayerActionPacket const& packet
) {
    switch (packet.mAction) {
    case PlayerActionType::StartSprinting: {
        EventBus::getInstance().publish(PlayerStartSprintEvent(this->getServerPlayer(id, packet.mClientSubId)));
        break;
    }
    case PlayerActionType::StopSprinting: {
        EventBus::getInstance().publish(PlayerStopSprintEvent(this->getServerPlayer(id, packet.mClientSubId)));
        break;
    case PlayerActionType::StartSneaking: {
        auto ev = PlayerStartSneakEvent(this->getServerPlayer(id, packet.mClientSubId));
        EventBus::getInstance().publish(ev);
        if (ev.isCancelled()) {
            return;
        }
        break;
    }
    case PlayerActionType::StopSneaking: {
        auto ev = PlayerStopSneakEvent(this->getServerPlayer(id, packet.mClientSubId));
        EventBus::getInstance().publish(ev);
        if (ev.isCancelled()) {
            return;
        }
        break;
    }
    default:
        break;
    }
    }
    origin(id, packet);
}

static std::unique_ptr<EmitterBase> startSprintEmitterFactory(ListenerBase&);
class PlayerStartSprintEventEmitter : public Emitter<PlayerStartSprintEvent, startSprintEmitterFactory> {
    ll::memory::MultiHookRegister<PlayerActionEventHook> hook;
};

static std::unique_ptr<EmitterBase> stopSprintEmitterFactory(ListenerBase&);
class PlayerStopSprintEventEmitter : public Emitter<PlayerStopSprintEvent, stopSprintEmitterFactory> {
    ll::memory::MultiHookRegister<PlayerActionEventHook> hook;
};

std::unique_ptr<EmitterBase> startSprintEmitterFactory(ListenerBase&) {
    return std::make_unique<PlayerStartSprintEventEmitter>();
}

std::unique_ptr<EmitterBase> stopSprintEmitterFactory(ListenerBase&) {
    return std::make_unique<PlayerStopSprintEventEmitter>();
}

static std::unique_ptr<EmitterBase> startSneakEmitterFactory(ListenerBase&);
class PlayerStartSneakEventEmitter : public Emitter<PlayerStartSneakEvent, startSneakEmitterFactory> {
    ll::memory::MultiHookRegister<PlayerActionEventHook> hook;
};

static std::unique_ptr<EmitterBase> stopSneakEmitterFactory(ListenerBase&);
class PlayerStopSneakEventEmitter : public Emitter<PlayerStopSneakEvent, stopSneakEmitterFactory> {
    ll::memory::MultiHookRegister<PlayerActionEventHook> hook;
};

std::unique_ptr<EmitterBase> startSneakEmitterFactory(ListenerBase&) {
    return std::make_unique<PlayerStartSneakEventEmitter>();
}

std::unique_ptr<EmitterBase> stopSneakEmitterFactory(ListenerBase&) {
    return std::make_unique<PlayerStartSneakEventEmitter>();
}

} // namespace ll::event::inline player
