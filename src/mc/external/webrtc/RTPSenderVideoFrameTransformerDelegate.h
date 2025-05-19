#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoCodecType.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class EncodedImage; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class RTPVideoFrameSenderInterface; }
namespace webrtc { class TaskQueueFactory; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class TransformableFrameInterface; }
namespace webrtc { struct FrameDependencyStructure; }
namespace webrtc { struct RTPVideoHeader; }
namespace webrtc { struct VideoLayersAllocation; }
// clang-format on

namespace webrtc {

class RTPSenderVideoFrameTransformerDelegate {
public:
    // prevent constructor by default
    RTPSenderVideoFrameTransformerDelegate();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Init();

    MCNAPI RTPSenderVideoFrameTransformerDelegate(
        ::webrtc::RTPVideoFrameSenderInterface*,
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface>,
        uint,
        ::webrtc::TaskQueueFactory*
    );

    MCNAPI void Reset();

    MCNAPI void SendVideo(::std::unique_ptr<::webrtc::TransformableFrameInterface>) const;

    MCNAPI void SetVideoLayersAllocationUnderLock(::webrtc::VideoLayersAllocation);

    MCNAPI void SetVideoStructureUnderLock(::webrtc::FrameDependencyStructure const*);

    MCNAPI bool TransformFrame(
        int,
        ::std::optional<::webrtc::VideoCodecType>,
        uint,
        ::webrtc::EncodedImage const&,
        ::webrtc::RTPVideoHeader,
        ::webrtc::TimeDelta
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::RTPVideoFrameSenderInterface*,
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface>,
        uint,
        ::webrtc::TaskQueueFactory*
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
