#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct AgentMessage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_AGENTMESSAGE
public:
    AgentMessage& operator=(AgentMessage const&) = delete;
    AgentMessage(AgentMessage const&)            = delete;
    AgentMessage()                               = delete;
#endif

public:
    /**
     * @symbol ??1AgentMessage\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~AgentMessage();
};

}; // namespace CodeBuilder
