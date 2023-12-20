#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace webrtc {

class TransmissionOffset {
public:
    // prevent constructor by default
    TransmissionOffset& operator=(TransmissionOffset const&);
    TransmissionOffset(TransmissionOffset const&);
    TransmissionOffset();

public:
    // NOLINTBEGIN
    // symbol: ?Write@TransmissionOffset@webrtc@@SA_NV?$ArrayView@E$0?BCGH@@rtc@@H@Z
    MCAPI static bool Write(class rtc::ArrayView<uchar, -4711>, int);

    // NOLINTEND
};

}; // namespace webrtc
