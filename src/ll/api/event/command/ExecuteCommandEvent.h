#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"

#include "mc/server/commands/CommandContext.h"

struct MCRESULT;
class MinecraftCommands;

namespace ll::event::inline command {
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
};
class ExecutedCommandEvent : public Event {
public:
    MCRESULT&             result;
    MinecraftCommands&    minecraftCommands;
    CommandContext const& commandContext;
    bool const&           suppressOutput;

    constexpr explicit ExecutedCommandEvent(
        MCRESULT&          result,
        MinecraftCommands& minecraftCommands,
        CommandContext&    commandContext,
        bool const&        suppressOutput
    )
    : result(result),
      minecraftCommands(minecraftCommands),
      commandContext(commandContext),
      suppressOutput(suppressOutput) {}
};
} // namespace ll::event::inline command
