#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RTPVideoHeaderH264 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkfdbedf;
    ::ll::UntypedStorage<4, 4> mUnkb58202;
    ::ll::UntypedStorage<4, 120> mUnkc65a76;
    ::ll::UntypedStorage<8, 8> mUnk52fd04;
    ::ll::UntypedStorage<4, 4> mUnkeac02a;
    // NOLINTEND

public:
    // prevent constructor by default
    RTPVideoHeaderH264& operator=(RTPVideoHeaderH264 const&);
    RTPVideoHeaderH264(RTPVideoHeaderH264 const&);
    RTPVideoHeaderH264();

};

}
