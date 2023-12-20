#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VideoBitrateAllocatorFactory {
public:
    // prevent constructor by default
    VideoBitrateAllocatorFactory& operator=(VideoBitrateAllocatorFactory const&);
    VideoBitrateAllocatorFactory(VideoBitrateAllocatorFactory const&);
    VideoBitrateAllocatorFactory();
};

}; // namespace webrtc
