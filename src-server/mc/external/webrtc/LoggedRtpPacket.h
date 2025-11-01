#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtpPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk35344f;
    ::ll::UntypedStorage<8, 376> mUnk5bdb0b;
    ::ll::UntypedStorage<8, 24> mUnka21946;
    ::ll::UntypedStorage<8, 8> mUnkb47381;
    ::ll::UntypedStorage<8, 8> mUnkd3f947;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtpPacket& operator=(LoggedRtpPacket const&);
    LoggedRtpPacket(LoggedRtpPacket const&);
    LoggedRtpPacket();

};

}
