#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtcpParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnkcf233f;
    ::ll::UntypedStorage<8, 32> mUnkc27e8b;
    ::ll::UntypedStorage<1, 1>  mUnk8e9337;
    ::ll::UntypedStorage<1, 1>  mUnkb653d3;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcpParameters& operator=(RtcpParameters const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtcpParameters();

    MCNAPI RtcpParameters(::webrtc::RtcpParameters const&);

    MCNAPI bool operator==(::webrtc::RtcpParameters const&) const;

    MCNAPI ~RtcpParameters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::RtcpParameters const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
