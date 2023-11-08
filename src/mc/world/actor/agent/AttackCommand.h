#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class AttackCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    AttackCommand& operator=(AttackCommand const&);
    AttackCommand(AttackCommand const&);
    AttackCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AttackCommand@AgentCommands@@UEAA@XZ
    virtual ~AttackCommand() = default;

    // vIndex: 1, symbol: ?execute@AttackCommand@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@AttackCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone();

    // NOLINTEND
};

}; // namespace AgentCommands
