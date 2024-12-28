#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class TransmissionOffset {
public:
    // prevent constructor by default
    TransmissionOffset& operator=(TransmissionOffset const&);
    TransmissionOffset(TransmissionOffset const&);
    TransmissionOffset();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool Write(::rtc::ArrayView<uchar>, int);
    // NOLINTEND
};

} // namespace webrtc
