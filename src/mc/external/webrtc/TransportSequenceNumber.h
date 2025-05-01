#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class TransportSequenceNumber {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Parse(::rtc::ArrayView<uchar const>, ushort*);

    MCNAPI static bool Write(::rtc::ArrayView<uchar>, ushort);
    // NOLINTEND
};

} // namespace webrtc
