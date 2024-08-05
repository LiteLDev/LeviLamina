#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/TextFilteringEvent.h"
#include "mc/server/commands/ServerCommand.h"

class MessagingCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    MessagingCommand& operator=(MessagingCommand const&);
    MessagingCommand(MessagingCommand const&);
    MessagingCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MessagingCommand();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI MessagingCommand(bool requireChatPerms, bool requireTellPerms);

    MCAPI bool checkChatPermissions(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void
    checkAndHandleTextProcessorEvents(class Player const&, std::vector<::Safety::TextFilteringEvent> const&);

    MCAPI static void
    checkAndHandleTextProcessorEvents(struct CommandOriginIdentity const&, class Level const&, std::vector<::Safety::TextFilteringEvent> const&);

    // NOLINTEND
};
