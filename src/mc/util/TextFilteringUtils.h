#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/server/safety/TextFilteringEvent.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class PacketSender;
class Player;
class TaskGroup;
class TextFilteringProcessor;
namespace Safety { struct TextFilterResult; }
// clang-format on

class TextFilteringUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool checkIfTextProcessorIsUnhealthyAndSendChat(
        ::std::vector<::Safety::TextFilteringEvent> const& events,
        ::gsl::not_null<::PacketSender*>                   packetSender,
        ::NetworkIdentifier const&                         source,
        ::SubClientId const&                               subClientId
    );

    MCNAPI static ::Bedrock::Threading::Async<::Safety::TextFilterResult>
    processMessagesWithClientsideDebugTimingsAsync(
        ::Player const&                                      player,
        ::TaskGroup&                                         taskGroup,
        ::Bedrock::NonOwnerPointer<::TextFilteringProcessor> textFilteringProcessor,
        ::TextProcessingEventOrigin                          processOrigin,
        ::std::vector<::std::string> const&                  messages
    );
    // NOLINTEND
};
