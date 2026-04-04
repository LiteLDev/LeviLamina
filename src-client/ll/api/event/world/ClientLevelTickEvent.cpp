#include "ll/api/event/world/ClientLevelTickEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"
#include <iostream>
#include "mc/client/multiplayer/MultiPlayerLevel.h"

namespace ll::event::inline world {
LL_TYPE_INSTANCE_HOOK(ClientLevelTickEventHook, HookPriority::Normal, MultiPlayerLevel, &MultiPlayerLevel::$_subTick, void) {
    EventBus::getInstance().publish(ClientLevelTickEvent(*this));
    origin();
}

static std::unique_ptr<EmitterBase> emitterFactory();
class ClientLevelTickEventEmitter : public Emitter<emitterFactory, ClientLevelTickEvent> {
    memory::HookRegistrar<ClientLevelTickEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<ClientLevelTickEventEmitter>(); }

} // namespace ll::event::inline world
