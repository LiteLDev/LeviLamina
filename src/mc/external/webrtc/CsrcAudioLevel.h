#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class CsrcAudioLevel {
public:
    // prevent constructor by default
    CsrcAudioLevel& operator=(CsrcAudioLevel const&);
    CsrcAudioLevel(CsrcAudioLevel const&);
    CsrcAudioLevel();
};

} // namespace webrtc
