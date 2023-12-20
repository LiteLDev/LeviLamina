#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class ReportBlock {
public:
    // prevent constructor by default
    ReportBlock& operator=(ReportBlock const&);
    ReportBlock(ReportBlock const&);

public:
    // NOLINTBEGIN
    // symbol: ?Create@ReportBlock@rtcp@webrtc@@QEBAXPEAE@Z
    MCAPI void Create(uchar*) const;

    // symbol: ?Parse@ReportBlock@rtcp@webrtc@@QEAA_NPEBE_K@Z
    MCAPI bool Parse(uchar const*, uint64);

    // symbol: ??0ReportBlock@rtcp@webrtc@@QEAA@XZ
    MCAPI ReportBlock();

    // NOLINTEND
};

}; // namespace webrtc::rtcp
