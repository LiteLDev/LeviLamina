#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class IceTransportInternal {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IceTransportInternal();

    MCNAPI void SendGatheringStateEvent();

    MCNAPI void SignalGatheringStateFired(::cricket::IceTransportInternal*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
