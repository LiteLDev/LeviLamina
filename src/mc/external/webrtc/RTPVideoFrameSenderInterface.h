#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoCodecType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct FrameDependencyStructure; }
namespace webrtc { struct RTPVideoHeader; }
namespace webrtc { struct VideoLayersAllocation; }
// clang-format on

namespace webrtc {

class RTPVideoFrameSenderInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool SendVideo(
        int                                       payload_type,
        ::std::optional<::webrtc::VideoCodecType> codec_type,
        uint                                      rtp_timestamp,
        ::webrtc::Timestamp                       capture_time,
        ::rtc::ArrayView<uchar const>             payload,
        uint64                                    encoder_output_size,
        ::webrtc::RTPVideoHeader                  video_header,
        ::webrtc::TimeDelta                       expected_retransmission_time,
        ::std::vector<uint>                       csrcs
    ) = 0;

    virtual void SetVideoStructureAfterTransformation(::webrtc::FrameDependencyStructure const* video_structure) = 0;

    virtual void SetVideoLayersAllocationAfterTransformation(::webrtc::VideoLayersAllocation allocation) = 0;

    virtual ~RTPVideoFrameSenderInterface() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
