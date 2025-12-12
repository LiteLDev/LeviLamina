#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"

namespace AgentCommands {

class DropCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk82ba62;
    ::ll::UntypedStorage<4, 4> mUnk5155fb;
    ::ll::UntypedStorage<4, 4> mUnkf6d208;
    // NOLINTEND

public:
    // prevent constructor by default
    DropCommand& operator=(DropCommand const&);
    DropCommand(DropCommand const&);
    DropCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute() /*override*/;

    virtual bool isDone() /*override*/;

    virtual ~DropCommand() /*override*/ = default;
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
