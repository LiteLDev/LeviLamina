#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/world/actor/player/SkinAdjustments.h"
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
class ItemStack;
class Mob;
class ModelPart;
class RenderParams;
class SpinAttackModel;
namespace dragon { struct RenderMetadata; }
namespace mce { class TextureGroup; }
// clang-format on

class DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SpinAttackModel>>    mSpinAttackModel;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::TexturePtr>>       mArmorTextures;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                      mSpinAttackTex;
    ::ll::TypedStorage<1, 1, bool>                                    mDamageNearbyMobs;
    ::ll::TypedStorage<1, 1, bool>                                    mSneaking;
    ::ll::TypedStorage<4, 4, float>                                   mSwimAmount;
    ::ll::TypedStorage<1, 1, bool>                                    mIsGliding;
    ::ll::TypedStorage<4, 4, float>                                   mGlidingSpeedValue;
    ::ll::TypedStorage<4, 4, float>                                   mUseItemStartupProgress;
    ::ll::TypedStorage<4, 4, float>                                   mUseItemIntervalProgress;
    ::ll::TypedStorage<4, 4, int>                                     mUseItemInvervalAxis;
    ::ll::TypedStorage<4, 4, ::SkinAdjustments>                       mSkinAdjustments;
    ::ll::TypedStorage<4, 4, ::SkinAdjustments>                       mBaseSkinAdjustments;
    ::ll::TypedStorage<4, 8, float[2]>                                mHoldingHand;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                            mHead;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                            mWaist;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                            mBody;
    ::ll::TypedStorage<8, 24, ::std::vector<::ModelPart*>>            mRightArm;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                            mRightSleeve;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                            mLeftArm;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                            mLeftSleeve;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                            mRightLeg;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                            mLeftLeg;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                            mRightItem;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                            mLeftItem;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                            mBodyArmorOffset;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenRenderer>>  mRenderer;
    ::ll::TypedStorage<1, 1, bool>                                    mRenderingInventory;
    ::ll::TypedStorage<1, 1, bool>                                    mSetupElytra;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroup>> mTextureGroup;
    // NOLINTEND

public:
    // prevent constructor by default
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering(
        ::std::shared_ptr<::DataDrivenRenderer> renderer,
        ::std::shared_ptr<::mce::TextureGroup>  textureGroup
    );

    MCAPI void _renderChestGear(
        ::BaseActorRenderContext&              renderContext,
        ::dragon::RenderMetadata const         renderMetadata,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::ItemStack const&                     chestGear,
        ::Mob&                                 mob,
        float                                  actorFrameAlpha
    );

    MCAPI void _renderHeadGear(
        ::BaseActorRenderContext&         renderContext,
        ::dragon::RenderMetadata const    renderMetadata,
        ::ItemStack const&                headGear,
        ::Actor*                          actor,
        ::std::vector<::BoneOrientation>* boneOrientations
    );

    MCAPI void _renderMainHandItem(
        ::BaseActorRenderContext&         renderContext,
        ::RenderParams&                   renderParams,
        ::ItemStack const&                ii,
        ::Mob&                            mob,
        ::std::vector<::BoneOrientation>* boneOrientations
    );

    MCAPI void _renderOffHandItem(
        ::BaseActorRenderContext&         renderContext,
        ::ItemStack const&                offhandItemInstance,
        ::Mob&                            mob,
        ::std::vector<::BoneOrientation>* boneOrientations
    );

    MCAPI bool _shouldRenderOffHandItem(::Mob const& mob, ::ItemStack const& offhandItemInstance);

    MCAPI void prepareCarriedOffhandItem(::Mob&, ::ItemStack const& item);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _applyBlockItemTransforms(
        ::MatrixStack::MatrixStackRef& worldMatrix,
        ::BlockType const*             block,
        ::BlockShape                   blockShape,
        bool                           isMainHand
    );

    MCAPI static void _applyDataDrivenBlockItemTransforms(
        ::MatrixStack::MatrixStackRef& worldMatrix,
        ::Block const&                 block,
        bool const                     isMainHand
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::std::string> const& ELYTRA_TEXTURE_LOCATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::DataDrivenRenderer> renderer, ::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $preRender(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );

    MCAPI void
    $render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData, ::RenderParams& renderParams);

    MCFOLD ::V2TempComponentRequirements $getV2Requirements() const;
    // NOLINTEND
};
