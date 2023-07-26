#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class http_memory {

public:
    // prevent constructor by default
    http_memory& operator=(http_memory const&) = delete;
    http_memory(http_memory const&)            = delete;
    http_memory()                              = delete;

public:
    /**
     * @symbol ?mem_alloc\@http_memory\@httpclient\@xbox\@\@SAPEAX_K\@Z
     */
    MCAPI static void* mem_alloc(unsigned __int64); // NOLINT
    /**
     * @symbol ?mem_free\@http_memory\@httpclient\@xbox\@\@SAXPEAX\@Z
     */
    MCAPI static void mem_free(void*); // NOLINT
};

}; // namespace xbox::httpclient
