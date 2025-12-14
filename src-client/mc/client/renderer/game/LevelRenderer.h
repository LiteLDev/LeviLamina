#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class DataDrivenRenderer;
class Dimension;
class GeometryGroup;
class HashedString;
class IClientInstance;
class MinecraftGameplayGraphicsResources;
class MultiPlayerLevel;
class Options;
class ScreenContext;
class SoundPlayerInterface;
class Tessellator;
class TextureAtlas;
class WeakEntityRef;
struct ActorBlockSyncMessage;
struct ActorResourceDefinitionGroup;
struct BlockTessellator;
struct ClientFrameUpdateContext;
struct FrameRenderObject;
struct GameRenderer;
struct LevelRenderPreRenderUpdateParameters;
struct RenderChunkCoordinator;
struct ScreenshotOptions;
struct SoundMapping;
namespace cg { class ImageBuffer; }
namespace mce { class TextureGroup; }
// clang-format on

class LevelRenderer : public ::LevelListener, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>   mUnkbea99f;
    ::ll::UntypedStorage<8, 8>    mUnkb380ce;
    ::ll::UntypedStorage<8, 16>   mUnke4a957;
    ::ll::UntypedStorage<8, 16>   mUnk9d53c7;
    ::ll::UntypedStorage<8, 16>   mUnk40aa2f;
    ::ll::UntypedStorage<8, 16>   mUnkbcceea;
    ::ll::UntypedStorage<8, 16>   mUnkc65a99;
    ::ll::UntypedStorage<8, 16>   mUnk9a77ad;
    ::ll::UntypedStorage<8, 16>   mUnk4bf7c4;
    ::ll::UntypedStorage<8, 16>   mUnkb677c2;
    ::ll::UntypedStorage<8, 128>  mUnk5d5ee9;
    ::ll::UntypedStorage<8, 16>   mUnk71ebfe;
    ::ll::UntypedStorage<8, 32>   mUnkbbc181;
    ::ll::UntypedStorage<8, 32>   mUnk9bfb16;
    ::ll::UntypedStorage<8, 32>   mUnkde8b48;
    ::ll::UntypedStorage<8, 32>   mUnk190996;
    ::ll::UntypedStorage<8, 32>   mUnk1d6b2b;
    ::ll::UntypedStorage<8, 32>   mUnka077c6;
    ::ll::UntypedStorage<8, 24>   mUnk7729a8;
    ::ll::UntypedStorage<1, 1>    mUnkf50199;
    ::ll::UntypedStorage<8, 168>  mUnk3d1a10;
    ::ll::UntypedStorage<8, 8>    mUnkdff7f8;
    ::ll::UntypedStorage<8, 8>    mUnkd6382a;
    ::ll::UntypedStorage<8, 8>    mUnk13f3cf;
    ::ll::UntypedStorage<8, 24>   mUnkb2edd4;
    ::ll::UntypedStorage<8, 24>   mUnk99a6e0;
    ::ll::UntypedStorage<8, 16>   mUnk5f5f4e;
    ::ll::UntypedStorage<8, 8>    mUnk792e5f;
    ::ll::UntypedStorage<8, 8>    mUnk62856a;
    ::ll::UntypedStorage<8, 8>    mUnkf50ebb;
    ::ll::UntypedStorage<8, 8>    mUnkec6d67;
    ::ll::UntypedStorage<8, 16>   mUnk1320e1;
    ::ll::UntypedStorage<8, 8>    mUnk7a96cc;
    ::ll::UntypedStorage<8, 24>   mUnkae90c9;
    ::ll::UntypedStorage<8, 64>   mUnk31f3c3;
    ::ll::UntypedStorage<8, 16>   mUnk3e6b51;
    ::ll::UntypedStorage<8, 16>   mUnk8c07d0;
    ::ll::UntypedStorage<8, 16>   mUnkf4398c;
    ::ll::UntypedStorage<4, 4>    mUnk70933e;
    ::ll::UntypedStorage<8, 1464> mUnk40b2a6;
    ::ll::UntypedStorage<8, 8>    mUnk4d56ac;
    ::ll::UntypedStorage<4, 16>   mUnkac3f47;
    ::ll::UntypedStorage<8, 16>   mUnkf438c2;
    ::ll::UntypedStorage<8, 8>    mUnk3d299c;
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
    MCNAPI LevelRenderer(
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

    MCNAPI void _createMeshes(::Tessellator& tessellator);

    MCNAPI void _createParticleEngines();

    MCNAPI void _debugDrawClientSideChunkGenBlockDifferences();

    MCNAPI void _initDataDrivenRendererResources(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::DataDrivenRenderer>> const& renderers,
        ::MinecraftGameplayGraphicsResources&                                                graphicsResources
    );

    MCNAPI void _initPipelineTessellatorResources();

    MCNAPI void _initResources();

    MCNAPI void _resetMeshes();

    MCNAPI void _setLevelRendererCameras();

    MCNAPI void frameUpdate(::ClientFrameUpdateContext& clientFrameUpdateContext);

    MCNAPI ::BlockTessellator& getBlockRenderer();

    MCNAPI ::StackRefResult<::RenderChunkCoordinator> getRenderChunkCoordinator(::DimensionType dimID);

    MCNAPI void onDimensionChanged();

    MCNAPI void onOptionsChanged();

    MCNAPI void preRenderUpdate(
        ::ScreenContext&                        screenContext,
        ::LevelRenderPreRenderUpdateParameters& levelRenderPreRenderUpdateParameters
    );

    MCNAPI void rebuildAllDDRv2Geometry();

    MCNAPI void reinit(
        ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas const> const&                 terrainTexture,
        ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> const&                      geometryGroup,
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const> const& actorResourceDefinitionGroup
    );

    MCNAPI void renderLevel(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    MCNAPI void resetPointLightCoordinator();

    MCNAPI void tickLevelRenderer();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& Z_FAR_MIN();

    MCNAPI static float const& Z_NEAR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppSuspended();

    MCNAPI void $onAppResumed();

    MCNAPI void $onDeviceLost();

    MCNAPI void $onBlockChanged(
        ::BlockSource&                 source,
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget      eventTarget,
        ::Actor*                       blockChangeSource
    );

    MCNAPI void $takePicture(
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
