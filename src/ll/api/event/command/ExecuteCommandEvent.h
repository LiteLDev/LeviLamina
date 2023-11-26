#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"

#include "mc/codebuilder/MCRESULT.h"
#include "mc/server/commands/CommandContext.h"
#include "mc/server/commands/MinecraftCommands.h"

namespace ll::event::command {
class ExecutingCommandEvent : public Cancellable<Event> {
public:
    MinecraftCommands& minecraftCommands;
    CommandContext&    commandContext;
    bool&              suppressOutput;

    constexpr explicit ExecutingCommandEvent(
        MinecraftCommands& minecraftCommands,
        CommandContext&    commandContext,
        bool&              suppressOutput
    )
    : minecraftCommands(minecraftCommands),
      commandContext(commandContext),
      suppressOutput(suppressOutput) {}

    LLNDAPI static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
};
class ExecutedCommandEvent : public Event {
public:
    MCRESULT&             result;
    MinecraftCommands&    minecraftCommands;
    CommandContext const& commandContext;
    bool                  suppressOutput;

    constexpr explicit ExecutedCommandEvent(
        MCRESULT&          result,
        MinecraftCommands& minecraftCommands,
        CommandContext&    commandContext,
        bool               suppressOutput
    )
    : result(result),
      minecraftCommands(minecraftCommands),
      commandContext(commandContext),
      suppressOutput(suppressOutput) {}

    LLNDAPI static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
};
} // namespace ll::event::command
