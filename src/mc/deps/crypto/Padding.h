#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Asymmetric {

enum class Padding : int {
    Pkcs1     = 0,
    Pkcs1Oaep = 1,
};

}
