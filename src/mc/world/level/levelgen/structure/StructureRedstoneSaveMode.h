#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/typeid_t.h"

enum class StructureRedstoneSaveMode : schar {
    SavesToMemory = 0x0,
    SavesToDisk   = 0x1,
};

MCTAPI class Bedrock::typeid_t<CommandRegistry>
Bedrock::type_id<class CommandRegistry, enum class StructureRedstoneSaveMode>(void);
