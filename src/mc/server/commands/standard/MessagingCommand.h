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
    // prevent constructor by default
    MessagingCommand();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MessagingCommand(bool requireChatPerms, bool requireTellPerms);

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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool requireChatPerms, bool requireTellPerms);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
