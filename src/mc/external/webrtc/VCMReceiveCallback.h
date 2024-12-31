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
    // prevent constructor by default
    VCMReceiveCallback& operator=(VCMReceiveCallback const&);
    VCMReceiveCallback(VCMReceiveCallback const&);
    VCMReceiveCallback();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual int FrameToRender(
        ::webrtc::VideoFrame&,
        ::std::optional<uchar>,
        ::webrtc::TimeDelta,
        ::webrtc::VideoContentType,
        ::webrtc::VideoFrameType
    ) = 0;

    // vIndex: 1
    virtual void OnDroppedFrames(uint);

    // vIndex: 2
    virtual void OnIncomingPayloadType(int);

    // vIndex: 3
    virtual void OnDecoderInfoChanged(::webrtc::VideoDecoder::DecoderInfo const&);

    // vIndex: 4
    virtual ~VCMReceiveCallback() = default;
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

} // namespace webrtc
