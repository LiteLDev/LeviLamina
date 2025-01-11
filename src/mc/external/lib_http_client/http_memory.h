#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct http_memory {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void* mem_alloc(uint64);

    MCAPI static void mem_free(void*);
    // NOLINTEND
};

} // namespace xbox::httpclient
