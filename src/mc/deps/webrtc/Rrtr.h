#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class Rrtr {
public:
    // prevent constructor by default
    Rrtr& operator=(Rrtr const&);
    Rrtr(Rrtr const&);
    Rrtr();

public:
    // NOLINTBEGIN
    // symbol: ?Create@Rrtr@rtcp@webrtc@@QEBAXPEAE@Z
    MCAPI void Create(uchar*) const;

    // symbol: ?Parse@Rrtr@rtcp@webrtc@@QEAAXPEBE@Z
    MCAPI void Parse(uchar const*);

    // NOLINTEND
};

}; // namespace webrtc::rtcp
