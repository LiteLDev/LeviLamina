#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class KeyFrameRequestSender {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void RequestKeyFrame() = 0;

    virtual ~KeyFrameRequestSender() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
