#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/file/PathBuffer.h"
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
#include "mc/platform/Result.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/Factory.h"
#include "mc/util/IDType.h"
#include "mc/util/OwnerPtrFactory.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/item/registry/ItemRegistryRef.h"
#include "mc/world/level/ActorValidationError.h"
#include "mc/world/level/BlockDestroySound.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/BlockSourceListener.h"
#include "mc/world/level/CommandOriginSystem.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/ILevel.h"
#include "mc/world/level/IWorldRegistriesProvider.h"
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"
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
class AutomationBehaviorTreeGroup;
class AutonomousActorManager;
class BehaviorFactory;
class BiomeComponentFactory;
class BiomeManager;
class BiomeRegistry;
class Block;
class BlockActorLevelListener;
class BlockChangeContext;
class BlockDefinitionGroup;
class BlockEventCoordinator;
class BlockPalette;
class BlockPos;
class BlockReducer;
class BlockType;
class BlockTypeRegistry;
class BossEventSubscriptionManager;
class CameraPresets;
class ChangeDimensionRequest;
class ChunkGenerationManager;
class ChunkPos;
class ChunkSource;
class ChunkTickOffsetManager;
class ChunkTickRangeManager;
class ChunkViewSource;
class ChunkViewTrackerManager;
class ClientPlayerEventCoordinator;
class Command;
class CommandOrigin;
class CompoundTag;
class ContainerRegistry;
class DensityFunctionRegistry;
class Dimension;
class DimensionConversionData;
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
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class IDynamicContainerSerialization;
class IEntityRegistryOwner;
class ILevelRandom;
class IMinecraftEventing;
class IRandom;
class ISubChunkLighter;
class IUnknownBlockTypeRegistry;
class InternalComponentRegistry;
class ItemEventCoordinator;
class JigsawStructureRegistry;
class LayeredAbilities;
class LevelBlockDestroyer;
class LevelChunk;
class LevelChunkEventManager;
class LevelChunkMetaDataManager;
class LevelChunkPerformanceTelemetry;
class LevelChunkSaveManager;
class LevelCrashDumpManager;
class LevelData;
class LevelEventCoordinator;
class LevelEventManager;
class LevelListener;
class LevelSeed64;
class LevelSettings;
class LevelSoundManager;
class LevelStorage;
class LevelStorageManager;
class LinkedAssetValidator;
class LoadingScreenIdManager;
class LootTables;
class MapItemSavedData;
class Mob;
class MolangPackSettingsCache;
class MolangVariableMap;
class NavigationComponent;
class NetEventCallback;
class NetworkIdentifier;
class NpcDialogueStorage;
class PacketSender;
class ParticleProvider;
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
class PlayerListEntry;
class PlayerListManager;
class PlayerLocationReceiver;
class PlayerLocationSender;
class PlayerMovementSettingsManager;
class PlayerPermissionsManager;
class PlayerPermissionsSynchroniser;
class PlayerSleepManager;
class PlayerTickManager;
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
class SerializedSkinRef;
class ServerLevelEventCoordinator;
class ServerNetworkEventCoordinator;
class ServerParticleManager;
class ServerPlayerEventCoordinator;
class ServerPlayerSleepManager;
class SoundPlayerInterface;
class Spawner;
class StartGamePacket;
class StrictEntityContext;
class StructureManager;
class StructureSpawnRegistry;
class SubChunkPacket;
class SurfaceBuilderRegistry;
class TagCacheManager;
class TaskGroup;
class TempEPtrManager;
class TickDeltaTimeManager;
class TickingAreaList;
class TickingAreasManager;
class TradeTables;
class TrimMaterialRegistry;
class TrimPatternRegistry;
class UniqueIDManager;
class UserEntityIdentifierComponent;
class VanillaActorEventListenerManager;
class Vec3;
class VolumeEntityManagerServer;
class WeakEntityRef;
class WeatherManager;
class WorldClockRegistry;
class _TickPtr;
struct ActorDimensionTransferRequest;
struct ActorUniqueID;
struct AdventureSettings;
struct BiomeJsonDocumentGlueResolvedBiomeData;
struct Bounds;
struct BreakingItemParticleData;
struct DerivedDimensionArguments;
struct DimensionFactoryAndManager;
struct DimensionType;
struct LevelArguments;
struct LevelTagIDType;
struct LevelTagSetIDType;
struct PlaySoundOptions;
struct PlayerMovementSettings;
struct PlayerSleepStatus;
struct PlayerSpawnDimensionResolution;
struct ResolvedItemIconInfo;
struct Tick;
namespace PlayerCapabilities { struct ISharedController; }
namespace PositionTrackingDB { class PositionTrackingDBClient; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace ServerInitialization { class IServerInitializer; }
namespace SharedTypes::v1_26_50 { struct CameraPreset; }
namespace VoxelShapes { class VoxelShapeRegistry; }
namespace cereal { struct ReflectionCtx; }
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
namespace mce { class UUID; }
class ArmorTrimUnloader;
class BaseLightTextureImageBuilder;
class CameraRegistry;
class Particle;
class SubChunkManager;
class SubChunkRequestManager;
class TrustedSkinHelper;
struct ScreenshotOptions;
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
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PacketSender> const> mPacketSender;
    ::ll::TypedStorage<
        8,
        16,
        ::gsl::not_null<
            ::Bedrock::UniqueOwnerPointer<::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>>>>
                                                                                  mTagRegistry;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorInfoRegistry>>             mActorInfoRegistry;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelListener*>>                    mListeners;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelStorageManager>>            mLevelStorageManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelData> const>   mLevelData;
    ::ll::TypedStorage<1, 1, bool const>                                          mConstructedAsNewLevel;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockSource*>>               mRegions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>> mLinkedAssetValidator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDefinitionGroup>>           mEntityDefinitions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorAnimationGroup>>            mActorAnimationGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorAnimationControllerGroup>>  mActorAnimationControllerGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockDefinitionGroup>>           mBlockDefinitions;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::TrimPatternRegistry>>           mTrimPatternRegistry;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::TrimMaterialRegistry>>          mTrimMaterialRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Spawner>>                        mMobSpawner;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ProjectileFactory>>              mProjectileFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PropertyGroupManager>>           mActorPropertyGroups;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CameraPresets>>                  mCameraPresets;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BehaviorFactory>>                mBehaviorFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AutomationBehaviorTreeGroup>>    mAutomationBehaviorTreeDefinitions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockPalette>>                   mGlobalBlockPalette;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Recipes>>                        mRecipes;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockReducer>>                   mBlockReducer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NpcDialogueStorage>>             mNpcDialogueStorage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::InternalComponentRegistry>>      mInternalComponentRegistry;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PortalForcer>>> mPortalForcer;
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const>                                        mItemRegistry;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::BlockTypeRegistry>>             mBlockTypeRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IUnknownBlockTypeRegistry>>                  mUnknownBlockTypeRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BossEventSubscriptionManager>>       mBossEventSubscriptionManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::ContainerRegistry>> const> mContainerRegistry;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::HitResultWrapper>>> mHitResultWrapper;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mImmersiveReaderString;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::ILevelRandom>>>    mLevelRandom;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::NetEventCallback>> mNetEventCallback;
    ::ll::TypedStorage<1, 1, bool const>                                      mIsClientSide;
    ::ll::TypedStorage<1, 1, bool const>                                      mIsTrialMode;
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
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelSoundManager>>             mLevelSoundManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mStructureManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::LevelChunkPerformanceTelemetry>>>
                                                              mLevelChunkPerformanceTelemetry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LootTables>> mLootTables;
    ::ll::TypedStorage<8, 8, ::BlockType const*>              mRegisteredBorderBlock;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::JigsawStructureRegistry>>>
        mJigsawStructureRegistry;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::StructureSpawnRegistry>>>
        mStructureSpawnRegistry;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::DimensionFactoryAndManager>>>
                                                                                     mDimensionFactoryAndManager;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                            mLevelEntity;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner>> mEntityRegistryOwner;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::PauseManager>>                            mPauseManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::EntitySystemsManager>>>   mEntitySystemsManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FeatureRegistry>>                   mFeatureRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FeatureTypeFactory>>                mFeatureTypeFactory;
    ::ll::TypedStorage<8, 64, ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&>>
        mLightTextureImageBuilderFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::EducationSettingsManager>>>
                                                                                         mEducationSettingsManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerCapabilities::ISharedController>> mCapabilities;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockActorLevelListener>>               mBlockActorLevelListener;
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
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::AutonomousActorManager>>>
                                                                                              mAutonomousActorManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorFetcher>>> mActorFetcher;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::GameplayUserManager>>>
                                                                            mGameplayUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mOnGameplayUserAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mOnGameplayUserRemovedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mOnAnyGameplayUsersRemovedSubscription;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scoreboard>>               mScoreboard;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MolangPackSettingsCache>> mMolangPackSettingsCache;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorRuntimeIDManager>>>
                                                                                       mActorRuntimeIDManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::PlayerLocationReceiver>> mPlayerLocationReceiver;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::PlayerLocationSender>>   mPlayerLocationSender;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerListManager>>> mPlayerListManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerTickManager>>> mPlayerTickManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ServerParticleManager>>>
        mServerParticleManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ParticleProvider>>> mParticleProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSendServerLegacyParticleSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAddTerrainParticleEffectSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAddTerrainSlideEffectSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAddBreakingItemParticleEffectSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAddBiomeTintedParticleEffectSubscription;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ChunkTickRangeManager>>>
        mChunkTickRangeManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ChunkViewTrackerManager>>>
                                                                                              mChunkViewTrackerManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::ActorEventBroadcaster> const>   mActorEventBroadcaster;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::cereal::ReflectionCtx>>>           mCerealContext;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorFactory>>> mActorFactory;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::LoadingScreenIdManager>>        mLoadingScreenIdManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerDimensionTransferManager>>>
        mPlayerDimensionTransferManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::LevelCrashDumpManager>> const>
                                                                              mLevelCrashDumpManager;
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
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::LevelChunkSaveManager>>                    mLevelChunkSaveManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::WeatherManager>>>          mWeatherManager;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                     mHandleLowMemoryOnTick;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mLowMemorySubscription;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry>>   mShapeRegistry;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::DensityFunctionRegistry>>> mDensityFunctionRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    Level& operator=(Level const&);
    Level(Level const&);
    Level();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Level() /*override*/;

