#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Asymmetric {

enum class System : int {
    Rsa1024      = 0,
    Rsa2048      = 1,
    Rsa4096      = 2,
    EcPrime256v1 = 3,
    EcSecp256k1  = 4,
    EcSecp384r1  = 5,
    EcSecp521r1  = 6,
};

}
