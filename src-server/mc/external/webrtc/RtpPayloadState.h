#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpPayloadState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk5e6a6f;
    ::ll::UntypedStorage<1, 1> mUnk24653e;
    ::ll::UntypedStorage<8, 8> mUnkb67368;
    ::ll::UntypedStorage<8, 8> mUnk864801;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpPayloadState& operator=(RtpPayloadState const&);
    RtpPayloadState(RtpPayloadState const&);
    RtpPayloadState();

};

}
