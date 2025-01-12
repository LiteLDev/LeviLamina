#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class TmmbItem {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Create(uchar*) const;

    MCAPI bool Parse(uchar const*);

    MCAPI TmmbItem(uint, uint64, ushort);

    MCAPI void set_packet_overhead(ushort);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint, uint64, ushort);
    // NOLINTEND
};

} // namespace webrtc::rtcp
