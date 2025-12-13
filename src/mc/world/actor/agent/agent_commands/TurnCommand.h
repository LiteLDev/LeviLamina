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
    virtual void execute() /*override*/;

    virtual bool isDone() /*override*/;

    virtual void tick() /*override*/;

    virtual ~TurnCommand() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute();

    MCNAPI bool $isDone();

    MCNAPI void $tick();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AgentCommands
