#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class BaseRtpStringExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Parse(::rtc::ArrayView<uchar const> data, ::std::string* str);

    MCNAPI static bool Write(::rtc::ArrayView<uchar> data, ::std::string_view str);
    // NOLINTEND
};

} // namespace webrtc
