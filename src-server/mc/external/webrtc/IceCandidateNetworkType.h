#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceCandidateNetworkType : int {
    KUnknown   = 0,
    KEthernet  = 1,
    KLoopback  = 2,
    KWifi      = 3,
    KVpn       = 4,
    KCellular  = 5,
    KNumValues = 6,
};

}
