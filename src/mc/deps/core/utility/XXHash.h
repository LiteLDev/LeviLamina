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
    /**
     * @symbol ?_hash64Impl\@XXHash\@Util\@\@CA_KPEBX_K1\@Z
     */
    MCAPI static unsigned __int64 _hash64Impl(void const*, unsigned __int64, unsigned __int64); // NOLINT

private:
};

}; // namespace Util
