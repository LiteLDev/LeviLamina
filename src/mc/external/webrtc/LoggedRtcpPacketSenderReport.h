#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtcpPacketSenderReport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk8a90c0;
    ::ll::UntypedStorage<8, 64> mUnk1907dd;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtcpPacketSenderReport& operator=(LoggedRtcpPacketSenderReport const&);
    LoggedRtcpPacketSenderReport(LoggedRtcpPacketSenderReport const&);
    LoggedRtcpPacketSenderReport();
};

} // namespace webrtc
