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
class Player;
namespace Social { class GameConnectionInfo; }
// clang-format on

class TransferServerCommand : public ::ServerCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mPfidOrMSA;
    ::ll::TypedStorage<8, 32, ::std::string> mServer;
    ::ll::TypedStorage<4, 4, int>            mPort;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~TransferServerCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_S ::Social::GameConnectionInfo _convertToDestination() const;

    MCAPI_S ::Player const* _findTarget(::CommandOutput& output, ::Level& level, ::std::string const& pfidOrMSA) const;

    MCAPI_C ::Player const* _loopPlayers(::Level& level, ::std::function<bool(::Player const*)> condition) const;
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
