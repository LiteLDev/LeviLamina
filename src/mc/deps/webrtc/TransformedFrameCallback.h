#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/RefCountInterface.h"
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RefCountInterface; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class TransformedFrameCallback : public ::rtc::RefCountInterface {
public:
    // prevent constructor by default
    TransformedFrameCallback& operator=(TransformedFrameCallback const&);
    TransformedFrameCallback(TransformedFrameCallback const&);
    TransformedFrameCallback();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1TransformedFrameCallback@webrtc@@MEAA@XZ
    virtual ~TransformedFrameCallback();

    // NOLINTEND
};

}; // namespace webrtc
