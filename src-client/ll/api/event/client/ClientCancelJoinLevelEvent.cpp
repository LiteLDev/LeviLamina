#include "ll/api/event/client/ClientCancelJoinLevelEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

namespace ll::event::inline client {

LL_TYPE_INSTANCE_HOOK(
    ClientCancelJoinGameHook,
    HookPriority::Normal,
    ClientInstance,
    &ClientInstance::$onCancelJoinGame,
    void
) {
    EventBus::getInstance().publish(ClientCancelJoinLevelEvent(*this));
    origin();
}

static std::unique_ptr<EmitterBase> emitterFactory();
class ClientCancelJoinLevelEventEmitter : public Emitter<emitterFactory, ClientCancelJoinLevelEvent> {
    memory::HookRegistrar<ClientCancelJoinGameHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<ClientCancelJoinLevelEventEmitter>(); }

} // namespace ll::event::inline client
