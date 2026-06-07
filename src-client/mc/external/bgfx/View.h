#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/Clear.h"
#include "mc/external/bgfx/FrameBufferHandle.h"
#include "mc/external/bgfx/Matrix4.h"
#include "mc/external/bgfx/Rect.h"

namespace bgfx {

struct View {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::bgfx::Clear>            m_clear;
    ::ll::TypedStorage<2, 8, ::bgfx::Rect>              m_rect;
    ::ll::TypedStorage<2, 8, ::bgfx::Rect>              m_scissor;
    ::ll::TypedStorage<4, 64, ::bgfx::Matrix4>          m_view;
    ::ll::TypedStorage<4, 128, ::bgfx::Matrix4[2]>      m_proj;
    ::ll::TypedStorage<4, 64, ::bgfx::Matrix4>          m_prevView;
    ::ll::TypedStorage<4, 128, ::bgfx::Matrix4[2]>      m_prevProj;
    ::ll::TypedStorage<4, 16, float[4]>                 m_prevWorldPosOffset;
    ::ll::TypedStorage<2, 2, ::bgfx::FrameBufferHandle> m_fbh;
    ::ll::TypedStorage<1, 1, uchar>                     m_mode;
    ::ll::TypedStorage<1, 1, uchar>                     m_flags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void reset();

    MCAPI void setTransform(
        void const* _view,
        void const* _proj,
        uchar       _flags,
        void const* _proj1,
        void const* _prevView,
        void const* _prevProj,
        void const* _prevWorldPosOffset
    );
    // NOLINTEND
};

} // namespace bgfx
