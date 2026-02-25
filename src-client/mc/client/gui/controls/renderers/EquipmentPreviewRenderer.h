#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class IClientInstance;
class MinecraftUIRenderContext;
class MultiPlayerLevel;
class UIControl;
class UICustomRenderer;
class UIResolvedDef;
class UIScene;
// clang-format on

class EquipmentPreviewRenderer : public ::MinecraftUICustomRenderer {
public:
    // EquipmentPreviewRenderer inner types declare
    // clang-format off
    struct ItemProperties;
    // clang-format on

    // EquipmentPreviewRenderer inner types define
    struct ItemProperties {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2>                                      mRotation;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                            mDisplayArmorStand;
    ::ll::TypedStorage<8, 80, ::EquipmentPreviewRenderer::ItemProperties> mItemProperties;
    ::ll::TypedStorage<8, 152, ::ItemStack>                               mItemStack;
    // NOLINTEND

public:
    // prevent constructor by default
    EquipmentPreviewRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EquipmentPreviewRenderer() /*override*/;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const&) /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EquipmentPreviewRenderer(::UIResolvedDef const& definition);

    MCAPI explicit EquipmentPreviewRenderer(::Vec2 const& rotation);

    MCAPI ::Actor* _getOrCreateDisplayArmorStand(::MultiPlayerLevel& level, ::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIResolvedDef const& definition);

    MCAPI void* $ctor(::Vec2 const& rotation);
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

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const&);

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
