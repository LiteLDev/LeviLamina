#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StreamingSessionResult : uchar {
    Completed           = 0,
    Stopped             = 1,
    StoppedWhilePlaying = 2,
    FetchFailed         = 3,
    DecoderError        = 4,
    NeverStarted        = 5,
};
