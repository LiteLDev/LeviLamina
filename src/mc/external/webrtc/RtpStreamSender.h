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
    // member functions
    // NOLINTBEGIN
    MCAPI
    RtpStreamSender(::std::unique_ptr<::webrtc::ModuleRtpRtcpImpl2>, ::std::unique_ptr<::webrtc::RTPSenderVideo>, ::std::unique_ptr<::webrtc::VideoFecGenerator>);

    MCAPI ~RtpStreamSender();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
        $ctor(::std::unique_ptr<::webrtc::ModuleRtpRtcpImpl2>, ::std::unique_ptr<::webrtc::RTPSenderVideo>, ::std::unique_ptr<::webrtc::VideoFecGenerator>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::webrtc_internal_rtp_video_sender
