#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/SortedMeshDrawList.h"
#include "mc/client/particlesystem/particle/ParticleRenderData.h"
#include "mc/client/renderer/HistoricalFrameTimes.h"
#include "mc/client/renderer/culling/FrustumCuller.h"
#include "mc/client/renderer/game/ActorRenderCandidates.h"
#include "mc/client/renderer/game/TerrainMaterialVariationManager.h"
#include "mc/client/world/level/fog/FogDistanceSetting.h"
#include "mc/deps/core/math/FrustumEdges.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/minecraft_renderer/game/FrustumCullerType.h"
#include "mc/deps/minecraft_renderer/game/LevelCullerType.h"
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"
#include "mc/deps/minecraft_renderer/game/TerrainLayerLOD.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/deps/renderer/Camera.h"
#include "mc/deps/shared_types/shared_types/ColorNormRGB.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/util/GridArea.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/FogDefinition.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseActorRenderContext;
class BiomeBlendingMapRenderer;
class BlockActor;
class BlockSource;
class CameraAimAssistRenderer;
class ClientFrameUpdateContext;
class Dimension;
class Font;
class IClientInstance;
class IConstBlockSource;
class IVanillaRenderBlockActorComponent;
class Level;
class LevelBuilder;
class LevelCullerBase;
class LevelRenderer;
class LevelRendererCameraProxy;
class LocalPlayer;
class Player;
class RenderChunkInstanced;
class RenderChunkShared;
class ResourcePackManager;
class ScreenContext;
class WeatherRenderer;
struct BaseSceneDirectionalLightRenderData;
struct ChunkRenderObjectCollection;
struct CrackRenderObjectCollection;
struct LevelRenderPreRenderUpdateParameters;
struct NameTagRenderObjectCollection;
struct OccluderFace;
struct TerrainLayer;
struct ViewRenderObject;
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
// clang-format on

class LevelRendererCamera {
public:
    // LevelRendererCamera inner types declare
    // clang-format off
    struct LevelRendererDebugInformation;
    struct RainState;
    struct FogBrightnessPair;
    struct FogBrightnessParams;
    struct PlayerStateParams;
    struct LimitedActorRenderParams;
    struct RenderChunkPosBounds;
    struct ResolvedFogVolumetricDensitySetting;
    struct ResolvedFogVolumetricCoefficientSetting;
    struct ResolvedFogVolumetricHenyeyGreensteinGSetting;
    // clang-format on

