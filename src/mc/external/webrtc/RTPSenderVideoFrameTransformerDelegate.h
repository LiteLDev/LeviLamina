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
    RTPSenderVideoFrameTransformerDelegate& operator=(RTPSenderVideoFrameTransformerDelegate const&);
    RTPSenderVideoFrameTransformerDelegate(RTPSenderVideoFrameTransformerDelegate const&);
    RTPSenderVideoFrameTransformerDelegate();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Init();

    MCAPI
    RTPSenderVideoFrameTransformerDelegate(::webrtc::RTPVideoFrameSenderInterface*, ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface>, uint, ::webrtc::TaskQueueFactory*);

    MCAPI void Reset();

    MCAPI void SendVideo(::std::unique_ptr<::webrtc::TransformableFrameInterface>) const;

    MCAPI void SetVideoLayersAllocationUnderLock(::webrtc::VideoLayersAllocation);

    MCAPI void SetVideoStructureUnderLock(::webrtc::FrameDependencyStructure const*);

    MCAPI bool TransformFrame(
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
    MCAPI void*
    $ctor(::webrtc::RTPVideoFrameSenderInterface*, ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface>, uint, ::webrtc::TaskQueueFactory*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
