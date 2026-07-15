#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"
#include "mc/world/actor/agent/agent_components/Direction.h"

namespace AgentCommands {

class TurnCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> mDir;
    ::ll::TypedStorage<4, 4, float>                        mTurnStep;
    ::ll::TypedStorage<4, 4, float>                        mRotation;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute() /*override*/;

    virtual bool isDone() /*override*/;

    virtual void tick() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace AgentCommands
