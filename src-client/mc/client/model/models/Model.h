#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseActorRenderContext;
class ClientPBRTextureData;
class DataDrivenGeometry;
class Mob;
class RenderController;
class RenderParams;
class ScreenContext;
struct MERSUniformData;
struct ModelPart;
namespace dragon { struct RenderMetadata; }
namespace mce { class MaterialPtr; }
namespace mce { struct ClientTexture; }
// clang-format on

class Model : public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkd6ffb4;
    ::ll::UntypedStorage<4, 4>  mUnk4a8c3a;
    ::ll::UntypedStorage<1, 1>  mUnk2d6e55;
    ::ll::UntypedStorage<1, 1>  mUnk9d6f48;
    ::ll::UntypedStorage<8, 24> mUnk565535;
    ::ll::UntypedStorage<8, 64> mUnka1f43e;
    ::ll::UntypedStorage<8, 64> mUnk46a001;
    ::ll::UntypedStorage<8, 24> mUnk52e0a6;
    ::ll::UntypedStorage<8, 24> mUnk2fa2b2;
    ::ll::UntypedStorage<8, 8>  mUnk8a72cc;
    ::ll::UntypedStorage<8, 32> mUnk37dfb5;
    // NOLINTEND

public:
    // prevent constructor by default
    Model& operator=(Model const&);
    Model(Model const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Model() /*override*/;

    // vIndex: 20
    virtual void clear();

    // vIndex: 4
    virtual void onAppSuspended() /*override*/;

    // vIndex: 21
    virtual void preDraw(::ScreenContext&);

    // vIndex: 22
    virtual void postDraw(::ScreenContext&);

    // vIndex: 26
    virtual void render(::ScreenContext&);

    // vIndex: 25
    virtual void render(::ScreenContext& screenContext, ::Actor&, float, float, float, float, float, float);

    // vIndex: 24
    virtual void render(::BaseActorRenderContext&);

    // vIndex: 23
    virtual void
    render(::BaseActorRenderContext& baseActorRenderContext, ::Actor&, float, float, float, float, float, float);

    // vIndex: 28
    virtual void setupAnim(float, float, float, float, float, float);

    // vIndex: 27
    virtual void setupAnim();

    // vIndex: 29
    virtual void prepareMobModel(::Mob&, float, float, float);

    // vIndex: 30
    virtual float getHeightAdjustment() const;

    // vIndex: 31
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
        ::ScreenContext&                          screenContext,
        ::dragon::RenderMetadata const&           renderMetadata,
        ::ClientPBRTextureData const&             textureData,
        ::std::optional<::MERSUniformData> const& mersUniforms
    );

    MCNAPI void prepareSkinning();

    MCNAPI void setModelMaterial(::mce::MaterialPtr const& materialPtr);
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

    MCNAPI void $render(::ScreenContext&);

    MCNAPI void $render(::ScreenContext& screenContext, ::Actor&, float, float, float, float, float, float);

    MCNAPI void $render(::BaseActorRenderContext&);

    MCNAPI void
    $render(::BaseActorRenderContext& baseActorRenderContext, ::Actor&, float, float, float, float, float, float);

    MCNAPI void $setupAnim(float, float, float, float, float, float);

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
