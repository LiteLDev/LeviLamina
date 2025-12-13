#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoContentType.h"
#include "mc/external/webrtc/VideoDecoder.h"
#include "mc/external/webrtc/VideoFrameType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
namespace webrtc { class VideoFrame; }
// clang-format on

namespace webrtc {

class VCMReceiveCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int FrameToRender(
        ::webrtc::VideoFrame&,
        ::std::optional<uchar>,
        ::webrtc::TimeDelta,
        ::webrtc::VideoContentType,
        ::webrtc::VideoFrameType
    ) = 0;

    virtual void OnDroppedFrames(uint);

    virtual void OnIncomingPayloadType(int);

    virtual void OnDecoderInfoChanged(::webrtc::VideoDecoder::DecoderInfo const&);

    virtual ~VCMReceiveCallback() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
