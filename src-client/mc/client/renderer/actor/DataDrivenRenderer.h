#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorRenderData;
class ActorResourceDefinition;
class BaseActorRenderContext;
class BlockTessellator;
class DataDrivenRenderer_tempComponent;
class RenderParams;
class Vec3;
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
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mHideHeldItems;
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

    virtual bool shouldHideHeldItems(::RenderParams& renderParams) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addGuardianAdditionalRendering();

    MCAPI void addHumanoidAdditionalRendering(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void addMinecartAdditionalRendering(::BlockTessellator& commonBlockRenderer);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void getLeashOffsets(::Actor& actor, bool legacyOffset, ::Bedrock::small_vector_base<::Vec3>& output);
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

    MCAPI bool $shouldHideHeldItems(::RenderParams& renderParams) const;
    // NOLINTEND
};
