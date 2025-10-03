#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RTPHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnkd89f23;
    ::ll::UntypedStorage<1, 1>   mUnkb881d4;
    ::ll::UntypedStorage<2, 2>   mUnk2295c2;
    ::ll::UntypedStorage<4, 4>   mUnk7e4223;
    ::ll::UntypedStorage<4, 4>   mUnkefa07b;
    ::ll::UntypedStorage<1, 1>   mUnkcb2abc;
    ::ll::UntypedStorage<4, 60>  mUnk4b3a9f;
    ::ll::UntypedStorage<8, 8>   mUnk6b19a4;
    ::ll::UntypedStorage<8, 8>   mUnk2824f2;
    ::ll::UntypedStorage<8, 280> mUnk6f5a8a;
    // NOLINTEND

public:
    // prevent constructor by default
    RTPHeader& operator=(RTPHeader const&);
    RTPHeader(RTPHeader const&);
    RTPHeader();
};

} // namespace webrtc
