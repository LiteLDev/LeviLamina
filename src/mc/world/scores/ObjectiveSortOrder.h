#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/typeid_t.h"

enum class ObjectiveSortOrder : uchar {
    Ascending  = 0x0,
    Descending = 0x1,
};

MCTAPI class Bedrock::typeid_t<CommandRegistry>
Bedrock::type_id<class CommandRegistry, enum class ObjectiveSortOrder>();
