#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/server/safety/TextFilteringEvent.h"

class TextFilteringUtils {
public:
    // prevent constructor by default
    TextFilteringUtils& operator=(TextFilteringUtils const&);
    TextFilteringUtils(TextFilteringUtils const&);
    TextFilteringUtils();

public:
    // NOLINTBEGIN
    MCAPI static bool checkChatFilteringEventsAndSendChatIfTextProcessorOffline(
        std::vector<::Safety::TextFilteringEvent> const& events,
        gsl::not_null<class PacketSender*>               packetSender,
        class NetworkIdentifier const&                   source,
        ::SubClientId const&                             subClientId
    );

    MCAPI static void checkChatFilteringEventsAndSendToastIfClientWasMuted(
        std::vector<::Safety::TextFilteringEvent> const& events,
        gsl::not_null<class PacketSender*>               packetSender,
        class NetworkIdentifier const&                   source,
        ::SubClientId const&                             subClientId
    );

    MCAPI static bool findChatFilteringEvent(
        std::vector<::Safety::TextFilteringEvent> const& events,
        ::Safety::TextFilteringEvent                     action
    );

    // NOLINTEND
};
