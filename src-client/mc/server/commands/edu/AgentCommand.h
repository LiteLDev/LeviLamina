#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class Agent;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
namespace AgentCommands { class Command; }
// clang-format on

class AgentCommand : public ::Command {
public:
    // AgentCommand inner types declare
    // clang-format off
    struct CommandInfo;
    // clang-format on

    // AgentCommand inner types define
    enum class Mode : uint {};

    enum class FacingResult : uint {};

    struct CommandInfo {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc34d46;
    ::ll::UntypedStorage<1, 1>  mUnk7e8cf7;
    ::ll::UntypedStorage<1, 1>  mUnk17065b;
    ::ll::UntypedStorage<8, 8>  mUnke3d3be;
    ::ll::UntypedStorage<4, 4>  mUnkbc3fab;
    ::ll::UntypedStorage<4, 4>  mUnk5b16fb;
    ::ll::UntypedStorage<4, 4>  mUnk4cecef;
    ::ll::UntypedStorage<4, 4>  mUnkd2d3fb;
    ::ll::UntypedStorage<4, 16> mUnkbc9d56;
    ::ll::UntypedStorage<4, 16> mUnkc5efec;
    ::ll::UntypedStorage<1, 1>  mUnk5875e3;
    ::ll::UntypedStorage<4, 4>  mUnk374735;
    ::ll::UntypedStorage<4, 4>  mUnk51861d;
    ::ll::UntypedStorage<1, 1>  mUnk9050a1;
    // NOLINTEND

public:
    // prevent constructor by default
    AgentCommand& operator=(AgentCommand const&);
    AgentCommand(AgentCommand const&);
    AgentCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~AgentCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void collect(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void createAgent(::Player& player, ::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void createAgentOutputSuccess(::CommandOutput& output, bool wasSpawned) const;

    MCAPI void directionCommand(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void drop(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void getPosition(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void itemCommand(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void place(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void reportSuccess(bool success, ::CommandOutput& output) const;

    MCAPI void setAgentOwner(::Agent& agent, ::Player& owner) const;

    MCAPI void setItem(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void tpAgent(::Player& player, ::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void transfer(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
