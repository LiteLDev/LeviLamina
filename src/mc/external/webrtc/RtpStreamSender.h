#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::webrtc_internal_rtp_video_sender {

struct RtpStreamSender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk91cdbe;
    ::ll::UntypedStorage<8, 8> mUnka3ebd6;
    ::ll::UntypedStorage<8, 8> mUnke3c543;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpStreamSender& operator=(RtpStreamSender const&);
    RtpStreamSender(RtpStreamSender const&);
    RtpStreamSender();
};

} // namespace webrtc::webrtc_internal_rtp_video_sender
