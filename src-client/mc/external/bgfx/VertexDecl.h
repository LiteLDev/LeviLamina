#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/attrib/Enum.h"
#include "mc/external/bgfx/attrib_type/Enum.h"
#include "mc/external/bgfx/renderer_type/Enum.h"

namespace bgfx {

struct VertexDecl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>        m_hash;
    ::ll::TypedStorage<2, 2, ushort>      m_stride;
    ::ll::TypedStorage<2, 38, ushort[19]> m_offset;
    ::ll::TypedStorage<2, 38, ushort[19]> m_attributes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VertexDecl();

    MCAPI ::bgfx::VertexDecl&
    add(::bgfx::Attrib::Enum _attrib, uchar _num, ::bgfx::AttribType::Enum _type, bool _normalized, bool _asInt);

    MCAPI ::bgfx::VertexDecl& begin(::bgfx::RendererType::Enum _renderer);

    MCAPI void decode(
        ::bgfx::Attrib::Enum      _attrib,
        uchar&                    _num,
        ::bgfx::AttribType::Enum& _type,
        bool&                     _normalized,
        bool&                     _asInt
    ) const;

    MCAPI void end();

    MCAPI ::bgfx::VertexDecl& skip(uchar _num);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace bgfx
