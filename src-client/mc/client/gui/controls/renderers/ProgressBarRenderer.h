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

class ProgressBarRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>                  mPrimaryColor;
    ::ll::TypedStorage<4, 16, ::mce::Color>                  mSecondaryColor;
    ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>> mFullStorageColor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProgressBarRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int) /*override*/;
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
