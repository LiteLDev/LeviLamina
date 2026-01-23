#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/game/LevelRendererCameraListeners.h"
#include "mc/common/SubClientId.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/level/FogDefinition.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorSoundIdentifier;
class BaseActorRenderContext;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class CompoundTag;
class EntityContext;
class Font;
class HashedString;
class IClientInstance;
class IRandom;
class Level;
class LevelRenderer;
class Matrix;
class Mob;
class Player;
class Random;
class ScreenContext;
class SoundPlayerInterface;
class TextureAtlas;
class Vec3;
class WeakEntityRef;
struct ActorShadowRenderObjectCollection;
struct BreakingItemParticleData;
struct ClientFrameUpdateContext;
struct CloudRenderObject;
struct CrackRenderObject;
struct CrackRenderObjectCollection;
struct DeferredSound;
struct DirectionalLightRenderData;
struct LevelRenderPreRenderUpdateParameters;
struct NameTagRenderObjectCollection;
struct Options;
struct RenderChunkShared;
struct ResolvedItemIconInfo;
struct SkyRenderObject;
struct Sound;
struct SoundMapping;
struct TextureUVCoordinateSet;
struct ViewRenderData;
struct ViewRenderObject;
namespace mce { class Camera; }
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
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
        ::ll::UntypedStorage<8, 48> mUnkbe176a;
        ::ll::UntypedStorage<4, 16> mUnkab2292;
        // NOLINTEND

    public:
        // prevent constructor by default
        BiomeParticleKey& operator=(BiomeParticleKey const&);
        BiomeParticleKey(BiomeParticleKey const&);
        BiomeParticleKey();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BiomeParticleKey();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct BiomeParticleKeyHash {};

    struct SkyColorLerp {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 16> mUnk7132fa;
        ::ll::UntypedStorage<4, 16> mUnk5b04f5;
        ::ll::UntypedStorage<4, 16> mUnk319566;
        ::ll::UntypedStorage<4, 4>  mUnk8292aa;
        // NOLINTEND

    public:
        // prevent constructor by default
        SkyColorLerp& operator=(SkyColorLerp const&);
        SkyColorLerp(SkyColorLerp const&);
        SkyColorLerp();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkc9ba13;
    ::ll::UntypedStorage<4, 4>   mUnk30a445;
    ::ll::UntypedStorage<4, 4>   mUnk3b6e4b;
    ::ll::UntypedStorage<8, 16>  mUnk6baa01;
    ::ll::UntypedStorage<8, 16>  mUnkd62011;
    ::ll::UntypedStorage<8, 16>  mUnke3fa18;
    ::ll::UntypedStorage<8, 8>   mUnka1508d;
    ::ll::UntypedStorage<8, 8>   mUnk74e07d;
    ::ll::UntypedStorage<1, 1>   mUnk3e1123;
    ::ll::UntypedStorage<4, 12>  mUnkf3a503;
    ::ll::UntypedStorage<1, 1>   mUnk8273f0;
    ::ll::UntypedStorage<4, 4>   mUnkcd7b78;
    ::ll::UntypedStorage<4, 4>   mUnke6b0c6;
    ::ll::UntypedStorage<4, 336> mUnk6d7d26;
    ::ll::UntypedStorage<8, 64>  mUnk346545;
    ::ll::UntypedStorage<8, 64>  mUnk83e3ca;
    ::ll::UntypedStorage<8, 8>   mUnkf4b55c;
    ::ll::UntypedStorage<4, 4>   mUnkdb8fd7;
    ::ll::UntypedStorage<4, 4>   mUnk2ab7cc;
    ::ll::UntypedStorage<4, 280> mUnk797f4b;
    ::ll::UntypedStorage<4, 4>   mUnkf82b5f;
    ::ll::UntypedStorage<4, 4>   mUnk5a4dd5;
    ::ll::UntypedStorage<4, 4>   mUnk80a9df;
    ::ll::UntypedStorage<4, 4>   mUnkbcf98a;
    ::ll::UntypedStorage<4, 4>   mUnk799cc1;
    ::ll::UntypedStorage<4, 4>   mUnkba5036;
    ::ll::UntypedStorage<4, 4>   mUnk4837aa;
    ::ll::UntypedStorage<4, 4>   mUnkf8e793;
    ::ll::UntypedStorage<4, 4>   mUnk88fa78;
    ::ll::UntypedStorage<4, 4>   mUnkbc7a17;
    ::ll::UntypedStorage<4, 4>   mUnk1ecfdb;
    ::ll::UntypedStorage<4, 4>   mUnk66b0dd;
    ::ll::UntypedStorage<4, 4>   mUnkef2399;
    ::ll::UntypedStorage<4, 4>   mUnk848d03;
    ::ll::UntypedStorage<4, 4>   mUnk3c3885;
    ::ll::UntypedStorage<4, 4>   mUnk8603b8;
    ::ll::UntypedStorage<8, 16>  mUnk8e936a;
    ::ll::UntypedStorage<8, 16>  mUnk39cea2;
    ::ll::UntypedStorage<8, 16>  mUnk547ad3;
    ::ll::UntypedStorage<8, 16>  mUnkaad125;
    ::ll::UntypedStorage<8, 16>  mUnk582c38;
    ::ll::UntypedStorage<8, 16>  mUnkf6fa16;
    ::ll::UntypedStorage<8, 16>  mUnk7a569e;
    ::ll::UntypedStorage<8, 16>  mUnkc595ae;
    ::ll::UntypedStorage<8, 16>  mUnkcee03a;
    ::ll::UntypedStorage<8, 8>   mUnk1d6657;
    ::ll::UntypedStorage<8, 24>  mUnk3d8c91;
    ::ll::UntypedStorage<8, 64>  mUnk7da009;
    ::ll::UntypedStorage<8, 8>   mUnk5885fc;
    ::ll::UntypedStorage<8, 24>  mUnk80a116;
    ::ll::UntypedStorage<8, 8>   mUnk216385;
    ::ll::UntypedStorage<8, 24>  mUnkc063fe;
    ::ll::UntypedStorage<8, 8>   mUnkf00779;
    ::ll::UntypedStorage<8, 8>   mUnk4f9041;
    ::ll::UntypedStorage<4, 48>  mUnkb5014f;
    ::ll::UntypedStorage<4, 12>  mUnk47404f;
    ::ll::UntypedStorage<4, 12>  mUnk91efcd;
    ::ll::UntypedStorage<4, 12>  mUnkd66ac3;
    ::ll::UntypedStorage<8, 8>   mUnkbd5fc8;
    ::ll::UntypedStorage<8, 64>  mUnk435dd6;
    ::ll::UntypedStorage<4, 56>  mUnk1d40dc;
    ::ll::UntypedStorage<4, 4>   mUnk603e7b;
    ::ll::UntypedStorage<8, 16>  mUnk1379ef;
    ::ll::UntypedStorage<8, 16>  mUnk1071cd;
    ::ll::UntypedStorage<8, 16>  mUnk7d5ad1;
    ::ll::UntypedStorage<8, 16>  mUnk175598;
    ::ll::UntypedStorage<8, 16>  mUnk5b149d;
    ::ll::UntypedStorage<8, 8>   mUnk226ab5;
    ::ll::UntypedStorage<8, 640> mUnkb0a4ef;
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
    MCNAPI LevelRendererPlayer(
        ::IClientInstance&                                           clientInstance,
        ::std::shared_ptr<::Options>                                 options,
        ::Level&                                                     level,
        ::LevelRenderer&                                             levelRenderer,
        ::WeakEntityRef                                              localUser,
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> const& soundPlayer,
        ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas const> const&   terrainTexture,
        ::SoundMapping const&                                        sounds
    );

    MCNAPI void _addTerrainEffect(
        ::HashedString const& effectName,
        ::BlockPos const&     pos,
        ::Block const&        block,
        ::Vec3 const&         emitterPosition,
        float                 particleCount,
        float                 velocityScalar,
        float                 emitterRadius
    );

    MCNAPI void _crack(::BlockSource& region, ::Block const& block, ::BlockPos const& inPos, uchar face);

    MCNAPI ::CloudRenderObject _extractClouds(
        ::ScreenContext&                                 screenContext,
        ::mce::framebuilder::SkyWeatherParameters const& skyWeatherParams,
        bool                                             vibrantEnabled
    ) const;

    MCNAPI ::ActorShadowRenderObjectCollection _extractEntityShadows(::ScreenContext& screenContext) const;

    MCNAPI ::SkyRenderObject _extractSky(::ScreenContext& screenContext) const;

    MCNAPI ::TextureUVCoordinateSet _getDestructionParticlesTexture(::Block const& block);

    MCNAPI ::mce::MaterialPtr const& _getForcedMaterial(::BlockActor const& actor) const;

    MCNAPI void _onLevelSoundEvent(
        ::SharedTypes::Legacy::LevelSoundEvent eventType,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCNAPI void _playBabySoundEvent(::Sound const& sound, ::Vec3 const& pos, ::Random& rand) const;

    MCNAPI void _playNamedSound(::HashedString const& name, ::Vec3 const& pos) const;

    MCNAPI void _renderHighlightSelection(
        ::BaseActorRenderContext& renderContext,
        ::BlockSource&            region,
        ::Block const&            block,
        ::BlockPos const&         pos,
        bool                      renderSecondPart,
        bool                      fancyGraphics
    ) const;

    MCNAPI void _renderOutlineSelection(
        ::BaseActorRenderContext& renderContext,
        ::Block const&            block,
        ::BlockSource&            region,
        ::BlockPos const&         pos
    ) const;

    MCNAPI ::Sound const& _retrieveActorSoundWithFallback(
        ::SharedTypes::Legacy::LevelSoundEvent eventType,
        ::SharedTypes::Legacy::LevelSoundEvent backupEventType,
        ::ActorSoundIdentifier const&          actorSoundIdentifier
    );

    MCNAPI void _spawnSmokeParticles(::ParticleType particleType, ::Vec3 const& pos, int data);

    MCNAPI void addDestroyBlock(::BlockPos const& tp, float destroyRate);

    MCNAPI bool blockCanHaveCracksOverlay(::Block const& block) const;

    MCNAPI bool blockCanHaveSelectionOverlay(::Block const& block) const;

    MCNAPI void bobHurt(::Matrix& mv, float a);

    MCNAPI void bobView(::Matrix& mv, float a);

    MCNAPI void calculateDirectionalLightRenderData(
        ::ScreenContext const&   screenContext,
        ::ViewRenderData const&  renderData,
        ::SkyRenderObject const& skyData
    );

    MCNAPI ::CrackRenderObject createCrackRenderObject(
        ::ScreenContext&  screenContext,
        ::BlockSource&    region,
        ::Block const&    block,
        ::BlockPos const& h,
        float             destroyProgress
    ) const;

    MCNAPI ::ViewRenderObject createViewRenderObject(::ScreenContext& screenContext, ::SubClientId clientSubId);

    MCNAPI void emitGrowthParticles(::Vec3 const& pos);

    MCNAPI void ensureItemInHandRenderingParametersInitialized(::mce::Camera& camera);

    MCNAPI ::DirectionalLightRenderData getActiveDirectionalLight() const;

    MCNAPI float getFov(float a, bool enableVariableFOV) const;

    MCNAPI float getFovWithoutGameplay() const;

    MCNAPI void playSound(::std::string const& name, ::Vec3 const& pos, float volume, float pitch) const;

    MCNAPI void reinit(::Bedrock::NotNullNonOwnerPtr<::TextureAtlas const> const& terrainTexture);

    MCNAPI void setItemInHandRenderingParameters(::mce::Camera& camera);

    MCNAPI void setupCamera(::mce::Camera& camera, float);

    MCNAPI void stopMusic();

    MCNAPI void stopSound(::std::string const& name);

    MCNAPI void stopSounds();

    MCNAPI void tickClouds(bool tessellateBothSides, float a);

    MCNAPI void tickSkyColor();

    MCNAPI void tryReassignSound(
        ::SharedTypes::Legacy::LevelSoundEvent& eventType,
        ::Sound&                                s,
        ::ActorSoundIdentifier const&           actorSoundIdentifier,
        ::std::string const&                    blockType,
        ::Random&                               rand
    );

    MCNAPI void updateDestroyBlock(::BlockPos const& tp, float destroyRate);

    MCNAPI void updateDestroyProgress();

    MCNAPI void updateListenerState(float alpha);

    MCNAPI void updateUnderWaterVisionScale();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float getActorShadowOffset(::EntityContext const& entity);

    MCNAPI static ::TextureUVCoordinateSet getDestructionParticlesTexture(::IRandom& random, ::Block const& block);

    MCNAPI static float getNightVisionScale(::Mob const& camera, float a);

    MCNAPI static void renderCracks(
        ::ScreenContext&                     screenContext,
        ::ViewRenderData const&              renderData,
        ::CrackRenderObjectCollection const& tagCollection
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initResources();

    MCNAPI void $frameUpdate(::ClientFrameUpdateContext& clientFrameUpdateContext);

    MCNAPI void $tickLevelRendererCamera();

    MCNAPI void $tickRain();

    MCNAPI void $onWillChangeDimension(::Player& player);

    MCNAPI void $onDimensionChanged(::Player& player);

    MCNAPI void $recalculateRenderDistance(float const renderDistanceScalar);

    MCNAPI void $preRenderUpdate(
        ::ScreenContext&                        screenContext,
        ::LevelRenderPreRenderUpdateParameters& levelRenderPreRenderUpdateParameters
    );

    MCNAPI void $renderBlockEntities(::BaseActorRenderContext& renderContext, bool renderAlphaLayer);

    MCNAPI void $updateViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    MCNAPI ::NameTagRenderObjectCollection $extractNameTags(::ScreenContext& screenContext) const;

    MCNAPI void $callRenderNameTags(::ScreenContext& screenContext, ::ViewRenderObject const& renderObj, ::Font& font);

    MCNAPI ::CrackRenderObjectCollection $extractCracks(::ScreenContext& screenContext) const;

    MCNAPI void $callRenderCracks(::BaseActorRenderContext& renderContext, ::ViewRenderObject const& renderObj);

    MCNAPI bool $getForceFog(::Actor const& cameraActor) const;

    MCNAPI void $setupFog(::ScreenContext& screenContext, float const skyIntensityOverride);

    MCNAPI void $levelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data);

    MCNAPI void $levelEvent(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data);

    MCNAPI void $addCameraListenerToRenderChunkCoordinator();

    MCNAPI void $notifyGeoChangedForAffectedEntities(::RenderChunkShared& renderChunkShared, uchar version);

    MCNAPI void $addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );

    MCNAPI void $addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );

    MCNAPI void $addBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    );

    MCNAPI void $addBiomeTintedParticleEffect(
        ::HashedString const&         effect,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::std::optional<::mce::Color> overrideColor
    );

    MCNAPI float $getUnderwaterVisionClarity();

    MCNAPI ::FogDefinition::DistanceSettingType $_getFogDistanceSettingType() const;

    MCNAPI ::FogDefinition::DensitySettingType $_getFogDensitySettingType() const;

    MCNAPI void $_releaseRespectiveResources();

    MCNAPI void
    $queueRenderEntities(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    MCNAPI void $renderEntityEffects(::BaseActorRenderContext& renderContext);
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
