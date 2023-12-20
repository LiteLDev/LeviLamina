#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FrameDecryptorInterface {
public:
    // prevent constructor by default
    FrameDecryptorInterface& operator=(FrameDecryptorInterface const&);
    FrameDecryptorInterface(FrameDecryptorInterface const&);
    FrameDecryptorInterface();
};

}; // namespace webrtc
