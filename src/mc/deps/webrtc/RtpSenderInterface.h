#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/RefCountInterface.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RefCountInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class RtpSenderInterface : public ::rtc::RefCountInterface {
public:
    // prevent constructor by default
    RtpSenderInterface& operator=(RtpSenderInterface const&);
    RtpSenderInterface(RtpSenderInterface const&);
    RtpSenderInterface();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: __gen_??1RtpSenderInterface@webrtc@@UEAA@XZ
    virtual ~RtpSenderInterface() = default;

    // symbol:
    // ?GenerateKeyFrame@RtpSenderInterface@webrtc@@UEAA?AVRTCError@2@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI class webrtc::RTCError GenerateKeyFrame(std::vector<std::string> const&);

    // NOLINTEND
};

}; // namespace webrtc
