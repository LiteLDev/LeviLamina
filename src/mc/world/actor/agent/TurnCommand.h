#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class TurnCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    TurnCommand& operator=(TurnCommand const&);
    TurnCommand(TurnCommand const&);
    TurnCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TurnCommand@AgentCommands@@UEAA@XZ
    virtual ~TurnCommand() = default;

    // vIndex: 1, symbol: ?execute@TurnCommand@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@TurnCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone();

    // vIndex: 3, symbol: ?tick@TurnCommand@AgentCommands@@UEAAXXZ
    virtual void tick();

    // NOLINTEND
};

}; // namespace AgentCommands
