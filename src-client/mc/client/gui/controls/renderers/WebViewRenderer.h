#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/WebviewInterfaceType.h"
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIScene;
class WebviewInterface;
// clang-format on

class WebViewRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::WebviewInterface>> mWebView;
    ::ll::TypedStorage<1, 1, bool>                                 mIsOnActiveScene;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WebViewRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance& client, ::UIControl& owner, int) /*override*/;

    virtual void onVisibilityChanged(bool visible) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::WebviewInterface>
    _getWebview(::IClientInstance& client, ::WebviewInterfaceType interfaceType);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);

    MCAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance& client, ::UIControl& owner, int);

    MCAPI void $onVisibilityChanged(bool visible);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
