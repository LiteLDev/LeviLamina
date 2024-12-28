#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpPacketInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4df3d3;
    ::ll::UntypedStorage<8, 24> mUnk54c820;
    ::ll::UntypedStorage<4, 4>  mUnk34806a;
    ::ll::UntypedStorage<8, 8>  mUnk5cf97a;
    ::ll::UntypedStorage<1, 2>  mUnk371cb5;
    ::ll::UntypedStorage<8, 32> mUnk4263d5;
    ::ll::UntypedStorage<8, 16> mUnkcb213e;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpPacketInfo& operator=(RtpPacketInfo const&);
    RtpPacketInfo(RtpPacketInfo const&);
    RtpPacketInfo();
};

} // namespace webrtc
