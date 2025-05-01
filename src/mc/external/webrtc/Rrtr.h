#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class Rrtr {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Create(uchar*) const;

    MCNAPI void Parse(uchar const*);
    // NOLINTEND
};

} // namespace webrtc::rtcp
