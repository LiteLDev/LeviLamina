#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Hash {

enum class HashType : int {
    Md5    = 0,
    Sha1   = 1,
    Sha256 = 2,
    Sha384 = 3,
    Sha512 = 4,
};

}
