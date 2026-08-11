#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/client/renderer/actor/IconBlitGlint.h"
#include "mc/client/renderer/actor/ItemRenderChunkType.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BannerBlockActor;
class BaseActorRenderContext;
class Block;
class BlockGraphics;
class BlockTessellator;
class BlockType;
class ConduitBlockActor;
class DecoratedPotBlockActor;
class ItemActor;
class ItemGraphics;
class ItemStack;
class ShulkerBoxBlockActor;
class SkullBlockActor;
struct TextureUVCoordinateSet;
namespace dragon { struct RenderMetadata; }
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
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

    virtual void render(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemRenderer(::std::shared_ptr<::mce::TextureGroup> textureGroup, bool supportsNewVertexFormat);

    MCAPI void _getGuiItemColors(::ItemStack const& item, int& color, int& secondaryColor) const;

    MCAPI void _renderBannerItem(
        ::BaseActorRenderContext& renderContext,
        ::ItemStack const&        item,
        ::ItemActor&              itemEntity,
        bool                      isItem,
        float                     actorFrameAlpha
    );

    MCAPI void _renderBlockItem(
        ::BaseActorRenderContext& renderContext,
        ::ItemStack const&        item,
        ::ItemActor&              itemEntity,
        ::BlockType const*        blockType,
        ::BlockShape const        shape,
        float                     actorFrameAlpha,
        int                       count
    );

    MCAPI void _renderDecoratedPotItem(
        ::BaseActorRenderContext& renderContext,
        ::ItemStack const&        item,
        ::ItemActor&              itemEntity,
        bool                      isItem
    );

    MCAPI void _renderGuiBlockTypeItem(
        ::BaseActorRenderContext& renderContext,
        ::ItemStack const&        item,
        ::BlockGraphics const*    blockGraphics,
        ::mce::TexturePtr const&  texture,
        float                     x,
        float                     y,
        float                     lightMultiplier,
        float                     alphaMultiplier,
        float                     scale,
        float const               pickupPopPercentage,
        float const               squeezeAmount
    );

    MCAPI void _renderGuiDataDrivenBlockItem(
        ::BaseActorRenderContext& renderContext,
        ::Block const*            block,
        float                     x,
        float                     y,
        float                     scale,
        float const               squeezeAmount,
        int const                 zOrder
    );

    MCAPI bool _renderGuiEntityBlockItem(
        ::BaseActorRenderContext&      renderContext,
        ::ItemRenderChunkType          itemRenderChunkType,
        ::dragon::RenderMetadata const renderMetadata,
        ::ItemStack const&             item,
        float                          x,
        float                          y,
        float                          lightMultiplier,
        float                          scale
    );

    MCAPI void _renderItemGroup(
        ::BaseActorRenderContext& renderContext,
        ::ItemActor&              itemEntity,
        int                       itemCount,
        float                     scaleValue,
        float                     frameAlpha,
        bool const                useMatrixAsIs
    ) const;

    MCAPI void _renderShieldItem(
        ::BaseActorRenderContext& renderContext,
        ::ItemStack const&        item,
        ::ItemActor&              itemEntity,
        float                     actorFrameAlpha
    );

    MCAPI void forceGraphicsLoad();

    MCAPI ::ItemGraphics& getGraphics(::ItemStack const& item);

    MCAPI void iconBlit(
        ::BaseActorRenderContext&       renderContext,
        ::mce::TexturePtr const&        texture,
        float                           x,
        float                           y,
        float                           z,
        ::TextureUVCoordinateSet const& iconTextureCoord,
        float                           w,
        float                           h,
        float                           lightMultiplier,
        float                           alphaMultiplier,
        int                             colorMultiplier,
        int                             secondaryColorMultiplier,
        float                           xscale,
        float                           yscale,
        ::IconBlitGlint const           iconBlitGlint,
        bool const                      useMultiColorTextureTinting
    );

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
    // static functions
    // NOLINTBEGIN
    MCAPI static float getRenderYOffset(::ItemActor const& itemEntity, ::BlockType const* block, float ageInSeconds);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::mce::TextureGroup> textureGroup, bool supportsNewVertexFormat);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);
    // NOLINTEND
};
