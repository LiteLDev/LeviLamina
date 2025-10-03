#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class KeyType : int {
    Rsa     = 0,
    Ecdsa   = 1,
    Last    = 2,
    Default = 1,
};

}
