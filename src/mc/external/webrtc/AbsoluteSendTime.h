#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AbsoluteSendTime {
public:
    // prevent constructor by default
    AbsoluteSendTime& operator=(AbsoluteSendTime const&);
    AbsoluteSendTime(AbsoluteSendTime const&);
    AbsoluteSendTime();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool Write(::rtc::ArrayView<uchar>, uint);
    // NOLINTEND
};

} // namespace webrtc
