#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Symmetric {

enum class OperationMode : int {
    Ecb = 0,
    Cbc = 1,
    Cfb = 2,
    Cfb128 = 3,
    Ofb = 4,
    Gcm = 5,
};

}
