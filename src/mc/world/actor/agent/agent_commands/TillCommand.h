#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"
#include "mc/world/actor/agent/agent_components/Direction.h"
#include "mc/world/item/ItemStack.h"

namespace AgentCommands {

class TillCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack>                mItem;
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> mDir;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute() /*override*/;

    virtual bool isDone() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace AgentCommands
