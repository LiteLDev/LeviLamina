#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class SSLHandshakeError : int {
    Unknown                 = 0,
    IncompatibleCiphersuite = 1,
    MaxValue                = 2,
};

}
