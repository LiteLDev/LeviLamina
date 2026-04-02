#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandRawText.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Level;
class Player;
// clang-format on

class ResourceUriCommand : public ::Command {
public:
    // ResourceUriCommand inner types define
    enum class ActionType : int {
        Clear   = 0,
        UriOnly = 1,
        Named   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ResourceUriCommand::ActionType> mAction;
    ::ll::TypedStorage<8, 32, ::std::string>                   mName;
    ::ll::TypedStorage<8, 32, ::CommandRawText>                mLink;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~ResourceUriCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _executeClear(::Level& level, ::Player* originPlayer, ::CommandOutput& output) const;

    MCAPI void _executeNamed(::Level& level, ::Player* originPlayer, ::CommandOutput& output) const;

    MCAPI void _executeUriOnly(::Level& level, ::Player* originPlayer, ::CommandOutput& output) const;
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
