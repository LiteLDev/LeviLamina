#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderData;
class BaseActorRenderContext;
class Block;
class BlockType;
class BoneOrientation;
class DataDrivenRenderer;
class Item;
class ItemStack;
class Mob;
class RenderParams;
namespace dragon { struct RenderMetadata; }
namespace mce { class TextureGroup; }
// clang-format on

class DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7d5efc;
    ::ll::UntypedStorage<8, 24> mUnk101f2d;
    ::ll::UntypedStorage<8, 32> mUnk3a6bc6;
    ::ll::UntypedStorage<1, 1>  mUnk1762fd;
    ::ll::UntypedStorage<1, 1>  mUnk72d582;
    ::ll::UntypedStorage<4, 4>  mUnkd95614;
    ::ll::UntypedStorage<1, 1>  mUnkf232b2;
    ::ll::UntypedStorage<4, 4>  mUnk8d88ed;
    ::ll::UntypedStorage<4, 4>  mUnk9bcd0a;
    ::ll::UntypedStorage<4, 4>  mUnkb87ea5;
    ::ll::UntypedStorage<4, 4>  mUnkbb77d6;
    ::ll::UntypedStorage<4, 4>  mUnk4275c5;
    ::ll::UntypedStorage<4, 4>  mUnk8d35ce;
    ::ll::UntypedStorage<4, 8>  mUnk42ea8c;
    ::ll::UntypedStorage<8, 8>  mUnk8e909d;
    ::ll::UntypedStorage<8, 8>  mUnkfd1d20;
    ::ll::UntypedStorage<8, 8>  mUnk30eba1;
    ::ll::UntypedStorage<8, 24> mUnk90bf01;
    ::ll::UntypedStorage<8, 8>  mUnk453393;
    ::ll::UntypedStorage<8, 8>  mUnk48e03d;
    ::ll::UntypedStorage<8, 8>  mUnk136bf2;
    ::ll::UntypedStorage<8, 8>  mUnka5cac8;
    ::ll::UntypedStorage<8, 8>  mUnk3ba9f9;
    ::ll::UntypedStorage<8, 8>  mUnka37fc5;
    ::ll::UntypedStorage<8, 8>  mUnkcf3c46;
    ::ll::UntypedStorage<8, 8>  mUnkeda452;
    ::ll::UntypedStorage<8, 16> mUnk9df525;
    ::ll::UntypedStorage<1, 1>  mUnkeba727;
    ::ll::UntypedStorage<1, 1>  mUnkc1ab47;
    ::ll::UntypedStorage<8, 16> mUnk2f62b8;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering(
        DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void preRender(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;

    virtual void render(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;

    virtual ::V2TempComponentRequirements getV2Requirements() const /*override*/;

    virtual ~DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering(
        ::std::shared_ptr<::DataDrivenRenderer> renderer,
        ::std::shared_ptr<::mce::TextureGroup>  textureGroup
    );

    MCNAPI bool _applyMainHandItemTransforms(
        ::MatrixStack::MatrixStackRef& worldMatrix,
        ::ItemStack const&             ii,
        ::Item const*                  item,
        float                          mobScale,
        ::Mob&                         mob
    );

    MCNAPI bool _applyOffHandItemTransforms(
        ::MatrixStack::MatrixStackRef& worldMatrix,
        ::ItemStack const&             offhandItemInstance,
        ::Item const*                  item,
        ::Mob&                         mob
    );

    MCNAPI void _renderBannerChestGear(
        ::BaseActorRenderContext& renderContext,
        ::dragon::RenderMetadata  renderMetadata,
        ::ItemStack const&        chestGear
    );

    MCNAPI void _renderBlockHead(
        ::BaseActorRenderContext& renderContext,
        ::ItemStack const&        headGear,
        ::Mob&                    mob,
        ::BlockType const*        blockType,
        ::Block const&            block,
        bool                      useDataDrivenBlockTransforms
    );

    MCNAPI void _renderChestGear(
        ::BaseActorRenderContext&              renderContext,
        ::dragon::RenderMetadata               renderMetadata,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::ItemStack const&                     chestGear,
        ::Mob&                                 mob,
        float                                  actorFrameAlpha
    );

    MCNAPI void _renderElytra(
        ::BaseActorRenderContext&              renderContext,
        ::Mob&                                 mob,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        float                                  actorFrameAlpha
    );

    MCNAPI void _renderHeadGear(
        ::BaseActorRenderContext&         renderContext,
        ::dragon::RenderMetadata          renderMetadata,
        ::ItemStack const&                headGear,
        ::Actor*                          actor,
        ::std::vector<::BoneOrientation>* boneOrientations
    );

    MCNAPI void _renderMainHandItem(
        ::BaseActorRenderContext&         renderContext,
        ::RenderParams&                   renderParams,
        ::ItemStack const&                ii,
        ::Mob&                            mob,
        ::std::vector<::BoneOrientation>* boneOrientations
    );

    MCNAPI void _renderOffHandItem(
        ::BaseActorRenderContext&         renderContext,
        ::ItemStack const&                offhandItemInstance,
        ::Mob&                            mob,
        ::std::vector<::BoneOrientation>* boneOrientations
    );

    MCNAPI void _renderSkullHead(
        ::BaseActorRenderContext&      renderContext,
        ::dragon::RenderMetadata       renderMetadata,
        ::ItemStack const&             headGear,
        ::Actor*                       actor,
        float                          actorFrameAlpha,
        ::MatrixStack::MatrixStackRef& worldMatrix
    );

    MCNAPI bool _shouldRenderOffHandItem(::Mob const& mob, ::ItemStack const& offhandItemInstance);

    MCNAPI void transformToRightItemSpace(
        ::std::vector<::BoneOrientation>& boneOrientations,
        ::MatrixStack::MatrixStackRef&    worldMatrix,
        float                             mobScale
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _applyBlockItemTransforms(
        ::MatrixStack::MatrixStackRef& worldMatrix,
        ::BlockType const*             block,
        ::BlockShape                   blockShape,
        bool                           isMainHand
    );

    MCNAPI static void _applyDataDrivenBlockItemTransforms(
        ::MatrixStack::MatrixStackRef& worldMatrix,
        ::Block const&                 block,
        bool                           isMainHand
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<::std::string> const& ELYTRA_TEXTURE_LOCATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::shared_ptr<::DataDrivenRenderer> renderer, ::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRender(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );

    MCNAPI void
    $render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData, ::RenderParams& renderParams);

    MCNAPI ::V2TempComponentRequirements $getV2Requirements() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
