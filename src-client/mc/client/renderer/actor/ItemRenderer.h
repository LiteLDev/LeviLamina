#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/client/renderer/actor/ItemRenderChunkType.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BannerBlockActor;
class BaseActorRenderContext;
class BlockTessellator;
class ConduitBlockActor;
class DecoratedPotBlockActor;
class ItemGraphics;
class ItemStack;
class ShulkerBoxBlockActor;
class SkullBlockActor;
struct TextureUVCoordinateSet;
namespace mce { class TextureGroup; }
// clang-format on

class ItemRenderer : public ::ActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTessellator>>        mBlockTessellator;
    ::ll::TypedStorage<4, 64, float[16]>                                   mRandomFloats;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<short, ::ItemGraphics>> mItemGraphics;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                          mUIBlitMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                          mUIIconBlitMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                          mUIIconBlitMaterialMultiColorTint;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                          mUIIconUnblitMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                          mUIIconBlitGlintMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                          mEntityAlphatestChangeColorMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                          mEntityAlphatestChangeColorGlintMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                          mEntityAlphatestMultiColorTintMaterial;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BannerBlockActor>>        mBannerEntity;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DecoratedPotBlockActor>>  mDecoratedPotBlockEntity;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SkullBlockActor>>         mSkullEntity;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConduitBlockActor>>       mConduitEntity;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ShulkerBoxBlockActor>>    mShulkerBoxEntity;
    ::ll::TypedStorage<1, 1, bool>                                         mSupportsNewVertexFormat;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemRenderer() /*override*/ = default;

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemRenderer(::std::shared_ptr<::mce::TextureGroup> textureGroup, bool supportsNewVertexFormat);

    MCAPI void forceGraphicsLoad();

    MCAPI ::ItemGraphics& getGraphics(::ItemStack const& item);

    MCAPI void renderGuiItemInChunk(
        ::BaseActorRenderContext&                        renderContext,
        ::ItemRenderChunkType                            itemRenderChunkType,
        ::ItemStack const&                               item,
        float                                            x,
        float                                            y,
        float                                            lightMultiplier,
        float                                            alphaMultiplier,
        float                                            scale,
        int                                              frame,
        bool                                             allowAnimation,
        int                                              zOrder,
        ::std::optional<::TextureUVCoordinateSet> const& customIconUVCoords
    );

    MCAPI void renderGuiItemNew(
        ::BaseActorRenderContext& renderContext,
        ::ItemStack const&        item,
        int                       frame,
        float                     x,
        float                     y,
        bool                      renderEnchantmentFoil,
        float                     transparency,
        float                     lightMultiplier,
        float                     scale,
        int                       zOrder
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::mce::TextureGroup> textureGroup, bool supportsNewVertexFormat);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
