#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct AgentMessage {

public:
    // prevent constructor by default
    AgentMessage& operator=(AgentMessage const&) = delete;
    AgentMessage(AgentMessage const&)            = delete;
    AgentMessage()                               = delete;

public:
    /**
     * @symbol ??1AgentMessage\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~AgentMessage(); // NOLINT
};

}; // namespace CodeBuilder
