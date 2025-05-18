#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataSize; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

class CongestionWindowPushbackController {
public:
    // prevent constructor by default
    CongestionWindowPushbackController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CongestionWindowPushbackController(::webrtc::FieldTrialsView const*);

    MCNAPI void SetDataWindow(::webrtc::DataSize);

    MCNAPI void UpdateOutstandingData(int64);

    MCNAPI void UpdatePacingQueue(int64);

    MCNAPI uint UpdateTargetBitrate(uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const*);
    // NOLINTEND
};

} // namespace webrtc
