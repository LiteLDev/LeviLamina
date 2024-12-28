#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TransformableFrameInterface; }
// clang-format on

namespace webrtc {

class TransformedFrameCallback : public ::webrtc::RefCountInterface {
public:
    // prevent constructor by default
    TransformedFrameCallback& operator=(TransformedFrameCallback const&);
    TransformedFrameCallback(TransformedFrameCallback const&);
    TransformedFrameCallback();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void OnTransformedFrame(::std::unique_ptr<::webrtc::TransformableFrameInterface>) = 0;

    // vIndex: 4
    virtual void StartShortCircuiting();

    // vIndex: 2
    virtual ~TransformedFrameCallback() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $StartShortCircuiting();
    // NOLINTEND
};

} // namespace webrtc
