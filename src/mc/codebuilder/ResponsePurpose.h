#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

enum class ResponsePurpose : uchar {
    None              = 0,
    Command           = 1,
    Error             = 2,
    Event             = 3,
    AgentAction       = 4,
    ChatMessage       = 5,
    Data              = 6,
    EncryptConnection = 7,
    Cloud             = 8,
    Count             = 9,
};

}
