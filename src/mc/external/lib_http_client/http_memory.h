#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class http_memory {
public:
    // prevent constructor by default
    http_memory& operator=(http_memory const&);
    http_memory(http_memory const&);
    http_memory();

public:
    // NOLINTBEGIN
    MCAPI static void* mem_alloc(uint64);

    MCAPI static void mem_free(void*);

    // NOLINTEND
};

}; // namespace xbox::httpclient
