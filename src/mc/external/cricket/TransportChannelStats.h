#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct TransportChannelStats {
public:
    // prevent constructor by default
    TransportChannelStats& operator=(TransportChannelStats const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TransportChannelStats();

    MCAPI TransportChannelStats(::cricket::TransportChannelStats const&);

    MCAPI ~TransportChannelStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cricket::TransportChannelStats const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
