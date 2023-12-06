#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/typeid_t.h"

enum class AnimationMode : schar {
    None   = 0x0,
    Layers = 0x1,
    Blocks = 0x2,
};

MCTAPI class Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<class CommandRegistry, enum class AnimationMode>();
