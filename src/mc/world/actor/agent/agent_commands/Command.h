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
    // prevent constructor by default
    Command& operator=(Command const&);
    Command(Command const&);
    Command();

public:
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

    // protected:
    // NOLINTBEGIN
    MCAPI class Vec3 _getNextPosFromDirection(::AgentComponents::Direction dir);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI void execute$();

    MCAPI void fireCommandDoneEvent$();

    MCAPI void tick$();

    // NOLINTEND
};

}; // namespace AgentCommands
