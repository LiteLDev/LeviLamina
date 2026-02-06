#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/debug/DebugRenderer.h"
#include "mc/client/renderer/game/LevelBuilder.h"
#include "mc/client/renderer/game/ShadowCascadeState.h"
#include "mc/client/renderer/scripting/Renderer.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class BlockTessellator;
class DataDrivenRendererV2RequiredData;
class Dimension;
class GameRenderer;
class GeometryEditorGui;
class IClientInstance;
class LevelRendererPlayer;
class LevelRendererProxy;
class LevelRendererShadowCamera;
class Options;
class ParticleEngine;
class ParticleSystemEngine;
class ScreenContext;
class SoundPlayerInterface;
class TaskGroup;
class Tessellator;
class TextureAtlas;
struct ActorBlockSyncMessage;
struct ActorResourceDefinitionGroup;
struct BlockActorRenderDispatcher;
struct ClientFrameUpdateContext;
struct FrameRenderObject;
struct GeometryGroup;
struct LevelRenderPreRenderUpdateParameters;
struct MultiPlayerLevel;
struct PlayerRenderView;
struct RenderChunkCoordinator;
struct ScreenshotOptions;
struct SoundMapping;
namespace PointLighting { struct PointLightCoordinator; }
namespace cg { class ImageBuffer; }
namespace mce { class Mesh; }
namespace mce { class TextureGroup; }
// clang-format on

class LevelRenderer : public ::LevelListener, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::DimensionType, ::OwnerPtr<::RenderChunkCoordinator>>>
                                                                                        mRenderChunkCoordinators;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PointLighting::PointLightCoordinator>> mPointLightCoordinator;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroup>>                   mTextureGroup;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>>                           mShadowCylinder;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>>                           mShadowOverlayCube;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>>                           mShadowDisc;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>>                           mSkyMesh;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>>                           mStarsMesh;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>>                           mEndSkyMesh;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>>                           mSunMesh;
    ::ll::TypedStorage<8, 128, ::std::shared_ptr<::mce::Mesh>[8]>                       mMoonMesh;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>>                           mNameplateBackgroundMesh;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                        mAtlasTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                        mBrightnessTex;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                        mSunTex;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                        mSunTexVibrantVisuals;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                        mMoonTex;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                        mEndSkyTex;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::TexturePtr>>                         mCrackFrames;
    ::ll::TypedStorage<1, 1, ::DebugRenderer>                                           mDebugRenderer;
    ::ll::TypedStorage<8, 168, ::Scripting::RenderHelper::Renderer>                     mScriptDebugRenderer;
    ::ll::TypedStorage<8, 8, ::Tick>                                                    mTicks;
    ::ll::TypedStorage<8, 8, ::BlockActorRenderDispatcher&>                             mBlockEntityRenderDispatcher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTessellator>>                     mLocalRenderer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ParticleEngine>>             mParticleEngine;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ParticleSystemEngine>>       mParticleSystemEngine;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryEditorGui>>                   mGeometryEditorGui;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                            mTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                            mSyncTaskGroup;
    ::ll::TypedStorage<8, 8, ::GameRenderer&>                                           mGameRenderer;
    ::ll::TypedStorage<8, 8, ::MultiPlayerLevel&>                                       mLevel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Options>>                             mOptions;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                        mClientInstance;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                                          mLocalUser;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                  mReleaseParticleSystemInterfaceProxyCallback;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelRendererPlayer>> mLevelRendererPlayer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelRendererShadowCamera>>       mLevelRendererShadowCamera;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelRendererShadowCamera>>       mLevelRendererCloudShadowCamera;
    ::ll::TypedStorage<4, 4, ::ShadowCascadeState>                                  mShadowCascadeState;
    ::ll::TypedStorage<8, 1464, ::LevelBuilder>                                     mLevelBuilder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelRendererProxy>>               mProxy;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                         mClearBufferColor;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::PlayerRenderView>>                  mPlayerView;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DataDrivenRendererV2RequiredData>> mDataDrivenRendererV2RequiredData;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRenderer& operator=(LevelRenderer const&);
    LevelRenderer(LevelRenderer const&);
    LevelRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelRenderer() /*override*/;

    virtual void onAppSuspended() /*override*/;

    virtual void onAppResumed() /*override*/;

    virtual void onDeviceLost() /*override*/;

    virtual void onLowMemory(::LowMemorySeverity) /*override*/;

    virtual void onBlockChanged(
        ::BlockSource&                 source,
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget      eventTarget,
        ::Actor*                       blockChangeSource
    ) /*override*/;

    virtual void takePicture(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelRenderer(
        ::IClientInstance&                                                         clientInstance,
        ::MultiPlayerLevel&                                                        level,
        ::std::shared_ptr<::Options>                                               options,
        ::std::shared_ptr<::mce::TextureGroup>                                     textureGroup,
        ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas const> const&                 terrainTexture,
        ::WeakEntityRef                                                            localUser,
        ::GameRenderer&                                                            gameRenderer,
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> const&               soundPlayer,
        ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> const&                      geometryGroup,
        ::SoundMapping const&                                                      sounds,
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const> const& actorResourceDefinitionGroup
    );

    MCAPI void _createMeshes(::Tessellator& tessellator);

    MCAPI void _createParticleEngines();

    MCAPI void _debugDrawClientSideChunkGenBlockDifferences();

    MCAPI void _initPipelineTessellatorResources();

    MCAPI void _initResources();

    MCAPI void _resetMeshes();

    MCAPI void _setLevelRendererCameras();

    MCAPI void frameUpdate(::ClientFrameUpdateContext& clientFrameUpdateContext);

    MCAPI ::BlockTessellator& getBlockRenderer();

    MCAPI ::StackRefResult<::RenderChunkCoordinator> getRenderChunkCoordinator(::DimensionType dimID);

    MCAPI void onDimensionChanged();

    MCAPI void onOptionsChanged();

    MCAPI void preRenderUpdate(
        ::ScreenContext&                        screenContext,
        ::LevelRenderPreRenderUpdateParameters& levelRenderPreRenderUpdateParameters
    );

    MCAPI void rebuildAllDDRv2Geometry();

    MCAPI void reinit(
        ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas const> const&                 terrainTexture,
        ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> const&                      geometryGroup,
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const> const& actorResourceDefinitionGroup
    );

    MCAPI void renderLevel(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    MCAPI void resetPointLightCoordinator();

    MCAPI void tickLevelRenderer();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& Z_FAR_MIN();

    MCAPI static float const& Z_NEAR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IClientInstance&                                                         clientInstance,
        ::MultiPlayerLevel&                                                        level,
        ::std::shared_ptr<::Options>                                               options,
        ::std::shared_ptr<::mce::TextureGroup>                                     textureGroup,
        ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas const> const&                 terrainTexture,
        ::WeakEntityRef                                                            localUser,
        ::GameRenderer&                                                            gameRenderer,
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> const&               soundPlayer,
        ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> const&                      geometryGroup,
        ::SoundMapping const&                                                      sounds,
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const> const& actorResourceDefinitionGroup
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
    MCAPI void $onAppSuspended();

    MCAPI void $onAppResumed();

    MCAPI void $onDeviceLost();

    MCAPI void $takePicture(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForLevelListener();

    MCNAPI static void** $vftableForAppPlatformListener();
    // NOLINTEND
};
