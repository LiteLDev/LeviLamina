#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/VideoSinkInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RecordableEncodedFrame; }
namespace webrtc { class VideoFrame; }
// clang-format on

namespace webrtc {

class VideoRtpTrackSource {
public:
    // VideoRtpTrackSource inner types declare
    // clang-format off
    class Callback;
    // clang-format on

    // VideoRtpTrackSource inner types define
    class Callback {};

public:
    // prevent constructor by default
    VideoRtpTrackSource();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void BroadcastRecordableEncodedFrame(::webrtc::RecordableEncodedFrame const&) const;

    MCNAPI void ClearCallback();

    MCNAPI explicit VideoRtpTrackSource(::webrtc::VideoRtpTrackSource::Callback*);

    MCNAPI ::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::VideoRtpTrackSource::Callback*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForRefCountInterface();

    MCNAPI static void** $vftableForNotifierInterface();
    // NOLINTEND
};

} // namespace webrtc
