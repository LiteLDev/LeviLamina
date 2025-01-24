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
    MCAPI RtpSenderInfo(::webrtc::RtpSenderInfo&&);

    MCAPI ~RtpSenderInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RtpSenderInfo&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
