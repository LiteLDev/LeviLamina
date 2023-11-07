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
    // vIndex: 0, symbol: __gen_??1DropCommand@AgentCommands@@UEAA@XZ
    virtual ~DropCommand() = default;

    // vIndex: 1, symbol: ?execute@DropCommand@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@DropCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone();

    // NOLINTEND
};

}; // namespace AgentCommands
