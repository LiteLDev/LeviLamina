#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"
#include "mc/world/actor/agent/agent_components/Direction.h"

namespace AgentCommands {

class InspectDataCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> mDir;
    ::ll::TypedStorage<2, 2, ushort const>                 mData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute() /*override*/;

    virtual bool isDone() /*override*/;

    virtual void fireCommandDoneEvent() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace AgentCommands
