#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"

namespace AgentCommands {

class TurnCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk399dcb;
    ::ll::UntypedStorage<4, 4> mUnka258f8;
    ::ll::UntypedStorage<4, 4> mUnk678d63;
    // NOLINTEND

public:
    // prevent constructor by default
    TurnCommand& operator=(TurnCommand const&);
    TurnCommand(TurnCommand const&);
    TurnCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void execute() /*override*/;

    // vIndex: 2
    virtual bool isDone() /*override*/;

    // vIndex: 3
    virtual void tick() /*override*/;

    // vIndex: 0
    virtual ~TurnCommand() /*override*/;
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

    MCAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AgentCommands
