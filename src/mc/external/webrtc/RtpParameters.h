#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk811cd2;
    ::ll::UntypedStorage<8, 32> mUnkba4d2b;
    ::ll::UntypedStorage<8, 24> mUnk1acedc;
    ::ll::UntypedStorage<8, 24> mUnk549672;
    ::ll::UntypedStorage<8, 24> mUnk5301c2;
    ::ll::UntypedStorage<8, 48> mUnk3ed62a;
    ::ll::UntypedStorage<4, 8>  mUnkf57cbc;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtpParameters();

    MCNAPI RtpParameters(::webrtc::RtpParameters const&);

    MCNAPI ::webrtc::RtpParameters& operator=(::webrtc::RtpParameters const&);

    MCNAPI ~RtpParameters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::RtpParameters const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
