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
class Tessellator;
class Vec2;
class Vec3;
struct ActorTextureInfo;
struct ActorUniqueID;
struct NameTagRenderObject;
struct RopePoints;
namespace mce { class Color; }
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

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&) = 0;

    virtual void renderDebug(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    virtual void renderEffects(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual void renderLeash(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    virtual void renderWaterHole(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual void addAdditionalRenderingIfNeeded(::std::shared_ptr<::mce::TextureGroup>);

    virtual ::AABB getRenderBounds(::Actor const& entity) const;

    virtual void getLeashOffsets(
        ::Actor&,
        float                                 yRot,
        float                                 yRotPrev,
        float                                 a,
        bool                                  legacyOffset,
        ::Bedrock::small_vector_base<::Vec3>& output
    ) const;

    virtual void setIsOnScreen(::Actor&, bool const, float) const;

    virtual bool shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams&) const;

    virtual bool shouldUpdateEffectsIfOffScreen(::RenderParams&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorRenderer(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Vec2 const&                          renderDim,
        ::Vec3 const&                          renderDimOffset,
        bool                                   hasWaterHole
    );

    MCAPI ActorRenderer(
        ::std::shared_ptr<::Model>             model,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Vec2 const&                          renderDim,
        ::Vec3 const&                          renderDimOffset,
        bool                                   hasWaterHole
    );

    MCAPI ::std::vector<::NameTagRenderObject> extractText(
        ::Tessellator&            tessellator,
        ::Actor const&            entity,
        ::std::string const&      str,
        ::std::vector<int> const& widths,
        ::Vec3                    camTargetPos,
        float                     a,
        ::mce::Color              color
    );

    MCAPI ::mce::TexturePtr getAtlasTexture();

    MCAPI void renderGui(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData);

    MCAPI void setBaseRenderBounds(::Vec2 const& dims, ::Vec3 const& offset);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _addLeashPinToOutput(
        ::Vec3 const&                                             fromLeashes,
        ::Vec3 const&                                             toLeashes,
        ::Actor const&                                            actor,
        ::Actor const*                                            roper,
        ::ActorUniqueID                                           roperID,
        uint64                                                    ropeIndex,
        float                                                     actorFrameAlpha,
        ::Bedrock::small_vector_base<::ActorRenderer::LeashPins>& output
    );

    MCAPI static void _buildFlameMesh(::Tessellator& tessellator, ::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI static void _drawClassicLeash(
        ::BaseActorRenderContext& renderContext,
        ::Vec3 const&             ropeStart,
        ::Vec3 const&             delta,
        ::mce::TexturePtr&        tex
    );

    MCAPI static void _drawRopeRange(
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

    MCAPI static void _getLeashPins(
        float                                                     actorFrameAlpha,
        ::BaseActorRenderContext&                                 renderContext,
        ::Actor&                                                  actor,
        ::Bedrock::small_vector_base<::ActorRenderer::LeashPins>& output,
        ::Bedrock::small_vector_base<::Vec3>&                     leashFromOffsets
    );

    MCAPI static bool isDitheringEnabled(::BaseActorRenderContext const& renderContext, ::Actor const& actor);

    MCAPI static void renderDebugAttachPos(int renderAttachPos, ::Actor const& mob);

    MCAPI static void renderFlame(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    MCAPI static void renderLeash(
        ::BaseActorRenderContext&                                 renderContext,
        ::ActorRenderData&                                        entityRenderData,
        ::Bedrock::small_vector_base<::ActorRenderer::LeashPins>& allLeashPins
    );

    MCAPI static void resetTextures();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec2 const& DEFAULT_RENDER_BOUNDS();

    MCAPI static ::mce::MaterialPtr& mFlameMaterial();

    MCAPI static ::mce::Mesh& mFlameMesh();

    MCAPI static ::ActorTextureInfo& mFlameTexture();

    MCAPI static ::mce::MaterialPtr& mLeashMat();

    MCAPI static ::mce::TexturePtr& mLeashTexture();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Vec2 const&                          renderDim,
        ::Vec3 const&                          renderDimOffset,
        bool                                   hasWaterHole
    );

    MCAPI void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $renderDebug(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    MCFOLD void $renderEffects(::BaseActorRenderContext&, ::ActorRenderData&);

    MCAPI void $renderLeash(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    MCFOLD void $renderWaterHole(::BaseActorRenderContext&, ::ActorRenderData&);

    MCFOLD void $addAdditionalRenderingIfNeeded(::std::shared_ptr<::mce::TextureGroup>);

    MCAPI ::AABB $getRenderBounds(::Actor const& entity) const;

    MCAPI void $getLeashOffsets(
        ::Actor&,
        float                                 yRot,
        float                                 yRotPrev,
        float                                 a,
        bool                                  legacyOffset,
        ::Bedrock::small_vector_base<::Vec3>& output
    ) const;

    MCFOLD void $setIsOnScreen(::Actor&, bool const, float) const;

    MCFOLD bool $shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams&) const;

    MCFOLD bool $shouldUpdateEffectsIfOffScreen(::RenderParams&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
