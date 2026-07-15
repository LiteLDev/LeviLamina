#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
// clang-format on

class BackgroundRenderer : public ::MinecraftUICustomRenderer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BackgroundRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
