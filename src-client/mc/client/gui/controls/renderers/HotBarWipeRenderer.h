#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
class UIControl;
namespace mce { class Color; }
// clang-format on

class HotBarWipeRenderer : public ::MinecraftUICustomRenderer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotBarWipeRenderer() /*override*/ = default;

    virtual void
    drawRectangle(::ScreenContext& screenContext, ::UIControl& owner, float percentage, ::mce::Color const& color);

    virtual int getHotBarIndex(::UIControl& owner) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $drawRectangle(::ScreenContext& screenContext, ::UIControl& owner, float percentage, ::mce::Color const& color);

    MCNAPI int $getHotBarIndex(::UIControl& owner) const;
    // NOLINTEND
};
