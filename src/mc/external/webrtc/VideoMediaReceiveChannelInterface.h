#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaReceiveChannelInterface.h"
#include "mc/external/webrtc/RtcpMode.h"
#include "mc/external/webrtc/VideoSinkInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RecordableEncodedFrame; }
namespace webrtc { class RtpSource; }
namespace webrtc { class VideoFrame; }
namespace webrtc { struct RtpParameters; }
namespace webrtc { struct StreamParams; }
namespace webrtc { struct VideoMediaReceiveInfo; }
namespace webrtc { struct VideoReceiverParameters; }
// clang-format on

namespace webrtc {

class VideoMediaReceiveChannelInterface : public ::webrtc::MediaReceiveChannelInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool SetReceiverParameters(::webrtc::VideoReceiverParameters const&) = 0;

    virtual ::webrtc::RtpParameters GetRtpReceiverParameters(uint) const = 0;

    virtual void SetReceive(bool) = 0;

    virtual ::webrtc::RtpParameters GetDefaultRtpReceiveParameters() const = 0;

    virtual bool SetSink(uint, ::webrtc::VideoSinkInterface<::webrtc::VideoFrame>*) = 0;

    virtual void SetDefaultSink(::webrtc::VideoSinkInterface<::webrtc::VideoFrame>*) = 0;

    virtual void RequestRecvKeyFrame(uint) = 0;

    virtual ::std::vector<::webrtc::RtpSource> GetSources(uint) const = 0;

    virtual void
        SetRecordableEncodedFrameCallback(uint, ::std::function<void(::webrtc::RecordableEncodedFrame const&)>) = 0;

    virtual void ClearRecordableEncodedFrameCallback(uint) = 0;

    virtual bool GetStats(::webrtc::VideoMediaReceiveInfo*) = 0;

    virtual void SetReceiverFeedbackParameters(bool, bool, ::webrtc::RtcpMode, ::std::optional<int>) = 0;

    virtual bool AddDefaultRecvStreamForTesting(::webrtc::StreamParams const&) = 0;

    virtual ~VideoMediaReceiveChannelInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
