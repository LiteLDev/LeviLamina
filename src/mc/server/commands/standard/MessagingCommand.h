#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"
#include "mc/server/safety/TextFilteringEvent.h"

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

    MCAPI static void checkAndHandleTextProcessorEvents(
        class Player const&                              player,
        std::vector<::Safety::TextFilteringEvent> const& events
    );

    MCAPI static void checkAndHandleTextProcessorEvents(
        struct CommandOriginIdentity const&              identity,
        class Level const&                               level,
        std::vector<::Safety::TextFilteringEvent> const& events
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
