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
    // member functions
    // NOLINTBEGIN
    MCNAPI ::rtc::VideoSourceBaseGuarded::SinkPair*
    FindSinkPair(::rtc::VideoSinkInterface<::webrtc::VideoFrame> const*);

    MCNAPI VideoSourceBaseGuarded();

    MCNAPI ::std::vector<::rtc::VideoSourceBaseGuarded::SinkPair> const& sink_pairs() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
