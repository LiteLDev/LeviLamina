#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class BindFlagsBit : uint {
    // bitfield representation
    NoBindFlags        = 0,
    VertexBufferBit    = 1u << 0,
    IndexBufferBit     = 1u << 1,
    ConstantBufferBit  = 1u << 2,
    ShaderResourceBit  = 1u << 3,
    StreamOutputBit    = 1u << 4,
    RenderTargetBit    = 1u << 5,
    DepthStencilBit    = 1u << 6,
    UnorderedAccessBit = 1u << 7,
};

}
