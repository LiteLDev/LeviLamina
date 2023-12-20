#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace webrtc {

class TransportSequenceNumber {
public:
    // prevent constructor by default
    TransportSequenceNumber& operator=(TransportSequenceNumber const&);
    TransportSequenceNumber(TransportSequenceNumber const&);
    TransportSequenceNumber();

public:
    // NOLINTBEGIN
    // symbol: ?Parse@TransportSequenceNumber@webrtc@@SA_NV?$ArrayView@$$CBE$0?BCGH@@rtc@@PEAG@Z
    MCAPI static bool Parse(class rtc::ArrayView<uchar const, -4711>, ushort*);

    // symbol: ?Write@TransportSequenceNumber@webrtc@@SA_NV?$ArrayView@E$0?BCGH@@rtc@@G@Z
    MCAPI static bool Write(class rtc::ArrayView<uchar, -4711>, ushort);

    // NOLINTEND
};

}; // namespace webrtc
