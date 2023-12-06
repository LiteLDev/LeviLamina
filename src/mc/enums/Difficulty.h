#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/typeid_t.h"

enum class Difficulty : int {
    Peaceful = 0x0,
    Easy     = 0x1,
    Normal   = 0x2,
    Hard     = 0x3,
    Count    = 0x4,
    Unknown  = 0x5,
};

MCTAPI class Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<class CommandRegistry, enum class Difficulty>();
