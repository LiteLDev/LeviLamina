#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct CodecSpecificInfoVP8 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkaefcf2;
    ::ll::UntypedStorage<1, 1>  mUnkb886cc;
    ::ll::UntypedStorage<1, 1>  mUnk5d14a7;
    ::ll::UntypedStorage<1, 1>  mUnk90c5f0;
    ::ll::UntypedStorage<1, 1>  mUnk21bf35;
    ::ll::UntypedStorage<8, 24> mUnk544acd;
    ::ll::UntypedStorage<8, 8>  mUnkc79b13;
    ::ll::UntypedStorage<8, 24> mUnk5e18dd;
    ::ll::UntypedStorage<8, 8>  mUnk3c8856;
    // NOLINTEND

public:
    // prevent constructor by default
    CodecSpecificInfoVP8& operator=(CodecSpecificInfoVP8 const&);
    CodecSpecificInfoVP8(CodecSpecificInfoVP8 const&);
    CodecSpecificInfoVP8();
};

} // namespace webrtc
