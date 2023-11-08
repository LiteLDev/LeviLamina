#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class DropAllCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    DropAllCommand& operator=(DropAllCommand const&);
    DropAllCommand(DropAllCommand const&);
    DropAllCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DropAllCommand@AgentCommands@@UEAA@XZ
    virtual ~DropAllCommand() = default;

    // vIndex: 1, symbol: ?execute@DropAllCommand@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@DropAllCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone();

    // NOLINTEND
};

}; // namespace AgentCommands
