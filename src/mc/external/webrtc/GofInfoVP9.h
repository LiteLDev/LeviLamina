#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct GofInfoVP9 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk93fc37;
    ::ll::UntypedStorage<1, 255> mUnk6409ad;
    ::ll::UntypedStorage<1, 255> mUnk8bae23;
    ::ll::UntypedStorage<1, 255> mUnke62d63;
    ::ll::UntypedStorage<1, 765> mUnk515307;
    ::ll::UntypedStorage<2, 2>   mUnk333bd1;
    // NOLINTEND

public:
    // prevent constructor by default
    GofInfoVP9& operator=(GofInfoVP9 const&);
    GofInfoVP9(GofInfoVP9 const&);
    GofInfoVP9();
};

} // namespace webrtc
