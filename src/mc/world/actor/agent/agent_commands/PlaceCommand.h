#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"

namespace AgentCommands {

class PlaceCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnk2f2909;
    ::ll::UntypedStorage<4, 4>   mUnk9a64b6;
    ::ll::UntypedStorage<1, 1>   mUnk2bf38a;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaceCommand& operator=(PlaceCommand const&);
    PlaceCommand(PlaceCommand const&);
    PlaceCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void execute() /*override*/;

    // vIndex: 2
    virtual bool isDone() /*override*/;

    // vIndex: 0
    virtual ~PlaceCommand() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute();

    MCAPI bool $isDone();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AgentCommands
