#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ColorSpace.h"
#include "mc/external/webrtc/HdrMasteringMetadata.h"

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
    MCNAPI static uchar CombineRangeAndChromaSiting(::webrtc::ColorSpace::RangeID range, ::webrtc::ColorSpace::ChromaSiting chroma_siting_horizontal, ::webrtc::ColorSpace::ChromaSiting chroma_siting_vertical);

    MCNAPI static bool Write(::rtc::ArrayView<uchar> data, ::webrtc::ColorSpace const& color_space);

    MCNAPI static uint64 WriteChromaticity(uchar* data, ::webrtc::HdrMasteringMetadata::Chromaticity const& p);

    MCNAPI static uint64 WriteHdrMetadata(::rtc::ArrayView<uchar> data, ::webrtc::HdrMetadata const& hdr_metadata);

    MCNAPI static uint64 WriteLuminance(uchar* data, float f, int denominator);
    // NOLINTEND

};

}
