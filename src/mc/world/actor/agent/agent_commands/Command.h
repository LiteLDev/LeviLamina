#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace AgentCommands {

class Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk933fb1;
    ::ll::UntypedStorage<8, 8> mUnkfc621f;
    ::ll::UntypedStorage<4, 4> mUnk84ca51;
    ::ll::UntypedStorage<1, 1> mUnkc9ad03;
    ::ll::UntypedStorage<1, 1> mUnka8287b;
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
    MCNAPI ::Vec3 _getNextPosFromDirection(::AgentComponents::Direction dir);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute();

    MCNAPI void $tick();

    MCNAPI void $fireCommandDoneEvent();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AgentCommands
