#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class PacketInfoProtocolType : int {
    KUnknown = 0,
    KUdp = 1,
    KTcp = 2,
    KSsltcp = 3,
    KTls = 4,
};

}
