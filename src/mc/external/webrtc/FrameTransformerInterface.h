#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TransformableFrameInterface; }
namespace webrtc { class TransformedFrameCallback; }
// clang-format on

namespace webrtc {

class FrameTransformerInterface : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void Transform(::std::unique_ptr<::webrtc::TransformableFrameInterface>) = 0;

    virtual void RegisterTransformedFrameCallback(::webrtc::scoped_refptr<::webrtc::TransformedFrameCallback>);

    virtual void
        RegisterTransformedFrameSinkCallback(::webrtc::scoped_refptr<::webrtc::TransformedFrameCallback>, uint);

    virtual void UnregisterTransformedFrameCallback();

    virtual void UnregisterTransformedFrameSinkCallback(uint);

    virtual ~FrameTransformerInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
