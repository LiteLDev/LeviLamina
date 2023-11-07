#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class GetItemDetailsCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    GetItemDetailsCommand& operator=(GetItemDetailsCommand const&);
    GetItemDetailsCommand(GetItemDetailsCommand const&);
    GetItemDetailsCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GetItemDetailsCommand@AgentCommands@@UEAA@XZ
    virtual ~GetItemDetailsCommand() = default;

    // vIndex: 1, symbol: ?execute@GetItemDetailsCommand@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@GetItemDetailsCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone();

    // vIndex: 4, symbol: ?fireCommandDoneEvent@GetItemDetailsCommand@AgentCommands@@UEAAXXZ
    virtual void fireCommandDoneEvent();

    // NOLINTEND
};

}; // namespace AgentCommands
