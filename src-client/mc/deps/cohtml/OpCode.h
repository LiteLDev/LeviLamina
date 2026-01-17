#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::websocket {

enum class OpCode : int {
    Text   = 1,
    Binary = 2,
};

}
