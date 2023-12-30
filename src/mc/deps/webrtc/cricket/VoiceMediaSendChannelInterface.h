#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class VoiceMediaSendChannelInterface {
public:
    // prevent constructor by default
    VoiceMediaSendChannelInterface& operator=(VoiceMediaSendChannelInterface const&);
    VoiceMediaSendChannelInterface(VoiceMediaSendChannelInterface const&);
    VoiceMediaSendChannelInterface();
};

}; // namespace cricket
