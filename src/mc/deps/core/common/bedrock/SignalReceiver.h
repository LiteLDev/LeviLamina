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
    // symbol: ??0SignalReceiver@Bedrock@@QEAA@XZ
    MCAPI SignalReceiver();

    // symbol: ??1SignalReceiver@Bedrock@@QEAA@XZ
    MCAPI ~SignalReceiver();

    // NOLINTEND
};

}; // namespace Bedrock
