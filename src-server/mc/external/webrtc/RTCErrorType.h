#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RTCErrorType : int {
    None                   = 0,
    UnsupportedOperation   = 1,
    UnsupportedParameter   = 2,
    InvalidParameter       = 3,
    InvalidRange           = 4,
    SyntaxError            = 5,
    InvalidState           = 6,
    InvalidModification    = 7,
    NetworkError           = 8,
    ResourceExhausted      = 9,
    InternalError          = 10,
    OperationErrorWithData = 11,
};

}
