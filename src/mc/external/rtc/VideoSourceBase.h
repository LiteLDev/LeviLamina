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
        MCAPI ~SinkPair();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::rtc::VideoSourceBase::SinkPair* FindSinkPair(::rtc::VideoSinkInterface<::webrtc::VideoFrame> const*);

    MCAPI VideoSourceBase();
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
