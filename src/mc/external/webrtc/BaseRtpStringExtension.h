#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

namespace webrtc {

class BaseRtpStringExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Parse(::webrtc::ArrayView<uchar const, 18446744073709546905> data, ::std::string* str);

    MCNAPI static bool Write(::webrtc::ArrayView<uchar, 18446744073709546905> data, ::std::string_view str);
    // NOLINTEND
};

} // namespace webrtc
