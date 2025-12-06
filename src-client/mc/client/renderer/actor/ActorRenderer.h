#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/BaseActorRenderer.h"
#include "mc/deps/core/container/small_vector_base.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseActorRenderContext;
class Model;
class RenderParams;
class Tessellator;
class Vec2;
class Vec3;
struct ActorRenderData;
struct ActorTextureInfo;
struct ActorUniqueID;
struct NameTagRenderObject;
struct RopePoints;
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
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
    ::ll::UntypedStorage<1, 1>  mUnk43ebd3;
    ::ll::UntypedStorage<1, 1>  mUnkf4e21f;
    ::ll::UntypedStorage<8, 16> mUnkb54757;
    ::ll::UntypedStorage<8, 16> mUnk97b128;
    ::ll::UntypedStorage<8, 32> mUnkc979f8;
    ::ll::UntypedStorage<8, 32> mUnk7606b9;
    ::ll::UntypedStorage<8, 16> mUnk4ab096;
    ::ll::UntypedStorage<4, 24> mUnka2cd17;
    ::ll::UntypedStorage<8, 16> mUnk966cb5;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRenderer& operator=(ActorRenderer const&);
    ActorRenderer(ActorRenderer const&);
    ActorRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorRenderer() /*override*/;

    // vIndex: 2
    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&) = 0;

    // vIndex: 3
    virtual void renderDebug(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    // vIndex: 4
    virtual void renderEffects(::BaseActorRenderContext&, ::ActorRenderData&);

    // vIndex: 5
    virtual void renderLeash(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    // vIndex: 6
    virtual void renderWaterHole(::BaseActorRenderContext&, ::ActorRenderData&);

    // vIndex: 7
    virtual void addAdditionalRenderingIfNeeded(::std::shared_ptr<::mce::TextureGroup>);

    // vIndex: 8
    virtual ::AABB getRenderBounds(::Actor const& entity) const;

    // vIndex: 9
    virtual void getLeashOffsets(
        ::Actor&,
        float                                 yRot,
        float                                 yRotPrev,
        float                                 a,
        bool                                  legacyOffset,
        ::Bedrock::small_vector_base<::Vec3>& output
    ) const;

    // vIndex: 10
    virtual void setIsOnScreen(::Actor&, bool const, float) const;

    // vIndex: 11
    virtual bool shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams&) const;

    // vIndex: 12
    virtual bool shouldUpdateEffectsIfOffScreen(::RenderParams&) const;
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

    MCNAPI ::std::vector<::NameTagRenderObject> extractText(
        ::Tessellator&            tessellator,
        ::Actor const&            entity,
        ::std::string const&      str,
        ::std::vector<int> const& widths,
        ::Vec3                    camTargetPos,
        float                     a,
        ::mce::Color              color
    );

    MCNAPI ::mce::TexturePtr getAtlasTexture();

    MCNAPI void renderGui(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData);

    MCNAPI void setBaseRenderBounds(::Vec2 const& dims, ::Vec3 const& offset);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _addLeashPinToOutput(
        ::Vec3 const&                                             fromLeashes,
        ::Vec3 const&                                             toLeashes,
        ::Actor const&                                            actor,
        ::Actor const*                                            roper,
        ::ActorUniqueID                                           roperID,
        uint64                                                    ropeIndex,
        float                                                     actorFrameAlpha,
        ::Bedrock::small_vector_base<::ActorRenderer::LeashPins>& output
    );

    MCNAPI static void _buildFlameMesh(::Tessellator& tessellator, ::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI static void _drawClassicLeash(
        ::BaseActorRenderContext& renderContext,
        ::Vec3 const&             ropeStart,
        ::Vec3 const&             delta,
        ::mce::TexturePtr&        tex
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

    MCNAPI void $renderEffects(::BaseActorRenderContext&, ::ActorRenderData&);

    MCNAPI void $renderLeash(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    MCNAPI void $renderWaterHole(::BaseActorRenderContext&, ::ActorRenderData&);

    MCNAPI void $addAdditionalRenderingIfNeeded(::std::shared_ptr<::mce::TextureGroup>);

    MCNAPI ::AABB $getRenderBounds(::Actor const& entity) const;

    MCNAPI void $getLeashOffsets(
        ::Actor&,
        float                                 yRot,
        float                                 yRotPrev,
        float                                 a,
        bool                                  legacyOffset,
        ::Bedrock::small_vector_base<::Vec3>& output
    ) const;

    MCNAPI void $setIsOnScreen(::Actor&, bool const, float) const;

    MCNAPI bool $shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams&) const;

    MCNAPI bool $shouldUpdateEffectsIfOffScreen(::RenderParams&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
