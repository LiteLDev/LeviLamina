#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class ProtocolType : int {
    Udp    = 0,
    Tcp    = 1,
    Ssltcp = 2,
    Tls    = 3,
    Last   = 3,
};

}
