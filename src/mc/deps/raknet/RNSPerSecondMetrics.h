#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class RNSPerSecondMetrics : int {
    UserMessageBytesPushed            = 0,
    UserMessageBytesSent              = 1,
    UserMessageBytesResent            = 2,
    UserMessageBytesReceivedProcessed = 3,
    UserMessageBytesReceivedIgnored   = 4,
    ActualBytesSent                   = 5,
    ActualBytesReceived               = 6,
    RnsPerSecondMetricsCount          = 7,
};

}
