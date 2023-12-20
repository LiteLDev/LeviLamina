#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ModuleRtpRtcpImpl2; }
namespace webrtc { class RTPSenderVideo; }
namespace webrtc { class VideoFecGenerator; }
// clang-format on

namespace webrtc::webrtc_internal_rtp_video_sender {

struct RtpStreamSender {
public:
    // prevent constructor by default
    RtpStreamSender& operator=(RtpStreamSender const&);
    RtpStreamSender(RtpStreamSender const&);
    RtpStreamSender();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0RtpStreamSender@webrtc_internal_rtp_video_sender@webrtc@@QEAA@V?$unique_ptr@VModuleRtpRtcpImpl2@webrtc@@U?$default_delete@VModuleRtpRtcpImpl2@webrtc@@@std@@@std@@V?$unique_ptr@VRTPSenderVideo@webrtc@@U?$default_delete@VRTPSenderVideo@webrtc@@@std@@@4@V?$unique_ptr@VVideoFecGenerator@webrtc@@U?$default_delete@VVideoFecGenerator@webrtc@@@std@@@4@@Z
    MCAPI
    RtpStreamSender(std::unique_ptr<class webrtc::ModuleRtpRtcpImpl2>, std::unique_ptr<class webrtc::RTPSenderVideo>, std::unique_ptr<class webrtc::VideoFecGenerator>);

    // symbol: ??1RtpStreamSender@webrtc_internal_rtp_video_sender@webrtc@@QEAA@XZ
    MCAPI ~RtpStreamSender();

    // NOLINTEND
};

}; // namespace webrtc::webrtc_internal_rtp_video_sender
