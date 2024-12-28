#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class UlpfecHeaderReader {
public:
    // prevent constructor by default
    UlpfecHeaderReader& operator=(UlpfecHeaderReader const&);
    UlpfecHeaderReader(UlpfecHeaderReader const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UlpfecHeaderReader();
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
