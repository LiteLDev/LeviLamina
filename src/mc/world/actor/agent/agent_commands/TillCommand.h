#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace AgentCommands {

class TillCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnk839b76;
    ::ll::UntypedStorage<1, 1>   mUnk8482d7;
    // NOLINTEND

public:
    // prevent constructor by default
    TillCommand& operator=(TillCommand const&);
    TillCommand(TillCommand const&);
    TillCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void execute() /*override*/;

    // vIndex: 2
    virtual bool isDone() /*override*/;

    // vIndex: 0
    virtual ~TillCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TillCommand(::Player& commander, ::std::string itemName, ::AgentComponents::Direction dir);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& commander, ::std::string itemName, ::AgentComponents::Direction dir);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
