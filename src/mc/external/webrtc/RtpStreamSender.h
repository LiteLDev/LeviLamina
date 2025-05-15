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
    RtpStreamSender();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    RtpStreamSender(::std::unique_ptr<::webrtc::ModuleRtpRtcpImpl2>, ::std::unique_ptr<::webrtc::RTPSenderVideo>, ::std::unique_ptr<::webrtc::VideoFecGenerator>);

    MCNAPI ~RtpStreamSender();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(::std::unique_ptr<::webrtc::ModuleRtpRtcpImpl2>, ::std::unique_ptr<::webrtc::RTPSenderVideo>, ::std::unique_ptr<::webrtc::VideoFecGenerator>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::webrtc_internal_rtp_video_sender
