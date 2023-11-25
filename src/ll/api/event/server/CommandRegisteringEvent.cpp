#include "ll/api/event/server/CommandRegisteringEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/server/commands/CommandRegistry.h"
#include "mc/server/common/commands/SaveCommand.h"

namespace ll::event {

LL_TYPED_STATIC_HOOK(
    CommandRegisteringEventHook,
    HookPriority::Normal,
    SaveCommand,
    SaveCommand::setup,
    void,
    CommandRegistry& reg
) {
    EventBus::getInstance().publish(CommandRegisteringEvent{reg});
    origin(reg);
}

class CommandRegisteringEventEmitter : public Emitter<CommandRegisteringEvent> {
public:
    CommandRegisteringEventEmitter() { CommandRegisteringEventHook::hook(); }
    ~CommandRegisteringEventEmitter() override { CommandRegisteringEventHook::unhook(); }
};

std::unique_ptr<EmitterBase> CommandRegisteringEvent::emitterFactory(ListenerBase&) {
    return std::make_unique<CommandRegisteringEventEmitter>();
}
} // namespace ll::event
