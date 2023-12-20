#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FrameEncryptorInterface {
public:
    // prevent constructor by default
    FrameEncryptorInterface& operator=(FrameEncryptorInterface const&);
    FrameEncryptorInterface(FrameEncryptorInterface const&);
    FrameEncryptorInterface();
};

}; // namespace webrtc
