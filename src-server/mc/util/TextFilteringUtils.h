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
    MCNAPI static bool checkIfTextProcessorIsUnhealthyAndSendChat(
        ::std::vector<::Safety::TextFilteringEvent> const& events,
        ::gsl::not_null<::PacketSender*>                   packetSender,
        ::NetworkIdentifier const&                         source,
        ::SubClientId const&                               subClientId
    );
    // NOLINTEND
};
