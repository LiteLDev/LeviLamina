#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class shared_ptr_cache {
public:
    // prevent constructor by default
    shared_ptr_cache& operator=(shared_ptr_cache const&);
    shared_ptr_cache(shared_ptr_cache const&);
    shared_ptr_cache();

public:
    // NOLINTBEGIN
    // symbol: ?remove@shared_ptr_cache@httpclient@xbox@@SAXPEAX@Z
    MCAPI static void remove(void*);

    // NOLINTEND
};

}; // namespace xbox::httpclient
