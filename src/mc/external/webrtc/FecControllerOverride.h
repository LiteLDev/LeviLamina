#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FecControllerOverride {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SetFecAllowed(bool fec_allowed) = 0;

    virtual ~FecControllerOverride() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
