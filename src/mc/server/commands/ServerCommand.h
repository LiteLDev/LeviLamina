#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/server/commands/Command.h"
#include "mc/server/safety/TextFilteringEvent.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class IMinecraftEventing;
class Minecraft;
class Player;
class ServerNetworkHandler;
class TextFilteringProcessor;
// clang-format on

class ServerCommand : public ::Command {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerCommand() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool tryToFilterTextWithRemoteFilter(
        ::CommandOrigin const&              origin,
        ::CommandOutput&                    output,
        ::std::vector<::std::string> const& text,
        ::TextProcessingEventOrigin const&  textOrigin,
        ::std::function<void(
            ::std::vector<::std::string> const&,
            ::std::vector<::std::string> const&,
            ::std::vector<::Safety::TextFilteringEvent> const&
        )>                                  callback
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void kickPlayerDueToFlooding(
        ::Bedrock::NonOwnerPointer<::ServerNetworkHandler> serverNetworkHandler,
        ::Player*                                          player,
        ::IMinecraftEventing&                              eventing,
        ::std::string const&                               message
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Minecraft*& mGame();

    MCAPI static ::Bedrock::NonOwnerPointer<::TextFilteringProcessor>& mTextFilteringProcessor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
