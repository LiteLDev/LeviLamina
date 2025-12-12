#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct TransportStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7cd99e;
    ::ll::UntypedStorage<8, 24> mUnk8a2cf5;
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
