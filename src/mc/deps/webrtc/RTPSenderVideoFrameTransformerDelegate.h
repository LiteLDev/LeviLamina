#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/TransformedFrameCallback.h"
#include "mc/deps/webrtc/VideoCodecType.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class EncodedImage; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class RTPSenderVideo; }
namespace webrtc { class TaskQueueFactory; }
namespace webrtc { class TransformableFrameInterface; }
namespace webrtc { class TransformedFrameCallback; }
namespace webrtc { struct FrameDependencyStructure; }
namespace webrtc { struct RTPVideoHeader; }
namespace webrtc { struct VideoLayersAllocation; }
// clang-format on

namespace webrtc {

class RTPSenderVideoFrameTransformerDelegate : public ::webrtc::TransformedFrameCallback {
public:
    // prevent constructor by default
    RTPSenderVideoFrameTransformerDelegate& operator=(RTPSenderVideoFrameTransformerDelegate const&);
    RTPSenderVideoFrameTransformerDelegate(RTPSenderVideoFrameTransformerDelegate const&);
    RTPSenderVideoFrameTransformerDelegate();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: __gen_??1RTPSenderVideoFrameTransformerDelegate@webrtc@@UEAA@XZ
    virtual ~RTPSenderVideoFrameTransformerDelegate() = default;

    // vIndex: 3, symbol:
    // ?OnTransformedFrame@RTPSenderVideoFrameTransformerDelegate@webrtc@@UEAAXV?$unique_ptr@VTransformableFrameInterface@webrtc@@U?$default_delete@VTransformableFrameInterface@webrtc@@@std@@@std@@@Z
    virtual void OnTransformedFrame(std::unique_ptr<class webrtc::TransformableFrameInterface>);

    // symbol: ?Init@RTPSenderVideoFrameTransformerDelegate@webrtc@@QEAAXXZ
    MCAPI void Init();

    // symbol:
    // ??0RTPSenderVideoFrameTransformerDelegate@webrtc@@QEAA@PEAVRTPSenderVideo@1@V?$scoped_refptr@VFrameTransformerInterface@webrtc@@@rtc@@IPEAVTaskQueueFactory@1@@Z
    MCAPI
    RTPSenderVideoFrameTransformerDelegate(class webrtc::RTPSenderVideo*, class rtc::scoped_refptr<class webrtc::FrameTransformerInterface>, uint, class webrtc::TaskQueueFactory*);

    // symbol: ?Reset@RTPSenderVideoFrameTransformerDelegate@webrtc@@QEAAXXZ
    MCAPI void Reset();

    // symbol:
    // ?SendVideo@RTPSenderVideoFrameTransformerDelegate@webrtc@@QEBAXV?$unique_ptr@VTransformableFrameInterface@webrtc@@U?$default_delete@VTransformableFrameInterface@webrtc@@@std@@@std@@@Z
    MCAPI void SendVideo(std::unique_ptr<class webrtc::TransformableFrameInterface>) const;

    // symbol:
    // ?SetVideoLayersAllocationUnderLock@RTPSenderVideoFrameTransformerDelegate@webrtc@@QEAAXUVideoLayersAllocation@2@@Z
    MCAPI void SetVideoLayersAllocationUnderLock(struct webrtc::VideoLayersAllocation);

    // symbol:
    // ?SetVideoStructureUnderLock@RTPSenderVideoFrameTransformerDelegate@webrtc@@QEAAXPEBUFrameDependencyStructure@2@@Z
    MCAPI void SetVideoStructureUnderLock(struct webrtc::FrameDependencyStructure const*);

    // symbol:
    // ?TransformFrame@RTPSenderVideoFrameTransformerDelegate@webrtc@@QEAA_NHV?$optional@W4VideoCodecType@webrtc@@@std@@IAEBVEncodedImage@2@URTPVideoHeader@2@V?$optional@_J@4@@Z
    MCAPI bool
    TransformFrame(int, std::optional<::webrtc::VideoCodecType>, uint, class webrtc::EncodedImage const&, struct webrtc::RTPVideoHeader, std::optional<int64>);

    // NOLINTEND
};

}; // namespace webrtc
