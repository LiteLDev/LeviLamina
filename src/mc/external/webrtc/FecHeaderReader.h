#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FecHeaderReader {
public:
    // prevent constructor by default
    FecHeaderReader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FecHeaderReader(uint64, uint64);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64, uint64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
