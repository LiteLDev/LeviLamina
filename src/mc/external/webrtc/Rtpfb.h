#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class Rtpfb {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CreateCommonFeedback(uchar*) const;

    MCNAPI void ParseCommonFeedback(uchar const*);
    // NOLINTEND
};

} // namespace webrtc::rtcp
