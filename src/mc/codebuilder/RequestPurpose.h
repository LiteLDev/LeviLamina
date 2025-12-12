#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

enum class RequestPurpose : uchar {
    None                   = 0,
    Command                = 1,
    Subscribe              = 2,
    Unsubscribe            = 3,
    AgentAction            = 4,
    ChatMessageSubscribe   = 5,
    ChatMessageUnsubscribe = 6,
    DataRequestBlock       = 7,
    DataRequestItem        = 8,
    DataRequestMob         = 9,
    EncryptConnection      = 10,
    DataRequestTutorial    = 11,
    DataRequestTelemetry   = 12,
    DataRequestFile        = 13,
    Count                  = 14,
};

}
