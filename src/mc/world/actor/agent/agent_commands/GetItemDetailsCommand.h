#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"

namespace AgentCommands {

class GetItemDetailsCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnk61b09b;
    // NOLINTEND

public:
    // prevent constructor by default
    GetItemDetailsCommand& operator=(GetItemDetailsCommand const&);
    GetItemDetailsCommand(GetItemDetailsCommand const&);
    GetItemDetailsCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute() /*override*/;

    virtual bool isDone() /*override*/;

    virtual void fireCommandDoneEvent() /*override*/;

    virtual ~GetItemDetailsCommand() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute();

    MCNAPI bool $isDone();

    MCNAPI void $fireCommandDoneEvent();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AgentCommands
