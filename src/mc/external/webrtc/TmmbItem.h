#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class TmmbItem {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Create(uchar*) const;

    MCNAPI bool Parse(uchar const*);

    MCNAPI TmmbItem(uint, uint64, ushort);

    MCNAPI void set_packet_overhead(ushort);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint, uint64, ushort);
    // NOLINTEND
};

} // namespace webrtc::rtcp
