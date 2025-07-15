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
    // vIndex: 0
    virtual bool SendVideo(
        int,
        ::std::optional<::webrtc::VideoCodecType>,
        uint,
        ::webrtc::Timestamp,
        ::rtc::ArrayView<uchar const>,
        uint64,
        ::webrtc::RTPVideoHeader,
        ::webrtc::TimeDelta,
        ::std::vector<uint>
    ) = 0;

    // vIndex: 1
    virtual void SetVideoStructureAfterTransformation(::webrtc::FrameDependencyStructure const*) = 0;

    // vIndex: 2
    virtual void SetVideoLayersAllocationAfterTransformation(::webrtc::VideoLayersAllocation) = 0;

    // vIndex: 3
    virtual ~RTPVideoFrameSenderInterface() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
