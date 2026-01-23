#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::webrtc_internal_rtp_video_sender {

struct RtpStreamSender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk95c14a;
    ::ll::UntypedStorage<8, 8> mUnk299abe;
    ::ll::UntypedStorage<8, 8> mUnkc0a976;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpStreamSender& operator=(RtpStreamSender const&);
    RtpStreamSender(RtpStreamSender const&);
    RtpStreamSender();
};

} // namespace webrtc::webrtc_internal_rtp_video_sender
