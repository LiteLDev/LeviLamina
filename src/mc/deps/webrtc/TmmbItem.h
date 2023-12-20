#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class TmmbItem {
public:
    // prevent constructor by default
    TmmbItem& operator=(TmmbItem const&);
    TmmbItem(TmmbItem const&);
    TmmbItem();

public:
    // NOLINTBEGIN
    // symbol: ?Create@TmmbItem@rtcp@webrtc@@QEBAXPEAE@Z
    MCAPI void Create(uchar*) const;

    // symbol: ?Parse@TmmbItem@rtcp@webrtc@@QEAA_NPEBE@Z
    MCAPI bool Parse(uchar const*);

    // symbol: ??0TmmbItem@rtcp@webrtc@@QEAA@I_KG@Z
    MCAPI TmmbItem(uint, uint64, ushort);

    // symbol: ?set_packet_overhead@TmmbItem@rtcp@webrtc@@QEAAXG@Z
    MCAPI void set_packet_overhead(ushort);

    // NOLINTEND
};

}; // namespace webrtc::rtcp
