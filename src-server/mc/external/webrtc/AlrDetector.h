#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { struct AlrDetectorConfig; }
// clang-format on

namespace webrtc {

class AlrDetector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk59de04;
    ::ll::UntypedStorage<8, 16> mUnka47a70;
    ::ll::UntypedStorage<8, 32> mUnka7d0ff;
    ::ll::UntypedStorage<8, 16> mUnkfcbed9;
    ::ll::UntypedStorage<8, 8> mUnka1448b;
    // NOLINTEND

public:
    // prevent constructor by default
    AlrDetector& operator=(AlrDetector const&);
    AlrDetector(AlrDetector const&);
    AlrDetector();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AlrDetector(::webrtc::AlrDetectorConfig config, ::webrtc::RtcEventLog* event_log);

    MCNAPI AlrDetector(::webrtc::FieldTrialsView const* key_value_config, ::webrtc::RtcEventLog* event_log);

    MCNAPI ::std::optional<int64> GetApplicationLimitedRegionStartTime() const;

    MCNAPI void OnBytesSent(uint64 bytes_sent, int64 send_time_ms);

    MCNAPI void SetEstimatedBitrate(int bitrate_bps);

    MCNAPI ~AlrDetector();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::AlrDetectorConfig config, ::webrtc::RtcEventLog* event_log);

    MCNAPI void* $ctor(::webrtc::FieldTrialsView const* key_value_config, ::webrtc::RtcEventLog* event_log);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
