#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpSenderInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkee669c;
    ::ll::UntypedStorage<8, 32> mUnk6c8b2f;
    ::ll::UntypedStorage<4, 4>  mUnk73b1ce;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpSenderInfo& operator=(RtpSenderInfo const&);
    RtpSenderInfo(RtpSenderInfo const&);
    RtpSenderInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RtpSenderInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
