#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct MediaConfig {
public:
    // prevent constructor by default
    MediaConfig& operator=(MediaConfig const&);
    MediaConfig(MediaConfig const&);
    MediaConfig();
};

}; // namespace cricket
