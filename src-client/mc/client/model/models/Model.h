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
namespace mce { class MaterialPtr; }
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

    virtual void render(::ScreenContext&);

    virtual void render(::ScreenContext& screenContext, ::Actor&, float, float, float, float, float, float);

    virtual void render(::BaseActorRenderContext&);

    virtual void
    render(::BaseActorRenderContext& baseActorRenderContext, ::Actor&, float, float, float, float, float, float);

    virtual void setupAnim(float, float, float, float, float, float);

    virtual void setupAnim();

    virtual void prepareMobModel(::Mob&, float, float, float);

    virtual float getHeightAdjustment() const;

    virtual ::AABB buildAABB() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Model();

    MCAPI void assignPartToGroup(
        ::ModelPart&          part,
        bool                  forceToUniqueGroup,
        int                   skinnedMeshGroupIdentifier,
        ::DataDrivenGeometry* owningGeometry
    );

    MCAPI void dataDrivenDraw(
        ::RenderParams&                            renderParams,
        ::dragon::RenderMetadata const&            renderMetadata,
        ::gsl::not_null<::RenderController const*> renderController,
        ::DataDrivenGeometry&                      geo,
        ::ClientPBRTextureData const&              textureData,
        ::std::optional<::MERSUniformData> const&  mersUniforms
    );

    MCAPI void draw(
        ::ScreenContext&                screenContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::mce::ClientTexture const&     texture
    );

    MCAPI void draw(
        ::ScreenContext&                screenContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ActorTextureInfo const&       textureInfo
    );

    MCAPI void draw(
        ::ScreenContext&                          screenContext,
        ::dragon::RenderMetadata const&           renderMetadata,
        ::ClientPBRTextureData const&             textureData,
        ::std::optional<::MERSUniformData> const& mersUniforms
    );

    MCAPI void prepareSkinning();

    MCAPI void setModelMaterial(::mce::MaterialPtr const& materialPtr);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $clear();

    MCFOLD void $onAppSuspended();

    MCFOLD void $preDraw(::ScreenContext&);

    MCFOLD void $postDraw(::ScreenContext&);

    MCFOLD void $render(::ScreenContext&);

    MCAPI void $render(::ScreenContext& screenContext, ::Actor&, float, float, float, float, float, float);

    MCFOLD void $render(::BaseActorRenderContext&);

    MCFOLD void
    $render(::BaseActorRenderContext& baseActorRenderContext, ::Actor&, float, float, float, float, float, float);

    MCFOLD void $setupAnim(float, float, float, float, float, float);

    MCFOLD void $setupAnim();

    MCFOLD void $prepareMobModel(::Mob&, float, float, float);

    MCAPI float $getHeightAdjustment() const;

    MCAPI ::AABB $buildAABB() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
