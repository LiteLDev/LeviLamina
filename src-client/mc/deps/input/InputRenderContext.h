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

    virtual void setColor(::mce::Color const&) = 0;

    virtual void drawRect(::RectangleArea const&, int, int, int, int, float, float, float, float) const = 0;

    virtual void forceRender(::std::string const&) = 0;

    virtual ::RectangleArea measureText(::glm::vec2 const&, ::std::string const&) const = 0;

    virtual void drawText(::RectangleArea const&, ::std::string const&) = 0;
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
