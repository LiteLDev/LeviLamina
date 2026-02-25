#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/HotBarWipeRenderer.h"
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class ScreenContext;
class UIControl;
class UICustomRenderer;
// clang-format on

class HotBarDropRenderer : public ::HotBarWipeRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::std::optional<::std::pair<int, ::ResourceLocation>>> mCachedResourceLocation;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotBarDropRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _renderDropProgress(::ScreenContext& screenContext, ::IClientInstance& client, ::UIControl& owner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
