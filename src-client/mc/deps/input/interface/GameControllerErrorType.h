#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class GameControllerErrorType : uchar {
    NoError                          = 0,
    ControllerRequired               = 1,
    InvalidConfiguration             = 2,
    AdhocOverWirelessConnectionLimit = 3,
    AdhocInvalidConfiguration        = 4,
};
