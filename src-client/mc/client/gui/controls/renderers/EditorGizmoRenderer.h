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

class EditorGizmoRenderer : public ::MinecraftUICustomRenderer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorGizmoRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&) /*override*/;

    virtual void preRenderSetup(::MinecraftUIRenderContext& renderContext) /*override*/;

    virtual void render(::MinecraftUIRenderContext& context, ::IClientInstance& client, ::UIControl&, int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EditorGizmoRenderer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCFOLD bool $update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    MCAPI void $preRenderSetup(::MinecraftUIRenderContext& renderContext);

    MCAPI void $render(::MinecraftUIRenderContext& context, ::IClientInstance& client, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
