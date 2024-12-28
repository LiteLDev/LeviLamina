#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class Psfb {
public:
    // prevent constructor by default
    Psfb& operator=(Psfb const&);
    Psfb(Psfb const&);
    Psfb();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void CreateCommonFeedback(uchar*) const;

    MCAPI void ParseCommonFeedback(uchar const*);
    // NOLINTEND
};

} // namespace webrtc::rtcp
