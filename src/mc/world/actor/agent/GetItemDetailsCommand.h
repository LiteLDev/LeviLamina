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
    GetItemDetailsCommand& operator=(GetItemDetailsCommand const&) = delete;
    GetItemDetailsCommand(GetItemDetailsCommand const&)            = delete;
    GetItemDetailsCommand()                                        = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?execute@GetItemDetailsCommand@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@GetItemDetailsCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone();

    // vIndex: 4, symbol: ?fireCommandDoneEvent@GetItemDetailsCommand@AgentCommands@@UEAAXXZ
    virtual void fireCommandDoneEvent();

    // NOLINTEND
};

}; // namespace AgentCommands
