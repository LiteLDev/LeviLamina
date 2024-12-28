#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct http_memory_buffer {
public:
    // prevent constructor by default
    http_memory_buffer& operator=(http_memory_buffer const&);
    http_memory_buffer(http_memory_buffer const&);
    http_memory_buffer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~http_memory_buffer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace xbox::httpclient
