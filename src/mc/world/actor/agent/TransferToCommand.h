#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class TransferToCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    TransferToCommand& operator=(TransferToCommand const&);
    TransferToCommand(TransferToCommand const&);
    TransferToCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TransferToCommand@AgentCommands@@UEAA@XZ
    virtual ~TransferToCommand() = default;

    // vIndex: 1, symbol: ?execute@TransferToCommand@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@TransferToCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone();

    // NOLINTEND
};

}; // namespace AgentCommands
