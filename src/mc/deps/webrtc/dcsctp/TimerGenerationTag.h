#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class TimerGenerationTag {
public:
    // prevent constructor by default
    TimerGenerationTag& operator=(TimerGenerationTag const&);
    TimerGenerationTag(TimerGenerationTag const&);
    TimerGenerationTag();
};

}; // namespace dcsctp
