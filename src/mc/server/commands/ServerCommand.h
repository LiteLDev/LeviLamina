#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/events/TextFilteringEvent.h"
#include "mc/world/events/TextProcessingEventOrigin.h"
#include "mc/world/level/Command.h"

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
        class CommandOrigin const&,
        class CommandOutput&,
        std::vector<std::string> const&,
        ::TextProcessingEventOrigin const&,
        std::function<void(std::vector<std::string> const&, std::vector<::Safety::TextFilteringEvent> const&)>,
        bool
    ) const;

    MCAPI static void
    kickPlayerDueToFlooding(class Bedrock::NonOwnerPointer<class ServerNetworkHandler>, class Player*, class IMinecraftEventing&, std::string const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static class Minecraft* mGame;

    // NOLINTEND
};
