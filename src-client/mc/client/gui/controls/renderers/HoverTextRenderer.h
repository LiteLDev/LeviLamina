#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/HoverRenderer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIResolvedDef;
class UIScene;
// clang-format on

class HoverTextRenderer : public ::HoverRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mMaxWidth;
    ::ll::TypedStorage<1, 1, bool> mProfanityFilterToggleState;
    // NOLINTEND

public:
    // prevent constructor by default
    HoverTextRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl&, int) /*override*/;

    virtual ~HoverTextRenderer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit HoverTextRenderer(::UIResolvedDef const& def);

    MCAPI void _buildTextbox(::IClientInstance& client, bool useGamepadOffset);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIResolvedDef const& def);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
