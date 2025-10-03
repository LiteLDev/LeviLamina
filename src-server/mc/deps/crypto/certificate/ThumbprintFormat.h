#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Certificate {

enum class ThumbprintFormat : int {
    Binary      = 0,
    Base64      = 1,
    Base64URL   = 2,
    HexGrouped2 = 3,
    HexGrouped4 = 4,
};

}
