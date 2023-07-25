#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class http_memory_buffer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XBOX_HTTPCLIENT_HTTP_MEMORY_BUFFER
public:
    http_memory_buffer& operator=(http_memory_buffer const&) = delete;
    http_memory_buffer(http_memory_buffer const&)            = delete;
    http_memory_buffer()                                     = delete;
#endif

public:
    /**
     * @symbol ??1http_memory_buffer\@httpclient\@xbox\@\@QEAA\@XZ
     */
    MCAPI ~http_memory_buffer();
};

}; // namespace xbox::httpclient
