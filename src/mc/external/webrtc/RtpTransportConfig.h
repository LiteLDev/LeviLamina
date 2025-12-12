#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpTransportConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk905619;
    ::ll::UntypedStorage<4, 12> mUnk836d53;
    ::ll::UntypedStorage<8, 8>  mUnkaafe0c;
    ::ll::UntypedStorage<8, 8>  mUnkaddb08;
    ::ll::UntypedStorage<8, 16> mUnk160d24;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpTransportConfig& operator=(RtpTransportConfig const&);
    RtpTransportConfig(RtpTransportConfig const&);
    RtpTransportConfig();
};

} // namespace webrtc
