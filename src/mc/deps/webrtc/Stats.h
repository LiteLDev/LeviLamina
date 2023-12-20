#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::AudioDeviceModule {

struct Stats {
public:
    // prevent constructor by default
    Stats& operator=(Stats const&);
    Stats(Stats const&);
    Stats();
};

}; // namespace webrtc::AudioDeviceModule
