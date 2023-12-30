#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class MediaEngineInterface {
public:
    // prevent constructor by default
    MediaEngineInterface& operator=(MediaEngineInterface const&);
    MediaEngineInterface(MediaEngineInterface const&);
    MediaEngineInterface();
};

}; // namespace cricket
