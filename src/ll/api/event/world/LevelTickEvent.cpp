#include "ll/api/event/world/LevelTickEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/server/ServerLevel.h"

namespace ll::event::inline world {
LL_TYPE_INSTANCE_HOOK(LevelTickEventHook, HookPriority::Normal, ServerLevel, &ServerLevel::_subTick, void) {
    EventBus::getInstance().publish(LevelTickEvent(*this));
    origin();
}

static std::unique_ptr<EmitterBase> emitterFactory();
class LevelTickEventEmitter : public Emitter<emitterFactory, LevelTickEvent> {
    memory::HookRegistrar<LevelTickEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<LevelTickEventEmitter>(); }

} // namespace ll::event::inline world
