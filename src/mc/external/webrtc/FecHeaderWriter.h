#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FecHeaderWriter {
public:
    // prevent constructor by default
    FecHeaderWriter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FecHeaderWriter(uint64, uint64, uint64);

    MCNAPI uint64 MaxFecPackets() const;

    MCNAPI uint64 MaxMediaPackets() const;

    MCNAPI uint64 MaxPacketOverhead() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64, uint64, uint64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
