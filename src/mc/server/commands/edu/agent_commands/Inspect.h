#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/edu/agent_commands/SubCommand.h"
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
// clang-format on

namespace AgentCommands {

class Inspect : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> mDirection;
    ::ll::TypedStorage<4, 4, ::AgentCommands::SubCommand>  mSubCommand;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace AgentCommands
