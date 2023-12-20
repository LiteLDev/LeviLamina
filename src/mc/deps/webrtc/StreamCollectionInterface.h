#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class StreamCollectionInterface {
public:
    // prevent constructor by default
    StreamCollectionInterface& operator=(StreamCollectionInterface const&);
    StreamCollectionInterface(StreamCollectionInterface const&);
    StreamCollectionInterface();
};

}; // namespace webrtc
