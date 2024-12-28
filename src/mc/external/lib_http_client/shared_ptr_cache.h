#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct shared_ptr_cache {
public:
    // prevent constructor by default
    shared_ptr_cache& operator=(shared_ptr_cache const&);
    shared_ptr_cache(shared_ptr_cache const&);
    shared_ptr_cache();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void remove(void*);
    // NOLINTEND
};

} // namespace xbox::httpclient
