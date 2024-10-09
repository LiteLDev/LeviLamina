#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class PlaceCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    PlaceCommand& operator=(PlaceCommand const&);
    PlaceCommand(PlaceCommand const&);
    PlaceCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlaceCommand() = default;

    // vIndex: 1
    virtual void execute();

    // vIndex: 2
    virtual bool isDone();

    // NOLINTEND
};

}; // namespace AgentCommands
