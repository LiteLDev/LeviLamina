#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

class XXHash {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UTIL_XXHASH
public:
    XXHash& operator=(XXHash const&) = delete;
    XXHash(XXHash const&)            = delete;
    XXHash()                         = delete;
#endif

public:
    // private:
    /**
     * @symbol ?_hash64Impl\@XXHash\@Util\@\@CA_KPEBX_K1\@Z
     */
    MCAPI static unsigned __int64 _hash64Impl(void const*, unsigned __int64, unsigned __int64);

private:
};

}; // namespace Util
