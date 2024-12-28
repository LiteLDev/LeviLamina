#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct TransportStats {
public:
    // prevent constructor by default
    TransportStats& operator=(TransportStats const&);
    TransportStats(TransportStats const&);
    TransportStats();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TransportStats();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
