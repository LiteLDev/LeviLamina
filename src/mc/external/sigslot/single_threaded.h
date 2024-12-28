#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sigslot {

class single_threaded {
public:
    // prevent constructor by default
    single_threaded& operator=(single_threaded const&);
    single_threaded(single_threaded const&);
    single_threaded();
};

} // namespace sigslot
