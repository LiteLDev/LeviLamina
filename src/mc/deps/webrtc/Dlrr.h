#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class Dlrr {
public:
    // prevent constructor by default
    Dlrr& operator=(Dlrr const&);
    Dlrr(Dlrr const&);

public:
    // NOLINTBEGIN
    // symbol: ?BlockLength@Dlrr@rtcp@webrtc@@QEBA_KXZ
    MCAPI uint64 BlockLength() const;

    // symbol: ?Create@Dlrr@rtcp@webrtc@@QEBAXPEAE@Z
    MCAPI void Create(uchar*) const;

    // symbol: ??0Dlrr@rtcp@webrtc@@QEAA@XZ
    MCAPI Dlrr();

    // symbol: ?Parse@Dlrr@rtcp@webrtc@@QEAA_NPEBEG@Z
    MCAPI bool Parse(uchar const*, ushort);

    // symbol: ??1Dlrr@rtcp@webrtc@@QEAA@XZ
    MCAPI ~Dlrr();

    // NOLINTEND
};

}; // namespace webrtc::rtcp
