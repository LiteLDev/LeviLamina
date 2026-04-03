#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct TransportStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkaeaf20;
    ::ll::UntypedStorage<8, 24> mUnkc0fab4;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportStats& operator=(TransportStats const&);
    TransportStats(TransportStats const&);
    TransportStats();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TransportStats();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
