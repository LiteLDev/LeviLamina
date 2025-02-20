#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Level;
class Minecraft;
class Player;
// clang-format on

class KickCommand : public ::ServerCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnke1dc0d;
    ::ll::UntypedStorage<8, 24>  mUnkc1b069;
    // NOLINTEND

public:
    // prevent constructor by default
    KickCommand& operator=(KickCommand const&);
    KickCommand(KickCommand const&);
    KickCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~KickCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool
    _canKickPlayerOrGenerateFailureOutput(::Player const& player, ::CommandOutput& output, ::Level* level) const;

    MCAPI ::Player const* _findTarget(
        ::CommandOrigin const& output,
        ::CommandOutput&       level,
        ::Level&               idOrName,
        ::std::string const&   origin,
        ::std::string const&   message,
        ::std::string const&   reason
    ) const;

    MCAPI void
    _generateSuccessOutput(::CommandOutput& output, ::std::string const& playerNameTag, ::std::string const& reason)
        const;

    MCAPI ::Player const*
    _loopPlayers(::CommandOrigin const& level, ::CommandOutput& condition, ::Level&, ::std::string const&, ::std::string const&, ::std::function<bool(::Player const*)>)
        const;

    MCAPI void _refreshJoinCode(::Level& level) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _kickPlayer(
        ::Minecraft*                   game,
        ::Player const&                matchingPlayer,
        ::std::string const&           message,
        ::std::optional<::std::string> filteredMessage
    );

    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
