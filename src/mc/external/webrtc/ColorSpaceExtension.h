#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ColorSpace; }
namespace webrtc { struct HdrMetadata; }
// clang-format on

namespace webrtc {

class ColorSpaceExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Write(::rtc::ArrayView<uchar> data, ::webrtc::ColorSpace const& color_space);

    MCNAPI static uint64 WriteHdrMetadata(::rtc::ArrayView<uchar> data, ::webrtc::HdrMetadata const& hdr_metadata);
    // NOLINTEND
};

} // namespace webrtc
