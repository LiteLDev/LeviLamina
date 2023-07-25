#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class http_memory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XBOX_HTTPCLIENT_HTTP_MEMORY
public:
    http_memory& operator=(http_memory const&) = delete;
    http_memory(http_memory const&)            = delete;
    http_memory()                              = delete;
#endif

public:
    /**
     * @symbol ?mem_alloc\@http_memory\@httpclient\@xbox\@\@SAPEAX_K\@Z
     */
    MCAPI static void* mem_alloc(unsigned __int64);
    /**
     * @symbol ?mem_free\@http_memory\@httpclient\@xbox\@\@SAXPEAX\@Z
     */
    MCAPI static void mem_free(void*);
};

}; // namespace xbox::httpclient
