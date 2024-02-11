#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

class XXHash {
public:
    // prevent constructor by default
    XXHash& operator=(XXHash const&);
    XXHash(XXHash const&);
    XXHash();

    // private:
    // NOLINTBEGIN
    // symbol: ?_hash64Impl@XXHash@Util@@CA_KPEBX_K1@Z
    MCAPI static uint64 _hash64Impl(void const* input, uint64 len, uint64 seed);

    // NOLINTEND
};

}; // namespace Util
