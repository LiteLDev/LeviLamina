#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/AgentActionType.h"
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
class Vec3;
// clang-format on

namespace AgentCommands {

class Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>          mTarget;
    ::ll::TypedStorage<8, 8, ::Player&>         mCommander;
    ::ll::TypedStorage<4, 4, ::AgentActionType> mActionType;
    ::ll::TypedStorage<1, 1, bool>              mResult;
    ::ll::TypedStorage<1, 1, bool>              mIsQueryResult;
    // NOLINTEND

public:
    // prevent constructor by default
    Command& operator=(Command const&);
    Command(Command const&);
    Command();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Command();

    virtual void execute();

    virtual bool isDone() = 0;

    virtual void tick();

    virtual void fireCommandDoneEvent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Vec3 _getNextPosFromDirection(::AgentComponents::Direction dir);
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

    MCFOLD void $tick();

    MCAPI void $fireCommandDoneEvent();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AgentCommands
