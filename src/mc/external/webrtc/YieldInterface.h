#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class YieldInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~YieldInterface() = default;

    virtual void YieldExecution() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
