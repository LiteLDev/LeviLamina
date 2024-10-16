#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class GetItemSpaceCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    GetItemSpaceCommand& operator=(GetItemSpaceCommand const&);
    GetItemSpaceCommand(GetItemSpaceCommand const&);
    GetItemSpaceCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetItemSpaceCommand() = default;

    // vIndex: 1
    virtual void execute();

    // vIndex: 2
    virtual bool isDone();

    // vIndex: 4
    virtual void fireCommandDoneEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$();

    MCAPI void fireCommandDoneEvent$();

    MCAPI bool isDone$();

    // NOLINTEND
};

}; // namespace AgentCommands
