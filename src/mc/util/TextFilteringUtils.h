#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SubClientId.h"
#include "mc/events/TextFilteringEvent.h"

class TextFilteringUtils {
public:
    // prevent constructor by default
    TextFilteringUtils& operator=(TextFilteringUtils const&);
    TextFilteringUtils(TextFilteringUtils const&);
    TextFilteringUtils();

public:
    // NOLINTBEGIN
    MCAPI static bool
    checkChatFilteringEventsAndSendChatIfTextProcessorOffline(std::vector<::Safety::TextFilteringEvent> const&, gsl::not_null<class PacketSender*>, class NetworkIdentifier const&, ::SubClientId const&);

    MCAPI static void checkChatFilteringEventsAndSendToastIfClientWasMuted(
        std::vector<::Safety::TextFilteringEvent> const&,
        gsl::not_null<class PacketSender*> packetSender,
        class NetworkIdentifier const&     source,
        ::SubClientId const&               subClientId
    );

    MCAPI static bool
    findChatFilteringEvent(std::vector<::Safety::TextFilteringEvent> const&, ::Safety::TextFilteringEvent);

    // NOLINTEND
};
