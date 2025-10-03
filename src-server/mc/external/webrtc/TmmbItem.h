#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class TmmbItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6e9804;
    ::ll::UntypedStorage<8, 8> mUnk4e4fef;
    ::ll::UntypedStorage<2, 2> mUnk1022d3;
    // NOLINTEND

public:
    // prevent constructor by default
    TmmbItem& operator=(TmmbItem const&);
    TmmbItem(TmmbItem const&);
    TmmbItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Create(uchar* buffer) const;

    MCNAPI bool Parse(uchar const* buffer);

    MCNAPI TmmbItem(uint ssrc, uint64 bitrate_bps, ushort overhead);

    MCNAPI void set_packet_overhead(ushort overhead);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint ssrc, uint64 bitrate_bps, ushort overhead);
    // NOLINTEND
};

} // namespace webrtc::rtcp
