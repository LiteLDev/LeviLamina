#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/minecraft_renderer/game/LevelCullerType.h"
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/util/GridArea.h"
#include "mc/world/level/FogDefinition.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseActorRenderContext;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ChunkPos;
class Dimension;
class Level;
class LevelRenderer;
class Player;
class ScreenContext;
class SubChunkPos;
class Vec3;
struct BaseSceneDirectionalLightRenderData;
struct ChunkRenderObjectCollection;
struct ClientFrameUpdateContext;
struct CrackRenderObjectCollection;
struct FogDistanceSetting;
struct FogTransitionSetting;
struct FogVolumetricCoefficientSetting;
struct FogVolumetricDensitySetting;
struct FogVolumetricHenyeyGreensteinGSetting;
struct Font;
struct IClientInstance;
struct LevelBuilder;
struct LevelCullerBase;
struct LevelRenderPreRenderUpdateParameters;
struct NameTagRenderObjectCollection;
struct RenderChunkInstanced;
struct RenderChunkShared;
struct SkyRenderObject;
struct TerrainLayer;
struct TerrainMaterialVariationManager;
struct ViewRenderData;
struct ViewRenderObject;
// clang-format on

class LevelRendererCamera {
public:
    // LevelRendererCamera inner types declare
    // clang-format off
    struct FogBrightnessPair;
    struct FogBrightnessParams;
    struct LevelRendererDebugInformation;
    struct LimitedActorRenderParams;
    struct PlayerStateParams;
    struct RainState;
    struct RenderChunkPosBounds;
    // clang-format on

    // LevelRendererCamera inner types define
    struct LevelRendererDebugInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>  mUnk4424c4;
        ::ll::UntypedStorage<8, 24>  mUnkf2f515;
        ::ll::UntypedStorage<8, 512> mUnk15d19b;
        ::ll::UntypedStorage<4, 12>  mUnk90d2e4;
        ::ll::UntypedStorage<8, 24>  mUnkf4b106;
        ::ll::UntypedStorage<8, 24>  mUnk57b3d2;
        ::ll::UntypedStorage<4, 4>   mUnk4db8d6;
        // NOLINTEND

