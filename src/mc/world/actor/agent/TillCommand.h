#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class TillCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    TillCommand& operator=(TillCommand const&) = delete;
    TillCommand(TillCommand const&)            = delete;
    TillCommand()                              = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?execute@TillCommand@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@TillCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone();

    // NOLINTEND
};

}; // namespace AgentCommands
