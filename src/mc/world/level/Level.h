#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/Factory.h"
#include "mc/util/IDType.h"
#include "mc/util/OwnerPtrFactory.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/ParticleProvider.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/item/registry/ItemRegistryRef.h"
#include "mc/world/level/AutonomousActorManager.h"
#include "mc/world/level/BlockActorLevelListener.h"
#include "mc/world/level/BlockSourceListener.h"
#include "mc/world/level/ChunkTickRangeManager.h"
#include "mc/world/level/ChunkViewTrackerManager.h"
#include "mc/world/level/CommandOriginSystem.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/ILevel.h"
#include "mc/world/level/IWorldRegistriesProvider.h"
#include "mc/world/level/LevelCrashDumpManager.h"
#include "mc/world/level/LevelSoundManager.h"
#include "mc/world/level/PlayerTickManager.h"
#include "mc/world/level/levelgen/structure/registry/JigsawStructureRegistry.h"
#include "mc/world/level/levelgen/v1/StructureSpawnRegistry.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class Abilities;
class Actor;
class ActorAnimationControllerGroup;
class ActorAnimationGroup;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorDimensionTransferManager;
class ActorEventBroadcaster;
class ActorEventCoordinator;
class ActorFactory;
class ActorFetcher;
class ActorGarbageCollector;
class ActorInfoRegistry;
class ActorManager;
class ActorRuntimeID;
class ActorRuntimeIDManager;
class ActorSoundIdentifier;
class ArmorTrimUnloader;
class AutomationBehaviorTreeGroup;
class BaseLightTextureImageBuilder;
class BehaviorFactory;
class BiomeComponentFactory;
class BiomeManager;
class BiomeRegistry;
class Block;
class BlockDefinitionGroup;
class BlockEventCoordinator;
class BlockLegacy;
class BlockPalette;
class BlockPos;
class BlockReducer;
class BlockSource;
class BlockSourceValidityManager;
class BlockTypeRegistry;
class BossEventSubscriptionManager;
class CameraPresets;
class CameraRegistry;
class ChangeDimensionRequest;
class ChunkGenerationManager;
class ChunkPos;
class ChunkSource;
class ChunkTickOffsetManager;
class ChunkViewSource;
class ClientPlayerEventCoordinator;
class Command;
class CommandOrigin;
class CompoundTag;
class ContainerRegistry;
class Dimension;
class DimensionConversionData;
class DimensionDefinitionGroup;
class DimensionFactory;
class DimensionManager;
class DisplayActorManager;
class EducationSettingsManager;
class EntityContext;
class EntityRegistry;
class EntitySystems;
class EntitySystemsManager;
class EventCoordinatorManager;
class Experiments;
class Explosion;
class FeatureRegistry;
class FeatureTypeFactory;
class GameRules;
class GameplayUserManager;
class HashedString;
class HitResult;
class HitResultWrapper;
class IConstBlockSource;
class IEntityRegistryOwner;
class ILevelRandom;
class IMinecraftEventing;
class IRandom;
class IUnknownBlockTypeRegistry;
class InternalComponentRegistry;
class ItemEventCoordinator;
class LayeredAbilities;
class LevelBlockDestroyer;
class LevelChunk;
class LevelChunkEventManager;
class LevelChunkMetaDataManager;
class LevelChunkPerformanceTelemetry;
class LevelChunkSaveManager;
class LevelData;
class LevelEventCoordinator;
class LevelEventManager;
class LevelListener;
class LevelSeed64;
class LevelSettings;
class LevelStorage;
class LevelStorageManager;
class LinkedAssetValidator;
class LoadingScreenIdManager;
class LootTables;
class MapItemSavedData;
class Mob;
class MolangVariableMap;
class NavigationComponent;
class NetEventCallback;
class NetworkIdentifier;
class NpcDialogueStorage;
class PacketSender;
class Particle;
class Path;
class PauseManager;
class PermissionsHandler;
class PhotoItemSavedDataCollection;
class PhotoManager;
class PhotoStorage;
class Player;
class PlayerAbilitiesManager;
class PlayerDeathManager;
class PlayerDimensionTransferManager;
class PlayerEventCoordinator;
class PlayerLimboActorManager;
class PlayerListEntry;
class PlayerListManager;
class PlayerMovementSettingsManager;
class PlayerPermissionsManager;
class PlayerPermissionsSynchroniser;
class PlayerSleepManager;
class PortalForcer;
class ProjectileFactory;
class PropertyGroupManager;
class Random;
class Recipes;
class ResourcePackManager;
class SavedDataStorage;
class Scheduler;
class Scoreboard;
class ScriptDeferredEventCoordinator;
class ScriptingEventCoordinator;
class SerializedSkin;
class ServerLevelEventCoordinator;
class ServerNetworkEventCoordinator;
class ServerParticleManager;
class ServerPlayerEventCoordinator;
class ServerPlayerSleepManager;
class SoundPlayerInterface;
class Spawner;
class StrictEntityContext;
class StructureManager;
class SubChunkManager;
class SubChunkPacket;
class SubChunkRequestManager;
class SurfaceBuilderRegistry;
class TagCacheManager;
class TaskGroup;
class TempEPtrManager;
class TickDeltaTimeManager;
class TickTimeManager;
class TickingAreaList;
class TickingAreasManager;
class TradeTables;
class TrimMaterialRegistry;
class TrimPatternRegistry;
class TrustedSkinHelper;
class UniqueIDManager;
class UserEntityIdentifierComponent;
class VanillaActorEventListenerManager;
class Vec3;
class VolumeEntityManagerServer;
class WeakEntityRef;
class WeatherManager;
class _TickPtr;
struct ActorUniqueID;
struct AdventureSettings;
struct Bounds;
struct BreakingItemParticleData;
struct EducationLevelSettings;
struct LevelTagIDType;
struct LevelTagSetIDType;
struct NetworkPermissions;
struct PlayerMovementSettings;
struct PlayerSleepStatus;
struct ResolvedItemIconInfo;
struct ScreenshotOptions;
struct Tick;
namespace PlayerCapabilities { struct ISharedController; }
namespace PositionTrackingDB { class PositionTrackingDBClient; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace cereal { struct ReflectionCtx; }
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class ServerLevel;

class Level : public ::ILevel, public ::BlockSourceListener, public ::IWorldRegistriesProvider {
public:
    [[nodiscard]] ServerLevel& asServer() { return *reinterpret_cast<ServerLevel*>(this); }

public:
    // Level inner types define
    using RegionSet = ::std::unordered_set<::BlockSource*>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PacketSender> const>                       mPacketSender;
    ::ll::TypedStorage<8, 128, ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>> mTagRegistry;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorInfoRegistry>>            mActorInfoRegistry;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelListener*>>                   mListeners;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelStorageManager>>           mLevelStorageManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelData> const>  mLevelData;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockSource*>>              mRegions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LinkedAssetValidator>>          mLinkedAssetValidator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDefinitionGroup>>          mEntityDefinitions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorAnimationGroup>>           mActorAnimationGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorAnimationControllerGroup>> mActorAnimationControllerGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockDefinitionGroup>>          mBlockDefinitions;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::TrimPatternRegistry>>          mTrimPatternRegistry;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::TrimMaterialRegistry>>         mTrimMaterialRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Spawner>>                       mMobSpawner;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ProjectileFactory>>             mProjectileFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PropertyGroupManager>>          mActorPropertyGroups;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CameraPresets>>                 mCameraPresets;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BehaviorFactory>>               mBehaviorFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AutomationBehaviorTreeGroup>>   mAutomationBehaviorTreeDefinitions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockPalette>>                  mGlobalBlockPalette;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Recipes>>                       mRecipes;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockReducer>>                  mBlockReducer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NpcDialogueStorage>>            mNpcDialogueStorage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::InternalComponentRegistry>>     mInternalComponentRegistry;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PortalForcer>>> mPortalForcer;
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const>                                        mItemRegistry;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BlockTypeRegistry>>                           mBlockRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IUnknownBlockTypeRegistry>>                  mUnknownBlockTypeRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BossEventSubscriptionManager>>       mBossEventSubscriptionManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::ContainerRegistry>> const> mContainerRegistry;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::HitResultWrapper>>> mHitResultWrapper;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mImmersiveReaderString;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::ILevelRandom>>>    mLevelRandom;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::NetEventCallback>> mNetEventCallback;
    ::ll::TypedStorage<1, 1, bool const>                                      mIsClientSide;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                   mSubClientId;
    ::ll::TypedStorage<1, 1, bool>                                            mIsExporting;
    ::ll::TypedStorage<1, 1, bool>                                            mDisablePlayerInteractions;
    ::ll::TypedStorage<1, 1, bool>                                            mSimPaused;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                  mMainThreadTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                  mIOTaskGroup;
    ::ll::TypedStorage<8, 8, ::Scheduler&>                                    mScheduler;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mLevelId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TickingAreasManager>>        mTickingAreasMgr;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::TempEPtrManager>>> mTempEPtrManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PhotoItemSavedDataCollection>> mPhotoItemSavedDataCollection;
    ::ll::TypedStorage<1, 1, bool>                                              mTearingDown;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                             mEventing;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::EventCoordinatorManager>>>
                                                                                 mEventCoordinatorManager;
    ::ll::TypedStorage<8, 768, ::LevelSoundManager>                              mLevelSoundManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mStructureManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::LevelChunkPerformanceTelemetry>>>
                                                              mLevelChunkPerformanceTelemetry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LootTables>> mLootTables;
    ::ll::TypedStorage<8, 8, ::BlockLegacy const*>            mRegisteredBorderBlock;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorFactory>>> mActorFactory;
    ::ll::TypedStorage<8, 632, ::JigsawStructureRegistry>                                     mJigsawStructureRegistry;
    ::ll::TypedStorage<8, 128, ::StructureSpawnRegistry>                                      mStructureSpawnRegistry;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::DimensionFactory>>> mDimensionFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::DimensionManager>>> mDimensionManager;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                                         mLevelEntity;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner>>              mEntityRegistryOwner;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::PauseManager>>                                         mPauseManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::EntitySystemsManager>>>                mEntitySystemsManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FeatureRegistry>>                                mFeatureRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FeatureTypeFactory>>                             mFeatureTypeFactory;
    ::ll::TypedStorage<8, 64, ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&>>
        mLightTextureImageBuilderFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::EducationSettingsManager>>>
                                                                                         mEducationSettingsManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerCapabilities::ISharedController>> mCapabilities;
    ::ll::TypedStorage<1, 8, ::BlockActorLevelListener>                                  mBlockActorLevelListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VanillaActorEventListenerManager>> mVanillaActorEventListenerManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PositionTrackingDB::PositionTrackingDBClient>>
                                                                mPositionTrackerDBClient;
    ::ll::TypedStorage<1, 1, bool>                              mClientSideChunkGenEnabled;
    ::ll::TypedStorage<1, 1, bool>                              mBlockNetworkIdsAreHashes;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeManager>> mBiomeManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorGarbageCollector>>>
                                                                                              mActorGarbageCollector;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorManager>>> mActorManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRemoveActorEntityReferences;
    ::ll::TypedStorage<8, 168, ::AutonomousActorManager>       mAutonomousActorManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorFetcher>>> mActorFetcher;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::GameplayUserManager>>>
                                                               mGameplayUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemovedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAnyGameplayUsersRemovedSubscription;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scoreboard>>  mScoreboard;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorRuntimeIDManager>>>
        mActorRuntimeIDManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerListManager>>> mPlayerListManager;
    ::ll::TypedStorage<8, 64, ::PlayerTickManager>                                                 mPlayerTickManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ServerParticleManager>>>
                                                               mServerParticleManager;
    ::ll::TypedStorage<8, 648, ::ParticleProvider>             mParticleProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSendServerLegacyParticleSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAddTerrainParticleEffectSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAddTerrainSlideEffectSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAddBreakingItemParticleEffectSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAddBiomeTintedParticleEffectSubscription;
    ::ll::TypedStorage<8, 24, ::ChunkTickRangeManager>         mChunkTickRangeManager;
    ::ll::TypedStorage<8, 72, ::ChunkViewTrackerManager>       mChunkViewTrackerManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::ActorEventBroadcaster> const> mActorEventBroadcaster;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::LoadingScreenIdManager>>      mLoadingScreenIdManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerDimensionTransferManager>>>
                                                                              mPlayerDimensionTransferManager;
    ::ll::TypedStorage<1, 16, ::LevelCrashDumpManager const>                  mLevelCrashDumpManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::UniqueIDManager>>> mUniqueIDManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mOnPictureTakenSubscription;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PhotoManager>>>      mPhotoManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::LevelEventManager>>> mLevelEventManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLevelEventDataSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLevelEventCompoundTagSubscription;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ChunkTickOffsetManager>>>
        mChunkTickOffsetManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerMovementSettingsManager>>>
        mPlayerMovementSettingsManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerAbilitiesManager>>>
        mPlayerAbilitiesManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerPermissionsManager>>>
        mPlayerPermissionsManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerPermissionsSynchroniser>>>
        mPlayerPermissionsSynchroniser;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::LevelChunkEventManager>>>
                                                               mLevelChunkEventManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkLoadedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkReloadedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkDiscardedSubscription;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorDimensionTransferManager>>>
        mActorDimensionTransferManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::LevelBlockDestroyer>>>
        mLevelBlockDestroyer;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::TickDeltaTimeManager>>>
                                                                              mTickDeltaTimeManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::TickTimeManager>>> mTickTimeManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::BlockSourceValidityManager>>>
                                                                                    mBlockSourceValidityManager;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::LevelChunkSaveManager>>                  mLevelChunkSaveManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::WeatherManager>>>        mWeatherManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::cereal::ReflectionCtx>>> mCerealContext;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                   mHandleLowMemoryOnTick;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mLowMemorySubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Level() /*override*/;

