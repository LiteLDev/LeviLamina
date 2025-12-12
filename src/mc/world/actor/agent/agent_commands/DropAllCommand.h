#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"

namespace AgentCommands {

class DropAllCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkd81ced;
    // NOLINTEND

public:
    // prevent constructor by default
    DropAllCommand& operator=(DropAllCommand const&);
    DropAllCommand(DropAllCommand const&);
    DropAllCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute() /*override*/;

    virtual bool isDone() /*override*/;

    virtual ~DropAllCommand() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute();

    MCNAPI bool $isDone();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AgentCommands
