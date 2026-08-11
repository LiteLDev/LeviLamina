#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

namespace webrtc {

class BaseRtpStringExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Parse(::webrtc::ArrayView<uchar const> data, ::std::string* str);

    MCNAPI static bool Write(::webrtc::ArrayView<uchar> data, ::std::string_view str);
    // NOLINTEND
};

} // namespace webrtc
