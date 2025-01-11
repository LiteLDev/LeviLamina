#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/server/safety/TextFilteringEvent.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class PacketSender;
// clang-format on

class TextFilteringUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool checkChatFilteringEventsAndSendChatIfTextProcessorOffline(
        ::std::vector<::Safety::TextFilteringEvent> const& events,
        ::gsl::not_null<::PacketSender*>                   packetSender,
        ::NetworkIdentifier const&                         source,
        ::SubClientId const&                               subClientId
    );

    MCAPI static void checkChatFilteringEventsAndSendToastIfClientWasMuted(
        ::std::vector<::Safety::TextFilteringEvent> const& events,
        ::gsl::not_null<::PacketSender*>                   packetSender,
        ::NetworkIdentifier const&                         source,
        ::SubClientId const&                               subClientId
    );

    MCAPI static bool findChatFilteringEvent(
        ::std::vector<::Safety::TextFilteringEvent> const& events,
        ::Safety::TextFilteringEvent                       action
    );
    // NOLINTEND
};
