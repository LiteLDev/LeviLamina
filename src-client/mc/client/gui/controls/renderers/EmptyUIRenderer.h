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
class UIScene;
// clang-format on

class EmptyUIRenderer : public ::MinecraftUICustomRenderer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmptyUIRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&) /*override*/;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
