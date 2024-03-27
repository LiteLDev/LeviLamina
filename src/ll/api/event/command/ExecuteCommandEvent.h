#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"

#include "mc/codebuilder/MCRESULT.h"
#include "mc/server/commands/CommandContext.h"
#include "mc/server/commands/MinecraftCommands.h"

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
    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI MinecraftCommands&    minecraftCommands() const;
    LLNDAPI CommandContext const& commandContext() const;
    LLNDAPI bool const&           suppressOutput() const;
};
class ExecutingCommandEvent final : public Cancellable<ExecuteCommandEvent> {
public:
    constexpr explicit ExecutingCommandEvent(
        MinecraftCommands& minecraftCommands,
        CommandContext&    commandContext,
        bool&              suppressOutput
    )
    : Cancellable(minecraftCommands, commandContext, suppressOutput) {}

    LLAPI void deserialize(CompoundTag const&) override;

    LLNDAPI CommandContext& commandContext() const;
    LLNDAPI bool&           suppressOutput() const;
};
class ExecutedCommandEvent final : public ExecuteCommandEvent {
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

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI MCRESULT& result() const;
};
} // namespace ll::event::inline command
