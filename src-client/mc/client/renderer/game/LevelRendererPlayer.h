#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/game/DirectionalLightRenderData.h"
#include "mc/client/renderer/game/LevelRendererCameraListeners.h"
#include "mc/client/renderer/game/PlayerRenderingParameters.h"
#include "mc/client/renderer/scripting/ServerGraphicsOverrideManager.h"
#include "mc/client/renderer/texture/TextureAtlasItem.h"
#include "mc/client/sound/ListenerState.h"
#include "mc/common/SubClientId.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/container/slot_map_handle.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/FogDefinition.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorSoundIdentifier;
class BaseActorRenderContext;
class Block;
class BlockActor;
class BlockSource;
class CompoundTag;
class EntityContext;
class Font;
class IClientInstance;
class IRandom;
class Level;
class LevelAnimateTickHelper;
class LevelRenderer;
class Matrix;
class Mob;
class Options;
class Player;
class Random;
class ScreenContext;
class SoundPlayerInterface;
class Tessellator;
class TextureAtlas;
class TextureTessellator;
struct ActorShadowRenderObjectCollection;
struct AmbientSoundController;
struct BlockDestructInfo;
struct BreakingItemParticleData;
struct ClientFrameUpdateContext;
struct CloudRenderObject;
struct CrackRenderObject;
struct CrackRenderObjectCollection;
struct DeferredSound;
struct LevelRenderPreRenderUpdateParameters;
struct NameTagRenderObjectCollection;
struct RenderChunkShared;
struct ResolvedItemIconInfo;
struct SkyRenderObject;
struct Sound;
struct SoundMapping;
struct TextureUVCoordinateSet;
struct ViewRenderData;
struct ViewRenderObject;
namespace ParticleSystem { class ParticleEmitter; }
namespace mce { class Camera; }
namespace mce { class Mesh; }
namespace mce::framebuilder { struct SkyWeatherParameters; }
// clang-format on

class LevelRendererPlayer : public ::LevelRendererCameraListeners, public ::Bedrock::EnableNonOwnerReferences {
public:
    // LevelRendererPlayer inner types declare
    // clang-format off
    struct BiomeParticleKey;
    struct BiomeParticleKeyHash;
    struct SkyColorLerp;
    // clang-format on

    // LevelRendererPlayer inner types define
    struct BiomeParticleKey {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::HashedString> mEffect;
        ::ll::TypedStorage<4, 16, ::mce::Color>   mColor;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~BiomeParticleKey();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct BiomeParticleKeyHash {};

    struct SkyColorLerp {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::mce::Color> mStartColor;
        ::ll::TypedStorage<4, 16, ::mce::Color> mTargetColor;
        ::ll::TypedStorage<4, 16, ::mce::Color> mCurrentColor;
        ::ll::TypedStorage<4, 4, float>         mTime;
        // NOLINTEND
    };