    virtual bool initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
                                                    biomeIdToResolvedData,
        ::ServerInitialization::IServerInitializer* init
    ) /*override*/;

    virtual void startLeaveGame() /*override*/;

    virtual bool isLeaveGameDone() /*override*/;

    virtual bool isDimensionTypeActive(::DimensionType dimensionType) const /*override*/;

    virtual ::WeakRef<::Dimension> getOrCreateDimension(::DimensionType dimensionType) /*override*/;

    virtual ::WeakRef<::Dimension> getDimension(::DimensionType id) const /*override*/;

    virtual ::PlayerSpawnDimensionResolution resolvePlayerSpawnDimension(::CompoundTag const* playerTag) const
        /*override*/;

    virtual void forEachDimension(::std::function<bool(::Dimension&)> callback) /*override*/;

    virtual void forEachDimension(::std::function<bool(::Dimension const&)> callback) const /*override*/;

    virtual uint getChunkTickRange() const /*override*/;

    virtual ::ChunkTickRangeManager const& getChunkTickRangeManager() const /*override*/;

    virtual ::PortalForcer& getPortalForcer() /*override*/;

    virtual void requestPlayerChangeDimension(::Player& player, ::ChangeDimensionRequest&& changeRequest) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerDimensionTransferManager>
    getPlayerDimensionTransferManager() /*override*/;

    virtual void entityChangeDimension(
        ::Actor&                               entity,
        ::ActorDimensionTransferRequest const& actorDimensionTransferRequest
    ) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorDimensionTransferManager>
    getActorDimensionTransferManager() /*override*/;

    virtual ::Spawner& getSpawner() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::BossEventSubscriptionManager>
    getBossEventSubscriptionManager() /*override*/;

    virtual ::ProjectileFactory& getProjectileFactory() const /*override*/;

    virtual ::ActorDefinitionGroup* getEntityDefinitions() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationGroup> getActorAnimationGroup() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ActorAnimationControllerGroup> getActorAnimationControllerGroup() const
        /*override*/;

    virtual ::BlockDefinitionGroup* getBlockDefinitions() const /*override*/;

    virtual ::PropertyGroupManager& getActorPropertyGroup() const /*override*/;

    virtual ::CameraPresets const& getCameraPresets() const /*override*/;

    virtual ::CameraPresets& getCameraPresets() /*override*/;

    virtual ::SharedTypes::v1_26_50::CameraPreset const* getCameraPreset(int presetIndex) const /*override*/;

    virtual bool getDisablePlayerInteractions() const /*override*/;

    virtual void setDisablePlayerInteractions(bool const disable) /*override*/;

    virtual ::AutomationBehaviorTreeGroup& getAutomationBehaviorTreeGroup() const /*override*/;

    virtual ::BehaviorFactory& getBehaviorFactory() const /*override*/;

    virtual ::SharedTypes::Legacy::Difficulty getDifficulty() const /*override*/;

    virtual ::DimensionConversionData getDimensionConversionData() const /*override*/;

    virtual float getSpecialMultiplier(::DimensionType dimensionType) const /*override*/;

    virtual bool hasCommandsEnabled() const /*override*/;

    virtual bool useMsaGamertagsOnly() const /*override*/;

    virtual void setMsaGamertagsOnly(bool msaGamertagsOnly) /*override*/;

    virtual ::Actor* addEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;

    virtual ::Actor* putEntity(
        ::BlockSource&              region,
        ::ActorUniqueID             id,
        ::ActorRuntimeID            runtimeId,
        ::OwnerPtr<::EntityContext> entity
    ) /*override*/;

    virtual ::Actor*
    putEntity(::BlockSource& region, ::ActorUniqueID id, ::OwnerPtr<::EntityContext> entity) /*override*/;

    virtual ::Actor* addGlobalEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;

    virtual ::Actor* addAutonomousEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;

    virtual void addUser(::OwnerPtr<::EntityContext> userEntity) /*override*/;

