#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class Rrtr {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Create(uchar*) const;

    MCAPI void Parse(uchar const*);
    // NOLINTEND
};

} // namespace webrtc::rtcp
