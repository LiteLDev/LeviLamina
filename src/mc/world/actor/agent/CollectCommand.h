#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class CollectCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    CollectCommand& operator=(CollectCommand const&);
    CollectCommand(CollectCommand const&);
    CollectCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CollectCommand@AgentCommands@@UEAA@XZ
    virtual ~CollectCommand() = default;

    // vIndex: 1, symbol: ?execute@CollectCommand@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@CollectCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone();

    // NOLINTEND
};

}; // namespace AgentCommands
