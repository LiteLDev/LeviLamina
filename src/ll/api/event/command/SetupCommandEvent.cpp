#include "ll/api/event/command/SetupCommandEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/server/common/commands/SaveCommand.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline command {

void SetupCommandEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["registry"] = (uintptr_t)&registry();
}

CommandRegistry& SetupCommandEvent::registry() const { return mRegistry; }

LL_TYPED_STATIC_HOOK(
    SetupCommandEventHook,
    HookPriority::Normal,
    SaveCommand,
    SaveCommand::setup,
    void,
    CommandRegistry& reg
) {
    EventBus::getInstance().publish(SetupCommandEvent{reg});
    origin(reg);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class SetupCommandEventEmitter : public Emitter<SetupCommandEvent, emitterFactory> {
    memory::HookRegistrar<SetupCommandEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<SetupCommandEventEmitter>();
}

} // namespace ll::event::inline command
