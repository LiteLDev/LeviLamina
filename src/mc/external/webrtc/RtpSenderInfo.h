#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpSenderInfo {
public:
    // prevent constructor by default
    RtpSenderInfo& operator=(RtpSenderInfo const&);
    RtpSenderInfo(RtpSenderInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtpSenderInfo(::webrtc::RtpSenderInfo&&);

    MCNAPI ~RtpSenderInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpSenderInfo&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
