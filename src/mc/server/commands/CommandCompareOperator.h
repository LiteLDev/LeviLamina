#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/typeid_t.h"

enum CommandCompareOperator : char {
    Invalid           = 0x0,
    Equals            = 0x1,
    LessThan          = 0x2,
    GreaterThan       = 0x3,
    LessThanEquals    = 0x4,
    GreaterThanEquals = 0x5,
};

MCTAPI class Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<class CommandRegistry, enum CommandCompareOperator>();
