#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RTPVideoHeaderVP8 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk285e1a;
    ::ll::UntypedStorage<2, 2> mUnk7a399c;
    ::ll::UntypedStorage<2, 2> mUnk8bfef1;
    ::ll::UntypedStorage<1, 1> mUnkd11e53;
    ::ll::UntypedStorage<1, 1> mUnk3fd142;
    ::ll::UntypedStorage<4, 4> mUnkce9b54;
    ::ll::UntypedStorage<4, 4> mUnke45ccf;
    ::ll::UntypedStorage<1, 1> mUnk9e202f;
    // NOLINTEND

public:
    // prevent constructor by default
    RTPVideoHeaderVP8& operator=(RTPVideoHeaderVP8 const&);
    RTPVideoHeaderVP8(RTPVideoHeaderVP8 const&);
    RTPVideoHeaderVP8();
};

} // namespace webrtc
