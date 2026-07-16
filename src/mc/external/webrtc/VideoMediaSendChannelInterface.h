#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaSendChannelInterface.h"
#include "mc/external/webrtc/RtcpMode.h"
#include "mc/external/webrtc/VideoSourceInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoFrame; }
namespace webrtc { struct BandwidthEstimationInfo; }
namespace webrtc { struct VideoMediaSendInfo; }
namespace webrtc { struct VideoOptions; }
namespace webrtc { struct VideoSenderParameters; }
// clang-format on

namespace webrtc {

class VideoMediaSendChannelInterface : public ::webrtc::MediaSendChannelInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool SetSenderParameters(::webrtc::VideoSenderParameters const&) = 0;

    virtual bool SetSend(bool) = 0;

    virtual bool
    SetVideoSend(uint, ::webrtc::VideoOptions const*, ::webrtc::VideoSourceInterface<::webrtc::VideoFrame>*) = 0;

    virtual void GenerateSendKeyFrame(uint, ::std::vector<::std::string> const&) = 0;

    virtual bool GetStats(::webrtc::VideoMediaSendInfo*) = 0;

    virtual void FillBitrateInfo(::webrtc::BandwidthEstimationInfo*) = 0;

    virtual ::webrtc::RtcpMode SendCodecRtcpMode() const = 0;

    virtual bool SendCodecHasLntf() const = 0;

    virtual ::std::optional<int> SendCodecRtxTime() const = 0;

    virtual ~VideoMediaSendChannelInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
