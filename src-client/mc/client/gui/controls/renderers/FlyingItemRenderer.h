#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/gui/screens/UIBatchType.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIPropertyBag;
class UIScene;
struct UIItemRenderInfo;
namespace ui { struct FlyingItem; }
// clang-format on

class FlyingItemRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ui::FlyingItem>> mFlyingItems;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlyingItemRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual bool update(::IClientInstance&, ::UIControl& owner, ::UIScene const&) /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int) /*override*/;

    virtual ::UIBatchType getBatchType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addNewFlyingItems(::UIPropertyBag& bag);

    MCAPI void _renderGuiIcon(
        ::MinecraftUIRenderContext& renderContext,
        ::IClientInstance&          client,
        ::ui::FlyingItem&           item,
        float                       x,
        float                       y,
        float                       transparency,
        float                       scale,
        int                         zOrder
    );

    MCAPI void _renderMesh(
        ::MinecraftUIRenderContext& renderContext,
        ::BaseActorRenderContext&   entityRenderContext,
        ::UIItemRenderInfo const&   itemRenderInfo
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI bool $update(::IClientInstance&, ::UIControl& owner, ::UIScene const&);

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
