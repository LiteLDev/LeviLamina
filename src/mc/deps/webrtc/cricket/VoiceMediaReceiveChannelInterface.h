#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class VoiceMediaReceiveChannelInterface {
public:
    // prevent constructor by default
    VoiceMediaReceiveChannelInterface& operator=(VoiceMediaReceiveChannelInterface const&);
    VoiceMediaReceiveChannelInterface(VoiceMediaReceiveChannelInterface const&);
    VoiceMediaReceiveChannelInterface();
};

}; // namespace cricket
