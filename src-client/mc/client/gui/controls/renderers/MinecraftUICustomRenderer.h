#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/UICustomRenderer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIFrameUpdateContext;
class MinecraftUIRenderContext;
class UIControl;
class UIFrameUpdateContext;
class UIRenderContext;
// clang-format on

class MinecraftUICustomRenderer : public ::UICustomRenderer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftUICustomRenderer() /*override*/ = default;

    virtual void frameUpdate(::UIFrameUpdateContext& frameUpdateContext, ::UIControl& owner) /*override*/;

    virtual void frameUpdate(::MinecraftUIFrameUpdateContext&, ::UIControl&);

    virtual void
    render(::UIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int pass) /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int pass) = 0;

    virtual void preRenderSetup(::UIRenderContext& renderContext) /*override*/;

    virtual void preRenderSetup(::MinecraftUIRenderContext& renderContext);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $frameUpdate(::UIFrameUpdateContext& frameUpdateContext, ::UIControl& owner);

    MCNAPI void $frameUpdate(::MinecraftUIFrameUpdateContext&, ::UIControl&);

    MCNAPI void $render(::UIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int pass);

    MCNAPI void $preRenderSetup(::UIRenderContext& renderContext);

    MCNAPI void $preRenderSetup(::MinecraftUIRenderContext& renderContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
