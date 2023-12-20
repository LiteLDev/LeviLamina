#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class TurnCustomizer {
public:
    // prevent constructor by default
    TurnCustomizer& operator=(TurnCustomizer const&);
    TurnCustomizer(TurnCustomizer const&);
    TurnCustomizer();
};

}; // namespace webrtc
