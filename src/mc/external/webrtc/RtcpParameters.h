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
    MCAPI RtcpParameters();

    MCAPI RtcpParameters(::webrtc::RtcpParameters const&);

    MCAPI bool operator==(::webrtc::RtcpParameters const&) const;

    MCAPI ~RtcpParameters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::webrtc::RtcpParameters const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
