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
#include "mc/deps/core/container/slot_map_handle.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/FogDefinition.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AmbientSoundController;
class BaseActorRenderContext;
class Block;
class BlockSource;
class ClientFrameUpdateContext;
class CompoundTag;
class Font;
class IClientInstance;
class IRandom;
class Level;
class LevelAnimateTickHelper;
class LevelRenderer;
class Matrix;
class Player;
class RenderChunkShared;
class ScreenContext;
class SoundMapping;
class SoundPlayerInterface;
class Tessellator;
class TextureTessellator;
struct BlockDestructInfo;
struct BreakingItemParticleData;
struct CrackRenderObjectCollection;
struct DeferredSound;
struct LevelRenderPreRenderUpdateParameters;
struct NameTagRenderObjectCollection;
struct ResolvedItemIconInfo;
struct TextureUVCoordinateSet;
struct ViewRenderObject;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace ParticleSystem { class ParticleEmitter; }
namespace mce { class Camera; }
namespace mce { class Mesh; }
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
    ::ll::TypedStorage<8, 72, ::TextureAtlasItem>             uvBreakBlockItem;
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
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mSubtitlesOptionSubscription;
    ::ll::TypedStorage<1, 1, bool>                                        mSubtitlesEnabled;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelAnimateTickHelper>> mLevelAnimateTickHelper;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(
                ::std::string const&,
                ::std::optional<::std::string>,
                ::Vec3 const&,
                float,
                ::Vec3 const&,
                ::Vec3 const&,
                bool
            ),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
                                                                 mOnSoundPlayed;
    ::ll::TypedStorage<8, 3360, ::ServerGraphicsOverrideManager> mScriptGraphicsOverrideManager;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererPlayer& operator=(LevelRendererPlayer const&);
    LevelRendererPlayer(LevelRendererPlayer const&);
    LevelRendererPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelRendererPlayer() /*override*/ = default;

    virtual void initResources() /*override*/;

    virtual void frameUpdate(::ClientFrameUpdateContext&) /*override*/;

    virtual void tickLevelRendererCamera() /*override*/;

    virtual void tickRain() /*override*/;

    virtual void onWillChangeDimension(::Player&) /*override*/;

    virtual void onDimensionChanged(::Player&) /*override*/;

    virtual void recalculateRenderDistance(float const) /*override*/;

    virtual void preRenderUpdate(::ScreenContext&, ::LevelRenderPreRenderUpdateParameters&) /*override*/;

    virtual void renderBlockEntities(::BaseActorRenderContext&, bool) /*override*/;

    virtual void updateViewArea(::LevelRenderPreRenderUpdateParameters const&) /*override*/;

    virtual ::NameTagRenderObjectCollection extractNameTags(::ScreenContext&) const /*override*/;

    virtual void callRenderNameTags(::ScreenContext&, ::ViewRenderObject const&, ::Font&) /*override*/;

    virtual ::CrackRenderObjectCollection extractCracks(::ScreenContext&) const /*override*/;

    virtual void callRenderCracks(::BaseActorRenderContext&, ::ViewRenderObject const&) /*override*/;

    virtual bool getForceFog(::Actor const&) const /*override*/;

    virtual void setupFog(::ScreenContext&, float const) /*override*/;

    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int) /*override*/;

    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&) /*override*/;

    virtual void addCameraListenerToRenderChunkCoordinator() /*override*/;

    virtual void notifyGeoChangedForAffectedEntities(::RenderChunkShared&, uchar) /*override*/;

    virtual void
    addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float) /*override*/;

    virtual void
    addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float) /*override*/;

    virtual void addBreakingItemParticleEffect(
        ::Vec3 const&,
        ::BreakingItemParticleData const&,
        ::ResolvedItemIconInfo const&
    ) /*override*/;

    virtual void addBiomeTintedParticleEffect(
        ::HashedString const&,
        ::BlockPos const&,
        ::Block const&,
        ::std::optional<::mce::Color>
    ) /*override*/;

    virtual float getUnderwaterVisionClarity();

    virtual ::FogDefinition::DistanceSettingType _getFogDistanceSettingType() const /*override*/;

    virtual ::FogDefinition::DensitySettingType _getFogDensitySettingType() const /*override*/;

    virtual void _releaseRespectiveResources() /*override*/;

    virtual void queueRenderEntities(::LevelRenderPreRenderUpdateParameters const&) /*override*/;

    virtual void renderEntityEffects(::BaseActorRenderContext&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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

    MCAPI bool blockCanHaveSelectionOverlay(::Block const& block) const;

    MCAPI void bobHurt(::Matrix& mv, float a);

    MCAPI void bobView(::Matrix& mv, float a);

    MCAPI ::ViewRenderObject createViewRenderObject(::ScreenContext& screenContext, ::SubClientId clientSubId);

    MCAPI ::DirectionalLightRenderData getActiveDirectionalLight() const;

    MCAPI float getFov(float a, bool enableVariableFOV) const;

    MCAPI void renderHitSelect(
        ::BaseActorRenderContext& renderContext,
        ::BlockSource&            region,
        ::BlockPos const&         pos,
        bool                      fancyGraphics
    ) const;

    MCAPI void setupCamera(::mce::Camera& camera, float);

    MCAPI void updateDestroyProgress();

    MCAPI void updateListenerState(float alpha);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TextureUVCoordinateSet getDestructionParticlesTexture(::IRandom& random, ::Block const& block);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
