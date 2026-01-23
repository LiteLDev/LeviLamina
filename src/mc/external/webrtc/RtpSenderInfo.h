#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpSenderInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc724a4;
    ::ll::UntypedStorage<8, 32> mUnk54b6d8;
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
