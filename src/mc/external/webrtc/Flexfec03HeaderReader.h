#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class Flexfec03HeaderReader {
public:
    // prevent constructor by default
    Flexfec03HeaderReader& operator=(Flexfec03HeaderReader const&);
    Flexfec03HeaderReader(Flexfec03HeaderReader const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Flexfec03HeaderReader();
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

} // namespace webrtc