    using DeferredSoundList = ::std::vector<::DeferredSound>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const>                                            WATER_VISION_QUICK_TIME;
    ::ll::TypedStorage<4, 4, float const>                                            WATER_VISION_MAX_TIME;
    ::ll::TypedStorage<4, 4, float const>                                            WATER_VISION_QUICK_PERCENT;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::cg::ImageBuffer>>                    mCloudsImage;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::vector<::mce::Mesh>>>         mCloudMeshes;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::vector<::mce::Mesh>>>         mCloudMeshesCurrentlyTessellating;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Tessellator>>                       mCloudTessellator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TextureTessellator>>                mCloudTextureTessellator;
    ::ll::TypedStorage<1, 1, bool>                                                   mUpdatingClouds;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                mLastCloudUpdatePosition;
    ::ll::TypedStorage<1, 1, uchar>                                                  mLastCloudSide;
    ::ll::TypedStorage<4, 4, int>                                                    mLastCloudMeshSize;
    ::ll::TypedStorage<4, 4, int>                                                    mLastCloudGridSize;
    ::ll::TypedStorage<4, 336, ::std::array<::DirectionalLightRenderData, 3>>        mDirectionalLightRenderData;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, uint64>>              mRecordSoundMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::BlockDestructInfo>> mDestroyingBlockList;
    ::ll::TypedStorage<8, 8, double>                                                 mLastDestroyRenderTime;
    ::ll::TypedStorage<4, 4, float>                                                  mFov;
    ::ll::TypedStorage<4, 4, float>                                                  mOFov;
    ::ll::TypedStorage<4, 280, ::PlayerRenderingParameters>                          mRenderingParameters;
    ::ll::TypedStorage<4, 4, float>                                                  thirdDistance;
    ::ll::TypedStorage<4, 4, float>                                                  thirdDistanceO;
    ::ll::TypedStorage<4, 4, float>                                                  thirdRotation;
    ::ll::TypedStorage<4, 4, float>                                                  thirdRotationO;
    ::ll::TypedStorage<4, 4, float>                                                  thirdTilt;
    ::ll::TypedStorage<4, 4, float>                                                  thirdTiltO;
    ::ll::TypedStorage<4, 4, float>                                                  cameraRoll;
    ::ll::TypedStorage<4, 4, float>                                                  cameraRollO;
    ::ll::TypedStorage<4, 4, float>                                                  currentCameraDist;
    ::ll::TypedStorage<4, 4, float>                                                  prevHeightOffset;
    ::ll::TypedStorage<4, 4, float>                                                  mHeightOffsetAdjustment;
    ::ll::TypedStorage<4, 4, float>                                                  mUnderwaterVisionTime;
    ::ll::TypedStorage<4, 4, float>                                                  mUnderwaterVisionTimePrevious;
    ::ll::TypedStorage<4, 4, float>                                                  mUnderwaterVisionClarity;
    ::ll::TypedStorage<4, 4, float>                                                  mUnderwaterVisionScale;
    ::ll::TypedStorage<4, 4, float>                                                  mUnderwaterLightLevel;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>             selectionBlockEntityOverlayMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>             selectionBlockEntityOverlayColorMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>             selectionOverlayMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>             selectionOpaqueMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>             selectionTwoSidedMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>             cracksOverlayMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>             cracksOverlayAlphaTestMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>             cracksOverlayBlockEntityMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>             mOutlineSelectionMaterial;
    ::ll::TypedStorage<8, 8, ::SoundMapping const&>           mSounds;
    ::ll::TypedStorage<8, 24, ::std::vector<::DeferredSound>> mDeferredSounds;
    ::ll::TypedStorage<8, 64, ::TextureAtlasItem>             uvBreakBlockItem;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>              mClientInstance;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                mLocalUser;
    ::ll::TypedStorage<8, 8, ::LevelRenderer&>                mLevelRenderer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::SoundPlayerInterface>> mSoundPlayer;
    ::ll::TypedStorage<8, 8, ::Level&>                                            mLevel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AmbientSoundController>>         mAmbientSoundController;
    ::ll::TypedStorage<4, 48, ::ListenerState>                                    mListenerState;
    ::ll::TypedStorage<4, 12, ::Vec3>                                             mCameraForward;
    ::ll::TypedStorage<4, 12, ::Vec3>                                             mCameraUp;
    ::ll::TypedStorage<4, 12, ::Vec3>                                             mLastListenerPos;
    ::ll::TypedStorage<8, 8, double>                                              mLastListenerUpdateTime;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::LevelRendererPlayer::BiomeParticleKey,
            ::Bedrock::slot_map_handle<::std::unique_ptr<::ParticleSystem::ParticleEmitter>, 64, 32>,
            ::LevelRendererPlayer::BiomeParticleKeyHash,
            ::std::equal_to<::LevelRendererPlayer::BiomeParticleKey>>>
                                                                                    mBiomeTintedParticleEffects;
    ::ll::TypedStorage<4, 56, ::std::optional<::LevelRendererPlayer::SkyColorLerp>> mSkyColorLerp;
    ::ll::TypedStorage<4, 4, int>                                                   mRainSoundTime;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mOnLevelSoundEvent;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mOnLevelSoundEventWithVolumeAndPitch;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mOnStopLevelSoundEvent;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mOnStopAllLevelSoundsEvent;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mOnStopMusicEvent;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelAnimateTickHelper>> mLevelAnimateTickHelper;
    ::ll::TypedStorage<8, 640, ::ServerGraphicsOverrideManager>           mScriptGraphicsOverrideManager;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererPlayer& operator=(LevelRendererPlayer const&);
    LevelRendererPlayer(LevelRendererPlayer const&);
    LevelRendererPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelRendererPlayer() /*override*/;

