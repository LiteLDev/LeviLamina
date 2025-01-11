#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class IceTransportInternal {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI IceTransportInternal();

    MCAPI void SendGatheringStateEvent();

    MCAPI void SignalGatheringStateFired(::cricket::IceTransportInternal*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
