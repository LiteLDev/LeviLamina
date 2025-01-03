#include "ll/api/event/command/ExecuteCommandEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventRefObjSerializer.h"
#include "ll/api/memory/Hook.h"

#include "mc/common/Globals.h"
#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline command {

void ExecuteCommandEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["minecraftCommands"] = serializeRefObj(minecraftCommands());
    nbt["commandContext"]    = serializeRefObj(commandContext());
    nbt["suppressOutput"]    = suppressOutput();
}
void ExecutingCommandEvent::deserialize(CompoundTag const& nbt) {
    Cancellable::deserialize(nbt);
    suppressOutput() = nbt["suppressOutput"];
}
void ExecutedCommandEvent::serialize(CompoundTag& nbt) const {
    ExecuteCommandEvent::serialize(nbt);
    nbt["result"] = CompoundTag{
        {"success", result().mSuccess},
        {   "code",    result().mCode},
    };
}

MinecraftCommands&    ExecuteCommandEvent::minecraftCommands() const { return mMinecraftCommands; }
CommandContext const& ExecuteCommandEvent::commandContext() const { return mCommandContext; }
bool const&           ExecuteCommandEvent::suppressOutput() const { return mSuppressOutput; }
CommandContext&       ExecutingCommandEvent::commandContext() const { return mCommandContext; }
bool&                 ExecutingCommandEvent::suppressOutput() const { return mSuppressOutput; }
MCRESULT&             ExecutedCommandEvent::result() const { return mResult; }

LL_TYPE_INSTANCE_HOOK(
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
        return MCRESULT_CommandsDisabled();
    }
    return origin(context, suppressOutput);
}

LL_TYPE_INSTANCE_HOOK(
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


static std::unique_ptr<EmitterBase> executingEmitterFactory();
class ExecutingCommandEventEmitter : public Emitter<executingEmitterFactory, ExecutingCommandEvent> {
    memory::HookRegistrar<ExecutingCommandEventHook> hook;
};

static std::unique_ptr<EmitterBase> executingEmitterFactory() {
    return std::make_unique<ExecutingCommandEventEmitter>();
}

static std::unique_ptr<EmitterBase> executedEmitterFactory();
class ExecutedCommandEventEmitter : public Emitter<executedEmitterFactory, ExecutedCommandEvent> {
    memory::HookRegistrar<ExecutedCommandEventHook> hook;
};

static std::unique_ptr<EmitterBase> executedEmitterFactory() { return std::make_unique<ExecutedCommandEventEmitter>(); }

} // namespace ll::event::inline command
