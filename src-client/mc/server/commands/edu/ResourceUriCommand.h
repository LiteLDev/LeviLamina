#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

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
    enum class ActionType : uint {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd0b0ba;
    ::ll::UntypedStorage<8, 32> mUnk4094e9;
    ::ll::UntypedStorage<8, 32> mUnk9a446b;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceUriCommand& operator=(ResourceUriCommand const&);
    ResourceUriCommand(ResourceUriCommand const&);
    ResourceUriCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
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
