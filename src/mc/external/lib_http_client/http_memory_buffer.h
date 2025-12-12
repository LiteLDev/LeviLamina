#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class http_memory_buffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc8f6f7;
    // NOLINTEND

public:
    // prevent constructor by default
    http_memory_buffer& operator=(http_memory_buffer const&);
    http_memory_buffer(http_memory_buffer const&);
    http_memory_buffer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~http_memory_buffer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace xbox::httpclient
