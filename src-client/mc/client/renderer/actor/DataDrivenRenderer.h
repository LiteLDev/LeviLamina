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
class BaseActorRenderContext;
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
    // virtual functions
    // NOLINTBEGIN
    virtual void getLeashOffsets(::Actor&, float, float, float, bool, ::Bedrock::small_vector_base<::Vec3>&) const
        /*override*/;

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&) /*override*/;

    virtual void renderEffects(::BaseActorRenderContext&, ::ActorRenderData&) /*override*/;

    virtual ::AABB getRenderBounds(::Actor const& entity) const /*override*/;

    virtual void addAdditionalRenderingIfNeeded(::std::shared_ptr<::mce::TextureGroup>) /*override*/;

    virtual void setIsOnScreen(::Actor&, bool const, float) const /*override*/;

    virtual bool shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams&) const /*override*/;

    virtual bool shouldUpdateEffectsIfOffScreen(::RenderParams&) const /*override*/;

    virtual bool shouldHideHeldItems(::RenderParams&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void getLeashOffsets(::Actor& actor, bool legacyOffset, ::Bedrock::small_vector_base<::Vec3>& output);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
