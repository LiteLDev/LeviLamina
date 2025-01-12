#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"

namespace AgentCommands {

class GetItemSpaceCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk32ea42;
    ::ll::UntypedStorage<4, 4> mUnkb32faa;
    // NOLINTEND

public:
    // prevent constructor by default
    GetItemSpaceCommand& operator=(GetItemSpaceCommand const&);
    GetItemSpaceCommand(GetItemSpaceCommand const&);
    GetItemSpaceCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void execute() /*override*/;

    // vIndex: 2
    virtual bool isDone() /*override*/;

    // vIndex: 4
    virtual void fireCommandDoneEvent() /*override*/;

    // vIndex: 0
    virtual ~GetItemSpaceCommand() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $execute();

    MCFOLD bool $isDone();

    MCAPI void $fireCommandDoneEvent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AgentCommands
