#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/math/Color.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
// clang-format on

class GradientRenderer : public ::MinecraftUICustomRenderer {
public:
    // GradientRenderer inner types define
    enum class GradientDirection : int {
        Vertical   = 0,
        Horizontal = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GradientRenderer::GradientDirection> mDirection;
    ::ll::TypedStorage<4, 16, ::mce::Color>                         mColor1;
    ::ll::TypedStorage<4, 16, ::mce::Color>                         mColor2;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GradientRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& owner, ::UIControl&, int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setGradientColors(::mce::Color const& color1, ::mce::Color const& color2);

    MCFOLD void setGradientDirection(::GradientRenderer::GradientDirection direction);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& owner, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
