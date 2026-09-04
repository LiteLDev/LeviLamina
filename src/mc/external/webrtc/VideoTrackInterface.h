#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaStreamTrackInterface.h"
#include "mc/external/webrtc/VideoSinkInterface.h"
#include "mc/external/webrtc/VideoSourceInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoFrame; }
namespace webrtc { class VideoTrackSourceInterface; }
namespace webrtc { struct VideoSinkWants; }
// clang-format on

namespace webrtc {

class VideoTrackInterface : public ::webrtc::MediaStreamTrackInterface,
                            public ::webrtc::VideoSourceInterface<::webrtc::VideoFrame> {
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
    virtual void AddOrUpdateSink(
        ::webrtc::VideoSinkInterface<::webrtc::VideoFrame>* a1,
        ::webrtc::VideoSinkWants const&                     a2
    ) /*override*/;

    virtual void RemoveSink(::webrtc::VideoSinkInterface<::webrtc::VideoFrame>* a1) /*override*/;

    virtual ::webrtc::VideoTrackSourceInterface* GetSource() const = 0;

    virtual ::webrtc::VideoTrackInterface::ContentHint content_hint() const;

    virtual void set_content_hint(::webrtc::VideoTrackInterface::ContentHint a1);

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
    $AddOrUpdateSink(::webrtc::VideoSinkInterface<::webrtc::VideoFrame>* a1, ::webrtc::VideoSinkWants const& a2);

    MCNAPI void $RemoveSink(::webrtc::VideoSinkInterface<::webrtc::VideoFrame>* a1);

    MCNAPI ::webrtc::VideoTrackInterface::ContentHint $content_hint() const;

    MCNAPI void $set_content_hint(::webrtc::VideoTrackInterface::ContentHint a1);


    // NOLINTEND
};

} // namespace webrtc
