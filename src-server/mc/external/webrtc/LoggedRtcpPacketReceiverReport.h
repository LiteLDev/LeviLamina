#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtcpPacketReceiverReport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkfe1669;
    ::ll::UntypedStorage<8, 40> mUnk72e384;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtcpPacketReceiverReport& operator=(LoggedRtcpPacketReceiverReport const&);
    LoggedRtcpPacketReceiverReport(LoggedRtcpPacketReceiverReport const&);
    LoggedRtcpPacketReceiverReport();
};

} // namespace webrtc
