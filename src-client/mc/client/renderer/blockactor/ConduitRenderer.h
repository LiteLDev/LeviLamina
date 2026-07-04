#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class BlockActor;
class ConduitBaseModel;
class ConduitCageModel;
class ConduitWindModel;
struct BlockActorRenderData;
namespace dragon { struct RenderMetadata; }
namespace mce { class TextureGroup; }
// clang-format on

class ConduitRenderer : public ::BlockActorRenderer, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                    mGuiMaterial;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>               mBaseTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>               mShellTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>               mWindTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>               mWindTextureVertical;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>               mCoreTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>               mActiveCoreTexture;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ConduitBaseModel>> mModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConduitCageModel>>  mCage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConduitWindModel>>  mOuterWind;
    ::ll::TypedStorage<8, 552, ::mce::Mesh>                          mHeartMesh;
    // NOLINTEND

public:
    // prevent constructor by default
    ConduitRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConduitRenderer() /*override*/;

    virtual void onAppSuspended() /*override*/;

    virtual void
    render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ConduitRenderer(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void renderInGui(
        ::BaseActorRenderContext&       renderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::BlockActor&                   entity,
        float                           x,
        float                           y,
        float                           scale,
        float                           lightMultiplier
    );

    MCAPI void renderInHand(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onAppSuspended();

    MCAPI void $render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForAppPlatformListener();

    MCNAPI static void** $vftableForBlockActorRenderer();
    // NOLINTEND
};
