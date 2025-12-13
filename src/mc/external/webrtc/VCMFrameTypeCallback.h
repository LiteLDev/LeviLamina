#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VCMFrameTypeCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int RequestKeyFrame() = 0;

    virtual ~VCMFrameTypeCallback() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
