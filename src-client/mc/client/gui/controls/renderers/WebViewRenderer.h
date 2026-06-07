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
    virtual ~WebViewRenderer() /*override*/;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& scene, ::UIScene const&) /*override*/;

    virtual void render(::MinecraftUIRenderContext& client, ::IClientInstance& owner, ::UIControl&, int) /*override*/;

    virtual void onVisibilityChanged(bool visible) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WebViewRenderer();

    MCAPI ::std::shared_ptr<::WebviewInterface>
    _getWebview(::IClientInstance& client, ::WebviewInterfaceType interfaceType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI bool $update(::IClientInstance& client, ::UIControl& scene, ::UIScene const&);

    MCAPI void $render(::MinecraftUIRenderContext& client, ::IClientInstance& owner, ::UIControl&, int);

    MCAPI void $onVisibilityChanged(bool visible);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