    // vIndex: 1
    virtual bool initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId
    ) /*override*/;

    // vIndex: 2
    virtual void startLeaveGame() /*override*/;

    // vIndex: 3
    virtual bool isLeaveGameDone() /*override*/;

    // vIndex: 4
    virtual ::WeakRef<::Dimension> getOrCreateDimension(::DimensionType dimensionType) /*override*/;

    // vIndex: 5
    virtual ::WeakRef<::Dimension> getDimension(::DimensionType id) const /*override*/;

    // vIndex: 6
    virtual ::DimensionType getLastOrDefaultSpawnDimensionId(::DimensionType lastDimensionId) const /*override*/;

    // vIndex: 8
    virtual void forEachDimension(::std::function<bool(::Dimension&)> callback) /*override*/;

    // vIndex: 7
    virtual void forEachDimension(::std::function<bool(::Dimension const&)> callback) const /*override*/;

    // vIndex: 11
    virtual uint getChunkTickRange() const /*override*/;

    // vIndex: 12
    virtual ::ChunkTickRangeManager const& getChunkTickRangeManager() const /*override*/;

    // vIndex: 13
    virtual ::PortalForcer& getPortalForcer() /*override*/;

    // vIndex: 14
    virtual void requestPlayerChangeDimension(::Player& player, ::ChangeDimensionRequest&& changeRequest) /*override*/;

    // vIndex: 15
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerDimensionTransferManager>
    getPlayerDimensionTransferManager() /*override*/;

    // vIndex: 16
    virtual void
    entityChangeDimension(::Actor& entity, ::DimensionType toId, ::std::optional<::Vec3> entityPos) /*override*/;

    // vIndex: 17
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorDimensionTransferManager>
    getActorDimensionTransferManager() /*override*/;

    // vIndex: 18
    virtual ::Spawner& getSpawner() const /*override*/;

    // vIndex: 19
    virtual ::Bedrock::NotNullNonOwnerPtr<::BossEventSubscriptionManager>
    getBossEventSubscriptionManager() /*override*/;

    // vIndex: 20
    virtual ::ProjectileFactory& getProjectileFactory() const /*override*/;

    // vIndex: 21
    virtual ::ActorDefinitionGroup* getEntityDefinitions() const /*override*/;

    // vIndex: 22
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationGroup> getActorAnimationGroup() const /*override*/;

    // vIndex: 23
    virtual ::Bedrock::NonOwnerPointer<::ActorAnimationControllerGroup> getActorAnimationControllerGroup() const
        /*override*/;

    // vIndex: 24
    virtual ::BlockDefinitionGroup* getBlockDefinitions() const /*override*/;

    // vIndex: 25
    virtual ::PropertyGroupManager& getActorPropertyGroup() const /*override*/;

    // vIndex: 27
    virtual ::CameraPresets const& getCameraPresets() const /*override*/;

    // vIndex: 26
    virtual ::CameraPresets& getCameraPresets() /*override*/;

    // vIndex: 28
    virtual bool getDisablePlayerInteractions() const /*override*/;

    // vIndex: 29
    virtual void setDisablePlayerInteractions(bool const disable) /*override*/;

    // vIndex: 30
    virtual ::AutomationBehaviorTreeGroup& getAutomationBehaviorTreeGroup() const /*override*/;

    // vIndex: 31
    virtual ::BehaviorFactory& getBehaviorFactory() const /*override*/;

    // vIndex: 32
    virtual ::SharedTypes::Legacy::Difficulty getDifficulty() const /*override*/;

    // vIndex: 34
    virtual ::DimensionConversionData getDimensionConversionData() const /*override*/;

    // vIndex: 35
    virtual float getSpecialMultiplier(::DimensionType dimensionType) const /*override*/;

    // vIndex: 36
    virtual bool hasCommandsEnabled() const /*override*/;

    // vIndex: 37
    virtual bool useMsaGamertagsOnly() const /*override*/;

    // vIndex: 38
    virtual void setMsaGamertagsOnly(bool msaGamertagsOnly) /*override*/;

    // vIndex: 39
    virtual ::Actor* addEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;

    // vIndex: 40
    virtual ::Actor* addGlobalEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;

    // vIndex: 41
    virtual ::Actor* addAutonomousEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;

    // vIndex: 42
    virtual void addUser(::OwnerPtr<::EntityContext> userEntity) /*override*/;

    // vIndex: 43
    virtual ::Actor* addDisplayEntity(::BlockSource&, ::OwnerPtr<::EntityContext>) /*override*/;

    // vIndex: 44
    virtual void removeDisplayEntity(::WeakEntityRef) /*override*/;

    // vIndex: 45
    virtual ::Bedrock::NonOwnerPointer<::DisplayActorManager> getDisplayActorManager() /*override*/;

    // vIndex: 46
    virtual void suspendPlayer(::Player& player) /*override*/;

    // vIndex: 47
    virtual void resumePlayer(::Player& player) /*override*/;

    // vIndex: 48
    virtual bool isPlayerSuspended(::Player& player) const /*override*/;

    // vIndex: 50
    virtual ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> getGameplayUserManager() /*override*/;

    // vIndex: 49
    virtual ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager const> getGameplayUserManager() const /*override*/;

    // vIndex: 51
    virtual ::OwnerPtr<::EntityContext> removeActorAndTakeEntity(::WeakEntityRef entityRef) /*override*/;

    // vIndex: 52
    virtual ::OwnerPtr<::EntityContext> removeActorFromWorldAndTakeEntity(::WeakEntityRef entityRef) /*override*/;

    // vIndex: 53
    virtual ::OwnerPtr<::EntityContext> takeEntity(::WeakEntityRef entityRef, ::LevelChunk& lc) /*override*/;

    // vIndex: 54
    virtual ::StrictEntityContext fetchStrictEntity(::ActorUniqueID actorId, bool getRemoved) const /*override*/;

    // vIndex: 55
    virtual ::Actor* fetchEntity(::ActorUniqueID actorId, bool getRemoved) const /*override*/;

    // vIndex: 56
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorFetcher const> getActorFetcher() const /*override*/;

    // vIndex: 57
    virtual ::Actor* getRuntimeEntity(::ActorRuntimeID actorId, bool getRemoved) const /*override*/;

    // vIndex: 59
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager> getActorRuntimeIDManager() /*override*/;

    // vIndex: 58
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager const> getActorRuntimeIDManager() const /*override*/;

    // vIndex: 60
    virtual ::Mob* getMob(::ActorUniqueID mobId) const /*override*/;

    // vIndex: 63
    virtual ::Player* getPlayer(::std::string const& name) const /*override*/;

    // vIndex: 62
    virtual ::Player* getPlayer(::mce::UUID const& uuid) const /*override*/;

    // vIndex: 61
    virtual ::Player* getPlayer(::ActorUniqueID entityID) const /*override*/;

    // vIndex: 64
    virtual ::Player* getPlayerByXuid(::std::string const& xuid) const /*override*/;

    // vIndex: 65
    virtual ::Player* getPlatformPlayer(::std::string const& platformOnlineId) const /*override*/;

    // vIndex: 66
    virtual ::Player* getPlayerFromServerId(::std::string const& serverId) const /*override*/;

    // vIndex: 67
    virtual ::Player* getRuntimePlayer(::ActorRuntimeID runtimeId) const /*override*/;

    // vIndex: 68
    virtual int getNumRemotePlayers() const /*override*/;

    // vIndex: 69
    virtual ::Player* getPrimaryLocalPlayer() const /*override*/;

    // vIndex: 70
    virtual ::IMinecraftEventing& getEventing() /*override*/;

    // vIndex: 71
    virtual ::mce::Color getPlayerColor(::Player const& player) const /*override*/;

    // vIndex: 72
    virtual ::Tick const& getCurrentTick() const /*override*/;

    // vIndex: 73
    virtual ::Tick const getCurrentServerTick() const /*override*/;

    // vIndex: 74
    virtual ::Bedrock::NotNullNonOwnerPtr<::TickDeltaTimeManager const> getTickDeltaTimeManager() const /*override*/;

    // vIndex: 384
    virtual ::ArmorTrimUnloader* getArmorTrimUnloader();

    // vIndex: 76
    virtual ::BiomeRegistry const& getBiomeRegistry() const /*override*/;

    // vIndex: 75
    virtual ::BiomeRegistry& getBiomeRegistry() /*override*/;

    // vIndex: 78
    virtual ::BlockPalette const& getBlockPalette() const /*override*/;

    // vIndex: 77
    virtual ::BlockPalette& getBlockPalette() /*override*/;

    // vIndex: 80
    virtual ::FeatureRegistry const& getFeatureRegistry() const /*override*/;

    // vIndex: 79
    virtual ::FeatureRegistry& getFeatureRegistry() /*override*/;

    // vIndex: 82
    virtual ::FeatureTypeFactory const& getFeatureTypeFactory() const /*override*/;

