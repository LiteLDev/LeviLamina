#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/typeid_t.h"

enum class CommandOperator : schar {
    Invalid      = 0x0,
    Equals       = 0x1,
    PlusEquals   = 0x2,
    MinusEquals  = 0x3,
    TimesEquals  = 0x4,
    DivideEquals = 0x5,
    ModEquals    = 0x6,
    MinEquals    = 0x7,
    MaxEquals    = 0x8,
    Swap         = 0x9,
};

MCTAPI class Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<class CommandRegistry, enum class CommandOperator>();
