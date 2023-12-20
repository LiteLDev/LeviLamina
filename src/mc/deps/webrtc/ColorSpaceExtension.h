#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/ColorSpace.h"
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ColorSpace; }
namespace webrtc { struct HdrMetadata; }
namespace webrtc::HdrMasteringMetadata { struct Chromaticity; }
// clang-format on

namespace webrtc {

class ColorSpaceExtension {
public:
    // prevent constructor by default
    ColorSpaceExtension& operator=(ColorSpaceExtension const&);
    ColorSpaceExtension(ColorSpaceExtension const&);
    ColorSpaceExtension();

public:
    // NOLINTBEGIN
    // symbol: ?Write@ColorSpaceExtension@webrtc@@SA_NV?$ArrayView@E$0?BCGH@@rtc@@AEBVColorSpace@2@@Z
    MCAPI static bool Write(class rtc::ArrayView<uchar, -4711>, class webrtc::ColorSpace const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?CombineRangeAndChromaSiting@ColorSpaceExtension@webrtc@@CAEW4RangeID@ColorSpace@2@W4ChromaSiting@42@1@Z
    MCAPI static uchar CombineRangeAndChromaSiting(
        ::webrtc::ColorSpace::RangeID,
        ::webrtc::ColorSpace::ChromaSiting,
        ::webrtc::ColorSpace::ChromaSiting
    );

    // symbol: ?WriteChromaticity@ColorSpaceExtension@webrtc@@CA_KPEAEAEBUChromaticity@HdrMasteringMetadata@2@@Z
    MCAPI static uint64 WriteChromaticity(uchar*, struct webrtc::HdrMasteringMetadata::Chromaticity const&);

    // symbol: ?WriteHdrMetadata@ColorSpaceExtension@webrtc@@CA_KV?$ArrayView@E$0?BCGH@@rtc@@AEBUHdrMetadata@2@@Z
    MCAPI static uint64 WriteHdrMetadata(class rtc::ArrayView<uchar, -4711>, struct webrtc::HdrMetadata const&);

    // symbol: ?WriteLuminance@ColorSpaceExtension@webrtc@@CA_KPEAEMH@Z
    MCAPI static uint64 WriteLuminance(uchar*, float, int);

    // NOLINTEND
};

}; // namespace webrtc
