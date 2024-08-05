#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SignalReceiver {
public:
    // prevent constructor by default
    SignalReceiver& operator=(SignalReceiver const&);
    SignalReceiver(SignalReceiver const&);

public:
    // NOLINTBEGIN
    MCAPI SignalReceiver();

    MCAPI ~SignalReceiver();

    // NOLINTEND
};

}; // namespace Bedrock
