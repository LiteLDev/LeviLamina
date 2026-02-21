#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/Clear.h"
#include "mc/external/bgfx/FrameBufferHandle.h"
#include "mc/external/bgfx/Matrix4.h"
#include "mc/external/bgfx/Rect.h"

namespace bgfx {

struct alignas(64) View {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::bgfx::Clear>            m_clear;
    ::ll::TypedStorage<2, 8, ::bgfx::Rect>              m_rect;
    ::ll::TypedStorage<2, 8, ::bgfx::Rect>              m_scissor;
    ::ll::TypedStorage<8, 64, ::bgfx::Matrix4>          m_view;
    ::ll::TypedStorage<8, 128, ::bgfx::Matrix4[2]>      m_proj;
    ::ll::TypedStorage<8, 64, ::bgfx::Matrix4>          m_prevView;
    ::ll::TypedStorage<8, 128, ::bgfx::Matrix4[2]>      m_prevProj;
    ::ll::TypedStorage<4, 16, float[4]>                 m_prevWorldPosOffset;
    ::ll::TypedStorage<2, 2, ::bgfx::FrameBufferHandle> m_fbh;
    ::ll::TypedStorage<1, 1, uchar>                     m_mode;
    ::ll::TypedStorage<1, 1, uchar>                     m_flags;
    // NOLINTEND
};

} // namespace bgfx
