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
    MCNAPI TransportChannelStats();

    MCNAPI TransportChannelStats(::cricket::TransportChannelStats const&);

    MCNAPI ~TransportChannelStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::TransportChannelStats const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
