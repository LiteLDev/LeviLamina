#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk170e4e;
    ::ll::UntypedStorage<4, 4> mUnk4c54fb;
    ::ll::UntypedStorage<4, 4> mUnkc94bbe;
    ::ll::UntypedStorage<8, 8> mUnk569411;
    ::ll::UntypedStorage<8, 8> mUnk245a4a;
    ::ll::UntypedStorage<1, 1> mUnk174cc6;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpState& operator=(RtpState const&);
    RtpState(RtpState const&);
    RtpState();
};

} // namespace webrtc
