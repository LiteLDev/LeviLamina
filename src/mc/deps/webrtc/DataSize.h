#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DataSize {
public:
    // prevent constructor by default
    DataSize& operator=(DataSize const&);
    DataSize(DataSize const&);
    DataSize();
};

}; // namespace webrtc
