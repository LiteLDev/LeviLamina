#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class DtlsTransportState : int {
    KNew        = 0,
    KConnecting = 1,
    KConnected  = 2,
    KClosed     = 3,
    KFailed     = 4,
    KNumValues  = 5,
};

}
