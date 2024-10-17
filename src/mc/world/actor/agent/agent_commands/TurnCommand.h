#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class TurnCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    TurnCommand& operator=(TurnCommand const&);
    TurnCommand(TurnCommand const&);
    TurnCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TurnCommand() = default;

    // vIndex: 1
    virtual void execute();

    // vIndex: 2
    virtual bool isDone();

    // vIndex: 3
    virtual void tick();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$();

    MCAPI bool isDone$();

    MCAPI void tick$();

    // NOLINTEND
};

}; // namespace AgentCommands