    virtual void initResources() /*override*/;

    virtual void frameUpdate(::ClientFrameUpdateContext& clientFrameUpdateContext) /*override*/;

    virtual void tickLevelRendererCamera() /*override*/;

    virtual void tickRain() /*override*/;

    virtual void onWillChangeDimension(::Player& player) /*override*/;

    virtual void onDimensionChanged(::Player& player) /*override*/;

    virtual void recalculateRenderDistance(float const renderDistanceScalar) /*override*/;

    virtual void preRenderUpdate(
        ::ScreenContext&                        screenContext,
        ::LevelRenderPreRenderUpdateParameters& levelRenderPreRenderUpdateParameters
    ) /*override*/;

    virtual void renderBlockEntities(::BaseActorRenderContext& renderContext, bool renderAlphaLayer) /*override*/;

    virtual void
    updateViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters) /*override*/;

    virtual ::NameTagRenderObjectCollection extractNameTags(::ScreenContext& screenContext) const /*override*/;

    virtual void
    callRenderNameTags(::ScreenContext& screenContext, ::ViewRenderObject const& renderObj, ::Font& font) /*override*/;

    virtual ::CrackRenderObjectCollection extractCracks(::ScreenContext& screenContext) const /*override*/;

    virtual void
    callRenderCracks(::BaseActorRenderContext& renderContext, ::ViewRenderObject const& renderObj) /*override*/;

    virtual bool getForceFog(::Actor const& cameraActor) const /*override*/;

