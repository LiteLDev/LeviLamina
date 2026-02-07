#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/Matrix4.h"
#include "mc/external/bgfx/Rect.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Frame; }
// clang-format on

namespace bgfx {

struct ViewState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32768, ::bgfx::Matrix4[2][256]> m_viewTmp;
    ::ll::TypedStorage<8, 32768, ::bgfx::Matrix4[2][256]> m_viewProj;
    ::ll::TypedStorage<8, 16, ::bgfx::Matrix4* [2]>       m_view;
    ::ll::TypedStorage<2, 8, ::bgfx::Rect>                m_rect;
    ::ll::TypedStorage<8, 64, ::bgfx::Matrix4>            m_invView;
    ::ll::TypedStorage<8, 64, ::bgfx::Matrix4>            m_invProj;
    ::ll::TypedStorage<8, 64, ::bgfx::Matrix4>            m_invViewProj;
    ::ll::TypedStorage<8, 32768, ::bgfx::Matrix4[2][256]> m_prevViewProj;
    ::ll::TypedStorage<4, 4, float>                       m_alphaRef;
    ::ll::TypedStorage<4, 4096, float[256][4]>            m_prevWorldPosOffset;
    ::ll::TypedStorage<2, 2, ushort>                      m_invViewCached;
    ::ll::TypedStorage<2, 2, ushort>                      m_invProjCached;
    ::ll::TypedStorage<2, 2, ushort>                      m_invViewProjCached;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void reset(::bgfx::Frame const* _frame, bool _stereo);
    // NOLINTEND
};

} // namespace bgfx
