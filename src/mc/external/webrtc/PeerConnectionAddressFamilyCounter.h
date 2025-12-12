#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class PeerConnectionAddressFamilyCounter : int {
    KPeerConnectionIPv4                    = 0,
    KPeerConnectionIPv6                    = 1,
    KBestConnectionsIPv4                   = 2,
    KBestConnectionsIPv6                   = 3,
    KPeerConnectionAddressFamilyCounterMax = 4,
};

}
