#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/VideoSinkInterface.h"
#include "mc/external/rtc/VideoSourceInterface.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct VideoSinkWants; }
namespace webrtc { class VideoFrame; }
// clang-format on

namespace rtc {

class VideoSourceBaseGuarded : public ::rtc::VideoSourceInterface<::webrtc::VideoFrame> {
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
        ::ll::UntypedStorage<8, 8>  mUnk9e7312;
        ::ll::UntypedStorage<8, 64> mUnk2418e1;
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
    ::ll::UntypedStorage<1, 1>  mUnk2f0d21;
    ::ll::UntypedStorage<8, 24> mUnkf641b5;
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
        ::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink,
        ::rtc::VideoSinkWants const&                     wants
    ) /*override*/;

    virtual void RemoveSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>* sink) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoSourceBaseGuarded();

    MCNAPI ::std::vector<::rtc::VideoSourceBaseGuarded::SinkPair> const& sink_pairs() const;
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


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
