#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"
#include "mc/deps/renderer/MatrixStack.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class BoneOrientation;
class DataDrivenRenderer;
class HashedString;
class ItemStack;
class Mob;
class ModelPart;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent_VexAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenRenderer>> mRenderer;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                           mRightArm;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                           mRightItem;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                           mLeftArm;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                  mHeldItemIgnoresLighting;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                  mRenderLeftHandItem;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::V2TempComponentRequirements getV2Requirements() const /*override*/;

    virtual void render(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _renderParentedItemInHand(
        ::Mob&                                  mob,
        ::HashedString const&                   boneName,
        ::ItemStack const&                      item,
        ::BaseActorRenderContext&               renderContext,
        ::std::vector<::BoneOrientation> const& boneOrientations,
        ::MatrixStack::MatrixStackRef&          worldMatrix
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::V2TempComponentRequirements $getV2Requirements() const;

    MCAPI void
    $render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData, ::RenderParams& renderParams);
    // NOLINTEND
};
