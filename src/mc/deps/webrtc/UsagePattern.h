#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/UsageEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class PeerConnectionObserver; }
// clang-format on

namespace webrtc {

class UsagePattern {
public:
    // prevent constructor by default
    UsagePattern& operator=(UsagePattern const&);
    UsagePattern(UsagePattern const&);
    UsagePattern();

public:
    // NOLINTBEGIN
    // symbol: ?NoteUsageEvent@UsagePattern@webrtc@@QEAAXW4UsageEvent@2@@Z
    MCAPI void NoteUsageEvent(::webrtc::UsageEvent);

    // symbol: ?ReportUsagePattern@UsagePattern@webrtc@@QEBAXPEAVPeerConnectionObserver@2@@Z
    MCAPI void ReportUsagePattern(class webrtc::PeerConnectionObserver*) const;

    // NOLINTEND
};

}; // namespace webrtc
