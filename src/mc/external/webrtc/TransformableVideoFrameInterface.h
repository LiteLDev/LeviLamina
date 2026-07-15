#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/TransformableFrameInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoFrameMetadata; }
// clang-format on

namespace webrtc {

class TransformableVideoFrameInterface : public ::webrtc::TransformableFrameInterface {
public:
    // prevent constructor by default
    TransformableVideoFrameInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransformableVideoFrameInterface() /*override*/ = default;

    virtual bool IsKeyFrame() const = 0;

    virtual ::webrtc::VideoFrameMetadata Metadata() const = 0;

    virtual void SetMetadata(::webrtc::VideoFrameMetadata const& metadata) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TransformableVideoFrameInterface(::webrtc::TransformableFrameInterface::Passkey passkey);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TransformableFrameInterface::Passkey passkey);
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
