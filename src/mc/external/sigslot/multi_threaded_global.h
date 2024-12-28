#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sigslot {

class multi_threaded_global {
public:
    // prevent constructor by default
    multi_threaded_global& operator=(multi_threaded_global const&);
    multi_threaded_global(multi_threaded_global const&);
    multi_threaded_global();
};

} // namespace sigslot
