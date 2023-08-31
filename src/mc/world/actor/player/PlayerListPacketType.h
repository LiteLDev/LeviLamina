#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PlayerListPacketType : int8_t {
    Add    = 0x0,
    Remove = 0x1,
};
