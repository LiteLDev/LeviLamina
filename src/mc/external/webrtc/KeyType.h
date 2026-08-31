#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class KeyType : int {
    Rsa     = 0,
    Ecdsa   = 1,
    Last    = 2,
    Default = 1,
};

}
