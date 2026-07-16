#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIMaterialType.h"
#include "mc/client/gui/controls/renderers/InventoryItemRenderItemData.h"
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/gui/screens/UIBatchType.h"
#include "mc/client/renderer/ActorShaderManager.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IInventoryItemRendererRenderContext;
class ItemRegistryRef;
class ItemStack;
class MinecraftUIRenderContext;
class PropertyBag;
class ResourceLocation;
class UIControl;
class UICustomRenderer;
class UIScene;
struct InventoryItemRenderOwnerData;
struct UIItemRenderInfo;
// clang-format on

class InventoryItemRenderer : public ::MinecraftUICustomRenderer,
                              public ::ActorShaderManager,
                              public ::InventoryItemRenderItemData {
public:
    // InventoryItemRenderer inner types declare
    // clang-format off
    struct UpdateData;
    class CachedProperties;
    // clang-format on

    // InventoryItemRenderer inner types define
    struct UpdateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::glm::vec2>              mOwnerPosition;
        ::ll::TypedStorage<8, 8, ::PropertyBag const*>     mOwnerPropertyBag;
        ::ll::TypedStorage<8, 8, ::ItemRegistryRef const&> mItemRegistry;
        ::ll::TypedStorage<
            8,
            16,
            ::brstd::function_ref<
                ::std::optional<int>(bool, ::ItemStack const&) const,
                ::std::optional<int>(bool, ::ItemStack const&)>>
            mGetAnimationFrame;
        // NOLINTEND

    public:
        // prevent constructor by default
        UpdateData& operator=(UpdateData const&);
        UpdateData(UpdateData const&);
        UpdateData();
    };

    class CachedProperties {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>   mCacheVersion;
        ::ll::TypedStorage<4, 4, int>   mItemIdAux;
        ::ll::TypedStorage<4, 4, int>   mChargedItem;
        ::ll::TypedStorage<4, 4, int>   mCustomColor;
        ::ll::TypedStorage<1, 1, bool>  mIsFiltered;
        ::ll::TypedStorage<8, 8, int64> mRawPickUpTime;
        ::ll::TypedStorage<1, 1, bool>  mIsShowPickup;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::InventoryItemRenderer::CachedProperties> mCachedProperties;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InventoryItemRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void preRenderSetup(::MinecraftUIRenderContext& renderContext) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const&) /*override*/;

    virtual void render(
        ::MinecraftUIRenderContext& renderContext,
        ::IClientInstance&          client,
        ::UIControl&                owner,
        int                         pass
    ) /*override*/;

    virtual ::UIBatchType getBatchType() const /*override*/;

    virtual int getCustomId() const /*override*/;

    virtual int getNumRenderPasses() const /*override*/;

    virtual ::UIMaterialType getUIMaterialType(int pass) const /*override*/;

    virtual ::ResourceLocation getResourceLocation(int textureSlot, int pass) const /*override*/;

    virtual bool getRequiresPreRenderSetup(int pass) const /*override*/;

    virtual ::UIItemRenderInfo getItemRenderInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _render(
        ::IInventoryItemRendererRenderContext& renderContext,
        ::InventoryItemRenderOwnerData const&  owner,
        int                                    pass
    );

    MCAPI bool _update(::InventoryItemRenderer::UpdateData const& data);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::UIItemRenderInfo getItemRenderInfo(::ItemStack const& item);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void $preRenderSetup(::MinecraftUIRenderContext& renderContext);

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const&);

    MCAPI void
    $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int pass);

    MCAPI ::UIBatchType $getBatchType() const;

    MCFOLD int $getCustomId() const;

    MCAPI int $getNumRenderPasses() const;

    MCAPI ::UIMaterialType $getUIMaterialType(int pass) const;

    MCAPI ::ResourceLocation $getResourceLocation(int textureSlot, int pass) const;

    MCFOLD bool $getRequiresPreRenderSetup(int pass) const;

    MCAPI ::UIItemRenderInfo $getItemRenderInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForMinecraftUICustomRenderer();

    MCNAPI static void** $vftableForActorShaderManager();
    // NOLINTEND
};
