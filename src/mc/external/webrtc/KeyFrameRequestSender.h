#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class KeyFrameRequestSender {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void RequestKeyFrame() = 0;

    // vIndex: 1
    virtual ~KeyFrameRequestSender() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
