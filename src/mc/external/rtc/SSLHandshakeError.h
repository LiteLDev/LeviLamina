#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class SSLHandshakeError : int {
    Unknown                 = 0,
    IncompatibleCiphersuite = 1,
    MaxValue                = 2,
};

}
