#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class Flexfec03HeaderWriter {
public:
    // prevent constructor by default
    Flexfec03HeaderWriter& operator=(Flexfec03HeaderWriter const&);
    Flexfec03HeaderWriter(Flexfec03HeaderWriter const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Flexfec03HeaderWriter();
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
