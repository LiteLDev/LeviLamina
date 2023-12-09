#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"

#include "mc/server/commands/CommandContext.h"

struct MCRESULT;
class MinecraftCommands;

namespace ll::event::inline command {

class ExecuteCommandEvent : public Event {
    MinecraftCommands& mMinecraftCommands;

protected:
    CommandContext& mCommandContext;
    bool&           mSuppressOutput;

    constexpr explicit ExecuteCommandEvent(
        MinecraftCommands& minecraftCommands,
        CommandContext&    commandContext,
        bool&              suppressOutput
    )
    : mMinecraftCommands(minecraftCommands),
      mCommandContext(commandContext),
      mSuppressOutput(suppressOutput) {}

public:
    LLNDAPI MinecraftCommands&    minecraftCommands() const;
    LLNDAPI CommandContext const& commandContext() const;
    LLNDAPI bool const&           suppressOutput() const;
};

class ExecutingCommandEvent : public Cancellable<ExecuteCommandEvent> {
public:
    constexpr explicit ExecutingCommandEvent(
        MinecraftCommands& minecraftCommands,
        CommandContext&    commandContext,
        bool&              suppressOutput
    )
    : Cancellable(minecraftCommands, commandContext, suppressOutput) {}

    LLNDAPI CommandContext& commandContext() const;
    LLNDAPI bool&           suppressOutput() const;
};
class ExecutedCommandEvent : public ExecuteCommandEvent {
    MCRESULT& mResult;

public:
    constexpr explicit ExecutedCommandEvent(
        MCRESULT&          result,
        MinecraftCommands& minecraftCommands,
        CommandContext&    commandContext,
        bool&              suppressOutput
    )
    : ExecuteCommandEvent(minecraftCommands, commandContext, suppressOutput),
      mResult(result) {}

    LLNDAPI MCRESULT& result() const;
};
} // namespace ll::event::inline command
