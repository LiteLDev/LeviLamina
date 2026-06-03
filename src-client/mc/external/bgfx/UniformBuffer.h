#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/uniform_type/Enum.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct UniformHandle; }
// clang-format on

namespace bgfx {

class UniformBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                    m_size;
    ::ll::TypedStorage<4, 4, uint>                    m_pos;
    ::ll::TypedStorage<1, 268435456, char[268435456]> m_buffer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void finish();

    MCAPI void write(uint _value);

    MCAPI void
    writeUniformHandle(::bgfx::UniformType::Enum _type, ushort _loc, ::bgfx::UniformHandle _handle, ushort _num);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::bgfx::UniformBuffer* create(uint _size);
    // NOLINTEND
};

} // namespace bgfx
