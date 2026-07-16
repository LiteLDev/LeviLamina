#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoSinkInterface.h"
#include "mc/external/webrtc/VideoSourceBase.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoFrame; }
namespace webrtc { struct VideoSinkWants; }
// clang-format on

namespace webrtc {

class VideoBroadcaster : public ::webrtc::VideoSourceBase, public ::webrtc::VideoSinkInterface<::webrtc::VideoFrame> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk17d8cc;
    ::ll::UntypedStorage<8, 64> mUnk873e0a;
    ::ll::UntypedStorage<8, 8>  mUnk99fbcc;
    ::ll::UntypedStorage<1, 1>  mUnk846369;
    ::ll::UntypedStorage<8, 40> mUnka89b73;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoBroadcaster& operator=(VideoBroadcaster const&);
    VideoBroadcaster(VideoBroadcaster const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VideoBroadcaster() /*override*/;

    virtual void AddOrUpdateSink(
        ::webrtc::VideoSinkInterface<::webrtc::VideoFrame>* sink,
        ::webrtc::VideoSinkWants const&                     wants
    ) /*override*/;

    virtual void RemoveSink(::webrtc::VideoSinkInterface<::webrtc::VideoFrame>* sink) /*override*/;

    virtual void OnFrame(::webrtc::VideoFrame const& frame) /*override*/;

    virtual void OnDiscardedFrame() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void UpdateWants();

    MCNAPI VideoBroadcaster();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
    $AddOrUpdateSink(::webrtc::VideoSinkInterface<::webrtc::VideoFrame>* sink, ::webrtc::VideoSinkWants const& wants);

    MCNAPI void $RemoveSink(::webrtc::VideoSinkInterface<::webrtc::VideoFrame>* sink);

    MCNAPI void $OnFrame(::webrtc::VideoFrame const& frame);

    MCNAPI void $OnDiscardedFrame();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForVideoSinkInterface();

    MCNAPI static void** $vftableForVideoSourceBase();
    // NOLINTEND
};

} // namespace webrtc
