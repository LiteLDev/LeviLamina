#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class UlpfecHeaderWriter {
public:
    // prevent constructor by default
    UlpfecHeaderWriter& operator=(UlpfecHeaderWriter const&);
    UlpfecHeaderWriter(UlpfecHeaderWriter const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UlpfecHeaderWriter();
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
