#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaSendChannelInterface.h"
#include "mc/external/rtc/VideoSourceInterface.h"
#include "mc/external/webrtc/RtcpMode.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct BandwidthEstimationInfo; }
namespace cricket { struct VideoMediaSendInfo; }
namespace cricket { struct VideoOptions; }
namespace cricket { struct VideoSenderParameters; }
namespace webrtc { class VideoFrame; }
// clang-format on

namespace cricket {

class VideoMediaSendChannelInterface : public ::cricket::MediaSendChannelInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 22
    virtual bool SetSenderParameters(::cricket::VideoSenderParameters const&) = 0;

    // vIndex: 23
    virtual bool SetSend(bool) = 0;

    // vIndex: 24
    virtual bool
    SetVideoSend(uint, ::cricket::VideoOptions const*, ::rtc::VideoSourceInterface<::webrtc::VideoFrame>*) = 0;

    // vIndex: 25
    virtual void GenerateSendKeyFrame(uint, ::std::vector<::std::string> const&) = 0;

    // vIndex: 26
    virtual bool GetStats(::cricket::VideoMediaSendInfo*) = 0;

    // vIndex: 27
    virtual void FillBitrateInfo(::cricket::BandwidthEstimationInfo*) = 0;

    // vIndex: 28
    virtual ::webrtc::RtcpMode SendCodecRtcpMode() const = 0;

    // vIndex: 29
    virtual bool SendCodecHasLntf() const = 0;

    // vIndex: 30
    virtual ::std::optional<int> SendCodecRtxTime() const = 0;

    // vIndex: 0
    virtual ~VideoMediaSendChannelInterface() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
