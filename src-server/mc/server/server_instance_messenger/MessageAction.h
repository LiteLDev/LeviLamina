#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerInstanceMessenger {

enum class MessageAction : uchar {
    Enqueue = 0,
    Execute = 1,
    Discard = 2,
};

}