    // LevelRendererCamera inner types define
    struct LevelRendererDebugInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::FrustumEdges>> lastFrusumEdges;
        ::ll::TypedStorage<8, 24, ::std::vector<::mce::Camera>>  lastCascadeCameras;
        ::ll::TypedStorage<8, 512, ::mce::Camera>                lastDebugCamera;
        ::ll::TypedStorage<4, 12, ::glm::vec3>                   mReferenceForwardVector;
        ::ll::TypedStorage<8, 24, ::std::vector<::FrustumEdges>> frusumEdges;
        ::ll::TypedStorage<8, 24, ::std::vector<::mce::Camera>>  cascadeCameras;
        ::ll::TypedStorage<4, 4, int>                            renderDebugCamera;
        // NOLINTEND
    };

    struct RainState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                  mRainPosX;
        ::ll::TypedStorage<4, 4, float>                  mRainPosY;
        ::ll::TypedStorage<4, 4, float>                  mRainPosZ;
        ::ll::TypedStorage<4, 4, int>                    mRainPosSamples;
        ::ll::TypedStorage<4, 4, int>                    mRainCount;
        ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>> mSmokeParticles;
        ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>> mRainSplashParticles;
        // NOLINTEND
    };

    struct FogBrightnessPair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mCurrentValue;
        ::ll::TypedStorage<4, 4, float> mOriginalValue;
        // NOLINTEND
    };

    struct FogBrightnessParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                     mIsInEnd;
        ::ll::TypedStorage<1, 1, bool>                                     mCameraUnderLiquid;
        ::ll::TypedStorage<4, 8, ::LevelRendererCamera::FogBrightnessPair> mFogBrightnessPair;
        ::ll::TypedStorage<4, 12, ::BlockPos>                              mCameraPos;
        ::ll::TypedStorage<8, 8, ::IConstBlockSource*>                     mBlockSource;
        // NOLINTEND
    };

    struct PlayerStateParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::LocalPlayer*> mLocalPlayer;
        ::ll::TypedStorage<8, 8, ::Actor const*> mLocalPlayerVehicle;
        ::ll::TypedStorage<1, 1, bool>           mPlayerHasPassengers;
        ::ll::TypedStorage<1, 1, bool>           mShouldRenderPlayerModel;
        ::ll::TypedStorage<1, 1, bool>           mIsSpectator;
        // NOLINTEND
    };

    struct LimitedActorRenderParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ActorType const> mActorType;
        ::ll::TypedStorage<4, 4, int const>         mMaxCount;
        ::ll::TypedStorage<4, 4, int>               mCurrentCount;
        // NOLINTEND
    };

    struct RenderChunkPosBounds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::SubChunkPos> min;
        ::ll::TypedStorage<4, 12, ::SubChunkPos> max;
        // NOLINTEND
    };

    struct ResolvedFogVolumetricDensitySetting {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mMaxDensity;
        ::ll::TypedStorage<4, 4, float> mMaxDensityHeight;
        ::ll::TypedStorage<4, 4, float> mZeroDensityHeight;
        // NOLINTEND
    };

    struct ResolvedFogVolumetricCoefficientSetting {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::SharedTypes::ColorNormRGB> mScattering;
        ::ll::TypedStorage<4, 16, ::SharedTypes::ColorNormRGB> mAbsorption;
        // NOLINTEND
    };

    struct ResolvedFogVolumetricHenyeyGreensteinGSetting {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mHenyeyGreensteinG;
        // NOLINTEND
    };

    using BlockActorList = ::std::vector<::gsl::not_null<::BlockActor*>>;

    using ActorList = ::std::vector<::Actor*>;

    using LevelRendererArea = ::GridArea<::std::shared_ptr<::RenderChunkInstanced>>;

    using ActorRenderQueue = ::brstd::flat_map<
        ::gsl::not_null<::Actor*>,
        ::ShadowContext,
        ::std::less<::gsl::not_null<::Actor*>>,
        ::std::vector<::gsl::not_null<::Actor*>>,
        ::std::vector<::ShadowContext>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                         mChunkQueueSize;
    ::ll::TypedStorage<8, 408, uint64[3][17]>                mTerrainChunkQueueSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::OccluderFace>> mChunkOccluders;
    ::ll::TypedStorage<8, 24, ::ActorRenderCandidates>       mActorRenderCandidates;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::gsl::not_null<::Actor*>,
            ::ShadowContext,
            ::std::less<::gsl::not_null<::Actor*>>,
            ::std::vector<::gsl::not_null<::Actor*>>,
            ::std::vector<::ShadowContext>>>
                                                    mActorRenderQueue;
    ::ll::TypedStorage<8, 24, ::SortedMeshDrawList> mSortedMeshDrawList;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::IVanillaRenderBlockActorComponent*>>>
        mRenderComponentRenderQueue;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::IVanillaRenderBlockActorComponent*>>>
        mRenderComponentRenderAlphaQueue;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::IVanillaRenderBlockActorComponent*>>>
                                                                       mRenderComponentShadowQueue;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      shadowVolumeBack;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      shadowVolumeFront;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      shadowOverlayMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      starsMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      skyPlaneMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      sunMoonMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      endSkyMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      cloudMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      wireframeMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      mCubemapMaterial;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::TexturePtr>>        mCubemapTextures;
    ::ll::TypedStorage<8, 24, ::mce::ClientTexture>                    mCubemapTexture;
    ::ll::TypedStorage<8, 8, uint64 const>                             mAmbientSamplesDefaultSize;
    ::ll::TypedStorage<8, 56, ::std::optional<::cg::ImageBuffer>>      mSkyAmbientSamplesBuffer;
    ::ll::TypedStorage<8, 136, ::TerrainMaterialVariationManager>      mTerrainMaterialVariationManager;
    ::ll::TypedStorage<4, 4, float>                                    mDeltaTime;
    ::ll::TypedStorage<4, 4, float>                                    mLastTime;
    ::ll::TypedStorage<4, 4, float>                                    mWaterLevel;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                              mFogControl;
    ::ll::TypedStorage<4, 4, float>                                    mBaseFogEnd;
    ::ll::TypedStorage<4, 4, float>                                    mBaseFogStart;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                              mCameraLightIntensity;
    ::ll::TypedStorage<4, 8, ::LevelRendererCamera::FogBrightnessPair> mFogBrightnessPair;
    ::ll::TypedStorage<4, 28, ::FogDistanceSetting>                    mCurrentDistanceFog;
    ::ll::TypedStorage<4, 28, ::FogDistanceSetting>                    mLastTargetDistanceFog;
    ::ll::TypedStorage<4, 12, ::LevelRendererCamera::ResolvedFogVolumetricDensitySetting>     mCurrentFogDensity;
    ::ll::TypedStorage<4, 32, ::LevelRendererCamera::ResolvedFogVolumetricCoefficientSetting> mAirFogCoefficient;
    ::ll::TypedStorage<4, 32, ::LevelRendererCamera::ResolvedFogVolumetricCoefficientSetting> mWaterFogCoefficient;
    ::ll::TypedStorage<4, 32, ::LevelRendererCamera::ResolvedFogVolumetricCoefficientSetting> mCloudFogCoefficient;
    ::ll::TypedStorage<4, 4, ::LevelRendererCamera::ResolvedFogVolumetricHenyeyGreensteinGSetting>
        mAirHenyeyGreensteinG;
    ::ll::TypedStorage<4, 4, ::LevelRendererCamera::ResolvedFogVolumetricHenyeyGreensteinGSetting>
                                                     mWaterHenyeyGreensteinG;
    ::ll::TypedStorage<1, 1, bool>                   mFogWasUnderwaterLastCheck;
    ::ll::TypedStorage<1, 1, bool>                   mFogWasUnderLavaLastCheck;
    ::ll::TypedStorage<1, 1, bool>                   mFogWasUnderPowderSnowLastCheck;
    ::ll::TypedStorage<1, 1, bool>                   mBlendFogThisFrame;
    ::ll::TypedStorage<4, 4, float>                  mMobEffectFogLevel;
    ::ll::TypedStorage<8, 224, ::ParticleRenderData> mParticleRenderData;
    ::ll::TypedStorage<4, 4, float>                  mTransitionFogTime;
    ::ll::TypedStorage<1, 1, bool>                   mInTransitionFog;
    ::ll::TypedStorage<4, 4, float const>            mRenderDistanceCloudFadeOutMultiplier;
    ::ll::TypedStorage<4, 4, float>                  mFakeHDR;
    ::ll::TypedStorage<4, 4, float>                  mAverageBrightness;
    ::ll::TypedStorage<4, 4, uint>                   mFrameID;
    ::ll::TypedStorage<4, 4, int>                    mViewAreaDistance;
    ::ll::TypedStorage<4, 4, float>                  mFarChunksDistance;
    ::ll::TypedStorage<4, 4, float>                  mRenderDistance;
    ::ll::TypedStorage<4, 4, float>                  mCullEndDistance;
    ::ll::TypedStorage<4, 4, int const>              mMaxInflightChunks;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GridArea<::std::shared_ptr<::RenderChunkInstanced>>>> mViewArea;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                      mLastFaceSortPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mLastFaceSortDir;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mLastDirtySortPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                      mLastNearbyFaceSortPos;
    ::ll::TypedStorage<4, 24, ::LevelRendererCamera::RenderChunkPosBounds>     mLastFaceSortBounds;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mLastChunkResortPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mCameraPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mCameraTargetPos;
    ::ll::TypedStorage<4, 204, ::FrustumCuller>                                mFrustumCuller;
    ::ll::TypedStorage<1, 1, ::FrustumCullerType>                              mFrustumCullerType;
    ::ll::TypedStorage<8, 512, ::mce::Camera>                                  mWorldSpaceCamera;
    ::ll::TypedStorage<8, 24, ::std::vector<::Actor*>>                         mWaterHoleActorQueue;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WeatherRenderer>>             mWeatherRenderer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeBlendingMapRenderer>>    mBiomeBlendingMapRenderer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkRenderObjectCollection>> mChunkRenderObjects;
    ::ll::TypedStorage<1, 1, bool>                                             mCameraUnderWater;
    ::ll::TypedStorage<1, 1, bool>                                             mCameraUnderLiquid;
    ::ll::TypedStorage<1, 1, bool>                                             mCameraUnderPowderSnow;
    ::ll::TypedStorage<1, 1, bool>                                             mCameraUnderLava;
    ::ll::TypedStorage<1, 1, bool>                                             mCameraInRain;
    ::ll::TypedStorage<1, 1, bool>                                             mShowSky;
    ::ll::TypedStorage<1, 1, bool>                                             mIsCameraInCaptureMode;
    ::ll::TypedStorage<8, 8, ::Level&>                                         mLevel;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::BlockSource>>                       mViewRegion;
    ::ll::TypedStorage<8, 8, ::Dimension*>                                     mDimension;
    ::ll::TypedStorage<2, 2, short>                                            mCloudHeight;
    ::ll::TypedStorage<8, 8, ::LevelRenderer&>                                 mLevelRenderer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelCullerBase>>            mLevelCuller;
    ::ll::TypedStorage<1, 1, ::LevelCullerType>                                mLastCullerType;
    ::ll::TypedStorage<1, 1, bool>                                             mForceCulling;
    ::ll::TypedStorage<1, 1, bool>                                             mRecullWhenNotBusy;
    ::ll::TypedStorage<4, 4, int>                                              mViewAreaSide;
    ::ll::TypedStorage<2, 2, short>                                            mViewAreaHeight;
    ::ll::TypedStorage<1, 1, bool>                                             mViewAreaChanged;
    ::ll::TypedStorage<4, 4, float>                                            mLastFogEnd;
    ::ll::TypedStorage<4, 4, float>                                            mLastSunAngle;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mLastCameraPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mLastCameraDir;
    ::ll::TypedStorage<4, 16, ::std::optional<::glm::vec3>>                    mPrevCloudCenterPos;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                           mResourcePackManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroup>>          mTextureGroup;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::IVanillaRenderBlockActorComponent*>>> mTempBlockActorList;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ChunkPos>> mPendingPermanentlyRenderedBlockActorRequests;
    ::ll::TypedStorage<8, 16, ::std::map<::ChunkPos, ::std::unordered_set<::BlockPos>>> mPermanentlyRenderedBlockActors;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelRendererCameraProxy>>             mProxy;
    ::ll::TypedStorage<8, 8, double>                                                    mLastFrameTimeStart;
    ::ll::TypedStorage<8, 488, ::HistoricalFrameTimes>                                  mHistoricalFrameTimes;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>                        mChunkFaceSortTaskHandle;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CameraAimAssistRenderer>>              mCameraAimAssistRenderer;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererCamera& operator=(LevelRendererCamera const&);
    LevelRendererCamera(LevelRendererCamera const&);
    LevelRendererCamera();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelRendererCamera() = default;

    virtual void addCameraListenerToRenderChunkCoordinator();

    virtual void onAppSuspended();

    virtual void onAppResumed();

    virtual void onDeviceLost();

    virtual void onLowMemory();

    virtual void initResources();

    virtual void frameUpdate(::ClientFrameUpdateContext& clientFrameUpdateContext);

    virtual void tickLevelRendererCamera();

    virtual void tickRain();

    virtual void updateViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    virtual void callRenderNameTags(::ScreenContext& screenContext, ::ViewRenderObject const& renderObj, ::Font& font);

    virtual ::NameTagRenderObjectCollection extractNameTags(::ScreenContext& screenContext) const;

    virtual void callRenderCracks(::BaseActorRenderContext& renderContext, ::ViewRenderObject const& renderObj);

    virtual ::CrackRenderObjectCollection extractCracks(::ScreenContext& screenContext) const;

    virtual void renderEntityEffects(::BaseActorRenderContext& renderContext);

    virtual void renderBlockEntities(::BaseActorRenderContext& renderContext, bool renderAlphaLayer);

    virtual void setViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    virtual bool getForceFog(::Actor const& cameraActor) const;

    virtual void setupFog(::ScreenContext& screenContext, float const skyIntensityOverride);

    virtual float getAmbientBrightness() const;

    virtual void recalculateRenderDistance(float const renderDistanceScalar);

    virtual void preRenderUpdate(
        ::ScreenContext&                        screenContext,
        ::LevelRenderPreRenderUpdateParameters& levelRenderPreRenderUpdateParameters
    );

    virtual void render(
        ::BaseActorRenderContext& baseEntityRenderContext,
        ::ViewRenderObject const& renderObj,
        ::IClientInstance&        ci
    );

    virtual void postRenderUpdate();

    virtual void notifyGeoChangedForAffectedEntities(::RenderChunkShared& renderChunkShared, uchar version);

    virtual void updateLevelCullerType(::LevelCullerType const newLevelCullerType) = 0;

    virtual void
    queueRenderEntities(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    virtual void _releaseRespectiveResources();

    virtual void setupViewArea();

    virtual ::FogDefinition::DistanceSettingType _getFogDistanceSettingType() const;

    virtual ::FogDefinition::DensitySettingType _getFogDensitySettingType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addToRenderChunkQueue(
        ::ChunkRenderObjectCollection&           collection,
        ::TerrainMaterialVariationManager const& terrainVariationMgr,
        ::TerrainLayer const&                    layer,
        ::TerrainLayerLOD const                  layerLOD,
        ::RenderChunkInstanced const&            renderChunkInstanced,
        uint64                                   chunkIdx,
        ::BlockPos const&                        chunkPos
    );

    MCAPI ::std::shared_ptr<::LevelCullerBase> _createCuller(
        ::LevelCullerType                      type,
        ::std::weak_ptr<::LevelRendererCamera> levelRendererCamera,
        ::LevelBuilder&                        levelBuilder
    );

    MCAPI ::LevelRendererCamera::ResolvedFogVolumetricCoefficientSetting
    _getCurrentCoefficientFogSetting(::FogDefinition::CoefficientSettingType settingType) const;

    MCAPI ::LevelRendererCamera::ResolvedFogVolumetricHenyeyGreensteinGSetting
    _getCurrentHenyeyGreensteinGFogSetting(::FogDefinition::HenyeyGreensteinGSettingType settingType) const;

    MCAPI void _initCubemapTextures(::Dimension const& dimension);

    MCAPI void _releaseResources();

    MCAPI void
    _resortNearbyChunks(::Vec3 const& viewPos, ::GridArea<::std::shared_ptr<::RenderChunkInstanced>> const& viewArea);

    MCAPI bool _shouldRenderLeashedEntity(::Actor* actor, ::Vec3 cameraPos);

    MCAPI void _tryInsertBlockEntityIntoRenderQueues(
        ::IVanillaRenderBlockActorComponent*                            renderComponent,
        ::std::map<::ChunkPos, ::std::unordered_set<::BlockPos>> const& skipList
    );

    MCAPI ::GridArea<::std::shared_ptr<::RenderChunkInstanced>>& _viewAreaMutable();

    MCAPI bool cullerIsVisible(::Vec3 const& point, float radius) const;

    MCAPI ::LevelRendererCamera::RainState doRainUpdate();

    MCAPI void doneQueuingChunks();

    MCAPI ::optional_ref<::TerrainMaterialVariationManager const> getCurrentVariationManager() const;

    MCAPI ::RenderChunkInstanced* getOrCreateRenderChunkInstancedAt(::SubChunkPos const& rcp);

    MCAPI ::RenderChunkInstanced* getRenderChunkInstancedAt(::SubChunkPos const& rcp) const;

    MCAPI ::std::shared_ptr<::RenderChunkInstanced> getRenderChunkInstancedAtShared(::SubChunkPos const& rcp) const;

    MCAPI uint64 getRenderChunkInstancedDifferentGeoCount();

    MCAPI uint64 getRenderChunkInstancedEstimatedIndexMemoryUsed();

    MCAPI bool isAABBVisible(::AABB const& bb, bool useFastCulling) const;

    MCAPI void onViewRadiusChanged(bool resetAll);

    MCAPI void preDimensionChanged(::Player& player);

    MCAPI void queueChunk(
        ::ChunkRenderObjectCollection&                          collection,
        ::RenderChunkInstanced const&                           renderChunkInstanced,
        float                                                   farDistance2,
        float                                                   currentTime,
        ::TerrainMaterialVariationManager const&                terrainVariationMgr,
        ::optional_ref<::TerrainMaterialVariationManager const> fadeVariationMgr
    );

    MCAPI void recaptureViewAreaDimensions();

    MCAPI void renderChunkVisibilityChanged(::RenderChunkShared& renderChunkShared, bool visibilityMatrixChanged);

    MCAPI void renderSky(
        ::ScreenContext&                             screenContext,
        ::ViewRenderObject const&                    renderObj,
        ::BaseSceneDirectionalLightRenderData const& sceneDirectionalLightRenderData
    ) const;

    MCAPI void setDirLightShadowRenderChunksPerfCounter(int chunkCount);

    MCAPI bool shouldCullThisFrame(uint64 lastNumRenderChunksVisibleFromCullingPoint);

    MCAPI void updateFarChunksDistance();

    MCAPI void updatePerChunkFaceSortState(::Vec3 const& viewPos, ::Vec3 const& viewDir, bool isOrthoCamera);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
