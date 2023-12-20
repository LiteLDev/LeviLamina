#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::VideoEncoderFactory {

class EncoderSelectorInterface {
public:
    // prevent constructor by default
    EncoderSelectorInterface& operator=(EncoderSelectorInterface const&);
    EncoderSelectorInterface(EncoderSelectorInterface const&);
    EncoderSelectorInterface();
};

}; // namespace webrtc::VideoEncoderFactory
