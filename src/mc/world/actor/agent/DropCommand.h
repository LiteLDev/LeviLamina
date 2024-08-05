#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class DropCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    DropCommand& operator=(DropCommand const&);
    DropCommand(DropCommand const&);
    DropCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DropCommand() = default;

    // vIndex: 1
    virtual void execute();

    // vIndex: 2
    virtual bool isDone();

    // NOLINTEND
};

}; // namespace AgentCommands
