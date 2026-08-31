#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RTPVideoHeaderH264 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkfdbedf;
    ::ll::UntypedStorage<4, 4>  mUnkb58202;
    ::ll::UntypedStorage<8, 24> mUnk2b37f8;
    ::ll::UntypedStorage<4, 4>  mUnkeac02a;
    // NOLINTEND

public:
    // prevent constructor by default
    RTPVideoHeaderH264& operator=(RTPVideoHeaderH264 const&);
    RTPVideoHeaderH264();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTPVideoHeaderH264(::webrtc::RTPVideoHeaderH264 const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RTPVideoHeaderH264 const&);
    // NOLINTEND
};

} // namespace webrtc
