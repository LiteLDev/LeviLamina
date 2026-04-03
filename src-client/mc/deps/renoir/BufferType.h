#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir::domains {

enum class BufferType : int {
    IndexBuffer    = 0,
    VertexBuffer   = 1,
    ConstantBuffer = 2,
    Count          = 3,
};

}
