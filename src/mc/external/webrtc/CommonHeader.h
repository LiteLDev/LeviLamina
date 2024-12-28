#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class CommonHeader {
public:
    // prevent constructor by default
    CommonHeader& operator=(CommonHeader const&);
    CommonHeader(CommonHeader const&);
    CommonHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool Parse(uchar const*, uint64);
    // NOLINTEND
};

} // namespace webrtc::rtcp
