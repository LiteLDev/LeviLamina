#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct AgentMessage {
public:
    // prevent constructor by default
    AgentMessage& operator=(AgentMessage const&);
    AgentMessage(AgentMessage const&);
    AgentMessage();

public:
    // NOLINTBEGIN
    // symbol: ??1AgentMessage@CodeBuilder@@QEAA@XZ
    MCAPI ~AgentMessage();

    // NOLINTEND
};

}; // namespace CodeBuilder
