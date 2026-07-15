#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"
#include "mc/world/item/ItemStack.h"

namespace AgentCommands {

class GetItemDetailsCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
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
