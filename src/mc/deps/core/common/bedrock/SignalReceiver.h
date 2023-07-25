#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SignalReceiver {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_SIGNALRECEIVER
public:
    SignalReceiver& operator=(SignalReceiver const&) = delete;
    SignalReceiver(SignalReceiver const&)            = delete;
#endif

public:
    /**
     * @symbol ??0SignalReceiver\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI SignalReceiver();
    /**
     * @symbol ??1SignalReceiver\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~SignalReceiver();
};

}; // namespace Bedrock
