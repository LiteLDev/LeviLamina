#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaReceiveChannelInterface.h"
#include "mc/external/rtc/VideoSinkInterface.h"
#include "mc/external/webrtc/RtcpMode.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct StreamParams; }
namespace cricket { struct VideoMediaReceiveInfo; }
namespace cricket { struct VideoReceiverParameters; }
namespace webrtc { class RecordableEncodedFrame; }
namespace webrtc { class RtpSource; }
namespace webrtc { class VideoFrame; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace cricket {

class VideoMediaReceiveChannelInterface : public ::cricket::MediaReceiveChannelInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 17
    virtual bool SetReceiverParameters(::cricket::VideoReceiverParameters const&) = 0;

    // vIndex: 18
    virtual ::webrtc::RtpParameters GetRtpReceiverParameters(uint) const = 0;

    // vIndex: 19
    virtual void SetReceive(bool) = 0;

    // vIndex: 20
    virtual ::webrtc::RtpParameters GetDefaultRtpReceiveParameters() const = 0;

    // vIndex: 21
    virtual bool SetSink(uint, ::rtc::VideoSinkInterface<::webrtc::VideoFrame>*) = 0;

    // vIndex: 22
    virtual void SetDefaultSink(::rtc::VideoSinkInterface<::webrtc::VideoFrame>*) = 0;

    // vIndex: 23
    virtual void RequestRecvKeyFrame(uint) = 0;

    // vIndex: 24
    virtual ::std::vector<::webrtc::RtpSource> GetSources(uint) const = 0;

    // vIndex: 25
    virtual void
        SetRecordableEncodedFrameCallback(uint, ::std::function<void(::webrtc::RecordableEncodedFrame const&)>) = 0;

    // vIndex: 26
    virtual void ClearRecordableEncodedFrameCallback(uint) = 0;

    // vIndex: 27
    virtual bool GetStats(::cricket::VideoMediaReceiveInfo*) = 0;

    // vIndex: 28
    virtual void SetReceiverFeedbackParameters(bool, bool, ::webrtc::RtcpMode, ::std::optional<int>) = 0;

    // vIndex: 29
    virtual bool AddDefaultRecvStreamForTesting(::cricket::StreamParams const&) = 0;

    // vIndex: 0
    virtual ~VideoMediaReceiveChannelInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
