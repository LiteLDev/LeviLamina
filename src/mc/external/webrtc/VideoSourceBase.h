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

class VideoSourceBase : public ::webrtc::VideoSourceInterface<::webrtc::VideoFrame> {
public:
    // VideoSourceBase inner types declare
    // clang-format off
    struct SinkPair;
    // clang-format on

    // VideoSourceBase inner types define
    struct SinkPair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk103301;
        ::ll::UntypedStorage<8, 64> mUnkd17327;
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
    ::ll::UntypedStorage<8, 24> mUnk60a49a;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoSourceBase& operator=(VideoSourceBase const&);
    VideoSourceBase(VideoSourceBase const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VideoSourceBase() /*override*/;

    virtual void AddOrUpdateSink(
        ::webrtc::VideoSinkInterface<::webrtc::VideoFrame>* sink,
        ::webrtc::VideoSinkWants const&                     wants
    ) /*override*/;

    virtual void RemoveSink(::webrtc::VideoSinkInterface<::webrtc::VideoFrame>* sink) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::VideoSourceBase::SinkPair*
    FindSinkPair(::webrtc::VideoSinkInterface<::webrtc::VideoFrame> const* sink);

    MCNAPI VideoSourceBase();
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
