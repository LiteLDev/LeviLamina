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
    virtual ~MinecraftUICustomRenderer() /*override*/;

    virtual void frameUpdate(::UIFrameUpdateContext& frameUpdateContext, ::UIControl& owner) /*override*/;

    virtual void frameUpdate(::MinecraftUIFrameUpdateContext&, ::UIControl&);

    virtual void
    render(::UIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int pass) /*override*/;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int) = 0;

    virtual void preRenderSetup(::UIRenderContext& renderContext) /*override*/;

    virtual void preRenderSetup(::MinecraftUIRenderContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $frameUpdate(::UIFrameUpdateContext& frameUpdateContext, ::UIControl& owner);

    MCFOLD void $frameUpdate(::MinecraftUIFrameUpdateContext&, ::UIControl&);

    MCAPI void $render(::UIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int pass);

    MCAPI void $preRenderSetup(::UIRenderContext& renderContext);

    MCFOLD void $preRenderSetup(::MinecraftUIRenderContext&);
    // NOLINTEND
};
