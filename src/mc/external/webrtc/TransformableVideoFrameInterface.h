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
    // vIndex: 0
    virtual ~TransformableVideoFrameInterface() /*override*/ = default;

    // vIndex: 10
    virtual bool IsKeyFrame() const = 0;

    // vIndex: 11
    virtual ::webrtc::VideoFrameMetadata Metadata() const = 0;

    // vIndex: 12
    virtual void SetMetadata(::webrtc::VideoFrameMetadata const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