#ifdef LL_PLAT_S
    virtual ::Actor* addDisplayEntity(::BlockSource&, ::OwnerPtr<::EntityContext>) /*override*/;
#else // LL_PLAT_C
    virtual ::Actor* addDisplayEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void removeDisplayEntity(::WeakEntityRef) /*override*/;
#else // LL_PLAT_C
    virtual void removeDisplayEntity(::WeakEntityRef entity) /*override*/;
#endif

    virtual ::Bedrock::NonOwnerPointer<::DisplayActorManager> getDisplayActorManager() /*override*/;

    virtual void suspendPlayer(::Player& player) /*override*/;

    virtual void resumePlayer(::Player& player) /*override*/;

    virtual bool isPlayerSuspended(::Player& player) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> getGameplayUserManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager const> getGameplayUserManager() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::PlayerLocationReceiver> getPlayerLocationReceiver() /*override*/;

    virtual ::OwnerPtr<::EntityContext> removeActorAndTakeEntity(::WeakEntityRef entityRef) /*override*/;

    virtual ::OwnerPtr<::EntityContext> removeActorFromWorldAndTakeEntity(::WeakEntityRef entityRef) /*override*/;

    virtual ::OwnerPtr<::EntityContext> takeEntity(::WeakEntityRef entityRef, ::LevelChunk& lc) /*override*/;

    virtual ::StrictEntityContext fetchStrictEntity(::ActorUniqueID actorId, bool getRemoved) const /*override*/;

    virtual ::Actor* fetchEntity(::ActorUniqueID actorId, bool getRemoved) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorFetcher const> getActorFetcher() const /*override*/;

    virtual ::Actor* getRuntimeEntity(::ActorRuntimeID actorId, bool getRemoved) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager> getActorRuntimeIDManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager const> getActorRuntimeIDManager() const /*override*/;

    virtual ::Mob* getMob(::ActorUniqueID mobId) const /*override*/;

    virtual ::Player* getPlayer(::std::string const& name) const /*override*/;

    virtual ::Player* getPlayer(::mce::UUID const& uuid) const /*override*/;

    virtual ::Player* getPlayer(::ActorUniqueID entityID) const /*override*/;

    virtual ::Player* getPlayerByXuid(::std::string const& xuid) const /*override*/;

    virtual ::Player* getPlatformPlayer(::std::string const& platformOnlineId) const /*override*/;

    virtual ::Player* getPlayerFromServerId(::std::string const& serverId) const /*override*/;

    virtual ::Player* getRuntimePlayer(::ActorRuntimeID runtimeId) const /*override*/;

    virtual int getNumRemotePlayers() const /*override*/;

    virtual ::Player* getPrimaryLocalPlayer() const /*override*/;

    virtual ::IMinecraftEventing& getEventing() /*override*/;

    virtual ::mce::Color getPlayerColor(::Player const& player) const /*override*/;

    virtual ::Tick const& getCurrentTick() const /*override*/;

    virtual ::Tick const getCurrentServerTick() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TickDeltaTimeManager const> getTickDeltaTimeManager() const /*override*/;

    virtual ::ArmorTrimUnloader* getArmorTrimUnloader();

    virtual ::gsl::not_null<::StackRefResult<::IContainerRegistryAccess>> getContainerRegistryAccess() const
        /*override*/;

    virtual ::gsl::not_null<::StackRefResult<::IContainerRegistryTracker>> getContainerRegistryTracker() const
        /*override*/;

    virtual ::gsl::not_null<::StackRefResult<::IDynamicContainerSerialization>> getDynamicContainerSerialization() const
        /*override*/;

    virtual ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry const> getShapeRegistry() const /*override*/;

    virtual ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry> getMutableShapeRegistry() const /*override*/;

    virtual ::BiomeRegistry const& getBiomeRegistry() const /*override*/;

    virtual ::BiomeRegistry& getBiomeRegistry() /*override*/;

    virtual ::BlockPalette const& getBlockPalette() const /*override*/;

    virtual ::BlockPalette& getBlockPalette() /*override*/;

    virtual ::FeatureRegistry const& getFeatureRegistry() const /*override*/;

    virtual ::FeatureRegistry& getFeatureRegistry() /*override*/;

    virtual ::FeatureTypeFactory const& getFeatureTypeFactory() const /*override*/;

    virtual ::FeatureTypeFactory& getFeatureTypeFactory() /*override*/;

    virtual ::JigsawStructureRegistry const& getJigsawStructureRegistry() const /*override*/;

    virtual ::JigsawStructureRegistry& getJigsawStructureRegistry() /*override*/;

    virtual ::StructureSpawnRegistry const& getStructureSpawnRegistry() const /*override*/;

    virtual ::StructureSpawnRegistry& getStructureSpawnRegistry() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> const getStructureManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> getStructureManager() /*override*/;

    virtual ::BiomeComponentFactory const& getBiomeComponentFactory() const /*override*/;

    virtual ::BiomeComponentFactory& getBiomeComponentFactory() /*override*/;

    virtual ::SurfaceBuilderRegistry const& getSurfaceBuilderRegistry() const /*override*/;

    virtual ::SurfaceBuilderRegistry& getSurfaceBuilderRegistry() /*override*/;

    virtual ::BiomeManager const& getBiomeManager() const /*override*/;

    virtual ::BiomeManager& getBiomeManager() /*override*/;

    virtual ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&> const& getDimensionFactory() const
        /*override*/;

    virtual ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&>& getDimensionFactory() /*override*/;

    virtual ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&> const&
    getLightTextureImageBuilderFactory() const /*override*/;

    virtual ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&>&
    getLightTextureImageBuilderFactory() /*override*/;

    virtual ::InternalComponentRegistry& getInternalComponentRegistry() const /*override*/;

    virtual ::IWorldRegistriesProvider const& getWorldRegistriesProvider() const /*override*/;

    virtual ::IWorldRegistriesProvider& getWorldRegistriesProvider() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const> const getWorldClockRegistry() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry> getWorldClockRegistry() /*override*/;

    virtual void addListener(::LevelListener& listener) /*override*/;

    virtual void removeListener(::LevelListener& listener) /*override*/;

    virtual void tickEntities() /*override*/;

    virtual void tickEntitySystems() /*override*/;

    virtual void onPlayerDeath(::Player& player, ::ActorDamageSource const& source) /*override*/;

    virtual void tick() /*override*/;

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

    virtual bool explode(::Explosion& explosion) /*override*/;

    virtual void denyEffect(::BlockSource& region, ::Vec3 const& pos) /*override*/;

    virtual void potionSplash(::Vec3 const& pos, ::mce::Color const& color, bool instantaneousEffect) /*override*/;

    virtual bool extinguishFire(::BlockSource& region, ::BlockPos const& pos, uchar face, ::Actor* source) /*override*/;

    virtual ::std::unique_ptr<::Path>
    findPath(::Actor& from, int xBest, int yBest, int zBest, ::NavigationComponent& navigation) /*override*/;

    virtual ::std::unique_ptr<::Path>
    findPath(::Actor& from, ::Actor const& to, ::NavigationComponent& navigation) /*override*/;

    virtual void setSleepStatus(::PlayerSleepStatus const& status) /*override*/;

    virtual ::PlayerSleepStatus getSleepStatus() const /*override*/;

    virtual void updateSleepingPlayerList() /*override*/;

    virtual ::PlayerSleepManager const& getPlayerSleepManager() const = 0;

    virtual ::PlayerSleepManager& getPlayerSleepManager() = 0;

    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> getServerPlayerSleepManager() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> getServerPlayerSleepManager() const
        /*override*/;

    virtual int getTime() const /*override*/;

    virtual void setTime(int time) /*override*/;

    virtual uint getSeed() /*override*/;

    virtual ::LevelSeed64 getLevelSeed64() const /*override*/;

    virtual ::BlockPos const& getSharedSpawnPos() const /*override*/;

    virtual void setDefaultSpawn(::BlockPos const& spawnPos) /*override*/;

    virtual ::BlockPos const& getDefaultSpawn() const /*override*/;

    virtual void setDefaultGameType(::GameType gameType) /*override*/;

    virtual ::GameType getDefaultGameType() const /*override*/;

    virtual void setDifficulty(::SharedTypes::Legacy::Difficulty difficulty) /*override*/;

    virtual void setMultiplayerGameIntent(bool multiplayerGame) /*override*/;

    virtual bool getMultiplayerGameIntent() const /*override*/;

    virtual void setMultiplayerGame(bool multiplayerGame) /*override*/;

    virtual bool isMultiplayerGame() const /*override*/;

    virtual void setLANBroadcastIntent(bool broadcast) /*override*/;

    virtual bool getLANBroadcastIntent() const /*override*/;

    virtual void setLANBroadcast(bool broadcast) /*override*/;

    virtual bool getLANBroadcast() const /*override*/;

    virtual void setXBLBroadcastIntent(::Social::GamePublishSetting broadcastMode) /*override*/;

    virtual ::Social::GamePublishSetting getXBLBroadcastIntent() const /*override*/;

    virtual bool hasXBLBroadcastIntent() const /*override*/;

    virtual void setXBLBroadcastMode(::Social::GamePublishSetting broadcastMode) /*override*/;

    virtual ::Social::GamePublishSetting getXBLBroadcastMode() const /*override*/;

    virtual bool hasXBLBroadcast() const /*override*/;

    virtual void setPlatformBroadcastIntent(::Social::GamePublishSetting broadcastMode) /*override*/;

    virtual ::Social::GamePublishSetting getPlatformBroadcastIntent() const /*override*/;

    virtual bool hasPlatformBroadcastIntent() const /*override*/;

    virtual void setPlatformBroadcastMode(::Social::GamePublishSetting broadcastMode) /*override*/;

    virtual ::Social::GamePublishSetting getPlatformBroadcastMode() const /*override*/;

    virtual bool hasPlatformBroadcast() const /*override*/;

    virtual void setHasLockedBehaviorPack(bool hasLocked) /*override*/;

    virtual void setHasLockedResourcePack(bool hasLocked) /*override*/;

    virtual void setCommandsEnabled(bool commandsEnabled) /*override*/;

    virtual void setWorldTemplateOptionsUnlocked() /*override*/;

    virtual bool hasLevelStorage() const /*override*/;

    virtual ::LevelStorage& getLevelStorage() /*override*/;

    virtual ::LevelStorage const& getLevelStorage() const /*override*/;

    virtual ::LevelData& getLevelData() /*override*/;

    virtual ::LevelData const& getLevelData() const /*override*/;

    virtual ::PhotoStorage& getPhotoStorage() const /*override*/;

    virtual void createPhotoStorage() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PhotoManager> getPhotoManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PhotoManager const> getPhotoManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager> getEducationSettingsManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager const> getEducationSettingsManager() const
        /*override*/;

    virtual void save() /*override*/;

    virtual void saveLevelData() /*override*/;

    virtual void saveGameData() /*override*/;

    virtual ::std::shared_ptr<void*> requestTimedStorageDeferment() /*override*/;

    virtual ::TickingAreasManager& getTickingAreasMgr() /*override*/;

    virtual void addTickingAreaList(
        ::DimensionType                             dimensionId,
        ::std::shared_ptr<::TickingAreaList> const& tickingAreas
    ) /*override*/;

    virtual void playSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) /*override*/;

    virtual void playSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        float const                            volume,
        float const                            pitch
    ) /*override*/;

    virtual void playSound(::PlaySoundOptions const& options) /*override*/;

    virtual void playSound(
        ::IConstBlockSource const&             region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) /*override*/;

    virtual void playSound(
        ::DimensionType                        dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) /*override*/;

    virtual ::PlayerEventCoordinator& getRemotePlayerEventCoordinator() /*override*/;

    virtual ::ServerPlayerEventCoordinator& getServerPlayerEventCoordinator() /*override*/;

    virtual ::ClientPlayerEventCoordinator& getClientPlayerEventCoordinator() /*override*/;

    virtual ::ActorEventCoordinator& getActorEventCoordinator() /*override*/;

    virtual ::BlockEventCoordinator& getBlockEventCoordinator() /*override*/;

    virtual ::ItemEventCoordinator& getItemEventCoordinator() /*override*/;

    virtual ::ServerNetworkEventCoordinator& getServerNetworkEventCoordinator() /*override*/;

    virtual ::ScriptingEventCoordinator& getScriptingEventCoordinator() /*override*/;

    virtual ::ScriptDeferredEventCoordinator& getScriptDeferredEventCoordinator() /*override*/;

    virtual ::LevelEventCoordinator& getLevelEventCoordinator() /*override*/;

    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data) /*override*/;

    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> getLevelEventManager() /*override*/;

    virtual void handleStopSoundEvent(::std::string const& name) /*override*/;

    virtual void handleStopAllSounds() /*override*/;

    virtual void handleStopMusicEvent() /*override*/;

    virtual void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::UserEntityIdentifierComponent const* userIdentifier
    ) /*override*/;

    virtual void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::CompoundTag const&                   tag,
        ::UserEntityIdentifierComponent const* userIdentifier
    ) /*override*/;

    virtual void broadcastLocalEvent(
        ::BlockSource&                    region,
        ::SharedTypes::Legacy::LevelEvent type,
        ::Vec3 const&                     pos,
        int                               data
    ) /*override*/;

    virtual void broadcastLocalEvent(
        ::BlockSource&                    region,
        ::SharedTypes::Legacy::LevelEvent type,
        ::Vec3 const&                     pos,
        ::Block const&                    block
    ) /*override*/;

    virtual void broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Block const&                         block,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    ) /*override*/;

    virtual void broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    ) /*override*/;

    virtual void broadcastSoundEvent(
        ::Dimension&                           dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    ) /*override*/;

    virtual void broadcastActorEvent(
        ::Actor&                       actor,
        ::ActorEvent                   eventId,
        int                            data,
        ::std::optional<::Vec3> const& fireAtPosition
    ) const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ActorEventBroadcaster const> getActorEventBroadcaster() const /*override*/;

    virtual void addChunkViewTracker(::std::weak_ptr<::ChunkViewSource> chunkViewSource) /*override*/;

    virtual void onChunkReload(::Bounds const& bound) /*override*/;

    virtual int getActivePlayerCount() const /*override*/;

    virtual int getActiveUsersCount() const /*override*/;

    virtual void forEachPlayer(::std::function<bool(::Player&)> callback) /*override*/;

    virtual void forEachPlayer(::std::function<bool(::Player const&)> callback) const /*override*/;

    virtual void forEachUser(::std::function<bool(::EntityContext&)> callback) /*override*/;

    virtual void forEachUser(::std::function<bool(::EntityContext const&)> callback) const /*override*/;

    virtual ::Player* findPlayer(::std::function<bool(::Player const&)> pred) const /*override*/;

    virtual ::Player* findPlayer(::std::function<bool(::WeakEntityRef const&)> pred) const /*override*/;

    virtual int getUserCount() const /*override*/;

    virtual int countUsersWithMatchingNetworkId(::NetworkIdentifier const& networkId) const /*override*/;

    virtual ::std::vector<::OwnerPtr<::EntityContext>> const& getUsers() const /*override*/;

    virtual ::std::vector<::OwnerPtr<::EntityContext>> const& getEntities() const /*override*/;

    virtual void onSourceCreated(::BlockSource& source) /*override*/;

    virtual void onSourceDestroyed(::BlockSource& source) /*override*/;

    virtual void onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    ) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::SubChunkManager> getSubChunkManager() /*override*/;

    virtual void onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    virtual void onChunkReloaded(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    virtual ::LevelChunkMetaDataManager* getLevelChunkMetaDataManager() /*override*/;

    virtual void onChunkDiscarded(::LevelChunk& lc) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelChunkEventManager> getLevelChunkEventManager() /*override*/;

    virtual void queueEntityDestruction(::OwnerPtr<::EntityContext> entity) /*override*/;

    virtual ::OwnerPtr<::EntityContext> removeEntity(::Actor& actor) /*override*/;

    virtual ::OwnerPtr<::EntityContext> removeEntity(::WeakEntityRef entityRef) /*override*/;

    virtual void forceRemoveEntity(::Actor& actor) /*override*/;

    virtual void forceRemoveEntityfromWorld(::Actor& actor) /*override*/;

    virtual void forceFlushRemovedPlayers() /*override*/;

    virtual void loadFunctionManager() /*override*/;

    virtual void levelCleanupQueueEntityRemoval(::OwnerPtr<::EntityContext> entity) /*override*/;

    virtual void registerTemporaryPointer(::_TickPtr& ptr) /*override*/;

    virtual void unregisterTemporaryPointer(::_TickPtr& ptr) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TempEPtrManager> getTempEPtrManager() /*override*/;

    virtual bool destroyBlock(
        ::BlockSource&              region,
        ::BlockPos const&           pos,
        bool                        dropResources,
        ::BlockChangeContext const& changeSourceContext,
        ::BlockDestroySound         destroySound
    ) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelBlockDestroyer> getLevelBlockDestroyer() /*override*/;

    virtual void upgradeStorageVersion(::StorageVersion v) /*override*/;

    virtual void suspendAndSave() /*override*/;

    virtual void
    sendServerLegacyParticle(::ParticleType id, ::Vec3 const& pos, ::Vec3 const& dir, int data) /*override*/;

    virtual ::Particle* addParticle(
        ::ParticleType       id,
        ::Vec3 const&        pos,
        ::Vec3 const&        dir,
        int                  data,
        ::CompoundTag const* tag,
        bool                 isGlobal
    ) /*override*/;

    virtual void spawnParticleEffect(
        ::std::string const& effectName,
        ::Vec3 const&        spawnLocation,
        ::Dimension*         dimension
    ) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ServerParticleManager> getServerParticleManager() /*override*/;

    virtual void addParticleEffect(
        ::HashedString const&      effect,
        ::Vec3 const&              emitterPosition,
        ::MolangVariableMap const& molangVariables
    ) /*override*/;

    virtual void addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
        float             velocityScalar,
        float             emitterRadius
    ) /*override*/;

    virtual void addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
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

    virtual ::ActorUniqueID getNewUniqueID() /*override*/;

    virtual ::ActorRuntimeID getNextRuntimeID() /*override*/;

    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const /*override*/;

    virtual ::std::vector<::ChunkPos> const& getClientTickingOffsets() const /*override*/;

    virtual ::std::vector<::ChunkPos>
    getSortedPositionsFromClientOffsets(::std::vector<::ChunkPos> const& centers) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ChunkTickOffsetManager const> getChunkTickOffsetManager() const
        /*override*/;

    virtual bool isExporting() const /*override*/;

    virtual void setIsExporting(bool IsExporting) /*override*/;

    virtual ::SavedDataStorage& getSavedData() /*override*/;

    virtual ::MapItemSavedData* getMapSavedData(::ActorUniqueID const uuid) /*override*/;

    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const& instance) /*override*/;

    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const* instance) /*override*/;

    virtual void requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate) /*override*/;

    virtual ::ActorUniqueID expandMapByID(::ActorUniqueID const uuid, bool wasInit) /*override*/;

    virtual bool copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid) /*override*/;

    virtual ::MapItemSavedData& createMapSavedData(
        ::ActorUniqueID const& uuid,
        ::BlockPos const&      origin,
        ::DimensionType        dimension,
        int                    returnScaleLevel
    ) /*override*/;

    virtual ::MapItemSavedData& createMapSavedData(
        ::std::vector<::ActorUniqueID> const& mapIds,
        ::BlockPos const&                     origin,
        ::DimensionType                       dimension,
        int                                   returnScaleLevel
    ) /*override*/;

    virtual ::Core::PathBuffer<::std::string> getScreenshotsFolder() const /*override*/;

    virtual ::std::string getLevelId() const /*override*/;

    virtual void setLevelId(::std::string LevelId) /*override*/;

    virtual ::TaskGroup& getSyncTasksGroup() /*override*/;

    virtual ::TaskGroup& getIOTasksGroup() /*override*/;

    virtual ::ResourcePackManager* getClientResourcePackManager() const /*override*/;

    virtual ::ResourcePackManager* getServerResourcePackManager() const /*override*/;

    virtual ::TradeTables* getTradeTables() /*override*/;

    virtual void decrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    ) /*override*/;

    virtual void incrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    ) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::TagCacheManager> getTagCacheManager() /*override*/;

    virtual bool isEdu() const /*override*/;

    virtual ::ActorFactory& getActorFactory() /*override*/;

    virtual ::ActorFactory const& getActorFactory() const /*override*/;

    virtual ::ActorInfoRegistry* getActorInfoRegistry() /*override*/;

    virtual ::StackRefResult<::EntityRegistry> getEntityRegistry() /*override*/;

    virtual ::StackRefResult<::EntityRegistry const> getEntityRegistry() const /*override*/;

    virtual ::EntitySystems& getEntitySystems() /*override*/;

    virtual ::WeakRef<::EntityContext> getLevelEntity() /*override*/;

    virtual ::WeakRef<::EntityContext const> getLevelEntity() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> tryGetVolumeEntityManagerServer() const
        /*override*/;

    virtual void runCommand(
        ::HashedString const&     commandStr,
        ::CommandOrigin&          origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion const commandVersion
    ) /*override*/;

    virtual void
    runCommand(::Command& command, ::CommandOrigin& origin, ::CommandOriginSystem originSystem) /*override*/;

    virtual ::PlayerCapabilities::ISharedController const& getCapabilities() const /*override*/;

    virtual ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& getTagRegistry() /*override*/;

    virtual ::PlayerMovementSettings const& getPlayerMovementSettings() const /*override*/;

    virtual void setPlayerMovementSettings(::PlayerMovementSettings const& settings) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager>
    getPlayerMovementSettingsManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager const>
    getPlayerMovementSettingsManager() const /*override*/;

    virtual bool canUseSkin(
        ::SerializedSkinRef const& skin,
        ::NetworkIdentifier const& networkIdentifier,
        ::ActorUniqueID const&     playerId
    ) const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::TrustedSkinHelper const> getTrustedSkinHelper() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry const> getCameraRegistry() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry> getCameraRegistry() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::EntitySystems> getCameraSystems() /*override*/;

    virtual ::PositionTrackingDB::PositionTrackingDBClient* getPositionTrackerDBClient() const /*override*/;

    virtual ::PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const /*override*/;

    virtual void flushRunTimeLighting() /*override*/;

    virtual ::std::weak_ptr<::ISubChunkLighter> getSubChunkLighter() const /*override*/;

    virtual void loadBlockDefinitionGroup(::Experiments const& experiments) /*override*/;

    virtual void initializeBlockDefinitionGroup() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> getUnknownBlockTypeRegistry() /*override*/;

    virtual bool isClientSideGenerationEnabled() /*override*/;

    virtual bool blockNetworkIdsAreHashes() /*override*/;

    virtual ::ItemRegistryRef getItemRegistry() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::BlockTypeRegistry> getBlockTypeRegistry() const /*override*/;

    virtual ::Level* asLevel() /*override*/;

    virtual bool use3DBiomeMaps() const /*override*/;

    virtual void pauseAndFlushTaskGroups() /*override*/;

    virtual ::DimensionManager& getDimensionManager() /*override*/;

    virtual ::DimensionManager const& getDimensionManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> getDimensionManagerNonOwner() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DimensionManager const> getDimensionManagerNonOwner() const /*override*/;

    virtual void subChunkTickAndSendRequests() /*override*/;

    virtual void _subTick();

    virtual ::StackRefResult<::PauseManager> getPauseManager() /*override*/;

    virtual ::StackRefResult<::PauseManager const> getPauseManager() const /*override*/;

    virtual bool isClientSide() const /*override*/;

    virtual ::SubClientId getSubClientId() const /*override*/;

    virtual ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const& getPlayerList() const /*override*/;

    virtual ::std::string const& getPlayerXUID(::mce::UUID const& uuid) const /*override*/;

    virtual ::std::string const& getPlayerPlatformOnlineId(::mce::UUID const& uuid) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager> getPlayerListManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager const> getPlayerListManager() const /*override*/;

    virtual ::std::vector<::WeakEntityRef> const& getActiveUsers() const /*override*/;

    virtual void notifySubChunkRequestManager(::SubChunkPacket const& packet) /*override*/;

    virtual ::SubChunkRequestManager* getSubChunkRequestManager() /*override*/;

    virtual ::std::vector<::Actor*> getRuntimeActorList() const /*override*/;

    virtual ::PacketSender* getPacketSender() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::NetEventCallback> getNetEventCallback() const /*override*/;

    virtual void setNetEventCallback(::Bedrock::NonOwnerPointer<::NetEventCallback> val) /*override*/;

    virtual ::gsl::not_null<::StackRefResult<::ILevelRandom>> getILevelRandom() /*override*/;

    virtual ::IRandom& getIRandom() const /*override*/;

    virtual ::Random& getRandom() const /*override*/;

    virtual ::Random& getThreadRandom() const /*override*/;

    virtual ::HitResult& getHitResult() /*override*/;

    virtual ::HitResult& getLiquidHitResult() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::HitResultWrapper> getHitResultWrapper() /*override*/;

    virtual ::std::string const& getImmersiveReaderString() const /*override*/;

    virtual void setImmersiveReaderString(::std::string newString) /*override*/;

    virtual ::AdventureSettings& getAdventureSettings() /*override*/;

    virtual ::AdventureSettings const& getAdventureSettings() const /*override*/;

    virtual ::GameRules const& getGameRules() const /*override*/;

    virtual ::GameRules& getGameRules() /*override*/;

    virtual bool hasStartWithMapEnabled() const /*override*/;

    virtual bool isEditorWorld() const /*override*/;

    virtual bool isEditorTestWorld() const /*override*/;

    virtual bool getAllowAnonymousBlockDropsInEditorWorlds() const /*override*/;

    virtual bool isHardcore() const /*override*/;

    virtual ::Abilities& getDefaultAbilities() /*override*/;

    virtual ::PermissionsHandler& getDefaultPermissions() /*override*/;

    virtual ::PermissionsHandler const& getDefaultPermissions() const /*override*/;

    virtual bool getTearingDown() const /*override*/;

    virtual void takePicture(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    ) /*override*/;

    virtual ::LevelSoundManager& getLevelSoundManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> getSoundPlayer() const /*override*/;

    virtual void setSimPaused(bool value) /*override*/;

    virtual bool getSimPaused() const /*override*/;

    virtual void setFinishedInitializing() /*override*/;

    virtual ::LootTables& getLootTables() /*override*/;

    virtual void updateWeather(float rainLevel, int rainTime, float lightningLevel, int lightningTime) /*override*/;

    virtual int getNetherScale() const /*override*/;

    virtual ::Scoreboard& getScoreboard() /*override*/;

    virtual ::Scoreboard const& getScoreboard() const /*override*/;

    virtual ::Scoreboard* tryGetScoreboard() /*override*/;

    virtual ::LayeredAbilities* getPlayerAbilities(::ActorUniqueID const& playerId) /*override*/;

    virtual void setPlayerAbilities(::ActorUniqueID const& playerId, ::LayeredAbilities const& abilities) /*override*/;

    virtual void sendAllPlayerAbilities(::Player const& playerReference) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerAbilitiesManager> getPlayerAbilitiesManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsManager> getPlayerPermissionsManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsSynchroniser>
    getPlayerPermissionsSynchroniser() /*override*/;

    virtual ::Recipes& getRecipes() const /*override*/;

    virtual ::BlockReducer* getBlockReducer() const /*override*/;

    virtual ::std::weak_ptr<::TrimPatternRegistry const> getTrimPatternRegistry() const /*override*/;

    virtual ::std::weak_ptr<::TrimPatternRegistry> getTrimPatternRegistry() /*override*/;

    virtual ::std::weak_ptr<::TrimMaterialRegistry const> getTrimMaterialRegistry() const /*override*/;

    virtual ::std::weak_ptr<::TrimMaterialRegistry> getTrimMaterialRegistry() /*override*/;

    virtual ::BlockType const& getRegisteredBorderBlock() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelChunkPerformanceTelemetry>
    getLevelChunkPerformanceTelemetry() /*override*/;

    virtual ::cereal::ReflectionCtx& cerealContext() /*override*/;

    virtual ::cereal::ReflectionCtx const& cerealContext() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> getChunkGenerationManager() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> getChunkGenerationManager() const /*override*/;

    virtual void clearAllGenerationRequests(::NetworkIdentifier const& player, ::SubClientId clientId) /*override*/;

    virtual void digestServerBlockProperties(::StartGamePacket const& packet) /*override*/;

    virtual ::MolangPackSettingsCache const* getMolangPackSettingsCache() const /*override*/;

    virtual ::PlayerDeathManager* _getPlayerDeathManager() /*override*/;

    virtual void _initializeMapDataManager();

    virtual ::cereal::ReflectionCtx& _cerealContext() /*override*/;

    virtual void _onLowMemory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Level(::LevelArguments&& args);

    MCNAPI void _onAddBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    );

    MCNAPI void _onAddTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );

    MCNAPI void _onAddTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
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

    MCNAPI ::Bedrock::Result<::Actor*, ::ActorValidationError>
    addEntityWithError(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCNAPI void earlyShutdownMainthread();

    MCNAPI ::ServerLevelEventCoordinator& getServerLevelEventCoordinator();

    MCNAPI ::NodeType isFree(
        ::NavigationComponent& navigation,
        ::Actor&               entity,
        ::BlockPos const&      lastPathPos,
        ::BlockPos const&      testPos,
        ::BlockPos const&      size,
        ::CanJumpIntoNode      jumpIntoNode
    );

    MCNAPI void loadShapeRegistry();

    MCNAPI void setPerformanceTelemetryPeriodicCallback(::std::function<void()> callback);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LevelStorageManager> _createLevelStorageManager(
        ::Bedrock::UniqueOwnerPointer<::LevelStorage> levelStorage,
        ::Scheduler&                                  scheduler,
        ::IMinecraftEventing&                         eventing
    );

    MCNAPI static ::LevelSeed64 parseLevelSeed64(::std::string const& seedString);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelArguments&& args);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
                                                    biomeIdToResolvedData,
        ::ServerInitialization::IServerInitializer* init
    );

    MCNAPI void $startLeaveGame();

    MCNAPI bool $isLeaveGameDone();

    MCAPI bool $isDimensionTypeActive(::DimensionType dimensionType) const;

    MCAPI ::WeakRef<::Dimension> $getOrCreateDimension(::DimensionType dimensionType);

    MCAPI ::WeakRef<::Dimension> $getDimension(::DimensionType id) const;

    MCNAPI ::PlayerSpawnDimensionResolution $resolvePlayerSpawnDimension(::CompoundTag const* playerTag) const;

    MCNAPI void $forEachDimension(::std::function<bool(::Dimension&)> callback);

    MCNAPI void $forEachDimension(::std::function<bool(::Dimension const&)> callback) const;

    MCNAPI uint $getChunkTickRange() const;

    MCNAPI ::ChunkTickRangeManager const& $getChunkTickRangeManager() const;

    MCNAPI ::PortalForcer& $getPortalForcer();

    MCAPI void $requestPlayerChangeDimension(::Player& player, ::ChangeDimensionRequest&& changeRequest);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerDimensionTransferManager> $getPlayerDimensionTransferManager();

    MCAPI void
    $entityChangeDimension(::Actor& entity, ::ActorDimensionTransferRequest const& actorDimensionTransferRequest);

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

    MCNAPI ::SharedTypes::v1_26_50::CameraPreset const* $getCameraPreset(int presetIndex) const;

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

    MCAPI ::Actor* $addEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCNAPI ::Actor* $putEntity(
        ::BlockSource&              region,
        ::ActorUniqueID             id,
        ::ActorRuntimeID            runtimeId,
        ::OwnerPtr<::EntityContext> entity
    );

    MCNAPI ::Actor* $putEntity(::BlockSource& region, ::ActorUniqueID id, ::OwnerPtr<::EntityContext> entity);

    MCNAPI ::Actor* $addGlobalEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCNAPI ::Actor* $addAutonomousEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCNAPI void $addUser(::OwnerPtr<::EntityContext> userEntity);

