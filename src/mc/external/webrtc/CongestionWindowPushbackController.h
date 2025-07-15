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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk1fd942;
    ::ll::UntypedStorage<4, 4>  mUnkd30a07;
    ::ll::UntypedStorage<8, 16> mUnk599a98;
    ::ll::UntypedStorage<8, 8>  mUnk4396d7;
    ::ll::UntypedStorage<8, 8>  mUnk9782f5;
    ::ll::UntypedStorage<8, 8>  mUnkb8ffb4;
    // NOLINTEND

public:
    // prevent constructor by default
    CongestionWindowPushbackController& operator=(CongestionWindowPushbackController const&);
    CongestionWindowPushbackController(CongestionWindowPushbackController const&);
    CongestionWindowPushbackController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CongestionWindowPushbackController(::webrtc::FieldTrialsView const* key_value_config);

    MCNAPI void SetDataWindow(::webrtc::DataSize data_window);

    MCNAPI void UpdateOutstandingData(int64 outstanding_bytes);

    MCNAPI void UpdatePacingQueue(int64 pacing_bytes);

    MCNAPI uint UpdateTargetBitrate(uint bitrate_bps);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const* key_value_config);
    // NOLINTEND
};

} // namespace webrtc
