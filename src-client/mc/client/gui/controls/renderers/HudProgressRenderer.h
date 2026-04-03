#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIFrameUpdateContext;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
// clang-format on

class HudProgressRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mProgressAlpha;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudProgressRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void frameUpdate(::MinecraftUIFrameUpdateContext& frameUpdateContext, ::UIControl&) /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl&, int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool
    _renderProgressIndicator(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, int, int, float a);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void $frameUpdate(::MinecraftUIFrameUpdateContext& frameUpdateContext, ::UIControl&);

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
