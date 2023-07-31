#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

class XXHash {

public:
    // prevent constructor by default
    XXHash& operator=(XXHash const&) = delete;
    XXHash(XXHash const&)            = delete;
    XXHash()                         = delete;

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_hash64Impl\@XXHash\@Util\@\@CA_KPEBX_K1\@Z
     */
    MCAPI static uint64_t _hash64Impl(void const*, uint64_t, uint64_t);
    // NOLINTEND
};

}; // namespace Util