    // vIndex: 81
    virtual ::FeatureTypeFactory& getFeatureTypeFactory() /*override*/;

    // vIndex: 84
    virtual ::JigsawStructureRegistry const& getJigsawStructureRegistry() const /*override*/;

    // vIndex: 83
    virtual ::JigsawStructureRegistry& getJigsawStructureRegistry() /*override*/;

    // vIndex: 86
    virtual ::StructureSpawnRegistry const& getStructureSpawnRegistry() const /*override*/;

    // vIndex: 85
    virtual ::StructureSpawnRegistry& getStructureSpawnRegistry() /*override*/;

    // vIndex: 88
    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> const getStructureManager() const /*override*/;

    // vIndex: 87
    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> getStructureManager() /*override*/;

    // vIndex: 90
    virtual ::BiomeComponentFactory const& getBiomeComponentFactory() const /*override*/;

    // vIndex: 89
    virtual ::BiomeComponentFactory& getBiomeComponentFactory() /*override*/;

    // vIndex: 92
    virtual ::SurfaceBuilderRegistry const& getSurfaceBuilderRegistry() const /*override*/;

    // vIndex: 91
    virtual ::SurfaceBuilderRegistry& getSurfaceBuilderRegistry() /*override*/;

    // vIndex: 94
    virtual ::BiomeManager const& getBiomeManager() const /*override*/;

    // vIndex: 93
    virtual ::BiomeManager& getBiomeManager() /*override*/;

    // vIndex: 96
    virtual ::OwnerPtrFactory<::Dimension, ::ILevel&, ::Scheduler&> const& getDimensionFactory() const /*override*/;

    // vIndex: 95
    virtual ::OwnerPtrFactory<::Dimension, ::ILevel&, ::Scheduler&>& getDimensionFactory() /*override*/;

    // vIndex: 98
    virtual ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&> const&
    getLightTextureImageBuilderFactory() const /*override*/;

    // vIndex: 97
    virtual ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&>&
    getLightTextureImageBuilderFactory() /*override*/;

    // vIndex: 33
    virtual ::InternalComponentRegistry& getInternalComponentRegistry() const /*override*/;

    // vIndex: 100
    virtual ::IWorldRegistriesProvider const& getWorldRegistriesProvider() const /*override*/;

    // vIndex: 99
    virtual ::IWorldRegistriesProvider& getWorldRegistriesProvider() /*override*/;

    // vIndex: 101
    virtual void addListener(::LevelListener& listener) /*override*/;

    // vIndex: 102
    virtual void removeListener(::LevelListener& listener) /*override*/;

    // vIndex: 103
    virtual void tickEntities() /*override*/;

    // vIndex: 104
    virtual void tickEntitySystems() /*override*/;

    // vIndex: 107
    virtual void onPlayerDeath(::Player& player, ::ActorDamageSource const& source) /*override*/;

    // vIndex: 108
    virtual void tick() /*override*/;

    // vIndex: 110
    virtual bool explode(
        ::BlockSource& region,
        ::Actor*       source,
        ::Vec3 const&  pos,
        float          explosionRadius,
        bool           fire,
        bool           breaksBlocks,
        float          maxResistance,
        bool           allowUnderwater
    ) /*override*/;

    // vIndex: 109
    virtual bool explode(::Explosion& explosion) /*override*/;

    // vIndex: 113
    virtual void denyEffect(::BlockSource& region, ::Vec3 const& pos) /*override*/;

    // vIndex: 114
    virtual void potionSplash(::Vec3 const& pos, ::mce::Color const& color, bool instantaneousEffect) /*override*/;

    // vIndex: 115
    virtual bool extinguishFire(::BlockSource& region, ::BlockPos const& pos, uchar face, ::Actor* source) /*override*/;

    // vIndex: 117
    virtual ::std::unique_ptr<::Path>
    findPath(::Actor& from, int xBest, int yBest, int zBest, ::NavigationComponent& navigation) /*override*/;

    // vIndex: 116
    virtual ::std::unique_ptr<::Path>
    findPath(::Actor& from, ::Actor const& to, ::NavigationComponent& navigation) /*override*/;

    // vIndex: 119
    virtual void setSleepStatus(::PlayerSleepStatus const& status) /*override*/;

    // vIndex: 120
    virtual ::PlayerSleepStatus getSleepStatus() const /*override*/;

    // vIndex: 118
    virtual void updateSleepingPlayerList() /*override*/;

    // vIndex: 386
    virtual ::PlayerSleepManager const& getPlayerSleepManager() const = 0;

    // vIndex: 385
    virtual ::PlayerSleepManager& getPlayerSleepManager() = 0;

    // vIndex: 154
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> getServerPlayerSleepManager() /*override*/;

    // vIndex: 153
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> getServerPlayerSleepManager() const
        /*override*/;

    // vIndex: 121
    virtual int getTime() const /*override*/;

    // vIndex: 122
    virtual void setTime(int time) /*override*/;

    // vIndex: 123
    virtual uint getSeed() /*override*/;

    // vIndex: 124
    virtual ::LevelSeed64 getLevelSeed64() const /*override*/;

    // vIndex: 125
    virtual ::BlockPos const& getSharedSpawnPos() const /*override*/;

    // vIndex: 126
    virtual void setDefaultSpawn(::BlockPos const& spawnPos) /*override*/;

    // vIndex: 127
    virtual ::BlockPos const& getDefaultSpawn() const /*override*/;

    // vIndex: 128
    virtual void setDefaultGameType(::GameType) /*override*/;

    // vIndex: 129
    virtual ::GameType getDefaultGameType() const /*override*/;

    // vIndex: 130
    virtual void setDifficulty(::SharedTypes::Legacy::Difficulty difficulty) /*override*/;

    // vIndex: 131
    virtual void setMultiplayerGameIntent(bool multiplayerGame) /*override*/;

    // vIndex: 132
    virtual bool getMultiplayerGameIntent() const /*override*/;

    // vIndex: 133
    virtual void setMultiplayerGame(bool multiplayerGame) /*override*/;

    // vIndex: 134
    virtual bool isMultiplayerGame() const /*override*/;

    // vIndex: 135
    virtual void setLANBroadcastIntent(bool broadcast) /*override*/;

    // vIndex: 136
    virtual bool getLANBroadcastIntent() const /*override*/;

    // vIndex: 137
    virtual void setLANBroadcast(bool broadcast) /*override*/;

    // vIndex: 138
    virtual bool getLANBroadcast() const /*override*/;

    // vIndex: 139
    virtual void setXBLBroadcastIntent(::Social::GamePublishSetting) /*override*/;

    // vIndex: 140
    virtual ::Social::GamePublishSetting getXBLBroadcastIntent() const /*override*/;

    // vIndex: 141
    virtual bool hasXBLBroadcastIntent() const /*override*/;

    // vIndex: 142
    virtual void setXBLBroadcastMode(::Social::GamePublishSetting) /*override*/;

    // vIndex: 143
    virtual ::Social::GamePublishSetting getXBLBroadcastMode() const /*override*/;

    // vIndex: 144
    virtual bool hasXBLBroadcast() const /*override*/;

    // vIndex: 145
    virtual void setPlatformBroadcastIntent(::Social::GamePublishSetting) /*override*/;

    // vIndex: 146
    virtual ::Social::GamePublishSetting getPlatformBroadcastIntent() const /*override*/;

    // vIndex: 147
    virtual bool hasPlatformBroadcastIntent() const /*override*/;

    // vIndex: 148
    virtual void setPlatformBroadcastMode(::Social::GamePublishSetting) /*override*/;

    // vIndex: 149
    virtual ::Social::GamePublishSetting getPlatformBroadcastMode() const /*override*/;

    // vIndex: 150
    virtual bool hasPlatformBroadcast() const /*override*/;

    // vIndex: 151
    virtual void setHasLockedBehaviorPack(bool hasLocked) /*override*/;

    // vIndex: 152
    virtual void setHasLockedResourcePack(bool hasLocked) /*override*/;

    // vIndex: 155
    virtual void setCommandsEnabled(bool commandsEnabled) /*override*/;

    // vIndex: 156
    virtual void setWorldTemplateOptionsUnlocked() /*override*/;

    // vIndex: 157
    virtual bool hasLevelStorage() const /*override*/;

    // vIndex: 159
    virtual ::LevelStorage& getLevelStorage() /*override*/;

    // vIndex: 158
    virtual ::LevelStorage const& getLevelStorage() const /*override*/;

    // vIndex: 161
    virtual ::LevelData& getLevelData() /*override*/;

    // vIndex: 160
    virtual ::LevelData const& getLevelData() const /*override*/;

    // vIndex: 162
    virtual ::PhotoStorage& getPhotoStorage() const /*override*/;

    // vIndex: 163
    virtual void createPhotoStorage() /*override*/;

    // vIndex: 165
    virtual ::Bedrock::NotNullNonOwnerPtr<::PhotoManager> getPhotoManager() /*override*/;

    // vIndex: 164
    virtual ::Bedrock::NotNullNonOwnerPtr<::PhotoManager const> getPhotoManager() const /*override*/;

    // vIndex: 166
    virtual void setEducationLevelSettings(::EducationLevelSettings settings) /*override*/;

    // vIndex: 167
    virtual ::std::optional<::EducationLevelSettings> const& getEducationLevelSettings() const /*override*/;

    // vIndex: 169
    virtual ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager> getEducationSettingsManager() /*override*/;

    // vIndex: 168
    virtual ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager const> getEducationSettingsManager() const
        /*override*/;

    // vIndex: 170
    virtual void save() /*override*/;

    // vIndex: 171
    virtual void saveLevelData() /*override*/;

    // vIndex: 172
    virtual void saveGameData() /*override*/;

    // vIndex: 173
    virtual ::std::shared_ptr<void*> requestTimedStorageDeferment() /*override*/;

    // vIndex: 174
    virtual ::TickingAreasManager& getTickingAreasMgr() /*override*/;

    // vIndex: 175
    virtual void addTickingAreaList(
        ::DimensionType                             dimensionId,
        ::std::shared_ptr<::TickingAreaList> const& tickingAreas
    ) /*override*/;

