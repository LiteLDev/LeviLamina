#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class KickCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    KickCommand& operator=(KickCommand const&);
    KickCommand(KickCommand const&);
    KickCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~KickCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    _canKickPlayerOrGenerateFailureOutput(class Player const& player, class CommandOutput& output, class Level* level)
        const;

    MCAPI class Player const*
    _findTarget(class CommandOrigin const& origin, class CommandOutput& output, class Level& level, std::string const& message, std::string const& reason, std::string const&)
        const;

    MCAPI void _generateSuccessOutput(class CommandOutput& output, std::string const&, std::string const& reason) const;

    MCAPI class Player const* _loopPlayers(
        class CommandOrigin const&,
        class CommandOutput&,
        class Level& level,
        std::string const&,
        std::string const&,
        std::function<bool(class Player const*)> condition
    ) const;

    MCAPI static void
    _kickPlayer(class Minecraft* game, class Player const& matchingPlayer, std::string const& message);

    // NOLINTEND
};
