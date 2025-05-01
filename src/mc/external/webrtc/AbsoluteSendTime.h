#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AbsoluteSendTime {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Write(::rtc::ArrayView<uchar>, uint);
    // NOLINTEND
};

} // namespace webrtc
