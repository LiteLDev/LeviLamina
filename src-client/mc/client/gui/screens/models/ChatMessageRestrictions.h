#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ChatMessageRestrictions : uchar {
    Allowed           = 0,
    BlockedByPlatform = 1,
    BlockedByXBL      = 2,
    Muted             = 3,
    CommandDisabled   = 4,
};
