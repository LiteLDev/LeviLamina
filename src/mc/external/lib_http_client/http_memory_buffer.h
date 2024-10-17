#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class http_memory_buffer {
public:
    // prevent constructor by default
    http_memory_buffer& operator=(http_memory_buffer const&);
    http_memory_buffer(http_memory_buffer const&);
    http_memory_buffer();

public:
    // NOLINTBEGIN
    MCAPI ~http_memory_buffer();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace xbox::httpclient
