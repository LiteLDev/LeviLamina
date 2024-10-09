#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class AgentCommandExecutionGoal : public ::Goal {
public:
    // prevent constructor by default
    AgentCommandExecutionGoal& operator=(AgentCommandExecutionGoal const&);
    AgentCommandExecutionGoal(AgentCommandExecutionGoal const&);
    AgentCommandExecutionGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AgentCommandExecutionGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 3
    virtual bool canBeInterrupted();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit AgentCommandExecutionGoal(class Mob& mob);

    // NOLINTEND
};
