#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class IceTransportWithPointer {
public:
    // prevent constructor by default
    IceTransportWithPointer& operator=(IceTransportWithPointer const&);
    IceTransportWithPointer(IceTransportWithPointer const&);
    IceTransportWithPointer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Clear();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
