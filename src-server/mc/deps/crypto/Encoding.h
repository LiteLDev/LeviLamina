#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Certificate {

enum class Encoding : int {
    Pem = 0,
    Der = 1,
    Pfx = 2,
};

}
