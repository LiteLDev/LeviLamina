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
    // symbol:
    // ?checkChatFilteringEventsAndSendChatIfTextProcessorOffline@TextFilteringUtils@@SA_NAEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@std@@V?$not_null@PEAVPacketSender@@@gsl@@AEBVNetworkIdentifier@@AEBW4SubClientId@@@Z
    MCAPI static bool
    checkChatFilteringEventsAndSendChatIfTextProcessorOffline(std::vector<::Safety::TextFilteringEvent> const&, gsl::not_null<class PacketSender*>, class NetworkIdentifier const&, ::SubClientId const&);

    // symbol:
    // ?checkChatFilteringEventsAndSendToastIfClientWasMuted@TextFilteringUtils@@SAXAEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@std@@V?$not_null@PEAVPacketSender@@@gsl@@AEBVNetworkIdentifier@@AEBW4SubClientId@@@Z
    MCAPI static void checkChatFilteringEventsAndSendToastIfClientWasMuted(
        std::vector<::Safety::TextFilteringEvent> const&,
        gsl::not_null<class PacketSender*> packetSender,
        class NetworkIdentifier const&     source,
        ::SubClientId const&               subClientId
    );

    // symbol:
    // ?findChatFilteringEvent@TextFilteringUtils@@SA_NAEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@std@@W4TextFilteringEvent@Safety@@@Z
    MCAPI static bool
    findChatFilteringEvent(std::vector<::Safety::TextFilteringEvent> const&, ::Safety::TextFilteringEvent);

    // NOLINTEND
};
