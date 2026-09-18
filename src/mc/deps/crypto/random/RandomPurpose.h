#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Random {

enum class RandomPurpose : int {
    Public        = 0,
    PrivateSecret = 1,
};

}
