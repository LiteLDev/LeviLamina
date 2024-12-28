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
    // prevent constructor by default
    FrameTransformerInterface& operator=(FrameTransformerInterface const&);
    FrameTransformerInterface(FrameTransformerInterface const&);
    FrameTransformerInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void Transform(::std::unique_ptr<::webrtc::TransformableFrameInterface>) = 0;

    // vIndex: 4
    virtual void RegisterTransformedFrameCallback(::webrtc::scoped_refptr<::webrtc::TransformedFrameCallback>);

    // vIndex: 5
    virtual void
        RegisterTransformedFrameSinkCallback(::webrtc::scoped_refptr<::webrtc::TransformedFrameCallback>, uint);

    // vIndex: 6
    virtual void UnregisterTransformedFrameCallback();

    // vIndex: 7
    virtual void UnregisterTransformedFrameSinkCallback(uint);

    // vIndex: 2
    virtual ~FrameTransformerInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $RegisterTransformedFrameCallback(::webrtc::scoped_refptr<::webrtc::TransformedFrameCallback>);

    MCAPI void $RegisterTransformedFrameSinkCallback(::webrtc::scoped_refptr<::webrtc::TransformedFrameCallback>, uint);

    MCAPI void $UnregisterTransformedFrameCallback();

    MCAPI void $UnregisterTransformedFrameSinkCallback(uint);
    // NOLINTEND
};

} // namespace webrtc
