#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/BaseActorRenderer.h"
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderData;
class BaseActorRenderContext;
class Model;
class RenderParams;
class Vec2;
class Vec3;
struct ActorTextureInfo;
struct ActorUniqueID;
struct RopePoints;
namespace mce { class Mesh; }
namespace mce { class TextureGroup; }
// clang-format on

class ActorRenderer : public ::BaseActorRenderer, public ::std::enable_shared_from_this<::ActorRenderer> {
public:
    // ActorRenderer inner types declare
    // clang-format off
    struct LeashPins;
    // clang-format on

    // ActorRenderer inner types define
    struct LeashPins {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkadd485;
        ::ll::UntypedStorage<4, 12> mUnk9c3e04;
        ::ll::UntypedStorage<4, 12> mUnk95cfb7;
        ::ll::UntypedStorage<4, 12> mUnkc010bc;
        ::ll::UntypedStorage<4, 12> mUnk8a6402;
        // NOLINTEND

    public:
        // prevent constructor by default
        LeashPins& operator=(LeashPins const&);
        LeashPins(LeashPins const&);
        LeashPins();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mRenderingInventory;
    ::ll::TypedStorage<1, 1, bool const>                              mHasWaterHole;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                     mEntityAlphatestMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                     mEntityAlphatestGlintMaterial;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                      mGlintTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                      mAtlasTexture;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroup>> mTextureGroup;
    ::ll::TypedStorage<4, 24, ::AABB>                                 mBaseRenderBounds;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Model>>             mModel;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorRenderer() /*override*/;

    virtual void render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData) = 0;

    virtual void renderDebug(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    virtual void renderEffects(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData);

    virtual void renderLeash(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    virtual void renderWaterHole(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    virtual void addAdditionalRenderingIfNeeded(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    virtual ::AABB getRenderBounds(::Actor const& entity) const;

    virtual void getLeashOffsets(
        ::Actor&,
        float                                 yRot,
        float                                 yRotPrev,
        float                                 a,
        bool                                  legacyOffset,
        ::Bedrock::small_vector_base<::Vec3>& output
    ) const;

    virtual void setIsOnScreen(::Actor&, bool, float) const;

    virtual bool shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams& renderParams) const;

    virtual bool shouldUpdateEffectsIfOffScreen(::RenderParams& renderParams) const;

    virtual bool shouldHideHeldItems(::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorRenderer(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Vec2 const&                          renderDim,
        ::Vec3 const&                          renderDimOffset,
        bool                                   hasWaterHole
    );

    MCNAPI ActorRenderer(
        ::std::shared_ptr<::Model>             model,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Vec2 const&                          renderDim,
        ::Vec3 const&                          renderDimOffset,
        bool                                   hasWaterHole
    );

    MCAPI void renderGui(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _addLeashPinToOutput(
        ::Vec3 const&                                             fromLeashes,
        ::Vec3 const&                                             toLeashes,
        ::Actor const&                                            actor,
        ::Actor const*                                            roper,
        ::ActorUniqueID const                                     roperID,
        uint64 const                                              ropeIndex,
        float const                                               actorFrameAlpha,
        ::Bedrock::small_vector_base<::ActorRenderer::LeashPins>& output
    );

    MCNAPI static void _drawRopeRange(
        ::BaseActorRenderContext& renderContext,
        int                       begin,
        int                       end,
        ::Vec3 const&             basisX,
        ::Vec3 const&             basisY,
        ::Vec3 const&             deltaNorm,
        ::RopePoints const&       nodes,
        ::mce::TexturePtr&        tex,
        float                     a,
        ::Vec3*                   startPoint,
        ::Vec3*                   endPoint
    );

    MCNAPI static void _getLeashPins(
        float                                                     actorFrameAlpha,
        ::BaseActorRenderContext&                                 renderContext,
        ::Actor&                                                  actor,
        ::Bedrock::small_vector_base<::ActorRenderer::LeashPins>& output,
        ::Bedrock::small_vector_base<::Vec3>&                     leashFromOffsets
    );

    MCNAPI static bool isDitheringEnabled(::BaseActorRenderContext const& renderContext, ::Actor const& actor);

    MCNAPI static void renderDebugAttachPos(int renderAttachPos, ::Actor const& mob);

    MCNAPI static void renderFlame(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    MCNAPI static void renderLeash(
        ::BaseActorRenderContext&                                 renderContext,
        ::ActorRenderData&                                        entityRenderData,
        ::Bedrock::small_vector_base<::ActorRenderer::LeashPins>& allLeashPins
    );

    MCNAPI static void resetTextures();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec2 const& DEFAULT_RENDER_BOUNDS();

    MCNAPI static ::mce::MaterialPtr& mFlameMaterial();

    MCNAPI static ::mce::Mesh& mFlameMesh();

    MCNAPI static ::ActorTextureInfo& mFlameTexture();

    MCNAPI static ::mce::MaterialPtr& mLeashMat();

    MCNAPI static ::mce::TexturePtr& mLeashTexture();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Vec2 const&                          renderDim,
        ::Vec3 const&                          renderDimOffset,
        bool                                   hasWaterHole
    );

    MCNAPI void* $ctor(
        ::std::shared_ptr<::Model>             model,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Vec2 const&                          renderDim,
        ::Vec3 const&                          renderDimOffset,
        bool                                   hasWaterHole
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $renderDebug(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    MCNAPI void $renderEffects(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData);

    MCNAPI void $renderLeash(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    MCNAPI void $renderWaterHole(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    MCNAPI void $addAdditionalRenderingIfNeeded(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI ::AABB $getRenderBounds(::Actor const& entity) const;

    MCNAPI void $getLeashOffsets(
        ::Actor&,
        float                                 yRot,
        float                                 yRotPrev,
        float                                 a,
        bool                                  legacyOffset,
        ::Bedrock::small_vector_base<::Vec3>& output
    ) const;

    MCNAPI void $setIsOnScreen(::Actor&, bool, float) const;

    MCNAPI bool $shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams& renderParams) const;

    MCNAPI bool $shouldUpdateEffectsIfOffScreen(::RenderParams& renderParams) const;

    MCNAPI bool $shouldHideHeldItems(::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