#ifdef LL_PLAT_S
    MCNAPI ::Actor* $addDisplayEntity(::BlockSource&, ::OwnerPtr<::EntityContext>);
#else // LL_PLAT_C
    MCNAPI ::Actor* $addDisplayEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $removeDisplayEntity(::WeakEntityRef);
#else // LL_PLAT_C
    MCNAPI void $removeDisplayEntity(::WeakEntityRef entity);
#endif

    MCNAPI ::Bedrock::NonOwnerPointer<::DisplayActorManager> $getDisplayActorManager();

    MCNAPI void $suspendPlayer(::Player& player);

    MCNAPI void $resumePlayer(::Player& player);

    MCNAPI bool $isPlayerSuspended(::Player& player) const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> $getGameplayUserManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager const> $getGameplayUserManager() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::PlayerLocationReceiver> $getPlayerLocationReceiver();

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

    MCAPI ::Player* $getPlayer(::mce::UUID const& uuid) const;

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

    MCNAPI ::gsl::not_null<::StackRefResult<::IContainerRegistryAccess>> $getContainerRegistryAccess() const;

    MCNAPI ::gsl::not_null<::StackRefResult<::IContainerRegistryTracker>> $getContainerRegistryTracker() const;

    MCNAPI ::gsl::not_null<::StackRefResult<::IDynamicContainerSerialization>>
    $getDynamicContainerSerialization() const;

    MCNAPI ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry const> $getShapeRegistry() const;

    MCNAPI ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry> $getMutableShapeRegistry() const;

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

    MCNAPI ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&> const& $getDimensionFactory() const;

    MCNAPI ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&>& $getDimensionFactory();

    MCNAPI ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&> const&
    $getLightTextureImageBuilderFactory() const;

    MCNAPI ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&>& $getLightTextureImageBuilderFactory();

    MCNAPI ::InternalComponentRegistry& $getInternalComponentRegistry() const;

    MCNAPI ::IWorldRegistriesProvider const& $getWorldRegistriesProvider() const;

    MCNAPI ::IWorldRegistriesProvider& $getWorldRegistriesProvider();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const> const $getWorldClockRegistry() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry> $getWorldClockRegistry();

    MCNAPI void $addListener(::LevelListener& listener);

    MCNAPI void $removeListener(::LevelListener& listener);

    MCNAPI void $tickEntities();

    MCAPI void $tickEntitySystems();

    MCNAPI void $onPlayerDeath(::Player& player, ::ActorDamageSource const& source);

    MCAPI void $tick();

    MCAPI bool $explode(
        ::BlockSource& region,
        ::Actor*       source,
        ::Vec3 const&  pos,
        float          explosionRadius,
        bool           fire,
        bool           breaksBlocks,
        float          maxResistance,
        bool           allowUnderwater
    );

    MCAPI bool $explode(::Explosion& explosion);

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

    MCNAPI void $setDefaultGameType(::GameType gameType);

    MCNAPI ::GameType $getDefaultGameType() const;

    MCNAPI void $setDifficulty(::SharedTypes::Legacy::Difficulty difficulty);

    MCNAPI void $setMultiplayerGameIntent(bool multiplayerGame);

    MCNAPI bool $getMultiplayerGameIntent() const;

    MCNAPI void $setMultiplayerGame(bool multiplayerGame);

    MCNAPI bool $isMultiplayerGame() const;

    MCNAPI void $setLANBroadcastIntent(bool broadcast);

    MCNAPI bool $getLANBroadcastIntent() const;

    MCNAPI void $setLANBroadcast(bool broadcast);

    MCNAPI bool $getLANBroadcast() const;

    MCNAPI void $setXBLBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    MCNAPI ::Social::GamePublishSetting $getXBLBroadcastIntent() const;

    MCNAPI bool $hasXBLBroadcastIntent() const;

    MCNAPI void $setXBLBroadcastMode(::Social::GamePublishSetting broadcastMode);

    MCNAPI ::Social::GamePublishSetting $getXBLBroadcastMode() const;

    MCNAPI bool $hasXBLBroadcast() const;

    MCNAPI void $setPlatformBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    MCNAPI ::Social::GamePublishSetting $getPlatformBroadcastIntent() const;

    MCNAPI bool $hasPlatformBroadcastIntent() const;

    MCNAPI void $setPlatformBroadcastMode(::Social::GamePublishSetting broadcastMode);

    MCNAPI ::Social::GamePublishSetting $getPlatformBroadcastMode() const;

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

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager> $getEducationSettingsManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager const> $getEducationSettingsManager() const;

    MCNAPI void $save();

    MCNAPI void $saveLevelData();

    MCNAPI void $saveGameData();

    MCNAPI ::std::shared_ptr<void*> $requestTimedStorageDeferment();

    MCNAPI ::TickingAreasManager& $getTickingAreasMgr();

    MCNAPI void
    $addTickingAreaList(::DimensionType dimensionId, ::std::shared_ptr<::TickingAreaList> const& tickingAreas);

    MCAPI void $playSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCAPI void
    $playSound(::SharedTypes::Legacy::LevelSoundEvent type, ::Vec3 const& pos, float const volume, float const pitch);

    MCNAPI void $playSound(::PlaySoundOptions const& options);

    MCAPI void $playSound(
        ::IConstBlockSource const&             region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCAPI void $playSound(
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
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    );

    MCNAPI void $broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    );

    MCNAPI void $broadcastSoundEvent(
        ::Dimension&                           dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    );

    MCNAPI void $broadcastActorEvent(
        ::Actor&                       actor,
        ::ActorEvent                   eventId,
        int                            data,
        ::std::optional<::Vec3> const& fireAtPosition
    ) const;

    MCNAPI ::Bedrock::NonOwnerPointer<::ActorEventBroadcaster const> $getActorEventBroadcaster() const;

    MCNAPI void $addChunkViewTracker(::std::weak_ptr<::ChunkViewSource> chunkViewSource);

    MCNAPI void $onChunkReload(::Bounds const& bound);

    MCAPI int $getActivePlayerCount() const;

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

    MCAPI bool $destroyBlock(
        ::BlockSource&              region,
        ::BlockPos const&           pos,
        bool                        dropResources,
        ::BlockChangeContext const& changeSourceContext,
        ::BlockDestroySound         destroySound
    );

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::LevelBlockDestroyer> $getLevelBlockDestroyer();

    MCNAPI void $upgradeStorageVersion(::StorageVersion v);

    MCNAPI void $suspendAndSave();

    MCNAPI void $sendServerLegacyParticle(::ParticleType id, ::Vec3 const& pos, ::Vec3 const& dir, int data);

    MCAPI ::Particle* $addParticle(
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

    MCAPI void $addParticleEffect(
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

    MCAPI ::std::vector<::ChunkPos>
    $getSortedPositionsFromClientOffsets(::std::vector<::ChunkPos> const& centers) const;

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
        ::SerializedSkinRef const& skin,
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

    MCNAPI ::std::weak_ptr<::ISubChunkLighter> $getSubChunkLighter() const;

    MCNAPI void $loadBlockDefinitionGroup(::Experiments const& experiments);

    MCNAPI void $initializeBlockDefinitionGroup();

    MCNAPI ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> $getUnknownBlockTypeRegistry();

    MCNAPI bool $isClientSideGenerationEnabled();

    MCNAPI bool $blockNetworkIdsAreHashes();

    MCNAPI ::ItemRegistryRef $getItemRegistry() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::BlockTypeRegistry> $getBlockTypeRegistry() const;

    MCNAPI ::Level* $asLevel();

    MCNAPI bool $use3DBiomeMaps() const;

    MCNAPI void $pauseAndFlushTaskGroups();

    MCNAPI ::DimensionManager& $getDimensionManager();

    MCNAPI ::DimensionManager const& $getDimensionManager() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> $getDimensionManagerNonOwner();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::DimensionManager const> $getDimensionManagerNonOwner() const;

    MCNAPI void $subChunkTickAndSendRequests();

    MCNAPI void $_subTick();

    MCNAPI ::StackRefResult<::PauseManager> $getPauseManager();

    MCNAPI ::StackRefResult<::PauseManager const> $getPauseManager() const;

    MCNAPI bool $isClientSide() const;

    MCNAPI ::SubClientId $getSubClientId() const;

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

    MCNAPI bool $isEditorTestWorld() const;

    MCNAPI bool $getAllowAnonymousBlockDropsInEditorWorlds() const;

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

    MCNAPI ::LevelSoundManager& $getLevelSoundManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> $getSoundPlayer() const;

    MCNAPI void $setSimPaused(bool value);

    MCNAPI bool $getSimPaused() const;

    MCNAPI void $setFinishedInitializing();

    MCNAPI ::LootTables& $getLootTables();

    MCAPI void $updateWeather(float rainLevel, int rainTime, float lightningLevel, int lightningTime);

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

    MCNAPI ::BlockType const& $getRegisteredBorderBlock() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::LevelChunkPerformanceTelemetry> $getLevelChunkPerformanceTelemetry();

    MCNAPI ::cereal::ReflectionCtx& $cerealContext();

    MCNAPI ::cereal::ReflectionCtx const& $cerealContext() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> $getChunkGenerationManager();

    MCNAPI ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> $getChunkGenerationManager() const;

    MCNAPI void $clearAllGenerationRequests(::NetworkIdentifier const& player, ::SubClientId clientId);

    MCNAPI void $digestServerBlockProperties(::StartGamePacket const& packet);

    MCNAPI ::MolangPackSettingsCache const* $getMolangPackSettingsCache() const;

    MCNAPI ::PlayerDeathManager* $_getPlayerDeathManager();

    MCNAPI void $_initializeMapDataManager();

    MCNAPI ::cereal::ReflectionCtx& $_cerealContext();

    MCNAPI void $_onLowMemory();


    // NOLINTEND
};
