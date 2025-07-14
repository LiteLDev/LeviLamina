#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class RtpPacketType : int {
    KRtp     = 0,
    KRtcp    = 1,
    KUnknown = 2,
};

}
