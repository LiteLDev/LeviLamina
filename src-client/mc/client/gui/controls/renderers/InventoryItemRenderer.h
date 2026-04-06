#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIMaterialType.h"
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/gui/screens/UIBatchType.h"
#include "mc/client/renderer/ActorShaderManager.h"
#include "mc/client/renderer/actor/ItemRenderChunkType.h"
#include "mc/client/renderer/texture/TextureUVCoordinateSet.h"
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class Item;
class ItemRegistryRef;
class MinecraftUIRenderContext;
class ResourceLocation;
class UIControl;
class UICustomRenderer;
class UIScene;
struct UIItemRenderInfo;
// clang-format on

class InventoryItemRenderer : public ::MinecraftUICustomRenderer, public ::ActorShaderManager {
public:
    // InventoryItemRenderer inner types declare
    // clang-format off
    class CachedProperties;
    // clang-format on

    // InventoryItemRenderer inner types define
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
    ::ll::TypedStorage<4, 4, int>                                        mCustomId;
    ::ll::TypedStorage<4, 4, int>                                        mItemId;
    ::ll::TypedStorage<4, 4, int>                                        mAuxVal;
    ::ll::TypedStorage<4, 4, int>                                        mCustomColor;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>    mPickupTime;
    ::ll::TypedStorage<1, 1, bool>                                       mIsShowPickup;
    ::ll::TypedStorage<1, 1, bool>                                       mIsFiltered;
    ::ll::TypedStorage<4, 4, int>                                        mAnimationFrame;
    ::ll::TypedStorage<1, 1, bool>                                       mIsEnchanted;
    ::ll::TypedStorage<1, 1, bool>                                       mHidingIcon;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                mPosition;
    ::ll::TypedStorage<8, 32, ::std::string>                             mTextureName;
    ::ll::TypedStorage<4, 4, ::UIMaterialType>                           mUIMaterialType;
    ::ll::TypedStorage<4, 4, ::ResourceFileSystem>                       mTextureFileSystem;
    ::ll::TypedStorage<8, 88, ::TextureUVCoordinateSet>                  mIcon;
    ::ll::TypedStorage<8, 8, ::WeakPtr<::Item>>                          mItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>                              mItemInstance;
    ::ll::TypedStorage<4, 4, ::ItemRenderChunkType>                      mItemRenderType;
    ::ll::TypedStorage<8, 40, ::InventoryItemRenderer::CachedProperties> mCachedProperties;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InventoryItemRenderer() /*override*/;

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

    virtual ::UIMaterialType getUIMaterialType(int) const /*override*/;

    virtual ::ResourceLocation getResourceLocation(int textureSlot, int pass) const /*override*/;

    virtual bool getRequiresPreRenderSetup(int pass) const /*override*/;

    virtual ::UIItemRenderInfo getItemRenderInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InventoryItemRenderer();

    MCAPI void _onItemChanged(::ItemRegistryRef itemRegistry, int itemId, int newAuxVal);

    MCAPI void _updateCachedProperties(::UIControl const& owner);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::UIItemRenderInfo getItemRenderInfo(::ItemStack const& item);

    MCAPI static ::ItemRenderChunkType getRenderTypeFromItem(::ItemStack const& item);
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

    MCAPI void $preRenderSetup(::MinecraftUIRenderContext& renderContext);

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const&);

    MCAPI void
    $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int pass);

    MCFOLD int $getCustomId() const;

    MCAPI int $getNumRenderPasses() const;

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
