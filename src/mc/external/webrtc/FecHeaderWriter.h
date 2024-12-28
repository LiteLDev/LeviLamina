#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FecHeaderWriter {
public:
    // prevent constructor by default
    FecHeaderWriter& operator=(FecHeaderWriter const&);
    FecHeaderWriter(FecHeaderWriter const&);
    FecHeaderWriter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FecHeaderWriter(uint64, uint64, uint64);

    MCAPI uint64 MaxFecPackets() const;

    MCAPI uint64 MaxMediaPackets() const;

    MCAPI uint64 MaxPacketOverhead() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint64, uint64, uint64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
