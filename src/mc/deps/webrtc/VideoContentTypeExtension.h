#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/VideoContentType.h"
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace webrtc {

class VideoContentTypeExtension {
public:
    // prevent constructor by default
    VideoContentTypeExtension& operator=(VideoContentTypeExtension const&);
    VideoContentTypeExtension(VideoContentTypeExtension const&);
    VideoContentTypeExtension();

public:
    // NOLINTBEGIN
    // symbol: ?Write@VideoContentTypeExtension@webrtc@@SA_NV?$ArrayView@E$0?BCGH@@rtc@@W4VideoContentType@2@@Z
    MCAPI static bool Write(class rtc::ArrayView<uchar, -4711>, ::webrtc::VideoContentType);

    // NOLINTEND
};

}; // namespace webrtc
