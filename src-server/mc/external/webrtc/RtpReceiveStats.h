#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpReceiveStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkce44e5;
    ::ll::UntypedStorage<4, 4> mUnk3b2064;
    ::ll::UntypedStorage<8, 8> mUnkbb529b;
    ::ll::UntypedStorage<8, 16> mUnk6839a4;
    ::ll::UntypedStorage<8, 40> mUnkd865b1;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpReceiveStats& operator=(RtpReceiveStats const&);
    RtpReceiveStats(RtpReceiveStats const&);
    RtpReceiveStats();

};

}
