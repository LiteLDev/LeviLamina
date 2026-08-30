#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FecControllerOverride {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SetFecAllowed(bool fec_allowed) = 0;

    virtual ~FecControllerOverride();
    // NOLINTEND
};

} // namespace webrtc
