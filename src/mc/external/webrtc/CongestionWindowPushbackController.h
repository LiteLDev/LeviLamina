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
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CongestionWindowPushbackController(::webrtc::FieldTrialsView const*);

    MCAPI void SetDataWindow(::webrtc::DataSize);

    MCAPI void UpdateOutstandingData(int64);

    MCAPI void UpdatePacingQueue(int64);

    MCAPI uint UpdateTargetBitrate(uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const*);
    // NOLINTEND
};

} // namespace webrtc
