#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

namespace webrtc {

class AbsoluteCaptureTimeInterpolator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke8f394;
    ::ll::UntypedStorage<8, 40> mUnk8b1870;
    ::ll::UntypedStorage<8, 8>  mUnkb0f589;
    ::ll::UntypedStorage<4, 4>  mUnkcebfaf;
    ::ll::UntypedStorage<4, 4>  mUnkbac612;
    ::ll::UntypedStorage<4, 4>  mUnk24198c;
    ::ll::UntypedStorage<8, 24> mUnk53198e;
    ::ll::UntypedStorage<8, 16> mUnk1e9413;
    ::ll::UntypedStorage<8, 16> mUnke2222e;
    ::ll::UntypedStorage<8, 16> mUnk381a5e;
    ::ll::UntypedStorage<8, 16> mUnk74ff40;
    ::ll::UntypedStorage<8, 16> mUnk15d4ca;
    // NOLINTEND

public:
    // prevent constructor by default
    AbsoluteCaptureTimeInterpolator& operator=(AbsoluteCaptureTimeInterpolator const&);
    AbsoluteCaptureTimeInterpolator(AbsoluteCaptureTimeInterpolator const&);
    AbsoluteCaptureTimeInterpolator();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint GetSource(uint ssrc, ::webrtc::ArrayView<uint const, 18446744073709546905> csrcs);

    MCNAPI static uint64 InterpolateAbsoluteCaptureTimestamp(
        uint   rtp_timestamp,
        int    rtp_clock_frequency_hz,
        uint   last_rtp_timestamp,
        uint64 last_absolute_capture_timestamp
    );
    // NOLINTEND
};

} // namespace webrtc
