#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class KeyFrameReqMethod : uchar {
    KNone = 0,
    KPliRtcp = 1,
    KFirRtcp = 2,
};

}
