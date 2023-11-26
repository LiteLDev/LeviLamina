#include "ll/api/event/command/SetupCommandEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/server/common/commands/SaveCommand.h"

namespace ll::event {

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

class SetupCommandEventEmitter : public Emitter<SetupCommandEvent> {
public:
    SetupCommandEventEmitter() { SetupCommandEventHook::hook(); }
    ~SetupCommandEventEmitter() override { SetupCommandEventHook::unhook(); }
};

std::unique_ptr<EmitterBase> SetupCommandEvent::emitterFactory(ListenerBase&) {
    return std::make_unique<SetupCommandEventEmitter>();
}
} // namespace ll::event
