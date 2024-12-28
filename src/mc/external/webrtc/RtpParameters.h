#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3b2237;
    ::ll::UntypedStorage<8, 32> mUnk355726;
    ::ll::UntypedStorage<8, 24> mUnkb4c9d1;
    ::ll::UntypedStorage<8, 24> mUnkd29d10;
    ::ll::UntypedStorage<8, 24> mUnk8c5271;
    ::ll::UntypedStorage<8, 48> mUnk3ed62a;
    ::ll::UntypedStorage<4, 8>  mUnkf57cbc;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RtpParameters();

    MCAPI RtpParameters(::webrtc::RtpParameters const&);

    MCAPI ::webrtc::RtpParameters& operator=(::webrtc::RtpParameters const&);

    MCAPI ~RtpParameters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::webrtc::RtpParameters const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
