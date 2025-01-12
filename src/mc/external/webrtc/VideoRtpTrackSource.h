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
    // member functions
    // NOLINTBEGIN
    MCAPI void BroadcastRecordableEncodedFrame(::webrtc::RecordableEncodedFrame const&) const;

    MCAPI void ClearCallback();

    MCAPI explicit VideoRtpTrackSource(::webrtc::VideoRtpTrackSource::Callback*);

    MCAPI ::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::VideoRtpTrackSource::Callback*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI static void** $vftableForRefCountInterface();

    MCAPI static void** $vftableForNotifierInterface();
    // NOLINTEND
};

} // namespace webrtc
