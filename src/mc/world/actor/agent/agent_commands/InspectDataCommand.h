#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class InspectDataCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    InspectDataCommand& operator=(InspectDataCommand const&);
    InspectDataCommand(InspectDataCommand const&);
    InspectDataCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InspectDataCommand() = default;

    // vIndex: 1
    virtual void execute();

    // vIndex: 2
    virtual bool isDone();

    // vIndex: 4
    virtual void fireCommandDoneEvent();

    // NOLINTEND
};

}; // namespace AgentCommands
