#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // vIndex: 0
    virtual ~Command();

    // vIndex: 1
    virtual void execute();

    // vIndex: 2
    virtual bool isDone() = 0;

    // vIndex: 3
    virtual void tick();

    // vIndex: 4
    virtual void fireCommandDoneEvent();
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

    MCAPI void $tick();

    MCAPI void $fireCommandDoneEvent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AgentCommands
