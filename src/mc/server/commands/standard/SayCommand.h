#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/MessagingCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Level;
class Player;
struct CommandOriginIdentity;
// clang-format on

class SayCommand : public ::MessagingCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk360023;
    // NOLINTEND

public:
    // prevent constructor by default
    SayCommand& operator=(SayCommand const&);
    SayCommand(SayCommand const&);
    SayCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~SayCommand() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _sendMessage(
        ::std::string const&           message,
        ::std::optional<::std::string> filteredMessage,
        ::std::string const&           sender,
        ::CommandOriginIdentity const& identity,
        ::Level&                       level
    );

    MCAPI static bool _trySendSayCommandEvent(::Player const& player, ::Level& level, ::std::string const& message);

    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
