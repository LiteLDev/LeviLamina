#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class GetItemDetailsCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    GetItemDetailsCommand& operator=(GetItemDetailsCommand const&);
    GetItemDetailsCommand(GetItemDetailsCommand const&);
    GetItemDetailsCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetItemDetailsCommand() = default;

    // vIndex: 1
    virtual void execute();

    // vIndex: 2
    virtual bool isDone();

    // vIndex: 4
    virtual void fireCommandDoneEvent();

    // NOLINTEND
};

}; // namespace AgentCommands
