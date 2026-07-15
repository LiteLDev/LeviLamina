#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoSinkInterface.h"
#include "mc/external/webrtc/VideoSourceInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoFrame; }
namespace webrtc { struct VideoSinkWants; }
// clang-format on

namespace webrtc {

class VideoSourceBaseGuarded : public ::webrtc::VideoSourceInterface<::webrtc::VideoFrame> {
public:
    // VideoSourceBaseGuarded inner types declare
    // clang-format off
    struct SinkPair;
    // clang-format on

    // VideoSourceBaseGuarded inner types define
    struct SinkPair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnka7654f;
        ::ll::UntypedStorage<8, 64> mUnk66d41a;
        // NOLINTEND

    public:
        // prevent constructor by default
        SinkPair& operator=(SinkPair const&);
        SinkPair(SinkPair const&);
        SinkPair();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SinkPair();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkfc1983;
    ::ll::UntypedStorage<8, 24> mUnk1e77e0;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoSourceBaseGuarded& operator=(VideoSourceBaseGuarded const&);
    VideoSourceBaseGuarded(VideoSourceBaseGuarded const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VideoSourceBaseGuarded() /*override*/;

    virtual void AddOrUpdateSink(
        ::webrtc::VideoSinkInterface<::webrtc::VideoFrame>* sink,
        ::webrtc::VideoSinkWants const&                     wants
    ) /*override*/;

    virtual void RemoveSink(::webrtc::VideoSinkInterface<::webrtc::VideoFrame>* sink) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoSourceBaseGuarded();

    MCNAPI ::std::vector<::webrtc::VideoSourceBaseGuarded::SinkPair> const& sink_pairs() const;
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


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
