#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/server/commands/Command.h"
#include "mc/server/safety/TextFilteringEvent.h"

class ServerCommand : public ::Command {
public:
    // prevent constructor by default
    ServerCommand& operator=(ServerCommand const&);
    ServerCommand(ServerCommand const&);
    ServerCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerCommand();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool tryToFilterTextWithRemoteFilter(
        class CommandOrigin const&         origin,
        class CommandOutput&               output,
        std::vector<std::string> const&    text,
        ::TextProcessingEventOrigin const& textOrigin,
        std::function<void(std::vector<std::string> const&, std::vector<::Safety::TextFilteringEvent> const&)> callback,
        bool passThrough
    ) const;

    MCAPI static void kickPlayerDueToFlooding(
        class Bedrock::NonOwnerPointer<class ServerNetworkHandler> serverNetworkHandler,
        class Player*                                              player,
        class IMinecraftEventing&                                  eventing,
        std::string const&                                         message
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static class Minecraft* mGame;

    // NOLINTEND
};
