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
    MCNAPI IceTransportStats(::cricket::IceTransportStats const&);

    MCNAPI ~IceTransportStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::IceTransportStats const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
