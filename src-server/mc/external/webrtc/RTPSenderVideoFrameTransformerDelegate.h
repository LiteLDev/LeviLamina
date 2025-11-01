#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/TransformedFrameCallback.h"
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

class RTPSenderVideoFrameTransformerDelegate : public ::webrtc::TransformedFrameCallback {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk84f084;
    ::ll::UntypedStorage<8, 8> mUnke6cf5a;
    ::ll::UntypedStorage<8, 8> mUnk47aa09;
    ::ll::UntypedStorage<4, 4> mUnk1b8819;
    ::ll::UntypedStorage<8, 8> mUnk900129;
    ::ll::UntypedStorage<1, 1> mUnkbd23c2;
    // NOLINTEND

public:
    // prevent constructor by default
    RTPSenderVideoFrameTransformerDelegate& operator=(RTPSenderVideoFrameTransformerDelegate const&);
    RTPSenderVideoFrameTransformerDelegate(RTPSenderVideoFrameTransformerDelegate const&);
    RTPSenderVideoFrameTransformerDelegate();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void OnTransformedFrame(::std::unique_ptr<::webrtc::TransformableFrameInterface> frame) /*override*/;

    // vIndex: 4
    virtual void StartShortCircuiting() /*override*/;

    // vIndex: 2
    virtual ~RTPSenderVideoFrameTransformerDelegate() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Init();

    MCNAPI RTPSenderVideoFrameTransformerDelegate(::webrtc::RTPVideoFrameSenderInterface* sender, ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer, uint ssrc, ::webrtc::TaskQueueFactory* task_queue_factory);

    MCNAPI void Reset();

    MCNAPI void SendVideo(::std::unique_ptr<::webrtc::TransformableFrameInterface> transformed_frame) const;

    MCNAPI void SetVideoLayersAllocationUnderLock(::webrtc::VideoLayersAllocation allocation);

    MCNAPI void SetVideoStructureUnderLock(::webrtc::FrameDependencyStructure const* video_structure);

    MCNAPI bool TransformFrame(int payload_type, ::std::optional<::webrtc::VideoCodecType> codec_type, uint rtp_timestamp, ::webrtc::EncodedImage const& encoded_image, ::webrtc::RTPVideoHeader video_header, ::webrtc::TimeDelta expected_retransmission_time);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RTPVideoFrameSenderInterface* sender, ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer, uint ssrc, ::webrtc::TaskQueueFactory* task_queue_factory);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnTransformedFrame(::std::unique_ptr<::webrtc::TransformableFrameInterface> frame);

    MCNAPI void $StartShortCircuiting();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