    public:
        // prevent constructor by default
        LevelRendererDebugInformation& operator=(LevelRendererDebugInformation const&);
        LevelRendererDebugInformation(LevelRendererDebugInformation const&);
        LevelRendererDebugInformation();
    };

    struct RainState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkfb5c53;
        ::ll::UntypedStorage<4, 4>  mUnk118fe9;
        ::ll::UntypedStorage<4, 4>  mUnkb3862b;
        ::ll::UntypedStorage<4, 4>  mUnk9a8cff;
        ::ll::UntypedStorage<4, 4>  mUnk6274da;
        ::ll::UntypedStorage<8, 24> mUnk101ffe;
        ::ll::UntypedStorage<8, 24> mUnkb11cf5;
        // NOLINTEND

    public:
        // prevent constructor by default
        RainState& operator=(RainState const&);
        RainState(RainState const&);
        RainState();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::LevelRendererCamera::RainState& operator=(::LevelRendererCamera::RainState&&);

        MCNAPI ~RainState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct FogBrightnessPair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkb45339;
        ::ll::UntypedStorage<4, 4> mUnk58f832;
        // NOLINTEND

    public:
        // prevent constructor by default
        FogBrightnessPair& operator=(FogBrightnessPair const&);
        FogBrightnessPair(FogBrightnessPair const&);
        FogBrightnessPair();
    };

    struct FogBrightnessParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk747be1;
        ::ll::UntypedStorage<1, 1>  mUnkbe7156;
        ::ll::UntypedStorage<4, 8>  mUnk140f8b;
        ::ll::UntypedStorage<4, 12> mUnk4d78b0;
        ::ll::UntypedStorage<8, 8>  mUnk1a6946;
        // NOLINTEND

    public:
        // prevent constructor by default
        FogBrightnessParams& operator=(FogBrightnessParams const&);
        FogBrightnessParams(FogBrightnessParams const&);
        FogBrightnessParams();
    };

    struct PlayerStateParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkdb53d8;
        ::ll::UntypedStorage<8, 8> mUnk4c97ca;
        ::ll::UntypedStorage<1, 1> mUnk15539d;
        ::ll::UntypedStorage<1, 1> mUnk3d37ab;
        ::ll::UntypedStorage<1, 1> mUnk27b01d;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayerStateParams& operator=(PlayerStateParams const&);
        PlayerStateParams(PlayerStateParams const&);
        PlayerStateParams();
    };

    struct LimitedActorRenderParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnka2770b;
        ::ll::UntypedStorage<4, 4> mUnkc67bf3;
        ::ll::UntypedStorage<4, 4> mUnk39d226;
        // NOLINTEND

    public:
        // prevent constructor by default
        LimitedActorRenderParams& operator=(LimitedActorRenderParams const&);
        LimitedActorRenderParams(LimitedActorRenderParams const&);
        LimitedActorRenderParams();
    };

    struct RenderChunkPosBounds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk985716;
        ::ll::UntypedStorage<4, 12> mUnkb03afc;
        // NOLINTEND

    public:
        // prevent constructor by default
        RenderChunkPosBounds& operator=(RenderChunkPosBounds const&);
        RenderChunkPosBounds(RenderChunkPosBounds const&);
        RenderChunkPosBounds();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk617fb8;
    ::ll::UntypedStorage<8, 456> mUnkf4f5be;
    ::ll::UntypedStorage<8, 24>  mUnkf417e3;
    ::ll::UntypedStorage<8, 24>  mUnk26a5ea;
    ::ll::UntypedStorage<8, 56>  mUnkb4b419;
    ::ll::UntypedStorage<8, 24>  mUnk3c473a;
    ::ll::UntypedStorage<8, 24>  mUnk2e2335;
    ::ll::UntypedStorage<8, 24>  mUnkb996f1;
    ::ll::UntypedStorage<8, 24>  mUnk1962fe;
    ::ll::UntypedStorage<8, 16>  mUnkf0e27f;
    ::ll::UntypedStorage<8, 16>  mUnked50e8;
    ::ll::UntypedStorage<8, 16>  mUnk41ddff;
    ::ll::UntypedStorage<8, 16>  mUnkb23629;
    ::ll::UntypedStorage<8, 16>  mUnk3060ef;
    ::ll::UntypedStorage<8, 16>  mUnke988b1;
    ::ll::UntypedStorage<8, 16>  mUnkea0b15;
    ::ll::UntypedStorage<8, 16>  mUnk769b22;
    ::ll::UntypedStorage<8, 16>  mUnk5d7f41;
    ::ll::UntypedStorage<8, 16>  mUnk59d899;
    ::ll::UntypedStorage<8, 24>  mUnk8399eb;
    ::ll::UntypedStorage<8, 24>  mUnk521887;
    ::ll::UntypedStorage<8, 8>   mUnk6b0c9c;
    ::ll::UntypedStorage<8, 56>  mUnk31a87d;
    ::ll::UntypedStorage<8, 136> mUnkdd7caa;
    ::ll::UntypedStorage<4, 4>   mUnk3a1651;
    ::ll::UntypedStorage<4, 4>   mUnk405c5f;
    ::ll::UntypedStorage<4, 4>   mUnk416b55;
    ::ll::UntypedStorage<4, 8>   mUnkc3ee2e;
    ::ll::UntypedStorage<4, 4>   mUnka4a78d;
    ::ll::UntypedStorage<4, 4>   mUnk7e444b;
    ::ll::UntypedStorage<4, 8>   mUnkefef34;
    ::ll::UntypedStorage<4, 8>   mUnk8749ec;
    ::ll::UntypedStorage<4, 28>  mUnkf94c1d;
    ::ll::UntypedStorage<4, 28>  mUnk376382;
    ::ll::UntypedStorage<4, 16>  mUnkc2f44d;
    ::ll::UntypedStorage<4, 32>  mUnk7fed10;
    ::ll::UntypedStorage<4, 32>  mUnk3f7cbc;
    ::ll::UntypedStorage<4, 32>  mUnkd05fe5;
    ::ll::UntypedStorage<4, 4>   mUnkfe0eed;
    ::ll::UntypedStorage<4, 4>   mUnk3f3784;
    ::ll::UntypedStorage<1, 1>   mUnk65e2e6;
    ::ll::UntypedStorage<1, 1>   mUnke6ca9a;
    ::ll::UntypedStorage<1, 1>   mUnk1b29f6;
    ::ll::UntypedStorage<1, 1>   mUnkf7eaa6;
    ::ll::UntypedStorage<4, 4>   mUnk164bc9;
    ::ll::UntypedStorage<8, 224> mUnk9eaf57;
    ::ll::UntypedStorage<4, 4>   mUnkc739ed;
    ::ll::UntypedStorage<1, 1>   mUnk739602;
    ::ll::UntypedStorage<4, 4>   mUnkbebec2;
    ::ll::UntypedStorage<4, 4>   mUnk9290f7;
    ::ll::UntypedStorage<4, 4>   mUnk734efb;
    ::ll::UntypedStorage<4, 4>   mUnkd381fc;
    ::ll::UntypedStorage<4, 4>   mUnkb76067;
    ::ll::UntypedStorage<4, 4>   mUnk3107f8;
    ::ll::UntypedStorage<4, 4>   mUnkaecf89;
    ::ll::UntypedStorage<4, 4>   mUnke2d462;
    ::ll::UntypedStorage<4, 4>   mUnk848699;
    ::ll::UntypedStorage<8, 16>  mUnkc64188;
    ::ll::UntypedStorage<4, 12>  mUnk49c1eb;
    ::ll::UntypedStorage<4, 12>  mUnke15538;
    ::ll::UntypedStorage<4, 12>  mUnke22d0f;
    ::ll::UntypedStorage<4, 12>  mUnk43ad36;
    ::ll::UntypedStorage<4, 24>  mUnk30ea4e;
    ::ll::UntypedStorage<4, 12>  mUnk6c5dba;
    ::ll::UntypedStorage<4, 12>  mUnk78f446;
    ::ll::UntypedStorage<4, 12>  mUnkab8b69;
    ::ll::UntypedStorage<4, 204> mUnk96ccd2;
    ::ll::UntypedStorage<1, 1>   mUnkf00c21;
    ::ll::UntypedStorage<8, 512> mUnkfb412d;
    ::ll::UntypedStorage<8, 24>  mUnkac8f93;
    ::ll::UntypedStorage<8, 8>   mUnk136419;
    ::ll::UntypedStorage<8, 8>   mUnkb45bb2;
    ::ll::UntypedStorage<8, 8>   mUnk9b1495;
    ::ll::UntypedStorage<1, 1>   mUnka5b506;
    ::ll::UntypedStorage<1, 1>   mUnkd22d2b;
    ::ll::UntypedStorage<1, 1>   mUnk24e50d;
    ::ll::UntypedStorage<1, 1>   mUnk40b3e9;
    ::ll::UntypedStorage<1, 1>   mUnk74676a;
    ::ll::UntypedStorage<1, 1>   mUnk18047e;
    ::ll::UntypedStorage<1, 1>   mUnked227c;
    ::ll::UntypedStorage<8, 8>   mUnk579634;
    ::ll::UntypedStorage<8, 16>  mUnk52067e;
    ::ll::UntypedStorage<8, 8>   mUnkbdf50e;
    ::ll::UntypedStorage<2, 2>   mUnkd66ad2;
    ::ll::UntypedStorage<8, 8>   mUnk10316a;
    ::ll::UntypedStorage<8, 16>  mUnka4f0b3;
    ::ll::UntypedStorage<1, 1>   mUnk869937;
    ::ll::UntypedStorage<1, 1>   mUnkef7547;
    ::ll::UntypedStorage<1, 1>   mUnkf3ca7a;
    ::ll::UntypedStorage<4, 4>   mUnk969e8f;
    ::ll::UntypedStorage<2, 2>   mUnkde831f;
    ::ll::UntypedStorage<1, 1>   mUnkc4aa3d;
    ::ll::UntypedStorage<4, 4>   mUnk5e9948;
    ::ll::UntypedStorage<4, 4>   mUnk9f9b7e;
    ::ll::UntypedStorage<4, 12>  mUnk64917b;
    ::ll::UntypedStorage<4, 12>  mUnk10a0a2;
    ::ll::UntypedStorage<8, 8>   mUnkb84577;
    ::ll::UntypedStorage<8, 16>  mUnk5b8974;
    ::ll::UntypedStorage<8, 24>  mUnk2ec2b9;
    ::ll::UntypedStorage<8, 64>  mUnkcb8c1e;
    ::ll::UntypedStorage<8, 16>  mUnka32861;
    ::ll::UntypedStorage<8, 8>   mUnkce2747;
    ::ll::UntypedStorage<8, 8>   mUnk23f139;
    ::ll::UntypedStorage<8, 488> mUnk50073a;
    ::ll::UntypedStorage<8, 16>  mUnk269f43;
    ::ll::UntypedStorage<8, 8>   mUnkfb8626;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererCamera& operator=(LevelRendererCamera const&);
    LevelRendererCamera(LevelRendererCamera const&);
    LevelRendererCamera();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelRendererCamera();

    // vIndex: 1
    virtual void addCameraListenerToRenderChunkCoordinator();

    // vIndex: 2
    virtual void onAppSuspended();

    // vIndex: 3
    virtual void onAppResumed();

    // vIndex: 4
    virtual void onDeviceLost();

    // vIndex: 5
    virtual void onLowMemory();

    // vIndex: 6
    virtual void initResources();

    // vIndex: 7
    virtual void frameUpdate(::ClientFrameUpdateContext& clientFrameUpdateContext);

    // vIndex: 8
    virtual void tickLevelRendererCamera();

    // vIndex: 9
    virtual void tickRain();

    // vIndex: 10
    virtual void updateViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    // vIndex: 11
    virtual void callRenderNameTags(::ScreenContext& screenContext, ::ViewRenderObject const& renderObj, ::Font& font);

    // vIndex: 12
    virtual ::NameTagRenderObjectCollection extractNameTags(::ScreenContext& screenContext) const;

    // vIndex: 13
    virtual void callRenderCracks(::BaseActorRenderContext& renderContext, ::ViewRenderObject const& renderObj);

    // vIndex: 14
    virtual ::CrackRenderObjectCollection extractCracks(::ScreenContext& screenContext) const;

    // vIndex: 15
    virtual void renderEntityEffects(::BaseActorRenderContext& renderContext);

    // vIndex: 16
    virtual void renderBlockEntities(::BaseActorRenderContext& renderContext, bool renderAlphaLayer);

    // vIndex: 17
    virtual void setViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    // vIndex: 18
    virtual bool getForceFog(::Actor const&) const;

    // vIndex: 19
    virtual void setupFog(::ScreenContext& screenContext, float const skyIntensityOverride);

    // vIndex: 20
    virtual float getAmbientBrightness() const;

    // vIndex: 21
    virtual void recalculateRenderDistance(float const renderDistanceScalar);

    // vIndex: 22
    virtual void preRenderUpdate(
        ::ScreenContext&                        screenContext,
        ::LevelRenderPreRenderUpdateParameters& levelRenderPreRenderUpdateParameters
    );

    // vIndex: 23
    virtual void render(
        ::BaseActorRenderContext& baseEntityRenderContext,
        ::ViewRenderObject const& renderObj,
        ::IClientInstance&        ci
    );

    // vIndex: 24
    virtual void postRenderUpdate();

    // vIndex: 25
    virtual void notifyGeoChangedForAffectedEntities(::RenderChunkShared&, uchar);

    // vIndex: 26
    virtual void updateLevelCullerType(::LevelCullerType const) = 0;

    // vIndex: 27
    virtual void queueRenderEntities(::LevelRenderPreRenderUpdateParameters const&);

    // vIndex: 28
    virtual void _releaseRespectiveResources();

    // vIndex: 29
    virtual ::Block const* _getBlockForBlockEnity(::BlockActor const& blockActor);

    // vIndex: 30
    virtual void setupViewArea();

    // vIndex: 31
    virtual ::FogDefinition::DistanceSettingType _getFogDistanceSettingType() const;

    // vIndex: 32
    virtual ::FogDefinition::DensitySettingType _getFogDensitySettingType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelRendererCamera(::IClientInstance& clientInstance, ::Level& level, ::LevelRenderer& levelRenderer);

    MCNAPI void _addBiomeFogDefinitionToManager(::BlockPos const& pos) const;

    MCNAPI void _addToRenderChunkQueue(
        ::ChunkRenderObjectCollection&           collection,
        ::TerrainMaterialVariationManager const& terrainVariationMgr,
        ::TerrainLayer const&                    layer,
        ::RenderChunkInstanced const&            renderChunkInstanced,
        uint64                                   chunkIdx,
        ::BlockPos const&                        chunkPos
    );

    MCNAPI void _applyAdjustmentsForAir(
        ::FogDistanceSetting& setting,
        ::ScreenContext&      screenContext,
        float                 skyIntensityOverride
    ) const;

    MCNAPI void _applyAdjustmentsForUnderwater(::FogDistanceSetting& setting) const;

    MCNAPI ::std::shared_ptr<::LevelCullerBase> _createCuller(
        ::LevelCullerType                      type,
        ::std::weak_ptr<::LevelRendererCamera> levelRendererCamera,
        ::LevelBuilder&                        levelBuilder
    );

    MCNAPI void _freeSkyProbeTexture();

    MCNAPI ::FogVolumetricCoefficientSetting
    _getCurrentCoefficientFogSetting(::FogDefinition::CoefficientSettingType settingType) const;

    MCNAPI ::FogVolumetricDensitySetting _getCurrentDensityFogSetting() const;

    MCNAPI ::FogDistanceSetting _getCurrentFixedDistanceFogSetting(float renderDistance) const;

    MCNAPI ::FogTransitionSetting _getCurrentFixedTransitionFogSetting(float renderDistance) const;

    MCNAPI ::FogVolumetricHenyeyGreensteinGSetting
    _getCurrentHenyeyGreensteinGFogSetting(::FogDefinition::HenyeyGreensteinGSettingType settingType) const;

    MCNAPI void _initCubemapTextures(::Dimension const& dimension);

    MCNAPI void _initSkyProbeTexture(::glm::ivec3 size);

    MCNAPI void _notifyOrthographicCameraMoved(
        ::SubChunkPos const&                                         pos,
        ::Vec3 const&                                                viewDir,
        ::GridArea<::std::shared_ptr<::RenderChunkInstanced>> const& viewArea
    );

    MCNAPI void _notifyPerspectiveCameraMoved(
        ::SubChunkPos const&                                         pos,
        ::Vec3 const&                                                viewPos,
        bool                                                         accurateSorting,
        ::GridArea<::std::shared_ptr<::RenderChunkInstanced>> const& viewArea
    );

    MCNAPI void _releaseResources();

    MCNAPI void
    _resortNearbyChunks(::Vec3 const& viewPos, ::GridArea<::std::shared_ptr<::RenderChunkInstanced>> const& viewArea);

    MCNAPI bool _shouldRenderLeashedEntity(::Actor* actor, ::Vec3 cameraPos);

    MCNAPI void _tryInsertBlockEntityIntoRenderQueues(
        ::BlockActor*                                                   blockActor,
        ::std::map<::ChunkPos, ::std::unordered_set<::BlockPos>> const& skipList
    );

    MCNAPI ::GridArea<::std::shared_ptr<::RenderChunkInstanced>>& _viewAreaMutable();

    MCNAPI ::LevelRendererCamera::RainState calcRainState(::Vec3 const& rainPos) const;

    MCNAPI void determineUnderwaterStatus(::BlockSource& region);

    MCNAPI ::LevelRendererCamera::RainState doRainUpdate();

    MCNAPI void doneQueuingChunks();

    MCNAPI ::optional_ref<::TerrainMaterialVariationManager const> getCurrentVariationManager() const;

    MCNAPI ::RenderChunkInstanced* getOrCreateRenderChunkInstancedAt(::SubChunkPos const& rcp);

    MCNAPI ::RenderChunkInstanced* getRenderChunkInstancedAt(::SubChunkPos const& rcp) const;

    MCNAPI ::std::shared_ptr<::RenderChunkInstanced> getRenderChunkInstancedAtShared(::SubChunkPos const& rcp) const;

    MCNAPI uint64 getRenderChunkInstancedCount();

    MCNAPI bool isAABBVisible(::AABB const& bb, bool useFastCulling) const;

    MCNAPI void onViewRadiusChanged(bool resetAll);

    MCNAPI void preDimensionChanged(::Player& player);

    MCNAPI void queueChunk(
        ::ChunkRenderObjectCollection&                          collection,
        ::RenderChunkInstanced const&                           renderChunkInstanced,
        float                                                   farDistance2,
        float                                                   currentTime,
        ::TerrainMaterialVariationManager const&                terrainVariationMgr,
        ::optional_ref<::TerrainMaterialVariationManager const> fadeVariationMgr
    );

    MCNAPI void recaptureViewAreaDimensions();

    MCNAPI void renderAtmosphere(
        ::ScreenContext&                             screenContext,
        ::ViewRenderObject const&                    renderObj,
        ::BaseSceneDirectionalLightRenderData const& sceneDirectionalLightRenderData,
        bool                                         isSkyLit
    ) const;

    MCNAPI void renderCameraAimAssistHighlight(::ScreenContext& screenContext);

    MCNAPI void renderChunkOccluders(::BaseActorRenderContext& renderContext) const;

    MCNAPI void renderEditorCursor(::ScreenContext const& screenContext);

    MCNAPI void renderEntities(::BaseActorRenderContext& renderContext);

    MCNAPI void renderGameplayMetadata(
        ::ScreenContext&                             screenContext,
        ::ViewRenderObject const&                    renderObj,
        bool                                         waitingForLoad,
        ::BaseSceneDirectionalLightRenderData const& sceneDirectionalLightRenderData
    ) const;

    MCNAPI void renderPlayerVision(::ScreenContext& screenContext) const;

    MCNAPI void renderSky(
        ::ScreenContext&                             screenContext,
        ::ViewRenderObject const&                    renderObj,
        ::BaseSceneDirectionalLightRenderData const& sceneDirectionalLightRenderData
    ) const;

    MCNAPI void renderStructureWireframes(
        ::BaseActorRenderContext& renderContext,
        ::IClientInstance const&  clientInstance,
        ::ViewRenderObject const& renderObj
    );

    MCNAPI void renderVolumetricFog(::ScreenContext& screenContext, ::ViewRenderObject const& renderObj);

    MCNAPI bool shouldCullThisFrame(uint64 lastNumRenderChunksVisibleFromCullingPoint);

    MCNAPI void updateFarChunksDistance();

    MCNAPI void updatePerChunkFaceSortState(::Vec3 const& viewPos, ::Vec3 const& viewDir, bool isOrthoCamera);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    renderClouds(::ScreenContext& screenContext, ::ViewRenderObject const& renderObj, float levelRenderDistance);

    MCNAPI static void renderEndChaos(
        ::ScreenContext&                             screenContext,
        ::BaseSceneDirectionalLightRenderData const& sceneDirectionalLightRenderData
    );

    MCNAPI static void renderShadows(::ScreenContext& screenContext, ::ViewRenderObject const& renderObj);

    MCNAPI static void
    renderStars(::ScreenContext& screenContext, ::ViewRenderData const& renderData, ::SkyRenderObject const& skyData);

    MCNAPI static void renderSunAndMoon(
        ::ScreenContext&                             screenContext,
        ::ViewRenderData const&                      renderData,
        ::SkyRenderObject const&                     skyData,
        ::BaseSceneDirectionalLightRenderData const& sceneDirectionalLightRenderData
    );

    MCNAPI static bool
    shouldRenderActor(::Actor const& actor, ::LevelRendererCamera::PlayerStateParams const& playerStateParams);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance& clientInstance, ::Level& level, ::LevelRenderer& levelRenderer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addCameraListenerToRenderChunkCoordinator();

    MCNAPI void $onAppSuspended();

    MCNAPI void $onAppResumed();

    MCNAPI void $onDeviceLost();

    MCNAPI void $onLowMemory();

    MCNAPI void $initResources();

    MCNAPI void $frameUpdate(::ClientFrameUpdateContext& clientFrameUpdateContext);

    MCNAPI void $tickLevelRendererCamera();

    MCNAPI void $tickRain();

    MCNAPI void $updateViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    MCNAPI void $callRenderNameTags(::ScreenContext& screenContext, ::ViewRenderObject const& renderObj, ::Font& font);

    MCNAPI ::NameTagRenderObjectCollection $extractNameTags(::ScreenContext& screenContext) const;

    MCNAPI void $callRenderCracks(::BaseActorRenderContext& renderContext, ::ViewRenderObject const& renderObj);

    MCNAPI ::CrackRenderObjectCollection $extractCracks(::ScreenContext& screenContext) const;

    MCNAPI void $renderEntityEffects(::BaseActorRenderContext& renderContext);

    MCNAPI void $renderBlockEntities(::BaseActorRenderContext& renderContext, bool renderAlphaLayer);

    MCNAPI void $setViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    MCNAPI bool $getForceFog(::Actor const&) const;

    MCNAPI void $setupFog(::ScreenContext& screenContext, float const skyIntensityOverride);

    MCNAPI float $getAmbientBrightness() const;

    MCNAPI void $recalculateRenderDistance(float const renderDistanceScalar);

    MCNAPI void $preRenderUpdate(
        ::ScreenContext&                        screenContext,
        ::LevelRenderPreRenderUpdateParameters& levelRenderPreRenderUpdateParameters
    );

    MCNAPI void $render(
        ::BaseActorRenderContext& baseEntityRenderContext,
        ::ViewRenderObject const& renderObj,
        ::IClientInstance&        ci
    );

    MCNAPI void $postRenderUpdate();

    MCNAPI void $notifyGeoChangedForAffectedEntities(::RenderChunkShared&, uchar);

    MCNAPI void $queueRenderEntities(::LevelRenderPreRenderUpdateParameters const&);

    MCNAPI void $_releaseRespectiveResources();

    MCNAPI ::Block const* $_getBlockForBlockEnity(::BlockActor const& blockActor);

    MCNAPI void $setupViewArea();

    MCNAPI ::FogDefinition::DistanceSettingType $_getFogDistanceSettingType() const;

    MCNAPI ::FogDefinition::DensitySettingType $_getFogDensitySettingType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
