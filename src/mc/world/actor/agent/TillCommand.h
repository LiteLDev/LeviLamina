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
    TillCommand& operator=(TillCommand const&);
    TillCommand(TillCommand const&);
    TillCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TillCommand() = default;

    // vIndex: 1
    virtual void execute();

    // vIndex: 2
    virtual bool isDone();

    // NOLINTEND
};

}; // namespace AgentCommands