    virtual void setupFog(::ScreenContext& screenContext, float const skyIntensityOverride) /*override*/;

    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data) /*override*/;

    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data) /*override*/;

    virtual void addCameraListenerToRenderChunkCoordinator() /*override*/;

    virtual void
    notifyGeoChangedForAffectedEntities(::RenderChunkShared& renderChunkShared, uchar version) /*override*/;

    virtual void addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    ) /*override*/;

    virtual void addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    ) /*override*/;

    virtual void addBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    ) /*override*/;

    virtual void addBiomeTintedParticleEffect(
        ::HashedString const&         effect,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::std::optional<::mce::Color> overrideColor
    ) /*override*/;

    virtual float getUnderwaterVisionClarity();

    virtual ::FogDefinition::DistanceSettingType _getFogDistanceSettingType() const /*override*/;

    virtual ::FogDefinition::DensitySettingType _getFogDensitySettingType() const /*override*/;

    virtual void _releaseRespectiveResources() /*override*/;

    virtual void queueRenderEntities(
        ::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters
    ) /*override*/;

    virtual void renderEntityEffects(::BaseActorRenderContext& renderContext) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelRendererPlayer(
        ::IClientInstance&                                           clientInstance,
        ::std::shared_ptr<::Options>                                 options,
        ::Level&                                                     level,
        ::LevelRenderer&                                             levelRenderer,
        ::WeakEntityRef                                              localUser,
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> const& soundPlayer,
        ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas const> const&   terrainTexture,
        ::SoundMapping const&                                        sounds
    );

    MCAPI void _addTerrainEffect(
        ::HashedString const& effectName,
        ::BlockPos const&     pos,
        ::Block const&        block,
        ::Vec3 const&         emitterPosition,
        float                 particleCount,
        float                 velocityScalar,
        float                 emitterRadius
    );

    MCAPI void _crack(::BlockSource& region, ::Block const& block, ::BlockPos const& inPos, uchar face);

    MCAPI ::CloudRenderObject _extractClouds(
        ::ScreenContext&                                 screenContext,
        ::mce::framebuilder::SkyWeatherParameters const& skyWeatherParams,
        bool                                             vibrantEnabled
    ) const;

    MCAPI ::ActorShadowRenderObjectCollection _extractEntityShadows(::ScreenContext& screenContext) const;

    MCAPI ::SkyRenderObject _extractSky(::ScreenContext& screenContext) const;

    MCAPI ::TextureUVCoordinateSet _getDestructionParticlesTexture(::Block const& block);

    MCAPI ::mce::MaterialPtr const& _getForcedMaterial(::BlockActor const& actor) const;

    MCAPI void _onLevelSoundEvent(
        ::SharedTypes::Legacy::LevelSoundEvent eventType,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCAPI void _playBabySoundEvent(::Sound const& sound, ::Vec3 const& pos, ::Random& rand) const;

    MCAPI void _playNamedSound(::HashedString const& name, ::Vec3 const& pos) const;

    MCAPI void _renderHighlightSelection(
        ::BaseActorRenderContext& renderContext,
        ::BlockSource&            region,
        ::Block const&            block,
        ::BlockPos const&         pos,
        bool                      renderSecondPart,
        bool                      fancyGraphics
    ) const;

    MCAPI void _renderOutlineSelection(
        ::BaseActorRenderContext& renderContext,
        ::Block const&            block,
        ::BlockSource&            region,
        ::BlockPos const&         pos
    ) const;

    MCAPI ::Sound const& _retrieveActorSoundWithFallback(
        ::SharedTypes::Legacy::LevelSoundEvent eventType,
        ::SharedTypes::Legacy::LevelSoundEvent backupEventType,
        ::ActorSoundIdentifier const&          actorSoundIdentifier
    );

    MCAPI void _spawnSmokeParticles(::ParticleType particleType, ::Vec3 const& pos, int data);

    MCAPI void addDestroyBlock(::BlockPos const& tp, float destroyRate);

    MCAPI bool blockCanHaveCracksOverlay(::Block const& block) const;

    MCAPI bool blockCanHaveSelectionOverlay(::Block const& block) const;

    MCAPI void bobHurt(::Matrix& mv, float a);

    MCAPI void bobView(::Matrix& mv, float a);

    MCAPI void calculateDirectionalLightRenderData(
        ::ScreenContext const&   screenContext,
        ::ViewRenderData const&  renderData,
        ::SkyRenderObject const& skyData
    );

    MCAPI ::CrackRenderObject createCrackRenderObject(
        ::ScreenContext&  screenContext,
        ::BlockSource&    region,
        ::Block const&    block,
        ::BlockPos const& h,
        float             destroyProgress
    ) const;

    MCAPI ::ViewRenderObject createViewRenderObject(::ScreenContext& screenContext, ::SubClientId clientSubId);

    MCAPI void emitGrowthParticles(::Vec3 const& pos);

    MCAPI void ensureItemInHandRenderingParametersInitialized(::mce::Camera& camera);

    MCAPI ::DirectionalLightRenderData getActiveDirectionalLight() const;

    MCAPI float getFov(float a, bool enableVariableFOV) const;

    MCAPI float getFovWithoutGameplay() const;

    MCAPI void playSound(::std::string const& name, ::Vec3 const& pos, float volume, float pitch) const;

    MCAPI void reinit(::Bedrock::NotNullNonOwnerPtr<::TextureAtlas const> const& terrainTexture);

    MCAPI void setItemInHandRenderingParameters(::mce::Camera& camera);

    MCAPI void setupCamera(::mce::Camera& camera, float);

    MCAPI void stopMusic();

    MCAPI void stopSound(::std::string const& name);

    MCAPI void stopSounds();

    MCAPI void tickClouds(bool tessellateBothSides, float a);

    MCAPI void tickSkyColor();

    MCAPI void tryReassignSound(
        ::SharedTypes::Legacy::LevelSoundEvent& eventType,
        ::Sound&                                s,
        ::ActorSoundIdentifier const&           actorSoundIdentifier,
        ::std::string const&                    blockType,
        ::Random&                               rand
    );

    MCAPI void updateDestroyBlock(::BlockPos const& tp, float destroyRate);

    MCAPI void updateDestroyProgress();

    MCAPI void updateListenerState(float alpha);

    MCAPI void updateUnderWaterVisionScale();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static float getActorShadowOffset(::EntityContext const& entity);

    MCAPI static ::TextureUVCoordinateSet getDestructionParticlesTexture(::IRandom& random, ::Block const& block);

    MCAPI static float getNightVisionScale(::Mob const& camera, float a);

    MCAPI static void renderCracks(
        ::ScreenContext&                     screenContext,
        ::ViewRenderData const&              renderData,
        ::CrackRenderObjectCollection const& tagCollection
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IClientInstance&                                           clientInstance,
        ::std::shared_ptr<::Options>                                 options,
        ::Level&                                                     level,
        ::LevelRenderer&                                             levelRenderer,
        ::WeakEntityRef                                              localUser,
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> const& soundPlayer,
        ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas const> const&   terrainTexture,
        ::SoundMapping const&                                        sounds
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
    MCAPI void $initResources();

    MCAPI void $frameUpdate(::ClientFrameUpdateContext& clientFrameUpdateContext);

    MCAPI void $tickLevelRendererCamera();

    MCAPI void $tickRain();

    MCAPI void $onWillChangeDimension(::Player& player);

    MCAPI void $onDimensionChanged(::Player& player);

    MCAPI void $recalculateRenderDistance(float const renderDistanceScalar);

    MCAPI void $preRenderUpdate(
        ::ScreenContext&                        screenContext,
        ::LevelRenderPreRenderUpdateParameters& levelRenderPreRenderUpdateParameters
    );

    MCFOLD void $renderBlockEntities(::BaseActorRenderContext& renderContext, bool renderAlphaLayer);

    MCAPI void $updateViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    MCAPI ::NameTagRenderObjectCollection $extractNameTags(::ScreenContext& screenContext) const;

    MCAPI void $callRenderNameTags(::ScreenContext& screenContext, ::ViewRenderObject const& renderObj, ::Font& font);

    MCAPI ::CrackRenderObjectCollection $extractCracks(::ScreenContext& screenContext) const;

    MCAPI void $callRenderCracks(::BaseActorRenderContext& renderContext, ::ViewRenderObject const& renderObj);

    MCAPI bool $getForceFog(::Actor const& cameraActor) const;

    MCAPI void $setupFog(::ScreenContext& screenContext, float const skyIntensityOverride);

    MCAPI void $levelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data);

    MCAPI void $levelEvent(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data);

    MCFOLD void $addCameraListenerToRenderChunkCoordinator();

    MCAPI void $notifyGeoChangedForAffectedEntities(::RenderChunkShared& renderChunkShared, uchar version);

    MCAPI void $addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );

    MCAPI void $addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );

    MCAPI void $addBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    );

    MCAPI void $addBiomeTintedParticleEffect(
        ::HashedString const&         effect,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::std::optional<::mce::Color> overrideColor
    );

    MCAPI float $getUnderwaterVisionClarity();

    MCAPI ::FogDefinition::DistanceSettingType $_getFogDistanceSettingType() const;

    MCAPI ::FogDefinition::DensitySettingType $_getFogDensitySettingType() const;

    MCAPI void $_releaseRespectiveResources();

    MCAPI void $queueRenderEntities(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    MCAPI void $renderEntityEffects(::BaseActorRenderContext& renderContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForLevelRendererCamera();

    MCNAPI static void** $vftableForPlayerListener();

    MCNAPI static void** $vftableForLevelListener();

    MCNAPI static void** $vftable();
    // NOLINTEND
};
