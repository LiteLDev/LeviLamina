#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialVariants.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
class ClientPBRTextureData;
class DataDrivenGeometry;
class ExpressionNode;
class Mob;
class ModelPart;
class ModelPartLocator;
class RenderController;
class RenderParams;
class ScreenContext;
struct ActorTextureInfo;
struct MERSUniformData;
namespace dragon { struct RenderMetadata; }
namespace mce { struct ClientTexture; }
// clang-format on

class Model : public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                                                   mLeashOffset;
    ::ll::TypedStorage<4, 4, float>                                                     mAttackTime;
    ::ll::TypedStorage<1, 1, bool>                                                      mYoung;
    ::ll::TypedStorage<1, 1, bool>                                                      mRiding;
    ::ll::TypedStorage<8, 24, ::std::vector<::ModelPart*>>                              mAllParts;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>>     mParticleEffectsMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ModelPartLocator>> mLocators;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::shared_ptr<::RenderController>, ::ExpressionNode>>>
                                                                                      mRenderControllers;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::DataDrivenGeometry>>> mGeometries;
    ::ll::TypedStorage<8, 8, uint64>                                                  mQueryableGeometryIndex;
    ::ll::TypedStorage<4, 24, ::AABB>                                                 mAABB;
    ::ll::TypedStorage<8, 32, ::MaterialVariants>                                     mMaterialVariants;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Model() /*override*/;

    virtual void clear();

    virtual void onAppSuspended() /*override*/;

    virtual void preDraw(::ScreenContext&);

    virtual void postDraw(::ScreenContext&);

    virtual void render(::ScreenContext& screenContext);

    virtual void render(
        ::ScreenContext& screenContext,
        ::Actor&         e,
        float            time,
        float            r,
        float            bob,
        float            yRot,
        float            xRot,
        float            scale
    );

    virtual void render(::BaseActorRenderContext&);

    virtual void
    render(::BaseActorRenderContext& baseActorRenderContext, ::Actor&, float, float, float, float, float, float);

    virtual void setupAnim(float time, float r, float bob, float yRot, float xRot, float scale);

    virtual void setupAnim();

    virtual void prepareMobModel(::Mob&, float, float, float);

    virtual float getHeightAdjustment() const;

    virtual ::AABB buildAABB() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Model();

    MCNAPI void assignPartToGroup(
        ::ModelPart&          part,
        bool                  forceToUniqueGroup,
        int                   skinnedMeshGroupIdentifier,
        ::DataDrivenGeometry* owningGeometry
    );

    MCNAPI void dataDrivenDraw(
        ::RenderParams&                            renderParams,
        ::dragon::RenderMetadata const&            renderMetadata,
        ::gsl::not_null<::RenderController const*> renderController,
        ::DataDrivenGeometry&                      geo,
        ::ClientPBRTextureData const&              textureData,
        ::std::optional<::MERSUniformData> const&  mersUniforms
    );

    MCNAPI void draw(
        ::ScreenContext&                screenContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::mce::ClientTexture const&     texture
    );

    MCNAPI void draw(
        ::ScreenContext&                screenContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ActorTextureInfo const&       textureInfo
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $clear();

    MCNAPI void $onAppSuspended();

    MCNAPI void $preDraw(::ScreenContext&);

    MCNAPI void $postDraw(::ScreenContext&);

    MCNAPI void $render(::ScreenContext& screenContext);

    MCNAPI void $render(
        ::ScreenContext& screenContext,
        ::Actor&         e,
        float            time,
        float            r,
        float            bob,
        float            yRot,
        float            xRot,
        float            scale
    );

    MCNAPI void $render(::BaseActorRenderContext&);

    MCNAPI void
    $render(::BaseActorRenderContext& baseActorRenderContext, ::Actor&, float, float, float, float, float, float);

    MCNAPI void $setupAnim(float time, float r, float bob, float yRot, float xRot, float scale);

    MCNAPI void $setupAnim();

    MCNAPI void $prepareMobModel(::Mob&, float, float, float);

    MCNAPI float $getHeightAdjustment() const;

    MCNAPI ::AABB $buildAABB() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
