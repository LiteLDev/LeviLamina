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
    // virtual functions
    // NOLINTBEGIN
    virtual void OnTransformedFrame(::std::unique_ptr<::webrtc::TransformableFrameInterface>) = 0;

    virtual void StartShortCircuiting();

    virtual ~TransformedFrameCallback() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
