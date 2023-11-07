#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class InspectDataCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    InspectDataCommand& operator=(InspectDataCommand const&);
    InspectDataCommand(InspectDataCommand const&);
    InspectDataCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InspectDataCommand@AgentCommands@@UEAA@XZ
    virtual ~InspectDataCommand() = default;

    // vIndex: 1, symbol: ?execute@InspectDataCommand@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@InspectDataCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone();

    // vIndex: 4, symbol: ?fireCommandDoneEvent@InspectDataCommand@AgentCommands@@UEAAXXZ
    virtual void fireCommandDoneEvent();

    // NOLINTEND
};

}; // namespace AgentCommands
