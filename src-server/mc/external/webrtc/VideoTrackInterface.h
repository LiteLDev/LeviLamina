#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/VideoSinkInterface.h"
#include "mc/external/rtc/VideoSourceInterface.h"
#include "mc/external/webrtc/MediaStreamTrackInterface.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct VideoSinkWants; }
namespace webrtc { class VideoFrame; }
namespace webrtc { class VideoTrackSourceInterface; }
// clang-format on

namespace webrtc {

class VideoTrackInterface : public ::webrtc::MediaStreamTrackInterface,
                            public ::rtc::VideoSourceInterface<::webrtc::VideoFrame> {
public:
    // VideoTrackInterface inner types define
    enum class ContentHint : int {
        KNone     = 0,
        KFluid    = 1,
        KDetailed = 2,
        KText     = 3,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void AddOrUpdateSink(
        ::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink,
        ::rtc::VideoSinkWants const&                     wants
    ) /*override*/;

    // vIndex: 2
    virtual void RemoveSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink) /*override*/;

    // vIndex: 8
    virtual ::webrtc::VideoTrackSourceInterface* GetSource() const = 0;

    // vIndex: 9
    virtual ::webrtc::VideoTrackInterface::ContentHint content_hint() const;

    // vIndex: 10
    virtual void set_content_hint(::webrtc::VideoTrackInterface::ContentHint hint);

    // vIndex: 0
    virtual ~VideoTrackInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $AddOrUpdateSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink, ::rtc::VideoSinkWants const& wants);

    MCNAPI void $RemoveSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink);

    MCNAPI ::webrtc::VideoTrackInterface::ContentHint $content_hint() const;

    MCNAPI void $set_content_hint(::webrtc::VideoTrackInterface::ContentHint hint);
    // NOLINTEND
};

} // namespace webrtc
