#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"
#include "mc/server/safety/TextFilteringEvent.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class Level;
struct CommandOriginIdentity;
// clang-format on

class MessagingCommand : public ::ServerCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mRequireChatPerms;
    ::ll::TypedStorage<1, 1, bool> mRequireTellPerms;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MessagingCommand() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool checkChatPermissions(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool checkIfTextProcessorIsHealthyAndSendChatIfNot(
        ::CommandOriginIdentity const&                     identity,
        ::Level const&                                     level,
        ::std::vector<::Safety::TextFilteringEvent> const& events
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
