#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VCMFrameTypeCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual int RequestKeyFrame() = 0;

    // vIndex: 1
    virtual ~VCMFrameTypeCallback() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
