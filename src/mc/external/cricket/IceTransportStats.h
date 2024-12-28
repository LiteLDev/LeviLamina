#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct IceTransportStats {
public:
    // prevent constructor by default
    IceTransportStats& operator=(IceTransportStats const&);
    IceTransportStats();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IceTransportStats(::cricket::IceTransportStats const&);

    MCAPI ~IceTransportStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::IceTransportStats const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
