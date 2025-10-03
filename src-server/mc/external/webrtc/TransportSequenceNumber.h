#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class TransportSequenceNumber {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Parse(::rtc::ArrayView<uchar const> data, ushort* transport_sequence_number);

    MCNAPI static bool Write(::rtc::ArrayView<uchar> data, ushort transport_sequence_number);
    // NOLINTEND
};

} // namespace webrtc
