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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtpStreamSender(::std::unique_ptr<::webrtc::ModuleRtpRtcpImpl2> rtp_rtcp, ::std::unique_ptr<::webrtc::RTPSenderVideo> sender_video, ::std::unique_ptr<::webrtc::VideoFecGenerator> fec_generator);

    MCNAPI ~RtpStreamSender();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::webrtc::ModuleRtpRtcpImpl2> rtp_rtcp, ::std::unique_ptr<::webrtc::RTPSenderVideo> sender_video, ::std::unique_ptr<::webrtc::VideoFecGenerator> fec_generator);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
