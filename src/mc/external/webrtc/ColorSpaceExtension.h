#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

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
    MCNAPI static bool
    Write(::webrtc::ArrayView<uchar, 18446744073709546905> data, ::webrtc::ColorSpace const& color_space);

    MCNAPI static uint64
    WriteHdrMetadata(::webrtc::ArrayView<uchar, 18446744073709546905> data, ::webrtc::HdrMetadata const& hdr_metadata);
    // NOLINTEND
};

} // namespace webrtc
