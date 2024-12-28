#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/VideoSinkInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoFrame; }
// clang-format on

namespace rtc {

class VideoSourceBaseGuarded {
public:
    // VideoSourceBaseGuarded inner types declare
    // clang-format off
    struct SinkPair;
    // clang-format on

    // VideoSourceBaseGuarded inner types define
    struct SinkPair {
    public:
        // prevent constructor by default
        SinkPair& operator=(SinkPair const&);
        SinkPair(SinkPair const&);
        SinkPair();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~SinkPair();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    VideoSourceBaseGuarded& operator=(VideoSourceBaseGuarded const&);
    VideoSourceBaseGuarded(VideoSourceBaseGuarded const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::rtc::VideoSourceBaseGuarded::SinkPair* FindSinkPair(::rtc::VideoSinkInterface<::webrtc::VideoFrame> const*);

    MCAPI VideoSourceBaseGuarded();

    MCAPI ::std::vector<::rtc::VideoSourceBaseGuarded::SinkPair> const& sink_pairs() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
