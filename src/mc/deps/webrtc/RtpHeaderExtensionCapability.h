#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpTransceiverDirection.h"

namespace webrtc {

struct RtpHeaderExtensionCapability {
public:
    // prevent constructor by default
    RtpHeaderExtensionCapability& operator=(RtpHeaderExtensionCapability const&);
    RtpHeaderExtensionCapability(RtpHeaderExtensionCapability const&);
    RtpHeaderExtensionCapability();

public:
    // NOLINTBEGIN
    // symbol: ??0RtpHeaderExtensionCapability@webrtc@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@H@Z
    MCAPI RtpHeaderExtensionCapability(std::string_view, int);

    // symbol:
    // ??0RtpHeaderExtensionCapability@webrtc@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@HW4RtpTransceiverDirection@1@@Z
    MCAPI RtpHeaderExtensionCapability(std::string_view, int, ::webrtc::RtpTransceiverDirection);

    // symbol: ??1RtpHeaderExtensionCapability@webrtc@@QEAA@XZ
    MCAPI ~RtpHeaderExtensionCapability();

    // NOLINTEND
};

}; // namespace webrtc
