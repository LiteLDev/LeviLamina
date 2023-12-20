#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class EncodedImage {
public:
    // prevent constructor by default
    EncodedImage& operator=(EncodedImage const&);
    EncodedImage(EncodedImage const&);
    EncodedImage();
};

}; // namespace webrtc