    // vIndex: 181
    virtual void playSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) /*override*/;

    // vIndex: 180
    virtual void playSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        float const                            volume,
        float const                            pitch
    ) /*override*/;

    // vIndex: 179
    virtual void playSound(::std::string const& name, ::Vec3 const& pos, float volume, float pitch) /*override*/;

    // vIndex: 178
    virtual void playSound(
        ::IConstBlockSource const&             region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) /*override*/;

    // vIndex: 177
    virtual void playSound(
        ::DimensionType                        dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) /*override*/;

    // vIndex: 182
    virtual ::PlayerEventCoordinator& getRemotePlayerEventCoordinator() /*override*/;

    // vIndex: 183
    virtual ::ServerPlayerEventCoordinator& getServerPlayerEventCoordinator() /*override*/;

    // vIndex: 184
    virtual ::ClientPlayerEventCoordinator& getClientPlayerEventCoordinator() /*override*/;

    // vIndex: 185
    virtual ::ActorEventCoordinator& getActorEventCoordinator() /*override*/;

    // vIndex: 186
    virtual ::BlockEventCoordinator& getBlockEventCoordinator() /*override*/;

    // vIndex: 187
    virtual ::ItemEventCoordinator& getItemEventCoordinator() /*override*/;

    // vIndex: 188
    virtual ::ServerNetworkEventCoordinator& getServerNetworkEventCoordinator() /*override*/;

    // vIndex: 189
    virtual ::ScriptingEventCoordinator& getScriptingEventCoordinator() /*override*/;

    // vIndex: 190
    virtual ::ScriptDeferredEventCoordinator& getScriptDeferredEventCoordinator() /*override*/;

    // vIndex: 191
    virtual ::LevelEventCoordinator& getLevelEventCoordinator() /*override*/;

    // vIndex: 193
    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data) /*override*/;

    // vIndex: 192
    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data) /*override*/;

    // vIndex: 194
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> getLevelEventManager() /*override*/;

    // vIndex: 195
    virtual void handleStopSoundEvent(::std::string const& name) /*override*/;

    // vIndex: 196
    virtual void handleStopAllSounds() /*override*/;

    // vIndex: 197
    virtual void handleStopMusicEvent() /*override*/;

    // vIndex: 199
    virtual void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::UserEntityIdentifierComponent const* userIdentifier
    ) /*override*/;

    // vIndex: 198
    virtual void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::CompoundTag const&                   tag,
        ::UserEntityIdentifierComponent const* userIdentifier
    ) /*override*/;

    // vIndex: 201
    virtual void broadcastLocalEvent(
        ::BlockSource&                    region,
        ::SharedTypes::Legacy::LevelEvent type,
        ::Vec3 const&                     pos,
        int                               data
    ) /*override*/;

    // vIndex: 200
    virtual void broadcastLocalEvent(
        ::BlockSource&                    region,
        ::SharedTypes::Legacy::LevelEvent type,
        ::Vec3 const&                     pos,
        ::Block const&                    block
    ) /*override*/;

    // vIndex: 204
    virtual void broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Block const&                         block,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) /*override*/;

    // vIndex: 203
    virtual void broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) /*override*/;

    // vIndex: 202
    virtual void broadcastSoundEvent(
        ::Dimension&                           dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) /*override*/;

    // vIndex: 205
    virtual void broadcastActorEvent(::Actor& actor, ::ActorEvent eventId, int data) const /*override*/;

    // vIndex: 206
    virtual ::Bedrock::NonOwnerPointer<::ActorEventBroadcaster const> getActorEventBroadcaster() const /*override*/;

    // vIndex: 207
    virtual void addChunkViewTracker(::std::weak_ptr<::ChunkViewSource> chunkViewSource) /*override*/;

    // vIndex: 208
    virtual void onChunkReload(::Bounds const& bound) /*override*/;

    // vIndex: 210
    virtual int getActivePlayerCount() const /*override*/;

    // vIndex: 211
    virtual int getActiveUsersCount() const /*override*/;

    // vIndex: 213
    virtual void forEachPlayer(::std::function<bool(::Player&)> callback) /*override*/;

    // vIndex: 212
    virtual void forEachPlayer(::std::function<bool(::Player const&)> callback) const /*override*/;

    // vIndex: 215
    virtual void forEachUser(::std::function<bool(::EntityContext&)> callback) /*override*/;

    // vIndex: 214
    virtual void forEachUser(::std::function<bool(::EntityContext const&)> callback) const /*override*/;

    // vIndex: 217
    virtual ::Player* findPlayer(::std::function<bool(::Player const&)> pred) const /*override*/;

    // vIndex: 216
    virtual ::Player* findPlayer(::std::function<bool(::WeakEntityRef const&)> pred) const /*override*/;

    // vIndex: 218
    virtual int getUserCount() const /*override*/;

    // vIndex: 219
    virtual int countUsersWithMatchingNetworkId(::NetworkIdentifier const& networkId) const /*override*/;

    // vIndex: 220
    virtual ::std::vector<::OwnerPtr<::EntityContext>> const& getUsers() const /*override*/;

    // vIndex: 221
    virtual ::std::vector<::OwnerPtr<::EntityContext>> const& getEntities() const /*override*/;

    // vIndex: 1
    virtual void onSourceCreated(::BlockSource& source) /*override*/;

    // vIndex: 2
    virtual void onSourceDestroyed(::BlockSource& source) /*override*/;

    // vIndex: 222
    virtual void onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    ) /*override*/;

    // vIndex: 223
    virtual ::Bedrock::NonOwnerPointer<::SubChunkManager> getSubChunkManager() /*override*/;

    // vIndex: 224
    virtual void onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    // vIndex: 209
    virtual void onChunkReloaded(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    // vIndex: 227
    virtual ::LevelChunkMetaDataManager* getLevelChunkMetaDataManager() /*override*/;

    // vIndex: 225
    virtual void onChunkDiscarded(::LevelChunk& lc) /*override*/;

    // vIndex: 226
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelChunkEventManager> getLevelChunkEventManager() /*override*/;

    // vIndex: 228
    virtual void queueEntityDestruction(::OwnerPtr<::EntityContext> entity) /*override*/;

    // vIndex: 230
    virtual ::OwnerPtr<::EntityContext> removeEntity(::Actor& actor) /*override*/;

    // vIndex: 229
    virtual ::OwnerPtr<::EntityContext> removeEntity(::WeakEntityRef entityRef) /*override*/;

    // vIndex: 231
    virtual void forceRemoveEntity(::Actor& actor) /*override*/;

    // vIndex: 232
    virtual void forceRemoveEntityfromWorld(::Actor& actor) /*override*/;

    // vIndex: 233
    virtual void forceFlushRemovedPlayers() /*override*/;

    // vIndex: 234
    virtual void loadFunctionManager() /*override*/;

    // vIndex: 235
    virtual void levelCleanupQueueEntityRemoval(::OwnerPtr<::EntityContext> entity) /*override*/;

    // vIndex: 236
    virtual void registerTemporaryPointer(::_TickPtr& ptr) /*override*/;

    // vIndex: 237
    virtual void unregisterTemporaryPointer(::_TickPtr& ptr) /*override*/;

    // vIndex: 238
    virtual ::Bedrock::NotNullNonOwnerPtr<::TempEPtrManager> getTempEPtrManager() /*override*/;

    // vIndex: 239
    virtual bool destroyBlock(::BlockSource& region, ::BlockPos const& pos, bool dropResources) /*override*/;

    // vIndex: 240
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelBlockDestroyer> getLevelBlockDestroyer() /*override*/;

    // vIndex: 241
    virtual void upgradeStorageVersion(::StorageVersion v) /*override*/;

    // vIndex: 242
    virtual void suspendAndSave() /*override*/;

    // vIndex: 176
    virtual void
    sendServerLegacyParticle(::ParticleType id, ::Vec3 const& pos, ::Vec3 const& dir, int data) /*override*/;

    // vIndex: 243
    virtual ::Particle* addParticle(
        ::ParticleType       id,
        ::Vec3 const&        pos,
        ::Vec3 const&        dir,
        int                  data,
        ::CompoundTag const* tag,
        bool                 isGlobal
    ) /*override*/;

    // vIndex: 111
    virtual void spawnParticleEffect(
        ::std::string const& effectName,
        ::Vec3 const&        spawnLocation,
        ::Dimension*         dimension
    ) /*override*/;

    // vIndex: 112
    virtual ::Bedrock::NotNullNonOwnerPtr<::ServerParticleManager> getServerParticleManager() /*override*/;

    // vIndex: 244
    virtual void addParticleEffect(
        ::HashedString const&      effect,
        ::Vec3 const&              emitterPosition,
        ::MolangVariableMap const& molangVariables
    ) /*override*/;

    // vIndex: 245
    virtual void addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
        float             velocityScalar,
        float             emitterRadius
    ) /*override*/;

    // vIndex: 246
    virtual void addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
        float             velocityScalar,
        float             emitterRadius
    ) /*override*/;

    // vIndex: 247
    virtual void addBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    ) /*override*/;

    // vIndex: 248
    virtual void addBiomeTintedParticleEffect(
        ::HashedString const&         effect,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::std::optional<::mce::Color> overrideColor
    ) /*override*/;

    // vIndex: 249
    virtual ::ActorUniqueID getNewUniqueID() /*override*/;

    // vIndex: 250
    virtual ::ActorRuntimeID getNextRuntimeID() /*override*/;

    // vIndex: 251
    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const /*override*/;

    // vIndex: 252
    virtual ::std::vector<::ChunkPos> const& getClientTickingOffsets() const /*override*/;

    // vIndex: 253
    virtual ::std::vector<::ChunkPos> getSortedPositionsFromClientOffsets(::std::vector<::ChunkPos> const& centers
    ) const /*override*/;

    // vIndex: 254
    virtual ::Bedrock::NotNullNonOwnerPtr<::ChunkTickOffsetManager const> getChunkTickOffsetManager() const
        /*override*/;

    // vIndex: 255
    virtual bool isExporting() const /*override*/;

    // vIndex: 256
    virtual void setIsExporting(bool IsExporting) /*override*/;

    // vIndex: 257
    virtual ::SavedDataStorage& getSavedData() /*override*/;

    // vIndex: 260
    virtual ::MapItemSavedData* getMapSavedData(::ActorUniqueID const uuid) /*override*/;

    // vIndex: 259
    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const& instance) /*override*/;

    // vIndex: 258
    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const* instance) /*override*/;

    // vIndex: 261
    virtual void requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate) /*override*/;

    // vIndex: 262
    virtual ::ActorUniqueID expandMapByID(::ActorUniqueID const uuid, bool wasInit) /*override*/;

    // vIndex: 263
    virtual bool copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid) /*override*/;

    // vIndex: 265
    virtual ::MapItemSavedData& createMapSavedData(
        ::ActorUniqueID const& uuid,
        ::BlockPos const&      origin,
        ::DimensionType        dimension,
        int                    returnScaleLevel
    ) /*override*/;

    // vIndex: 264
    virtual ::MapItemSavedData& createMapSavedData(
        ::std::vector<::ActorUniqueID> const& mapIds,
        ::BlockPos const&                     origin,
        ::DimensionType                       dimension,
        int                                   returnScaleLevel
    ) /*override*/;

    // vIndex: 266
    virtual ::Core::PathBuffer<::std::string> getScreenshotsFolder() const /*override*/;

    // vIndex: 267
    virtual ::std::string getLevelId() const /*override*/;

    // vIndex: 268
    virtual void setLevelId(::std::string LevelId) /*override*/;

    // vIndex: 269
    virtual ::TaskGroup& getSyncTasksGroup() /*override*/;

    // vIndex: 270
    virtual ::TaskGroup& getIOTasksGroup() /*override*/;

    // vIndex: 271
    virtual ::ResourcePackManager* getClientResourcePackManager() const /*override*/;

    // vIndex: 272
    virtual ::ResourcePackManager* getServerResourcePackManager() const /*override*/;

    // vIndex: 273
    virtual ::TradeTables* getTradeTables() /*override*/;

    // vIndex: 274
    virtual void decrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    ) /*override*/;

    // vIndex: 275
    virtual void incrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    ) /*override*/;

    // vIndex: 276
    virtual ::Bedrock::NonOwnerPointer<::TagCacheManager> getTagCacheManager() /*override*/;

    // vIndex: 277
    virtual bool isEdu() const /*override*/;

    // vIndex: 279
    virtual ::ActorFactory& getActorFactory() /*override*/;

    // vIndex: 278
    virtual ::ActorFactory const& getActorFactory() const /*override*/;

    // vIndex: 280
    virtual ::ActorInfoRegistry* getActorInfoRegistry() /*override*/;

    // vIndex: 282
    virtual ::StackRefResult<::EntityRegistry> getEntityRegistry() /*override*/;

    // vIndex: 281
    virtual ::StackRefResult<::EntityRegistry const> getEntityRegistry() const /*override*/;

    // vIndex: 283
    virtual ::EntitySystems& getEntitySystems() /*override*/;

    // vIndex: 285
    virtual ::WeakRef<::EntityContext> getLevelEntity() /*override*/;

    // vIndex: 284
    virtual ::WeakRef<::EntityContext const> getLevelEntity() const /*override*/;

    // vIndex: 286
    virtual ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> tryGetVolumeEntityManagerServer() const
        /*override*/;

    // vIndex: 288
    virtual void runCommand(
        ::HashedString const&     commandStr,
        ::CommandOrigin&          origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion const commandVersion
    ) /*override*/;

    // vIndex: 287
    virtual void
    runCommand(::Command& command, ::CommandOrigin& origin, ::CommandOriginSystem originSystem) /*override*/;

    // vIndex: 289
    virtual ::PlayerCapabilities::ISharedController const& getCapabilities() const /*override*/;

    // vIndex: 290
    virtual ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& getTagRegistry() /*override*/;

    // vIndex: 291
    virtual ::PlayerMovementSettings const& getPlayerMovementSettings() const /*override*/;

    // vIndex: 292
    virtual void setPlayerMovementSettings(::PlayerMovementSettings const& settings) /*override*/;

    // vIndex: 294
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager>
    getPlayerMovementSettingsManager() /*override*/;

    // vIndex: 293
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager const>
    getPlayerMovementSettingsManager() const /*override*/;

    // vIndex: 295
    virtual bool canUseSkin(
        ::SerializedSkin const&    skin,
        ::NetworkIdentifier const& networkIdentifier,
        ::ActorUniqueID const&     playerId
    ) const /*override*/;

    // vIndex: 296
    virtual ::Bedrock::NonOwnerPointer<::TrustedSkinHelper const> getTrustedSkinHelper() const /*override*/;

    // vIndex: 372
    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry const> getCameraRegistry() const /*override*/;

    // vIndex: 371
    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry> getCameraRegistry() /*override*/;

    // vIndex: 373
    virtual ::Bedrock::NonOwnerPointer<::EntitySystems> getCameraSystems() /*override*/;

    // vIndex: 297
    virtual ::PositionTrackingDB::PositionTrackingDBClient* getPositionTrackerDBClient() const /*override*/;

    // vIndex: 298
    virtual ::PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const /*override*/;

    // vIndex: 299
    virtual void flushRunTimeLighting() /*override*/;

    // vIndex: 300
    virtual void loadBlockDefinitionGroup(::Experiments const& experiments) /*override*/;

    // vIndex: 301
    virtual void initializeBlockDefinitionGroup() /*override*/;

    // vIndex: 302
    virtual ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> getUnknownBlockTypeRegistry() /*override*/;

    // vIndex: 374
    virtual bool isClientSideGenerationEnabled() /*override*/;

    // vIndex: 375
    virtual bool blockNetworkIdsAreHashes() /*override*/;

    // vIndex: 376
    virtual ::ItemRegistryRef getItemRegistry() const /*override*/;

    // vIndex: 377
    virtual ::std::weak_ptr<::BlockTypeRegistry> getBlockRegistry() const /*override*/;

    // vIndex: 369
    virtual ::Level* asLevel() /*override*/;

    // vIndex: 362
    virtual bool use3DBiomeMaps() const /*override*/;

    // vIndex: 363
    virtual void addBlockSourceForValidityTracking(::BlockSource* region) /*override*/;

    // vIndex: 364
    virtual void removeBlockSourceFromValidityTracking(::BlockSource* region) /*override*/;

    // vIndex: 365
    virtual ::Bedrock::NotNullNonOwnerPtr<::BlockSourceValidityManager> getBlockSourceValidityManager() /*override*/;

    // vIndex: 378
    virtual void pauseAndFlushTaskGroups() /*override*/;

    // vIndex: 10
    virtual ::DimensionManager& getDimensionManager() /*override*/;

    // vIndex: 9
    virtual ::DimensionManager const& getDimensionManager() const /*override*/;

    // vIndex: 387
    virtual void _subTick();

    // vIndex: 106
    virtual ::StackRefResult<::PauseManager> getPauseManager() /*override*/;

    // vIndex: 105
    virtual ::StackRefResult<::PauseManager const> getPauseManager() const /*override*/;

    // vIndex: 303
    virtual bool isClientSide() const /*override*/;

    // vIndex: 304
    virtual ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const& getPlayerList() const /*override*/;

    // vIndex: 305
    virtual ::std::string const& getPlayerXUID(::mce::UUID const& uuid) const /*override*/;

    // vIndex: 306
    virtual ::std::string const& getPlayerPlatformOnlineId(::mce::UUID const& uuid) const /*override*/;

    // vIndex: 308
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager> getPlayerListManager() /*override*/;

    // vIndex: 307
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager const> getPlayerListManager() const /*override*/;

    // vIndex: 309
    virtual ::std::vector<::WeakEntityRef> const& getActiveUsers() const /*override*/;

    // vIndex: 311
    virtual void notifySubChunkRequestManager(::SubChunkPacket const& packet) /*override*/;

    // vIndex: 312
    virtual ::SubChunkRequestManager* getSubChunkRequestManager() /*override*/;

    // vIndex: 310
    virtual ::std::vector<::Actor*> getRuntimeActorList() const /*override*/;

    // vIndex: 313
    virtual ::PacketSender* getPacketSender() const /*override*/;

    // vIndex: 314
    virtual ::Bedrock::NonOwnerPointer<::NetEventCallback> getNetEventCallback() const /*override*/;

    // vIndex: 315
    virtual void setNetEventCallback(::Bedrock::NonOwnerPointer<::NetEventCallback> val) /*override*/;

    // vIndex: 316
    virtual ::gsl::not_null<::StackRefResult<::ILevelRandom>> getILevelRandom() /*override*/;

    // vIndex: 317
    virtual ::IRandom& getIRandom() const /*override*/;

    // vIndex: 318
    virtual ::Random& getRandom() const /*override*/;

    // vIndex: 319
    virtual ::Random& getThreadRandom() const /*override*/;

    // vIndex: 320
    virtual ::HitResult& getHitResult() /*override*/;

    // vIndex: 321
    virtual ::HitResult& getLiquidHitResult() /*override*/;

    // vIndex: 322
    virtual ::Bedrock::NotNullNonOwnerPtr<::HitResultWrapper> getHitResultWrapper() /*override*/;

    // vIndex: 323
    virtual ::std::string const& getImmersiveReaderString() const /*override*/;

    // vIndex: 324
    virtual void setImmersiveReaderString(::std::string newString) /*override*/;

    // vIndex: 326
    virtual ::AdventureSettings& getAdventureSettings() /*override*/;

    // vIndex: 325
    virtual ::AdventureSettings const& getAdventureSettings() const /*override*/;

    // vIndex: 328
    virtual ::GameRules const& getGameRules() const /*override*/;

    // vIndex: 327
    virtual ::GameRules& getGameRules() /*override*/;

    // vIndex: 329
    virtual bool hasStartWithMapEnabled() const /*override*/;

    // vIndex: 330
    virtual bool isEditorWorld() const /*override*/;

    // vIndex: 331
    virtual bool isHardcore() const /*override*/;

    // vIndex: 332
    virtual ::Abilities& getDefaultAbilities() /*override*/;

    // vIndex: 334
    virtual ::PermissionsHandler& getDefaultPermissions() /*override*/;

    // vIndex: 333
    virtual ::PermissionsHandler const& getDefaultPermissions() const /*override*/;

    // vIndex: 335
    virtual bool getTearingDown() const /*override*/;

    // vIndex: 336
    virtual void takePicture(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    ) /*override*/;

    // vIndex: 337
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelSoundManager> getLevelSoundManager() /*override*/;

    // vIndex: 338
    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> getSoundPlayer() const /*override*/;

    // vIndex: 339
    virtual void setSimPaused(bool value) /*override*/;

    // vIndex: 340
    virtual bool getSimPaused() /*override*/;

    // vIndex: 341
    virtual void setFinishedInitializing() /*override*/;

    // vIndex: 342
    virtual ::LootTables& getLootTables() /*override*/;

    // vIndex: 343
    virtual void updateWeather(float rainLevel, int rainTime, float lightningLevel, int lightningTime) /*override*/;

    // vIndex: 344
    virtual int getNetherScale() const /*override*/;

    // vIndex: 346
    virtual ::Scoreboard& getScoreboard() /*override*/;

    // vIndex: 345
    virtual ::Scoreboard const& getScoreboard() const /*override*/;

    // vIndex: 347
    virtual ::Scoreboard* tryGetScoreboard() /*override*/;

    // vIndex: 348
    virtual ::LayeredAbilities* getPlayerAbilities(::ActorUniqueID const& playerId) /*override*/;

    // vIndex: 349
    virtual void setPlayerAbilities(::ActorUniqueID const& playerId, ::LayeredAbilities const& abilities) /*override*/;

    // vIndex: 350
    virtual void sendAllPlayerAbilities(::Player const& playerReference) /*override*/;

    // vIndex: 351
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerAbilitiesManager> getPlayerAbilitiesManager() /*override*/;

    // vIndex: 352
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsManager> getPlayerPermissionsManager() /*override*/;

    // vIndex: 353
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsSynchroniser>
    getPlayerPermissionsSynchroniser() /*override*/;

    // vIndex: 354
    virtual ::Recipes& getRecipes() const /*override*/;

    // vIndex: 355
    virtual ::BlockReducer* getBlockReducer() const /*override*/;

    // vIndex: 357
    virtual ::std::weak_ptr<::TrimPatternRegistry const> getTrimPatternRegistry() const /*override*/;

    // vIndex: 356
    virtual ::std::weak_ptr<::TrimPatternRegistry> getTrimPatternRegistry() /*override*/;

    // vIndex: 359
    virtual ::std::weak_ptr<::TrimMaterialRegistry const> getTrimMaterialRegistry() const /*override*/;

    // vIndex: 358
    virtual ::std::weak_ptr<::TrimMaterialRegistry> getTrimMaterialRegistry() /*override*/;

    // vIndex: 360
    virtual ::BlockLegacy const& getRegisteredBorderBlock() const /*override*/;

    // vIndex: 361
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelChunkPerformanceTelemetry>
    getLevelChunkPerformanceTelemetry() /*override*/;

    // vIndex: 379
    virtual ::cereal::ReflectionCtx const& cerealContext() const /*override*/;

    // vIndex: 367
    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> getChunkGenerationManager() /*override*/;

    // vIndex: 366
    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> getChunkGenerationManager() const /*override*/;

    // vIndex: 380
    virtual ::PlayerDeathManager* _getPlayerDeathManager() /*override*/;

    // vIndex: 388
    virtual void _initializeMapDataManager();

    // vIndex: 382
    virtual ::cereal::ReflectionCtx& _cerealContext() /*override*/;

    // vIndex: 383
    virtual void _onLowMemory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Level(
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender>                packetSender,
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> const& soundPlayer,
        ::Bedrock::UniqueOwnerPointer<::LevelStorage>                levelStorage,
        ::Bedrock::NotNullNonOwnerPtr<::LevelData>                   levelData,
        ::IMinecraftEventing&                                        eventing,
        bool                                                         isClientSide,
        ::SubClientId                                                subClientId,
        ::Scheduler&                                                 callbackContext,
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>            structureManager,
        ::ResourcePackManager&                                       addOnResourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner> const& entityRegistryOwner,
        ::WeakRef<::EntityContext>                                   levelEntity,
        ::ItemRegistryRef                                            itemRegistry,
        ::std::weak_ptr<::BlockTypeRegistry>                         blockRegistry,
        bool                                                         clientSideChunkGenerationEnabled,
        bool                                                         blockNetworkIdsAreHashes,
        ::NetworkPermissions const&                                  networkPermissions,
        ::std::optional<::DimensionDefinitionGroup>                  dimensionDefinitionGroup
    );

    MCNAPI ::Bedrock::UniqueOwnerPointer<::PhotoManager> _createPhotoManager();

    MCNAPI void _initializeActorManager();

    MCNAPI void _initializeBiomeManager();

    MCNAPI void _initializeEventCoordinatorManager();

    MCNAPI void _initializeGameplayUserManager();

    MCNAPI void _initializeLevelChunkEventManager();

    MCNAPI void _initializeLevelChunkSaveManager();

    MCNAPI void _initializeLevelEventManager();

    MCNAPI void _initializeParticleProvider();

    MCNAPI void _onAddBiomeTintedParticleEffect(
        ::HashedString const&         effect,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::std::optional<::mce::Color> overrideColor
    );

    MCNAPI void _onAddBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    );

    MCNAPI void _onAddTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
        float             velocityScalar,
        float             emitterRadius
    );

    MCNAPI void _onAddTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
        float             velocityScalar,
        float             emitterRadius
    );

    MCNAPI void _onAnyGameplayUsersRemoved();

    MCNAPI void _onChunkDiscarded(::LevelChunk& levelChunk);

    MCNAPI void _onChunkLoaded(::ChunkSource& chunkSource, ::LevelChunk& levelChunk, int);

    MCNAPI void _onChunkReloaded(::ChunkSource& chunkSource, ::LevelChunk& levelChunk);

    MCNAPI void _onGameplayUserAdded(::EntityContext& entity);

    MCNAPI void _onGameplayUserRemoved(::EntityContext& entity);

    MCNAPI void _onLevelEventCompoundTag(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data);

    MCNAPI void _onLevelEventData(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data);

    MCNAPI void _onPictureTaken(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    );

    MCNAPI void _onRemoveActorEntityReferences(::Actor& actor);

    MCNAPI void _onSendServerLegacyParticle(::ParticleType id, ::Vec3 const& pos, ::Vec3 const& dir, int data);

    MCNAPI void earlyShutdownMainthread();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ActorManager> getActorManager();

    MCNAPI ::ServerLevelEventCoordinator& getServerLevelEventCoordinator();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LevelStorageManager> _createLevelStorageManager(
        ::Bedrock::UniqueOwnerPointer<::LevelStorage> levelStorage,
        ::Scheduler&                                  scheduler,
        ::IMinecraftEventing&                         eventing
    );

    MCNAPI static ::std::unique_ptr<::PlayerLimboActorManager> _createPlayerLimboActorManager(
        ::LevelStorageManager*                        levelStorageManager,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager> actorManager,
        ::Bedrock::NotNullNonOwnerPtr<::ActorFactory> actorFactory
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender>                packetSender,
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> const& soundPlayer,
        ::Bedrock::UniqueOwnerPointer<::LevelStorage>                levelStorage,
        ::Bedrock::NotNullNonOwnerPtr<::LevelData>                   levelData,
        ::IMinecraftEventing&                                        eventing,
        bool                                                         isClientSide,
        ::SubClientId                                                subClientId,
        ::Scheduler&                                                 callbackContext,
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>            structureManager,
        ::ResourcePackManager&                                       addOnResourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner> const& entityRegistryOwner,
        ::WeakRef<::EntityContext>                                   levelEntity,
        ::ItemRegistryRef                                            itemRegistry,
        ::std::weak_ptr<::BlockTypeRegistry>                         blockRegistry,
        bool                                                         clientSideChunkGenerationEnabled,
        bool                                                         blockNetworkIdsAreHashes,
        ::NetworkPermissions const&                                  networkPermissions,
        ::std::optional<::DimensionDefinitionGroup>                  dimensionDefinitionGroup
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
    MCNAPI bool $initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId
    );

    MCNAPI void $startLeaveGame();

    MCNAPI bool $isLeaveGameDone();

    MCNAPI ::WeakRef<::Dimension> $getOrCreateDimension(::DimensionType dimensionType);

    MCNAPI ::WeakRef<::Dimension> $getDimension(::DimensionType id) const;

    MCNAPI ::DimensionType $getLastOrDefaultSpawnDimensionId(::DimensionType lastDimensionId) const;

    MCNAPI void $forEachDimension(::std::function<bool(::Dimension&)> callback);

    MCNAPI void $forEachDimension(::std::function<bool(::Dimension const&)> callback) const;

    MCNAPI uint $getChunkTickRange() const;

    MCNAPI ::ChunkTickRangeManager const& $getChunkTickRangeManager() const;

    MCNAPI ::PortalForcer& $getPortalForcer();

    MCNAPI void $requestPlayerChangeDimension(::Player& player, ::ChangeDimensionRequest&& changeRequest);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerDimensionTransferManager> $getPlayerDimensionTransferManager();

    MCNAPI void $entityChangeDimension(::Actor& entity, ::DimensionType toId, ::std::optional<::Vec3> entityPos);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ActorDimensionTransferManager> $getActorDimensionTransferManager();

    MCNAPI ::Spawner& $getSpawner() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::BossEventSubscriptionManager> $getBossEventSubscriptionManager();

    MCNAPI ::ProjectileFactory& $getProjectileFactory() const;

    MCNAPI ::ActorDefinitionGroup* $getEntityDefinitions() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationGroup> $getActorAnimationGroup() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::ActorAnimationControllerGroup> $getActorAnimationControllerGroup() const;

    MCNAPI ::BlockDefinitionGroup* $getBlockDefinitions() const;

    MCNAPI ::PropertyGroupManager& $getActorPropertyGroup() const;

    MCNAPI ::CameraPresets const& $getCameraPresets() const;

    MCNAPI ::CameraPresets& $getCameraPresets();

    MCNAPI bool $getDisablePlayerInteractions() const;

    MCNAPI void $setDisablePlayerInteractions(bool const disable);

    MCNAPI ::AutomationBehaviorTreeGroup& $getAutomationBehaviorTreeGroup() const;

    MCNAPI ::BehaviorFactory& $getBehaviorFactory() const;

    MCNAPI ::SharedTypes::Legacy::Difficulty $getDifficulty() const;

    MCNAPI ::DimensionConversionData $getDimensionConversionData() const;

    MCNAPI float $getSpecialMultiplier(::DimensionType dimensionType) const;

    MCNAPI bool $hasCommandsEnabled() const;

    MCNAPI bool $useMsaGamertagsOnly() const;

    MCNAPI void $setMsaGamertagsOnly(bool msaGamertagsOnly);

    MCNAPI ::Actor* $addEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCNAPI ::Actor* $addGlobalEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCNAPI ::Actor* $addAutonomousEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCNAPI void $addUser(::OwnerPtr<::EntityContext> userEntity);

    MCNAPI ::Actor* $addDisplayEntity(::BlockSource&, ::OwnerPtr<::EntityContext>);

    MCNAPI void $removeDisplayEntity(::WeakEntityRef);

    MCNAPI ::Bedrock::NonOwnerPointer<::DisplayActorManager> $getDisplayActorManager();

    MCNAPI void $suspendPlayer(::Player& player);

    MCNAPI void $resumePlayer(::Player& player);

    MCNAPI bool $isPlayerSuspended(::Player& player) const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> $getGameplayUserManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager const> $getGameplayUserManager() const;

    MCNAPI ::OwnerPtr<::EntityContext> $removeActorAndTakeEntity(::WeakEntityRef entityRef);

    MCNAPI ::OwnerPtr<::EntityContext> $removeActorFromWorldAndTakeEntity(::WeakEntityRef entityRef);

    MCNAPI ::OwnerPtr<::EntityContext> $takeEntity(::WeakEntityRef entityRef, ::LevelChunk& lc);

    MCNAPI ::StrictEntityContext $fetchStrictEntity(::ActorUniqueID actorId, bool getRemoved) const;

    MCNAPI ::Actor* $fetchEntity(::ActorUniqueID actorId, bool getRemoved) const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ActorFetcher const> $getActorFetcher() const;

    MCNAPI ::Actor* $getRuntimeEntity(::ActorRuntimeID actorId, bool getRemoved) const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager> $getActorRuntimeIDManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager const> $getActorRuntimeIDManager() const;

    MCNAPI ::Mob* $getMob(::ActorUniqueID mobId) const;

    MCNAPI ::Player* $getPlayer(::std::string const& name) const;

    MCNAPI ::Player* $getPlayer(::mce::UUID const& uuid) const;

    MCNAPI ::Player* $getPlayer(::ActorUniqueID entityID) const;

    MCNAPI ::Player* $getPlayerByXuid(::std::string const& xuid) const;

    MCNAPI ::Player* $getPlatformPlayer(::std::string const& platformOnlineId) const;

    MCNAPI ::Player* $getPlayerFromServerId(::std::string const& serverId) const;

    MCNAPI ::Player* $getRuntimePlayer(::ActorRuntimeID runtimeId) const;

    MCNAPI int $getNumRemotePlayers() const;

    MCNAPI ::Player* $getPrimaryLocalPlayer() const;

    MCNAPI ::IMinecraftEventing& $getEventing();

    MCNAPI ::mce::Color $getPlayerColor(::Player const& player) const;

    MCNAPI ::Tick const& $getCurrentTick() const;

    MCNAPI ::Tick const $getCurrentServerTick() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::TickDeltaTimeManager const> $getTickDeltaTimeManager() const;

    MCNAPI ::ArmorTrimUnloader* $getArmorTrimUnloader();

    MCNAPI ::BiomeRegistry const& $getBiomeRegistry() const;

    MCNAPI ::BiomeRegistry& $getBiomeRegistry();

    MCNAPI ::BlockPalette const& $getBlockPalette() const;

    MCNAPI ::BlockPalette& $getBlockPalette();

    MCNAPI ::FeatureRegistry const& $getFeatureRegistry() const;

    MCNAPI ::FeatureRegistry& $getFeatureRegistry();

    MCNAPI ::FeatureTypeFactory const& $getFeatureTypeFactory() const;

    MCNAPI ::FeatureTypeFactory& $getFeatureTypeFactory();

    MCNAPI ::JigsawStructureRegistry const& $getJigsawStructureRegistry() const;

    MCNAPI ::JigsawStructureRegistry& $getJigsawStructureRegistry();

    MCNAPI ::StructureSpawnRegistry const& $getStructureSpawnRegistry() const;

    MCNAPI ::StructureSpawnRegistry& $getStructureSpawnRegistry();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::StructureManager> const $getStructureManager() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::StructureManager> $getStructureManager();

    MCNAPI ::BiomeComponentFactory const& $getBiomeComponentFactory() const;

    MCNAPI ::BiomeComponentFactory& $getBiomeComponentFactory();

    MCNAPI ::SurfaceBuilderRegistry const& $getSurfaceBuilderRegistry() const;

    MCNAPI ::SurfaceBuilderRegistry& $getSurfaceBuilderRegistry();

    MCNAPI ::BiomeManager const& $getBiomeManager() const;

    MCNAPI ::BiomeManager& $getBiomeManager();

    MCNAPI ::OwnerPtrFactory<::Dimension, ::ILevel&, ::Scheduler&> const& $getDimensionFactory() const;

    MCNAPI ::OwnerPtrFactory<::Dimension, ::ILevel&, ::Scheduler&>& $getDimensionFactory();

    MCNAPI ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&> const&
    $getLightTextureImageBuilderFactory() const;

    MCNAPI ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&>& $getLightTextureImageBuilderFactory();

    MCNAPI ::InternalComponentRegistry& $getInternalComponentRegistry() const;

    MCNAPI ::IWorldRegistriesProvider const& $getWorldRegistriesProvider() const;

    MCNAPI ::IWorldRegistriesProvider& $getWorldRegistriesProvider();

    MCNAPI void $addListener(::LevelListener& listener);

    MCNAPI void $removeListener(::LevelListener& listener);

    MCNAPI void $tickEntities();

    MCNAPI void $tickEntitySystems();

    MCNAPI void $onPlayerDeath(::Player& player, ::ActorDamageSource const& source);

    MCNAPI void $tick();

    MCNAPI bool $explode(
        ::BlockSource& region,
        ::Actor*       source,
        ::Vec3 const&  pos,
        float          explosionRadius,
        bool           fire,
        bool           breaksBlocks,
        float          maxResistance,
        bool           allowUnderwater
    );

    MCNAPI bool $explode(::Explosion& explosion);

    MCNAPI void $denyEffect(::BlockSource& region, ::Vec3 const& pos);

    MCNAPI void $potionSplash(::Vec3 const& pos, ::mce::Color const& color, bool instantaneousEffect);

    MCNAPI bool $extinguishFire(::BlockSource& region, ::BlockPos const& pos, uchar face, ::Actor* source);

    MCNAPI ::std::unique_ptr<::Path>
    $findPath(::Actor& from, int xBest, int yBest, int zBest, ::NavigationComponent& navigation);

    MCNAPI ::std::unique_ptr<::Path> $findPath(::Actor& from, ::Actor const& to, ::NavigationComponent& navigation);

    MCNAPI void $setSleepStatus(::PlayerSleepStatus const& status);

    MCNAPI ::PlayerSleepStatus $getSleepStatus() const;

    MCNAPI void $updateSleepingPlayerList();

    MCNAPI ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> $getServerPlayerSleepManager();

    MCNAPI ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> $getServerPlayerSleepManager() const;

    MCNAPI int $getTime() const;

    MCNAPI void $setTime(int time);

    MCNAPI uint $getSeed();

    MCNAPI ::LevelSeed64 $getLevelSeed64() const;

    MCNAPI ::BlockPos const& $getSharedSpawnPos() const;

    MCNAPI void $setDefaultSpawn(::BlockPos const& spawnPos);

    MCNAPI ::BlockPos const& $getDefaultSpawn() const;

    MCNAPI void $setDifficulty(::SharedTypes::Legacy::Difficulty difficulty);

    MCNAPI void $setMultiplayerGameIntent(bool multiplayerGame);

    MCNAPI bool $getMultiplayerGameIntent() const;

    MCNAPI void $setMultiplayerGame(bool multiplayerGame);

    MCNAPI bool $isMultiplayerGame() const;

    MCNAPI void $setLANBroadcastIntent(bool broadcast);

    MCNAPI bool $getLANBroadcastIntent() const;

    MCNAPI void $setLANBroadcast(bool broadcast);

    MCNAPI bool $getLANBroadcast() const;

    MCNAPI bool $hasXBLBroadcastIntent() const;

    MCNAPI bool $hasXBLBroadcast() const;

    MCNAPI bool $hasPlatformBroadcastIntent() const;

    MCNAPI bool $hasPlatformBroadcast() const;

    MCNAPI void $setHasLockedBehaviorPack(bool hasLocked);

    MCNAPI void $setHasLockedResourcePack(bool hasLocked);

    MCNAPI void $setCommandsEnabled(bool commandsEnabled);

    MCNAPI void $setWorldTemplateOptionsUnlocked();

    MCNAPI bool $hasLevelStorage() const;

    MCNAPI ::LevelStorage& $getLevelStorage();

    MCNAPI ::LevelStorage const& $getLevelStorage() const;

    MCNAPI ::LevelData& $getLevelData();

    MCNAPI ::LevelData const& $getLevelData() const;

    MCNAPI ::PhotoStorage& $getPhotoStorage() const;

    MCNAPI void $createPhotoStorage();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::PhotoManager> $getPhotoManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::PhotoManager const> $getPhotoManager() const;

    MCNAPI void $setEducationLevelSettings(::EducationLevelSettings settings);

    MCNAPI ::std::optional<::EducationLevelSettings> const& $getEducationLevelSettings() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager> $getEducationSettingsManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager const> $getEducationSettingsManager() const;

    MCNAPI void $save();

    MCNAPI void $saveLevelData();

    MCNAPI void $saveGameData();

    MCNAPI ::std::shared_ptr<void*> $requestTimedStorageDeferment();

    MCNAPI ::TickingAreasManager& $getTickingAreasMgr();

    MCNAPI void
    $addTickingAreaList(::DimensionType dimensionId, ::std::shared_ptr<::TickingAreaList> const& tickingAreas);

    MCNAPI void $playSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCNAPI void
    $playSound(::SharedTypes::Legacy::LevelSoundEvent type, ::Vec3 const& pos, float const volume, float const pitch);

    MCNAPI void $playSound(::std::string const& name, ::Vec3 const& pos, float volume, float pitch);

    MCNAPI void $playSound(
        ::IConstBlockSource const&             region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCNAPI void $playSound(
        ::DimensionType                        dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCNAPI ::PlayerEventCoordinator& $getRemotePlayerEventCoordinator();

    MCNAPI ::ServerPlayerEventCoordinator& $getServerPlayerEventCoordinator();

    MCNAPI ::ClientPlayerEventCoordinator& $getClientPlayerEventCoordinator();

    MCNAPI ::ActorEventCoordinator& $getActorEventCoordinator();

    MCNAPI ::BlockEventCoordinator& $getBlockEventCoordinator();

    MCNAPI ::ItemEventCoordinator& $getItemEventCoordinator();

    MCNAPI ::ServerNetworkEventCoordinator& $getServerNetworkEventCoordinator();

    MCNAPI ::ScriptingEventCoordinator& $getScriptingEventCoordinator();

    MCNAPI ::ScriptDeferredEventCoordinator& $getScriptDeferredEventCoordinator();

    MCNAPI ::LevelEventCoordinator& $getLevelEventCoordinator();

    MCNAPI void $handleLevelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data);

    MCNAPI void $handleLevelEvent(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> $getLevelEventManager();

    MCNAPI void $handleStopSoundEvent(::std::string const& name);

    MCNAPI void $handleStopAllSounds();

    MCNAPI void $handleStopMusicEvent();

    MCNAPI void $broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::UserEntityIdentifierComponent const* userIdentifier
    );

    MCNAPI void $broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::CompoundTag const&                   tag,
        ::UserEntityIdentifierComponent const* userIdentifier
    );

    MCNAPI void
    $broadcastLocalEvent(::BlockSource& region, ::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data);

    MCNAPI void $broadcastLocalEvent(
        ::BlockSource&                    region,
        ::SharedTypes::Legacy::LevelEvent type,
        ::Vec3 const&                     pos,
        ::Block const&                    block
    );

    MCNAPI void $broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Block const&                         block,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCNAPI void $broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCNAPI void $broadcastSoundEvent(
        ::Dimension&                           dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCNAPI void $broadcastActorEvent(::Actor& actor, ::ActorEvent eventId, int data) const;

    MCNAPI ::Bedrock::NonOwnerPointer<::ActorEventBroadcaster const> $getActorEventBroadcaster() const;

    MCNAPI void $addChunkViewTracker(::std::weak_ptr<::ChunkViewSource> chunkViewSource);

    MCNAPI void $onChunkReload(::Bounds const& bound);

    MCNAPI int $getActivePlayerCount() const;

    MCNAPI int $getActiveUsersCount() const;

    MCNAPI void $forEachPlayer(::std::function<bool(::Player&)> callback);

    MCNAPI void $forEachPlayer(::std::function<bool(::Player const&)> callback) const;

    MCNAPI void $forEachUser(::std::function<bool(::EntityContext&)> callback);

    MCNAPI void $forEachUser(::std::function<bool(::EntityContext const&)> callback) const;

    MCNAPI ::Player* $findPlayer(::std::function<bool(::Player const&)> pred) const;

    MCNAPI ::Player* $findPlayer(::std::function<bool(::WeakEntityRef const&)> pred) const;

    MCNAPI int $getUserCount() const;

    MCNAPI int $countUsersWithMatchingNetworkId(::NetworkIdentifier const& networkId) const;

    MCNAPI ::std::vector<::OwnerPtr<::EntityContext>> const& $getUsers() const;

    MCNAPI ::std::vector<::OwnerPtr<::EntityContext>> const& $getEntities() const;

    MCNAPI void $onSourceCreated(::BlockSource& source);

    MCNAPI void $onSourceDestroyed(::BlockSource& source);

    MCNAPI void $onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    );

    MCNAPI ::Bedrock::NonOwnerPointer<::SubChunkManager> $getSubChunkManager();

    MCNAPI void $onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);

    MCNAPI void $onChunkReloaded(::ChunkSource& source, ::LevelChunk& lc);

    MCNAPI ::LevelChunkMetaDataManager* $getLevelChunkMetaDataManager();

    MCNAPI void $onChunkDiscarded(::LevelChunk& lc);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::LevelChunkEventManager> $getLevelChunkEventManager();

    MCNAPI void $queueEntityDestruction(::OwnerPtr<::EntityContext> entity);

    MCNAPI ::OwnerPtr<::EntityContext> $removeEntity(::Actor& actor);

    MCNAPI ::OwnerPtr<::EntityContext> $removeEntity(::WeakEntityRef entityRef);

    MCNAPI void $forceRemoveEntity(::Actor& actor);

    MCNAPI void $forceRemoveEntityfromWorld(::Actor& actor);

    MCNAPI void $forceFlushRemovedPlayers();

    MCNAPI void $loadFunctionManager();

    MCNAPI void $levelCleanupQueueEntityRemoval(::OwnerPtr<::EntityContext> entity);

    MCNAPI void $registerTemporaryPointer(::_TickPtr& ptr);

    MCNAPI void $unregisterTemporaryPointer(::_TickPtr& ptr);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::TempEPtrManager> $getTempEPtrManager();

    MCNAPI bool $destroyBlock(::BlockSource& region, ::BlockPos const& pos, bool dropResources);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::LevelBlockDestroyer> $getLevelBlockDestroyer();

    MCNAPI void $upgradeStorageVersion(::StorageVersion v);

    MCNAPI void $suspendAndSave();

    MCNAPI void $sendServerLegacyParticle(::ParticleType id, ::Vec3 const& pos, ::Vec3 const& dir, int data);

    MCNAPI ::Particle* $addParticle(
        ::ParticleType       id,
        ::Vec3 const&        pos,
        ::Vec3 const&        dir,
        int                  data,
        ::CompoundTag const* tag,
        bool                 isGlobal
    );

    MCNAPI void
    $spawnParticleEffect(::std::string const& effectName, ::Vec3 const& spawnLocation, ::Dimension* dimension);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ServerParticleManager> $getServerParticleManager();

    MCNAPI void $addParticleEffect(
        ::HashedString const&      effect,
        ::Vec3 const&              emitterPosition,
        ::MolangVariableMap const& molangVariables
    );

    MCNAPI void $addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
        float             velocityScalar,
        float             emitterRadius
    );

    MCNAPI void $addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
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

    MCNAPI ::ActorUniqueID $getNewUniqueID();

    MCNAPI ::ActorRuntimeID $getNextRuntimeID();

    MCNAPI ::std::vector<::ChunkPos> const& $getTickingOffsets() const;

    MCNAPI ::std::vector<::ChunkPos> const& $getClientTickingOffsets() const;

    MCNAPI ::std::vector<::ChunkPos> $getSortedPositionsFromClientOffsets(::std::vector<::ChunkPos> const& centers
    ) const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ChunkTickOffsetManager const> $getChunkTickOffsetManager() const;

    MCNAPI bool $isExporting() const;

    MCNAPI void $setIsExporting(bool IsExporting);

    MCNAPI ::SavedDataStorage& $getSavedData();

    MCNAPI ::MapItemSavedData* $getMapSavedData(::ActorUniqueID const uuid);

    MCNAPI ::MapItemSavedData* $getMapSavedData(::CompoundTag const& instance);

    MCNAPI ::MapItemSavedData* $getMapSavedData(::CompoundTag const* instance);

    MCNAPI void $requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate);

    MCNAPI ::ActorUniqueID $expandMapByID(::ActorUniqueID const uuid, bool wasInit);

    MCNAPI bool $copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid);

    MCNAPI ::MapItemSavedData& $createMapSavedData(
        ::ActorUniqueID const& uuid,
        ::BlockPos const&      origin,
        ::DimensionType        dimension,
        int                    returnScaleLevel
    );

    MCNAPI ::MapItemSavedData& $createMapSavedData(
        ::std::vector<::ActorUniqueID> const& mapIds,
        ::BlockPos const&                     origin,
        ::DimensionType                       dimension,
        int                                   returnScaleLevel
    );

    MCNAPI ::Core::PathBuffer<::std::string> $getScreenshotsFolder() const;

    MCNAPI ::std::string $getLevelId() const;

    MCNAPI void $setLevelId(::std::string LevelId);

    MCNAPI ::TaskGroup& $getSyncTasksGroup();

    MCNAPI ::TaskGroup& $getIOTasksGroup();

    MCNAPI ::ResourcePackManager* $getClientResourcePackManager() const;

    MCNAPI ::ResourcePackManager* $getServerResourcePackManager() const;

    MCNAPI ::TradeTables* $getTradeTables();

    MCNAPI void $decrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    );

    MCNAPI void $incrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    );

    MCNAPI ::Bedrock::NonOwnerPointer<::TagCacheManager> $getTagCacheManager();

    MCNAPI bool $isEdu() const;

    MCNAPI ::ActorFactory& $getActorFactory();

    MCNAPI ::ActorFactory const& $getActorFactory() const;

    MCNAPI ::ActorInfoRegistry* $getActorInfoRegistry();

    MCNAPI ::StackRefResult<::EntityRegistry> $getEntityRegistry();

    MCNAPI ::StackRefResult<::EntityRegistry const> $getEntityRegistry() const;

    MCNAPI ::EntitySystems& $getEntitySystems();

    MCNAPI ::WeakRef<::EntityContext> $getLevelEntity();

    MCNAPI ::WeakRef<::EntityContext const> $getLevelEntity() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> $tryGetVolumeEntityManagerServer() const;

    MCNAPI void $runCommand(
        ::HashedString const&     commandStr,
        ::CommandOrigin&          origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion const commandVersion
    );

    MCNAPI void $runCommand(::Command& command, ::CommandOrigin& origin, ::CommandOriginSystem originSystem);

    MCNAPI ::PlayerCapabilities::ISharedController const& $getCapabilities() const;

    MCNAPI ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& $getTagRegistry();

    MCNAPI ::PlayerMovementSettings const& $getPlayerMovementSettings() const;

    MCNAPI void $setPlayerMovementSettings(::PlayerMovementSettings const& settings);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager> $getPlayerMovementSettingsManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager const>
    $getPlayerMovementSettingsManager() const;

    MCNAPI bool $canUseSkin(
        ::SerializedSkin const&    skin,
        ::NetworkIdentifier const& networkIdentifier,
        ::ActorUniqueID const&     playerId
    ) const;

    MCNAPI ::Bedrock::NonOwnerPointer<::TrustedSkinHelper const> $getTrustedSkinHelper() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::CameraRegistry const> $getCameraRegistry() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::CameraRegistry> $getCameraRegistry();

    MCNAPI ::Bedrock::NonOwnerPointer<::EntitySystems> $getCameraSystems();

    MCNAPI ::PositionTrackingDB::PositionTrackingDBClient* $getPositionTrackerDBClient() const;

    MCNAPI ::PositionTrackingDB::PositionTrackingDBServer* $getPositionTrackerDBServer() const;

    MCNAPI void $flushRunTimeLighting();

    MCNAPI void $loadBlockDefinitionGroup(::Experiments const& experiments);

    MCNAPI void $initializeBlockDefinitionGroup();

    MCNAPI ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> $getUnknownBlockTypeRegistry();

    MCNAPI bool $isClientSideGenerationEnabled();

    MCNAPI bool $blockNetworkIdsAreHashes();

    MCNAPI ::ItemRegistryRef $getItemRegistry() const;

    MCNAPI ::std::weak_ptr<::BlockTypeRegistry> $getBlockRegistry() const;

    MCNAPI ::Level* $asLevel();

    MCNAPI bool $use3DBiomeMaps() const;

    MCNAPI void $addBlockSourceForValidityTracking(::BlockSource* region);

    MCNAPI void $removeBlockSourceFromValidityTracking(::BlockSource* region);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::BlockSourceValidityManager> $getBlockSourceValidityManager();

    MCNAPI void $pauseAndFlushTaskGroups();

    MCNAPI ::DimensionManager& $getDimensionManager();

    MCNAPI ::DimensionManager const& $getDimensionManager() const;

    MCNAPI void $_subTick();

    MCNAPI ::StackRefResult<::PauseManager> $getPauseManager();

    MCNAPI ::StackRefResult<::PauseManager const> $getPauseManager() const;

    MCNAPI bool $isClientSide() const;

    MCNAPI ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const& $getPlayerList() const;

    MCNAPI ::std::string const& $getPlayerXUID(::mce::UUID const& uuid) const;

    MCNAPI ::std::string const& $getPlayerPlatformOnlineId(::mce::UUID const& uuid) const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager> $getPlayerListManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager const> $getPlayerListManager() const;

    MCNAPI ::std::vector<::WeakEntityRef> const& $getActiveUsers() const;

    MCNAPI void $notifySubChunkRequestManager(::SubChunkPacket const& packet);

    MCNAPI ::SubChunkRequestManager* $getSubChunkRequestManager();

    MCNAPI ::std::vector<::Actor*> $getRuntimeActorList() const;

    MCNAPI ::PacketSender* $getPacketSender() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::NetEventCallback> $getNetEventCallback() const;

    MCNAPI void $setNetEventCallback(::Bedrock::NonOwnerPointer<::NetEventCallback> val);

    MCNAPI ::gsl::not_null<::StackRefResult<::ILevelRandom>> $getILevelRandom();

    MCNAPI ::IRandom& $getIRandom() const;

    MCNAPI ::Random& $getRandom() const;

    MCNAPI ::Random& $getThreadRandom() const;

    MCNAPI ::HitResult& $getHitResult();

    MCNAPI ::HitResult& $getLiquidHitResult();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::HitResultWrapper> $getHitResultWrapper();

    MCNAPI ::std::string const& $getImmersiveReaderString() const;

    MCNAPI void $setImmersiveReaderString(::std::string newString);

    MCNAPI ::AdventureSettings& $getAdventureSettings();

    MCNAPI ::AdventureSettings const& $getAdventureSettings() const;

    MCNAPI ::GameRules const& $getGameRules() const;

    MCNAPI ::GameRules& $getGameRules();

    MCNAPI bool $hasStartWithMapEnabled() const;

    MCNAPI bool $isEditorWorld() const;

    MCNAPI bool $isHardcore() const;

    MCNAPI ::Abilities& $getDefaultAbilities();

    MCNAPI ::PermissionsHandler& $getDefaultPermissions();

    MCNAPI ::PermissionsHandler const& $getDefaultPermissions() const;

    MCNAPI bool $getTearingDown() const;

    MCNAPI void $takePicture(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    );

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::LevelSoundManager> $getLevelSoundManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> $getSoundPlayer() const;

    MCNAPI void $setSimPaused(bool value);

    MCNAPI bool $getSimPaused();

    MCNAPI void $setFinishedInitializing();

    MCNAPI ::LootTables& $getLootTables();

    MCNAPI void $updateWeather(float rainLevel, int rainTime, float lightningLevel, int lightningTime);

    MCNAPI int $getNetherScale() const;

    MCNAPI ::Scoreboard& $getScoreboard();

    MCNAPI ::Scoreboard const& $getScoreboard() const;

    MCNAPI ::Scoreboard* $tryGetScoreboard();

    MCNAPI ::LayeredAbilities* $getPlayerAbilities(::ActorUniqueID const& playerId);

    MCNAPI void $setPlayerAbilities(::ActorUniqueID const& playerId, ::LayeredAbilities const& abilities);

    MCNAPI void $sendAllPlayerAbilities(::Player const& playerReference);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerAbilitiesManager> $getPlayerAbilitiesManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsManager> $getPlayerPermissionsManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsSynchroniser> $getPlayerPermissionsSynchroniser();

    MCNAPI ::Recipes& $getRecipes() const;

    MCNAPI ::BlockReducer* $getBlockReducer() const;

    MCNAPI ::std::weak_ptr<::TrimPatternRegistry const> $getTrimPatternRegistry() const;

    MCNAPI ::std::weak_ptr<::TrimPatternRegistry> $getTrimPatternRegistry();

    MCNAPI ::std::weak_ptr<::TrimMaterialRegistry const> $getTrimMaterialRegistry() const;

    MCNAPI ::std::weak_ptr<::TrimMaterialRegistry> $getTrimMaterialRegistry();

    MCNAPI ::BlockLegacy const& $getRegisteredBorderBlock() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::LevelChunkPerformanceTelemetry> $getLevelChunkPerformanceTelemetry();

    MCNAPI ::cereal::ReflectionCtx const& $cerealContext() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> $getChunkGenerationManager();

    MCNAPI ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> $getChunkGenerationManager() const;

    MCNAPI ::PlayerDeathManager* $_getPlayerDeathManager();

    MCNAPI void $_initializeMapDataManager();

    MCNAPI ::cereal::ReflectionCtx& $_cerealContext();

    MCNAPI void $_onLowMemory();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIWorldRegistriesProvider();

    MCNAPI static void** $vftableForBlockSourceListener();

    MCNAPI static void** $vftableForILevel();
    // NOLINTEND
};
