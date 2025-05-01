#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/VideoSinkInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoFrame; }
// clang-format on

namespace rtc {

class VideoSourceBase {
public:
    // VideoSourceBase inner types declare
    // clang-format off
    struct SinkPair;
    // clang-format on

    // VideoSourceBase inner types define
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
    MCNAPI ::rtc::VideoSourceBase::SinkPair* FindSinkPair(::rtc::VideoSinkInterface<::webrtc::VideoFrame> const*);

    MCNAPI VideoSourceBase();
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
