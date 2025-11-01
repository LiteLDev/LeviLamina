#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class http_memory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void* mem_alloc(uint64 size);

    MCNAPI static void mem_free(void* pAddress);
    // NOLINTEND
};

} // namespace xbox::httpclient
