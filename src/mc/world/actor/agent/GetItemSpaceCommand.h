#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class GetItemSpaceCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    GetItemSpaceCommand& operator=(GetItemSpaceCommand const&);
    GetItemSpaceCommand(GetItemSpaceCommand const&);
    GetItemSpaceCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1GetItemSpaceCommand@@@UEAA@XZ
    virtual ~GetItemSpaceCommand();

    // vIndex: 1, symbol: ?execute@GetItemSpaceCommand@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@GetItemSpaceCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone();

    // vIndex: 4, symbol: ?fireCommandDoneEvent@GetItemSpaceCommand@AgentCommands@@UEAAXXZ
    virtual void fireCommandDoneEvent();

    // NOLINTEND
};

}; // namespace AgentCommands
