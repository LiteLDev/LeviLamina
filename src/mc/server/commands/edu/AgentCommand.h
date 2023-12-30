#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class AgentCommand : public ::Command {
public:
    // prevent constructor by default
    AgentCommand& operator=(AgentCommand const&);
    AgentCommand(AgentCommand const&);
    AgentCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AgentCommand@@UEAA@XZ
    virtual ~AgentCommand() = default;

    // vIndex: 2, symbol: ?execute@AgentCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@AgentCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?collect@AgentCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void collect(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?createAgent@AgentCommand@@AEBAXAEAVPlayer@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void createAgent(class Player& player, class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?createAgentOutputSuccess@AgentCommand@@AEBAXAEAVCommandOutput@@_N@Z
    MCAPI void createAgentOutputSuccess(class CommandOutput& output, bool wasSpawned) const;

    // symbol: ?directionCommand@AgentCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void directionCommand(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?getPosition@AgentCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void getPosition(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?itemCommand@AgentCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void itemCommand(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?place@AgentCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void place(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?reportSuccess@AgentCommand@@AEBAX_NAEAVCommandOutput@@@Z
    MCAPI void reportSuccess(bool success, class CommandOutput& output) const;

    // symbol: ?setAgentOwner@AgentCommand@@AEBAXAEAVAgent@@AEAVPlayer@@@Z
    MCAPI void setAgentOwner(class Agent& agent, class Player& owner) const;

    // symbol: ?setItem@AgentCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void setItem(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?tpAgent@AgentCommand@@AEBAXAEAVPlayer@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void tpAgent(class Player& player, class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
