#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtcpPacketExtendedReports {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk84e251;
    ::ll::UntypedStorage<8, 88> mUnk784d7b;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtcpPacketExtendedReports& operator=(LoggedRtcpPacketExtendedReports const&);
    LoggedRtcpPacketExtendedReports(LoggedRtcpPacketExtendedReports const&);
    LoggedRtcpPacketExtendedReports();
};

} // namespace webrtc
