#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class MediaProtocolType : int {
    KRtp   = 0,
    KSctp  = 1,
    KOther = 2,
};

}
