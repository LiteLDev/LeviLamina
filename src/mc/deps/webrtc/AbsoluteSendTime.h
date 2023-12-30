#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace webrtc {

class AbsoluteSendTime {
public:
    // prevent constructor by default
    AbsoluteSendTime& operator=(AbsoluteSendTime const&);
    AbsoluteSendTime(AbsoluteSendTime const&);
    AbsoluteSendTime();

public:
    // NOLINTBEGIN
    // symbol: ?Write@AbsoluteSendTime@webrtc@@SA_NV?$ArrayView@E$0?BCGH@@rtc@@I@Z
    MCAPI static bool Write(class rtc::ArrayView<uchar, -4711>, uint);

    // NOLINTEND
};

}; // namespace webrtc
