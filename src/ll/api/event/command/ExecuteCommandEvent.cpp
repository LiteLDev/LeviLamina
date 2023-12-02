#include "ll/api/event/command/ExecuteCommandEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/codebuilder/MCRESULT.h"
#include "mc/server/commands/MinecraftCommands.h"

namespace ll::event::inline command {

LL_TYPED_INSTANCE_HOOK(
    ExecutingCommandEventHook,
    HookPriority::Normal,
    MinecraftCommands,
    &MinecraftCommands::executeCommand,
    MCRESULT,
    CommandContext& context,
    bool            suppressOutput
) {
    auto event = ExecutingCommandEvent{*this, context, suppressOutput};
    EventBus::getInstance().publish(event);
    if (event.isCancelled()) {
        return MCRESULT_CommandsDisabled;
    }
    return origin(context, suppressOutput);
}

static std::unique_ptr<EmitterBase> executingEmitterFactory(ListenerBase&);
class ExecutingCommandEventEmitter : public Emitter<ExecutingCommandEvent, executingEmitterFactory> {
public:
    ExecutingCommandEventEmitter() { ExecutingCommandEventHook::hook(); }
    ~ExecutingCommandEventEmitter() override { ExecutingCommandEventHook::unhook(); }
};

static std::unique_ptr<EmitterBase> executingEmitterFactory(ListenerBase&) {
    return std::make_unique<ExecutingCommandEventEmitter>();
}


LL_TYPED_INSTANCE_HOOK(
    ExecutedCommandEventHook,
    HookPriority::Low,
    MinecraftCommands,
    &MinecraftCommands::executeCommand,
    MCRESULT,
    CommandContext& context,
    bool            suppressOutput
) {
    auto res = origin(context, suppressOutput);

    auto event = ExecutedCommandEvent{res, *this, context, suppressOutput};
    EventBus::getInstance().publish(event);
    return res;
}

static std::unique_ptr<EmitterBase> executedEmitterFactory(ListenerBase&);
class ExecutedCommandEventEmitter : public Emitter<ExecutedCommandEvent, executedEmitterFactory> {
public:
    ExecutedCommandEventEmitter() { ExecutedCommandEventHook::hook(); }
    ~ExecutedCommandEventEmitter() override { ExecutedCommandEventHook::unhook(); }
};

static std::unique_ptr<EmitterBase> executedEmitterFactory(ListenerBase&) {
    return std::make_unique<ExecutedCommandEventEmitter>();
}
} // namespace ll::event::inline command
