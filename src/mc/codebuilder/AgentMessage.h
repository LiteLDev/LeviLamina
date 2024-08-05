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
    MCAPI ~AgentMessage();

    // NOLINTEND
};

}; // namespace CodeBuilder
