#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IPAddressType : int {
    KUnknown  = 0,
    KAny      = 1,
    KLoopback = 2,
    KPrivate  = 3,
    KPublic   = 4,
    KMaxValue = 4,
};

}
