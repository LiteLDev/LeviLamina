#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sigslot {

class multi_threaded_local {
public:
    // prevent constructor by default
    multi_threaded_local& operator=(multi_threaded_local const&);
    multi_threaded_local(multi_threaded_local const&);
    multi_threaded_local();

public:
    // NOLINTBEGIN
    // symbol: ??1multi_threaded_local@sigslot@@QEAA@XZ
    MCAPI ~multi_threaded_local();

    // NOLINTEND
};

}; // namespace sigslot
