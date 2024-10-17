#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class AgentCommand : public ::Command {
public:
    // prevent constructor by default
    AgentCommand& operator=(AgentCommand const&);
    AgentCommand(AgentCommand const&);
    AgentCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AgentCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void collect(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void createAgent(class Player& player, class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void createAgentOutputSuccess(class CommandOutput& output, bool wasSpawned) const;

    MCAPI void directionCommand(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void getPosition(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void itemCommand(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void place(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void reportSuccess(bool success, class CommandOutput& output) const;

    MCAPI void setAgentOwner(class Agent& agent, class Player& owner) const;

    MCAPI void setItem(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void tpAgent(class Player& player, class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
