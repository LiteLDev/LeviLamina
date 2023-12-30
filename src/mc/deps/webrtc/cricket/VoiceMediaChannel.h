#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class VoiceMediaChannel {
public:
    // prevent constructor by default
    VoiceMediaChannel& operator=(VoiceMediaChannel const&);
    VoiceMediaChannel(VoiceMediaChannel const&);
    VoiceMediaChannel();
};

}; // namespace cricket
