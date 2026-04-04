#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
namespace mce { class Color; }
// clang-format on

class InputRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputRenderContext() = 0;

    virtual void setColor(::mce::Color const& color) = 0;

    virtual void drawRect(
        ::RectangleArea const& rect,
        int                    u,
        int                    v,
        int                    uvWidth,
        int                    uvHeight,
        float                  uScale,
        float                  vScale,
        float                  px,
        float                  py
    ) const = 0;

    virtual void forceRender(::std::string const& texturePath) = 0;

    virtual ::RectangleArea measureText(::glm::vec2 const& center, ::std::string const& text) const = 0;

    virtual void drawText(::RectangleArea const& area, ::std::string const& text) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
