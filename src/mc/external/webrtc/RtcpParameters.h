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
    RtcpParameters(RtcpParameters const&);
    RtcpParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::webrtc::RtcpParameters const& o) const;
    // NOLINTEND
};

} // namespace webrtc
