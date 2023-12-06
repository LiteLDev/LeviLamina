#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/typeid_t.h"

enum class BlockSlot : int {
    None      = -1,
    Container = 0,
    Count     = 1,
};

MCTAPI class Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<class CommandRegistry, enum class BlockSlot>();
