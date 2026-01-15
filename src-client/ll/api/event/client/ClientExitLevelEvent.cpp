#include "ll/api/event/client/ClientExitLevelEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

namespace ll::event::inline client {

LL_TYPE_INSTANCE_HOOK(ClientExitLevelHook, HookPriority::Normal, ClientInstance, &ClientInstance::$onLevelExit, void) {
    EventBus::getInstance().publish(ClientExitLevelEvent{*this});
    origin();
}

static std::unique_ptr<EmitterBase> emitterFactory();
class ClientExitLevelEventEmitter : public Emitter<emitterFactory, ClientExitLevelEvent> {
    memory::HookRegistrar<ClientExitLevelHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<ClientExitLevelEventEmitter>(); }

} // namespace ll::event::inline client
