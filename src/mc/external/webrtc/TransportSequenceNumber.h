#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

namespace webrtc {

class TransportSequenceNumber {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    Parse(::webrtc::ArrayView<uchar const, 18446744073709546905> data, ushort* transport_sequence_number);

    MCNAPI static bool Write(::webrtc::ArrayView<uchar, 18446744073709546905> data, ushort transport_sequence_number);
    // NOLINTEND
};

} // namespace webrtc
