#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"

namespace AgentCommands {

class TransferToCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf6afdf;
    ::ll::UntypedStorage<4, 4> mUnkc62ffa;
    ::ll::UntypedStorage<4, 4> mUnk9773ab;
    // NOLINTEND

public:
    // prevent constructor by default
    TransferToCommand& operator=(TransferToCommand const&);
    TransferToCommand(TransferToCommand const&);
    TransferToCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void execute() /*override*/;

    // vIndex: 2
    virtual bool isDone() /*override*/;

    // vIndex: 0
    virtual ~TransferToCommand() /*override*/;
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
