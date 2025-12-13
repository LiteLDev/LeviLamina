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
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransformableVideoFrameInterface() /*override*/ = default;

    virtual bool IsKeyFrame() const = 0;

    virtual ::webrtc::VideoFrameMetadata Metadata() const = 0;

    virtual void SetMetadata(::webrtc::VideoFrameMetadata const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
