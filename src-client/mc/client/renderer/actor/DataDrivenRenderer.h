#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"
#include "mc/deps/core/container/small_vector_base.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseActorRenderContext;
class Model;
class RenderParams;
class Vec3;
struct ActorRenderData;
struct ActorResourceDefinition;
struct BlockTessellator;
namespace mce { class TextureGroup; }
// clang-format on

class DataDrivenRenderer : public ::ActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk74a4fc;
    ::ll::UntypedStorage<8, 48> mUnkc4d543;
    ::ll::UntypedStorage<1, 1>  mUnk3e0f43;
    ::ll::UntypedStorage<8, 32> mUnk1a47a2;
    ::ll::UntypedStorage<8, 16> mUnk6c606d;
    ::ll::UntypedStorage<8, 16> mUnk8c5e73;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer& operator=(DataDrivenRenderer const&);
    DataDrivenRenderer(DataDrivenRenderer const&);
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
    MCNAPI DataDrivenRenderer(
        ::std::shared_ptr<::ActorResourceDefinition> definition,
        ::std::shared_ptr<::mce::TextureGroup>       textureGroup
    );

    MCNAPI void addAgentAdditionalRendering();

    MCNAPI void addBalloonAdditionalRendering();

    MCNAPI void addEnderCrystalAdditionalRendering();

    MCNAPI void addEnderDragonAdditionalRendering();

    MCNAPI void addEnderManAdditionalRendering(::BlockTessellator* blockTesselator);

    MCNAPI void addGuardianAdditionalRendering();

    MCNAPI void addHumanoidAdditionalRendering(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI void addIronGolemAdditionalRendering(::BlockTessellator* blockTesselator);

    MCNAPI void addMinecartAdditionalRendering(::BlockTessellator& commonBlockRenderer);

    MCNAPI void addMushroomCowAdditionalRendering(::BlockTessellator& commonBlockRenderer);

    MCNAPI void addSnowGolemAdditionalRendering(::BlockTessellator* blockTesselator);

    MCNAPI void addVexAdditionalRendering();

    MCNAPI void addVillagerAdditionalRendering();

    MCNAPI void addVillagerV2AdditionalRendering();

    MCNAPI void addWanderingTraderAdditionalRendering();

    MCNAPI void addWitchAdditionalRendering();

    MCNAPI bool armorHidden() const;

    MCNAPI bool attachablesEnabled() const;

    MCNAPI ::V2TempComponentRequirements getV2TempComponentRequirement() const;

    MCNAPI bool isAttachable() const;

    MCNAPI void renderModel(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData, ::Model&);

    MCNAPI void setupModel(
        ::ActorRenderData&        actorRenderData,
        ::BaseActorRenderContext* baseActorRenderContext,
        float                     actorFrameAlpha
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void getLeashOffsets(::Actor& actor, bool legacyOffset, ::Bedrock::small_vector_base<::Vec3>& output);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::shared_ptr<::ActorResourceDefinition> definition, ::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $getLeashOffsets(
        ::Actor& actor,
        float,
        float,
        float,
        bool                                  legacyOffset,
        ::Bedrock::small_vector_base<::Vec3>& output
    ) const;

    MCNAPI void $render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData);

    MCNAPI void $renderEffects(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData);

    MCNAPI ::AABB $getRenderBounds(::Actor const& entity) const;

    MCNAPI void $addAdditionalRenderingIfNeeded(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI void $setIsOnScreen(::Actor& actor, bool const isOnScreen, float distance) const;

    MCNAPI bool $shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams& renderParams) const;

    MCNAPI bool $shouldUpdateEffectsIfOffScreen(::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
