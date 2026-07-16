#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FrameTransformerInterface; }
// clang-format on

namespace webrtc {

class FrameTransformerHost {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FrameTransformerHost() = default;

    virtual void SetFrameTransformer(::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> a1) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
