#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class GetItemCountCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    GetItemCountCommand& operator=(GetItemCountCommand const&);
    GetItemCountCommand(GetItemCountCommand const&);
    GetItemCountCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GetItemCountCommand@AgentCommands@@UEAA@XZ
    virtual ~GetItemCountCommand() = default;

    // vIndex: 1, symbol: ?execute@GetItemCountCommand@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@GetItemCountCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone();

    // vIndex: 4, symbol: ?fireCommandDoneEvent@GetItemCountCommand@AgentCommands@@UEAAXXZ
    virtual void fireCommandDoneEvent();

    // NOLINTEND
};

}; // namespace AgentCommands
