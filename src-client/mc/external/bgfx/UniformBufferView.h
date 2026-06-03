#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { class UniformBuffer; }
// clang-format on

namespace bgfx {

class UniformBufferView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bgfx::UniformBuffer const*> m_uniforms;
    ::ll::TypedStorage<4, 4, uint>                         m_size;
    ::ll::TypedStorage<4, 4, uint>                         m_pos;
    // NOLINTEND
};

} // namespace bgfx
