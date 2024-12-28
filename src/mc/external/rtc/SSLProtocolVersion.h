#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class SSLProtocolVersion : int {
    NotGiven = 4294967295,
    Tls10    = 0,
    Tls11    = 1,
    Tls12    = 2,
    Dtls10   = 1,
    Dtls12   = 2,
};

}
