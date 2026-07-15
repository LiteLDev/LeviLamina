#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class CorruptionDetectionMessage; }
// clang-format on

namespace webrtc {

class CorruptionDetectionExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 ValueSize(::webrtc::CorruptionDetectionMessage const& message);

    MCNAPI static bool
    Write(::webrtc::ArrayView<uchar, 18446744073709546905> data, ::webrtc::CorruptionDetectionMessage const& message);
    // NOLINTEND
};

} // namespace webrtc
