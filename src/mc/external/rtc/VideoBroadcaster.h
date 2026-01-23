#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/VideoSinkInterface.h"
#include "mc/external/rtc/VideoSourceBase.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct VideoSinkWants; }
namespace webrtc { class VideoFrame; }
// clang-format on

namespace rtc {

class VideoBroadcaster : public ::rtc::VideoSourceBase, public ::rtc::VideoSinkInterface<::webrtc::VideoFrame> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkdb225d;
    ::ll::UntypedStorage<8, 64> mUnka63a5e;
    ::ll::UntypedStorage<8, 8>  mUnka15fe9;
    ::ll::UntypedStorage<1, 1>  mUnkb72bf7;
    ::ll::UntypedStorage<8, 40> mUnka62edf;
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
        ::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink,
        ::rtc::VideoSinkWants const&                     wants
    ) /*override*/;

    virtual void RemoveSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink) /*override*/;

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
    $AddOrUpdateSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink, ::rtc::VideoSinkWants const& wants);

    MCNAPI void $RemoveSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink);

    MCNAPI void $OnFrame(::webrtc::VideoFrame const& frame);

    MCNAPI void $OnDiscardedFrame();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForVideoSourceBase();

    MCNAPI static void** $vftableForVideoSinkInterface();
    // NOLINTEND
};

} // namespace rtc
