#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorRenderData;
class BaseActorRenderContext;
class DataDrivenRenderer_tempComponent;
class Model;
class RenderParams;
class Vec3;
struct ActorResourceDefinition;
struct BlockTessellator;
namespace mce { class TextureGroup; }
// clang-format on

class DataDrivenRenderer : public ::ActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataDrivenRenderer_tempComponent>>> mTempComponents;
    ::ll::TypedStorage<8, 48, ::HashedString const>                                                 mName;
    ::ll::TypedStorage<1, 1, bool const>                                                            mIsAttachable;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                                    mDefaultSkin;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mUpdateBonesAndEffectsIfOffScreen;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mUpdateEffectsIfOffScreen;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void getLeashOffsets(
        ::Actor& actor,
        float,
        float,
        float,
        bool                                  legacyOffset,
        ::Bedrock::small_vector_base<::Vec3>& output
    ) const /*override*/;

    virtual void render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData) /*override*/;

    virtual void
    renderEffects(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData) /*override*/;

    virtual ::AABB getRenderBounds(::Actor const& entity) const /*override*/;

    virtual void addAdditionalRenderingIfNeeded(::std::shared_ptr<::mce::TextureGroup> textureGroup) /*override*/;

    virtual void setIsOnScreen(::Actor& actor, bool const isOnScreen, float distance) const /*override*/;

    virtual bool shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams& renderParams) const /*override*/;

    virtual bool shouldUpdateEffectsIfOffScreen(::RenderParams& renderParams) const /*override*/;

    virtual ~DataDrivenRenderer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataDrivenRenderer(
        ::std::shared_ptr<::ActorResourceDefinition> definition,
        ::std::shared_ptr<::mce::TextureGroup>       textureGroup
    );

    MCAPI void addAgentAdditionalRendering();

    MCAPI void addBalloonAdditionalRendering();

    MCAPI void addEnderCrystalAdditionalRendering();

    MCAPI void addEnderDragonAdditionalRendering();

    MCAPI void addEnderManAdditionalRendering(::BlockTessellator* blockTesselator);

    MCAPI void addGuardianAdditionalRendering();

    MCAPI void addHumanoidAdditionalRendering(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void addIronGolemAdditionalRendering(::BlockTessellator* blockTesselator);

    MCAPI void addMinecartAdditionalRendering(::BlockTessellator& commonBlockRenderer);

    MCAPI void addMushroomCowAdditionalRendering(::BlockTessellator& commonBlockRenderer);

    MCAPI void addSnowGolemAdditionalRendering(::BlockTessellator* blockTesselator);

    MCAPI void addVexAdditionalRendering();

    MCAPI void addVillagerAdditionalRendering();

    MCFOLD void addVillagerV2AdditionalRendering();

    MCFOLD void addWanderingTraderAdditionalRendering();

    MCAPI void addWitchAdditionalRendering();

    MCAPI bool armorHidden() const;

    MCAPI bool attachablesEnabled() const;

    MCAPI ::V2TempComponentRequirements getV2TempComponentRequirement() const;

    MCAPI bool isAttachable() const;

    MCAPI void renderModel(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData, ::Model&);

    MCAPI void setupModel(
        ::ActorRenderData&        actorRenderData,
        ::BaseActorRenderContext* baseActorRenderContext,
        float                     actorFrameAlpha
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void getLeashOffsets(::Actor& actor, bool legacyOffset, ::Bedrock::small_vector_base<::Vec3>& output);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::ActorResourceDefinition> definition, ::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $getLeashOffsets(
        ::Actor& actor,
        float,
        float,
        float,
        bool                                  legacyOffset,
        ::Bedrock::small_vector_base<::Vec3>& output
    ) const;

    MCAPI void $render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData);

    MCAPI void $renderEffects(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData);

    MCAPI ::AABB $getRenderBounds(::Actor const& entity) const;

    MCAPI void $addAdditionalRenderingIfNeeded(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void $setIsOnScreen(::Actor& actor, bool const isOnScreen, float distance) const;

    MCAPI bool $shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams& renderParams) const;

    MCAPI bool $shouldUpdateEffectsIfOffScreen(::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
