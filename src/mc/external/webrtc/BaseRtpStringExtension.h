#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class BaseRtpStringExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Parse(::rtc::ArrayView<uchar const>, ::std::string*);

    MCNAPI static bool Write(::rtc::ArrayView<uchar>, ::std::string_view);
    // NOLINTEND
};

} // namespace webrtc
