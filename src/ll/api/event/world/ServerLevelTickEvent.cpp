#include "ll/api/event/world/ServerLevelTickEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/server/ServerLevel.h"

namespace ll::event::inline world {
LL_TYPE_INSTANCE_HOOK(ServerLevelTickEventHook, HookPriority::Normal, ServerLevel, &ServerLevel::$_subTick, void) {
    EventBus::getInstance().publish(ServerLevelTickEvent(*this));
    origin();
}

static std::unique_ptr<EmitterBase> emitterFactory();
class ServerLevelTickEventEmitter : public Emitter<emitterFactory, ServerLevelTickEvent> {
    memory::HookRegistrar<ServerLevelTickEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<ServerLevelTickEventEmitter>(); }

} // namespace ll::event::inline world
