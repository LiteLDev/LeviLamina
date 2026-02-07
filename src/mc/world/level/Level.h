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
#include "mc/platform/Result.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/Factory.h"
#include "mc/util/IDType.h"
#include "mc/util/OwnerPtrFactory.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/item/registry/ItemRegistryRef.h"
#include "mc/world/level/ActorValidationError.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/BlockSourceListener.h"
#include "mc/world/level/CommandOriginSystem.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/ILevel.h"
#include "mc/world/level/IWorldRegistriesProvider.h"
#include "mc/world/level/biome/glue/BiomeJsonDocumentGlue.h"
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
class NpcEventCoordinator;
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
class PlayerLimboActorManager;
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
struct DerivedDimensionArguments;
struct DimensionFactoryAndManager;
struct LevelArguments;
struct LevelTagIDType;
struct LevelTagSetIDType;
struct PlayerMovementSettings;
struct PlayerSleepStatus;
struct ResolvedItemIconInfo;
struct ScreenshotOptions;
struct Tick;
namespace PlayerCapabilities { struct ISharedController; }
namespace PositionTrackingDB { class PositionTrackingDBClient; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace SharedTypes::v1_21_90 { struct CameraPreset; }
namespace VoxelShapes { class VoxelShapeRegistry; }
namespace cereal { struct ReflectionCtx; }
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
namespace mce { class UUID; }
class BaseLightTextureImageBuilder;
class Particle;
struct ArmorTrimUnloader;
struct CameraRegistry;
struct SubChunkManager;
struct TrustedSkinHelper;
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
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::TickTimeManager>>>         mTickTimeManager;
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
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>>>
            biomeIdToResolvedData
    ) /*override*/;

    virtual void startLeaveGame() /*override*/;

    virtual bool isLeaveGameDone() /*override*/;

    virtual ::WeakRef<::Dimension> getOrCreateDimension(::DimensionType dimensionType) /*override*/;

    virtual ::WeakRef<::Dimension> getDimension(::DimensionType id) const /*override*/;

    virtual ::DimensionType getLastOrDefaultSpawnDimensionId(::DimensionType lastDimensionId) const /*override*/;

    virtual void forEachDimension(::std::function<bool(::Dimension&)> callback) /*override*/;

    virtual void forEachDimension(::std::function<bool(::Dimension const&)> callback) const /*override*/;

    virtual uint getChunkTickRange() const /*override*/;

    virtual ::ChunkTickRangeManager const& getChunkTickRangeManager() const /*override*/;

    virtual ::PortalForcer& getPortalForcer() /*override*/;

    virtual void requestPlayerChangeDimension(::Player& player, ::ChangeDimensionRequest&& changeRequest) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerDimensionTransferManager>
    getPlayerDimensionTransferManager() /*override*/;

    virtual void
    entityChangeDimension(::Actor& entity, ::DimensionType toId, ::std::optional<::Vec3> entityPos) /*override*/;

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

    virtual ::SharedTypes::v1_21_90::CameraPreset const* getCameraPreset(int presetIndex) const /*override*/;

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

    virtual ::Actor* addDisplayEntity(::BlockSource&, ::OwnerPtr<::EntityContext>) /*override*/;

    virtual void removeDisplayEntity(::WeakEntityRef) /*override*/;

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

    virtual ::VoxelShapes::VoxelShapeRegistry const* getShapeRegistry() const /*override*/;

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

    virtual void playSound(::std::string const& name, ::Vec3 const& pos, float volume, float pitch) /*override*/;

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

    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int) /*override*/;

    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> getLevelEventManager() /*override*/;

    virtual void handleStopSoundEvent(::std::string const& name) /*override*/;

    virtual void handleStopAllSounds() /*override*/;

    virtual void handleStopMusicEvent() /*override*/;

    virtual void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent,
        ::Vec3 const&,
        int,
        ::UserEntityIdentifierComponent const*
    ) /*override*/;

    virtual void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent,
        ::CompoundTag const&,
        ::UserEntityIdentifierComponent const*
    ) /*override*/;

    virtual void
    broadcastLocalEvent(::BlockSource&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int) /*override*/;

    virtual void
    broadcastLocalEvent(::BlockSource&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, ::Block const&) /*override*/;

    virtual void broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Block const&                         block,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) /*override*/;

    virtual void broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) /*override*/;

    virtual void broadcastSoundEvent(
        ::Dimension&                           dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) /*override*/;

    virtual void broadcastActorEvent(::Actor& actor, ::ActorEvent eventId, int data) const /*override*/;

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
        ::BlockChangeContext const& changeSourceContext
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

    virtual bool getSimPaused() /*override*/;

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

    virtual void clearAllGenerationRequests(::NetworkIdentifier const&, ::SubClientId) /*override*/;

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
    MCAPI explicit Level(::LevelArguments&& args);

    MCAPI ::Bedrock::UniqueOwnerPointer<::PhotoManager> _createPhotoManager();

    MCAPI void _initializeActorManager();

    MCAPI void _initializeBiomeManager();

    MCAPI void _initializeEventCoordinatorManager();

    MCAPI void _initializeGameplayUserManager();

    MCAPI void _initializeLevelChunkEventManager();

    MCAPI void _initializeLevelChunkSaveManager();

    MCAPI void _initializeLevelEventManager();

    MCAPI void _initializeLevelStorageManager();

    MCAPI void _initializeParticleProvider();

    MCAPI void _onAddBiomeTintedParticleEffect(
        ::HashedString const&         effect,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::std::optional<::mce::Color> overrideColor
    );

    MCAPI void _onAddBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    );

    MCAPI void _onAddTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );

    MCAPI void _onAddTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );

    MCAPI void _onAnyGameplayUsersRemoved();

    MCAPI void _onChunkDiscarded(::LevelChunk& levelChunk);

    MCAPI void _onChunkLoaded(::ChunkSource& chunkSource, ::LevelChunk& levelChunk, int);

    MCAPI void _onChunkReloaded(::ChunkSource& chunkSource, ::LevelChunk& levelChunk);

    MCAPI void _onGameplayUserAdded(::EntityContext& entity);

    MCAPI void _onGameplayUserRemoved(::EntityContext& entity);

    MCAPI void _onLevelEventCompoundTag(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data);

    MCAPI void _onLevelEventData(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data);

    MCAPI void _onPictureTaken(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    );

    MCAPI void _onRemoveActorEntityReferences(::Actor& actor);

    MCAPI void _onSendServerLegacyParticle(::ParticleType id, ::Vec3 const& pos, ::Vec3 const& dir, int data);

    MCAPI void _setIsTearingDown();

    MCAPI ::Bedrock::Result<::Actor*, ::ActorValidationError>
    addEntityWithError(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCAPI void earlyShutdownMainthread();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ActorManager> getActorManager();

    MCAPI_S ::Bedrock::NotNullNonOwnerPtr<::EventCoordinatorManager> getEventCoordinatorManager();

    MCAPI_C ::NpcEventCoordinator& getNpcEventCoordinator();

    MCAPI ::ServerLevelEventCoordinator& getServerLevelEventCoordinator();

    MCAPI void setShapeRegistry(::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry> registry);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LevelStorageManager> _createLevelStorageManager(
        ::Bedrock::UniqueOwnerPointer<::LevelStorage> levelStorage,
        ::Scheduler&                                  scheduler,
        ::IMinecraftEventing&                         eventing
    );

    MCAPI static ::std::unique_ptr<::PlayerLimboActorManager> _createPlayerLimboActorManager(
        ::LevelStorageManager*                        levelStorageManager,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager> actorManager,
        ::Bedrock::NotNullNonOwnerPtr<::ActorFactory> actorFactory
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelArguments&& args);
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
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>>>
            biomeIdToResolvedData
    );

    MCAPI void $startLeaveGame();

    MCAPI bool $isLeaveGameDone();

    MCAPI ::WeakRef<::Dimension> $getOrCreateDimension(::DimensionType dimensionType);

    MCAPI ::WeakRef<::Dimension> $getDimension(::DimensionType id) const;

    MCAPI ::DimensionType $getLastOrDefaultSpawnDimensionId(::DimensionType lastDimensionId) const;

    MCFOLD void $forEachDimension(::std::function<bool(::Dimension&)> callback);

    MCFOLD void $forEachDimension(::std::function<bool(::Dimension const&)> callback) const;

    MCAPI uint $getChunkTickRange() const;

    MCAPI ::ChunkTickRangeManager const& $getChunkTickRangeManager() const;

    MCAPI ::PortalForcer& $getPortalForcer();

    MCAPI void $requestPlayerChangeDimension(::Player& player, ::ChangeDimensionRequest&& changeRequest);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerDimensionTransferManager> $getPlayerDimensionTransferManager();

    MCAPI void $entityChangeDimension(::Actor& entity, ::DimensionType toId, ::std::optional<::Vec3> entityPos);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ActorDimensionTransferManager> $getActorDimensionTransferManager();

    MCFOLD ::Spawner& $getSpawner() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::BossEventSubscriptionManager> $getBossEventSubscriptionManager();

    MCFOLD ::ProjectileFactory& $getProjectileFactory() const;

    MCFOLD ::ActorDefinitionGroup* $getEntityDefinitions() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationGroup> $getActorAnimationGroup() const;

    MCAPI ::Bedrock::NonOwnerPointer<::ActorAnimationControllerGroup> $getActorAnimationControllerGroup() const;

    MCAPI ::BlockDefinitionGroup* $getBlockDefinitions() const;

    MCFOLD ::PropertyGroupManager& $getActorPropertyGroup() const;

    MCFOLD ::CameraPresets const& $getCameraPresets() const;

    MCFOLD ::CameraPresets& $getCameraPresets();

    MCAPI ::SharedTypes::v1_21_90::CameraPreset const* $getCameraPreset(int presetIndex) const;

    MCAPI bool $getDisablePlayerInteractions() const;

    MCAPI void $setDisablePlayerInteractions(bool const disable);

    MCFOLD ::AutomationBehaviorTreeGroup& $getAutomationBehaviorTreeGroup() const;

    MCAPI ::BehaviorFactory& $getBehaviorFactory() const;

    MCAPI ::SharedTypes::Legacy::Difficulty $getDifficulty() const;

    MCAPI ::DimensionConversionData $getDimensionConversionData() const;

    MCAPI float $getSpecialMultiplier(::DimensionType dimensionType) const;

    MCAPI bool $hasCommandsEnabled() const;

    MCAPI bool $useMsaGamertagsOnly() const;

    MCAPI void $setMsaGamertagsOnly(bool msaGamertagsOnly);

    MCAPI ::Actor* $addEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCAPI ::Actor* $putEntity(
        ::BlockSource&              region,
        ::ActorUniqueID             id,
        ::ActorRuntimeID            runtimeId,
        ::OwnerPtr<::EntityContext> entity
    );

    MCAPI ::Actor* $putEntity(::BlockSource& region, ::ActorUniqueID id, ::OwnerPtr<::EntityContext> entity);

    MCAPI ::Actor* $addGlobalEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCAPI ::Actor* $addAutonomousEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCAPI void $addUser(::OwnerPtr<::EntityContext> userEntity);

    MCAPI ::Actor* $addDisplayEntity(::BlockSource&, ::OwnerPtr<::EntityContext>);

    MCFOLD void $removeDisplayEntity(::WeakEntityRef);

    MCFOLD ::Bedrock::NonOwnerPointer<::DisplayActorManager> $getDisplayActorManager();

    MCAPI void $suspendPlayer(::Player& player);

    MCAPI void $resumePlayer(::Player& player);

    MCAPI bool $isPlayerSuspended(::Player& player) const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> $getGameplayUserManager();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager const> $getGameplayUserManager() const;

    MCAPI ::Bedrock::NonOwnerPointer<::PlayerLocationReceiver> $getPlayerLocationReceiver();

    MCAPI ::OwnerPtr<::EntityContext> $removeActorAndTakeEntity(::WeakEntityRef entityRef);

    MCAPI ::OwnerPtr<::EntityContext> $removeActorFromWorldAndTakeEntity(::WeakEntityRef entityRef);

    MCAPI ::OwnerPtr<::EntityContext> $takeEntity(::WeakEntityRef entityRef, ::LevelChunk& lc);

    MCAPI ::StrictEntityContext $fetchStrictEntity(::ActorUniqueID actorId, bool getRemoved) const;

    MCAPI ::Actor* $fetchEntity(::ActorUniqueID actorId, bool getRemoved) const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ActorFetcher const> $getActorFetcher() const;

    MCAPI ::Actor* $getRuntimeEntity(::ActorRuntimeID actorId, bool getRemoved) const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager> $getActorRuntimeIDManager();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager const> $getActorRuntimeIDManager() const;

    MCAPI ::Mob* $getMob(::ActorUniqueID mobId) const;

    MCAPI ::Player* $getPlayer(::std::string const& name) const;

    MCAPI ::Player* $getPlayer(::mce::UUID const& uuid) const;

    MCAPI ::Player* $getPlayer(::ActorUniqueID entityID) const;

    MCAPI ::Player* $getPlayerByXuid(::std::string const& xuid) const;

    MCAPI ::Player* $getPlatformPlayer(::std::string const& platformOnlineId) const;

    MCAPI ::Player* $getPlayerFromServerId(::std::string const& serverId) const;

    MCAPI ::Player* $getRuntimePlayer(::ActorRuntimeID runtimeId) const;

    MCAPI int $getNumRemotePlayers() const;

    MCAPI ::Player* $getPrimaryLocalPlayer() const;

    MCAPI ::IMinecraftEventing& $getEventing();

    MCAPI ::mce::Color $getPlayerColor(::Player const& player) const;

    MCAPI ::Tick const& $getCurrentTick() const;

    MCAPI ::Tick const $getCurrentServerTick() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TickDeltaTimeManager const> $getTickDeltaTimeManager() const;

    MCFOLD ::ArmorTrimUnloader* $getArmorTrimUnloader();

    MCAPI ::gsl::not_null<::StackRefResult<::IContainerRegistryAccess>> $getContainerRegistryAccess() const;

    MCAPI ::gsl::not_null<::StackRefResult<::IContainerRegistryTracker>> $getContainerRegistryTracker() const;

    MCAPI ::gsl::not_null<::StackRefResult<::IDynamicContainerSerialization>> $getDynamicContainerSerialization() const;

    MCAPI ::VoxelShapes::VoxelShapeRegistry const* $getShapeRegistry() const;

    MCFOLD ::BiomeRegistry const& $getBiomeRegistry() const;

    MCFOLD ::BiomeRegistry& $getBiomeRegistry();

    MCFOLD ::BlockPalette const& $getBlockPalette() const;

    MCFOLD ::BlockPalette& $getBlockPalette();

    MCFOLD ::FeatureRegistry const& $getFeatureRegistry() const;

    MCFOLD ::FeatureRegistry& $getFeatureRegistry();

    MCFOLD ::FeatureTypeFactory const& $getFeatureTypeFactory() const;

    MCFOLD ::FeatureTypeFactory& $getFeatureTypeFactory();

    MCFOLD ::JigsawStructureRegistry const& $getJigsawStructureRegistry() const;

    MCFOLD ::JigsawStructureRegistry& $getJigsawStructureRegistry();

    MCFOLD ::StructureSpawnRegistry const& $getStructureSpawnRegistry() const;

    MCFOLD ::StructureSpawnRegistry& $getStructureSpawnRegistry();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::StructureManager> const $getStructureManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::StructureManager> $getStructureManager();

    MCFOLD ::BiomeComponentFactory const& $getBiomeComponentFactory() const;

    MCFOLD ::BiomeComponentFactory& $getBiomeComponentFactory();

    MCFOLD ::SurfaceBuilderRegistry const& $getSurfaceBuilderRegistry() const;

    MCFOLD ::SurfaceBuilderRegistry& $getSurfaceBuilderRegistry();

    MCAPI ::BiomeManager const& $getBiomeManager() const;

    MCAPI ::BiomeManager& $getBiomeManager();

    MCFOLD ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&> const& $getDimensionFactory() const;

    MCFOLD ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&>& $getDimensionFactory();

    MCFOLD ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&> const&
    $getLightTextureImageBuilderFactory() const;

    MCFOLD ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&>& $getLightTextureImageBuilderFactory();

    MCAPI ::InternalComponentRegistry& $getInternalComponentRegistry() const;

    MCFOLD ::IWorldRegistriesProvider const& $getWorldRegistriesProvider() const;

    MCFOLD ::IWorldRegistriesProvider& $getWorldRegistriesProvider();

    MCAPI void $addListener(::LevelListener& listener);

    MCAPI void $removeListener(::LevelListener& listener);

    MCAPI void $tickEntities();

    MCAPI void $tickEntitySystems();

    MCAPI void $onPlayerDeath(::Player& player, ::ActorDamageSource const& source);

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

    MCAPI void $denyEffect(::BlockSource& region, ::Vec3 const& pos);

    MCAPI void $potionSplash(::Vec3 const& pos, ::mce::Color const& color, bool instantaneousEffect);

    MCAPI bool $extinguishFire(::BlockSource& region, ::BlockPos const& pos, uchar face, ::Actor* source);

    MCAPI ::std::unique_ptr<::Path>
    $findPath(::Actor& from, int xBest, int yBest, int zBest, ::NavigationComponent& navigation);

    MCAPI ::std::unique_ptr<::Path> $findPath(::Actor& from, ::Actor const& to, ::NavigationComponent& navigation);

    MCAPI void $setSleepStatus(::PlayerSleepStatus const& status);

    MCAPI ::PlayerSleepStatus $getSleepStatus() const;

    MCAPI void $updateSleepingPlayerList();

    MCFOLD ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> $getServerPlayerSleepManager();

    MCFOLD ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> $getServerPlayerSleepManager() const;

    MCAPI int $getTime() const;

    MCAPI void $setTime(int time);

    MCAPI uint $getSeed();

    MCAPI ::LevelSeed64 $getLevelSeed64() const;

    MCFOLD ::BlockPos const& $getSharedSpawnPos() const;

    MCAPI void $setDefaultSpawn(::BlockPos const& spawnPos);

    MCFOLD ::BlockPos const& $getDefaultSpawn() const;

#ifdef LL_PLAT_S
    MCAPI void $setDefaultGameType(::GameType gameType);
#endif

    MCAPI void $setDifficulty(::SharedTypes::Legacy::Difficulty difficulty);

    MCAPI void $setMultiplayerGameIntent(bool multiplayerGame);

    MCAPI bool $getMultiplayerGameIntent() const;

    MCAPI void $setMultiplayerGame(bool multiplayerGame);

    MCAPI bool $isMultiplayerGame() const;

    MCAPI void $setLANBroadcastIntent(bool broadcast);

    MCAPI bool $getLANBroadcastIntent() const;

    MCAPI void $setLANBroadcast(bool broadcast);

    MCAPI bool $getLANBroadcast() const;

    MCAPI void $setXBLBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    MCAPI ::Social::GamePublishSetting $getXBLBroadcastIntent() const;

    MCAPI bool $hasXBLBroadcastIntent() const;

    MCAPI void $setXBLBroadcastMode(::Social::GamePublishSetting broadcastMode);

    MCAPI ::Social::GamePublishSetting $getXBLBroadcastMode() const;

    MCAPI bool $hasXBLBroadcast() const;

    MCAPI void $setPlatformBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    MCAPI ::Social::GamePublishSetting $getPlatformBroadcastIntent() const;

    MCAPI bool $hasPlatformBroadcastIntent() const;

    MCAPI void $setPlatformBroadcastMode(::Social::GamePublishSetting broadcastMode);

    MCAPI ::Social::GamePublishSetting $getPlatformBroadcastMode() const;

    MCAPI bool $hasPlatformBroadcast() const;

    MCAPI void $setHasLockedBehaviorPack(bool hasLocked);

    MCAPI void $setHasLockedResourcePack(bool hasLocked);

    MCAPI void $setCommandsEnabled(bool commandsEnabled);

    MCAPI void $setWorldTemplateOptionsUnlocked();

    MCAPI bool $hasLevelStorage() const;

    MCFOLD ::LevelStorage& $getLevelStorage();

    MCFOLD ::LevelStorage const& $getLevelStorage() const;

    MCFOLD ::LevelData& $getLevelData();

    MCFOLD ::LevelData const& $getLevelData() const;

    MCAPI ::PhotoStorage& $getPhotoStorage() const;

    MCAPI void $createPhotoStorage();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::PhotoManager> $getPhotoManager();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::PhotoManager const> $getPhotoManager() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager> $getEducationSettingsManager();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager const> $getEducationSettingsManager() const;

    MCAPI void $save();

    MCAPI void $saveLevelData();

    MCAPI void $saveGameData();

    MCAPI ::std::shared_ptr<void*> $requestTimedStorageDeferment();

    MCAPI ::TickingAreasManager& $getTickingAreasMgr();

    MCAPI void
    $addTickingAreaList(::DimensionType dimensionId, ::std::shared_ptr<::TickingAreaList> const& tickingAreas);

#ifdef LL_PLAT_S
    MCAPI void $playSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCAPI void
    $playSound(::SharedTypes::Legacy::LevelSoundEvent type, ::Vec3 const& pos, float const volume, float const pitch);
#endif

    MCAPI void $playSound(::std::string const& name, ::Vec3 const& pos, float volume, float pitch);

#ifdef LL_PLAT_S
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
#endif

    MCAPI ::PlayerEventCoordinator& $getRemotePlayerEventCoordinator();

    MCAPI ::ServerPlayerEventCoordinator& $getServerPlayerEventCoordinator();

    MCAPI ::ClientPlayerEventCoordinator& $getClientPlayerEventCoordinator();

    MCAPI ::ActorEventCoordinator& $getActorEventCoordinator();

    MCAPI ::BlockEventCoordinator& $getBlockEventCoordinator();

    MCAPI ::ItemEventCoordinator& $getItemEventCoordinator();

    MCAPI ::ServerNetworkEventCoordinator& $getServerNetworkEventCoordinator();

    MCAPI ::ScriptingEventCoordinator& $getScriptingEventCoordinator();

    MCAPI ::ScriptDeferredEventCoordinator& $getScriptDeferredEventCoordinator();

    MCAPI ::LevelEventCoordinator& $getLevelEventCoordinator();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> $getLevelEventManager();

    MCAPI void $handleStopSoundEvent(::std::string const& name);

    MCAPI void $handleStopAllSounds();

    MCAPI void $handleStopMusicEvent();

#ifdef LL_PLAT_S
    MCAPI void $broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Block const&                         block,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCAPI void $broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCAPI void $broadcastSoundEvent(
        ::Dimension&                           dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );
#endif

    MCAPI void $broadcastActorEvent(::Actor& actor, ::ActorEvent eventId, int data) const;

    MCAPI ::Bedrock::NonOwnerPointer<::ActorEventBroadcaster const> $getActorEventBroadcaster() const;

    MCAPI void $addChunkViewTracker(::std::weak_ptr<::ChunkViewSource> chunkViewSource);

    MCAPI void $onChunkReload(::Bounds const& bound);

    MCAPI int $getActivePlayerCount() const;

    MCAPI int $getActiveUsersCount() const;

    MCAPI void $forEachPlayer(::std::function<bool(::Player&)> callback);

    MCAPI void $forEachPlayer(::std::function<bool(::Player const&)> callback) const;

    MCAPI void $forEachUser(::std::function<bool(::EntityContext&)> callback);

    MCAPI void $forEachUser(::std::function<bool(::EntityContext const&)> callback) const;

    MCAPI ::Player* $findPlayer(::std::function<bool(::Player const&)> pred) const;

    MCAPI ::Player* $findPlayer(::std::function<bool(::WeakEntityRef const&)> pred) const;

    MCAPI int $getUserCount() const;

    MCAPI int $countUsersWithMatchingNetworkId(::NetworkIdentifier const& networkId) const;

    MCAPI ::std::vector<::OwnerPtr<::EntityContext>> const& $getUsers() const;

    MCAPI ::std::vector<::OwnerPtr<::EntityContext>> const& $getEntities() const;

    MCAPI void $onSourceCreated(::BlockSource& source);

    MCAPI void $onSourceDestroyed(::BlockSource& source);

    MCFOLD void $onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    );

    MCFOLD ::Bedrock::NonOwnerPointer<::SubChunkManager> $getSubChunkManager();

    MCAPI void $onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);

    MCAPI void $onChunkReloaded(::ChunkSource& source, ::LevelChunk& lc);

    MCFOLD ::LevelChunkMetaDataManager* $getLevelChunkMetaDataManager();

    MCAPI void $onChunkDiscarded(::LevelChunk& lc);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LevelChunkEventManager> $getLevelChunkEventManager();

    MCAPI void $queueEntityDestruction(::OwnerPtr<::EntityContext> entity);

    MCAPI ::OwnerPtr<::EntityContext> $removeEntity(::Actor& actor);

    MCAPI ::OwnerPtr<::EntityContext> $removeEntity(::WeakEntityRef entityRef);

    MCAPI void $forceRemoveEntity(::Actor& actor);

    MCAPI void $forceRemoveEntityfromWorld(::Actor& actor);

    MCAPI void $forceFlushRemovedPlayers();

    MCFOLD void $loadFunctionManager();

    MCAPI void $levelCleanupQueueEntityRemoval(::OwnerPtr<::EntityContext> entity);

    MCAPI void $registerTemporaryPointer(::_TickPtr& ptr);

    MCAPI void $unregisterTemporaryPointer(::_TickPtr& ptr);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TempEPtrManager> $getTempEPtrManager();

    MCAPI bool $destroyBlock(
        ::BlockSource&              region,
        ::BlockPos const&           pos,
        bool                        dropResources,
        ::BlockChangeContext const& changeSourceContext
    );

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LevelBlockDestroyer> $getLevelBlockDestroyer();

    MCAPI void $upgradeStorageVersion(::StorageVersion v);

    MCAPI void $suspendAndSave();

    MCAPI void $sendServerLegacyParticle(::ParticleType id, ::Vec3 const& pos, ::Vec3 const& dir, int data);

    MCAPI ::Particle* $addParticle(
        ::ParticleType       id,
        ::Vec3 const&        pos,
        ::Vec3 const&        dir,
        int                  data,
        ::CompoundTag const* tag,
        bool                 isGlobal
    );

    MCAPI void
    $spawnParticleEffect(::std::string const& effectName, ::Vec3 const& spawnLocation, ::Dimension* dimension);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ServerParticleManager> $getServerParticleManager();

    MCAPI void $addParticleEffect(
        ::HashedString const&      effect,
        ::Vec3 const&              emitterPosition,
        ::MolangVariableMap const& molangVariables
    );

    MCAPI void $addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
        float             velocityScalar,
        float             emitterRadius
    );

    MCAPI void $addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
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

    MCAPI ::ActorUniqueID $getNewUniqueID();

    MCAPI ::ActorRuntimeID $getNextRuntimeID();

    MCAPI ::std::vector<::ChunkPos> const& $getTickingOffsets() const;

    MCAPI ::std::vector<::ChunkPos> const& $getClientTickingOffsets() const;

    MCAPI ::std::vector<::ChunkPos>
    $getSortedPositionsFromClientOffsets(::std::vector<::ChunkPos> const& centers) const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ChunkTickOffsetManager const> $getChunkTickOffsetManager() const;

    MCAPI bool $isExporting() const;

    MCAPI void $setIsExporting(bool IsExporting);

    MCAPI ::SavedDataStorage& $getSavedData();

    MCAPI ::MapItemSavedData* $getMapSavedData(::ActorUniqueID const uuid);

    MCFOLD ::MapItemSavedData* $getMapSavedData(::CompoundTag const& instance);

    MCFOLD ::MapItemSavedData* $getMapSavedData(::CompoundTag const* instance);

    MCAPI void $requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate);

    MCAPI ::ActorUniqueID $expandMapByID(::ActorUniqueID const uuid, bool wasInit);

    MCAPI bool $copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid);

    MCAPI ::MapItemSavedData& $createMapSavedData(
        ::ActorUniqueID const& uuid,
        ::BlockPos const&      origin,
        ::DimensionType        dimension,
        int                    returnScaleLevel
    );

    MCAPI ::MapItemSavedData& $createMapSavedData(
        ::std::vector<::ActorUniqueID> const& mapIds,
        ::BlockPos const&                     origin,
        ::DimensionType                       dimension,
        int                                   returnScaleLevel
    );

    MCAPI ::Core::PathBuffer<::std::string> $getScreenshotsFolder() const;

    MCAPI ::std::string $getLevelId() const;

    MCAPI void $setLevelId(::std::string LevelId);

    MCAPI ::TaskGroup& $getSyncTasksGroup();

    MCFOLD ::TaskGroup& $getIOTasksGroup();

    MCFOLD ::ResourcePackManager* $getClientResourcePackManager() const;

    MCFOLD ::ResourcePackManager* $getServerResourcePackManager() const;

    MCFOLD ::TradeTables* $getTradeTables();

    MCFOLD void $decrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    );

    MCFOLD void $incrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    );

    MCFOLD ::Bedrock::NonOwnerPointer<::TagCacheManager> $getTagCacheManager();

    MCAPI bool $isEdu() const;

    MCFOLD ::ActorFactory& $getActorFactory();

    MCFOLD ::ActorFactory const& $getActorFactory() const;

    MCFOLD ::ActorInfoRegistry* $getActorInfoRegistry();

    MCAPI ::StackRefResult<::EntityRegistry> $getEntityRegistry();

    MCAPI ::StackRefResult<::EntityRegistry const> $getEntityRegistry() const;

    MCAPI ::EntitySystems& $getEntitySystems();

    MCFOLD ::WeakRef<::EntityContext> $getLevelEntity();

    MCFOLD ::WeakRef<::EntityContext const> $getLevelEntity() const;

    MCFOLD ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> $tryGetVolumeEntityManagerServer() const;

    MCFOLD void $runCommand(
        ::HashedString const&     commandStr,
        ::CommandOrigin&          origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion const commandVersion
    );

    MCFOLD void $runCommand(::Command& command, ::CommandOrigin& origin, ::CommandOriginSystem originSystem);

    MCAPI ::PlayerCapabilities::ISharedController const& $getCapabilities() const;

    MCFOLD ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& $getTagRegistry();

    MCAPI ::PlayerMovementSettings const& $getPlayerMovementSettings() const;

    MCAPI void $setPlayerMovementSettings(::PlayerMovementSettings const& settings);

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager> $getPlayerMovementSettingsManager();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager const>
    $getPlayerMovementSettingsManager() const;

    MCFOLD bool $canUseSkin(
        ::SerializedSkinRef const& skin,
        ::NetworkIdentifier const& networkIdentifier,
        ::ActorUniqueID const&     playerId
    ) const;

    MCFOLD ::Bedrock::NonOwnerPointer<::TrustedSkinHelper const> $getTrustedSkinHelper() const;

    MCFOLD ::Bedrock::NonOwnerPointer<::CameraRegistry const> $getCameraRegistry() const;

    MCFOLD ::Bedrock::NonOwnerPointer<::CameraRegistry> $getCameraRegistry();

    MCFOLD ::Bedrock::NonOwnerPointer<::EntitySystems> $getCameraSystems();

    MCAPI ::PositionTrackingDB::PositionTrackingDBClient* $getPositionTrackerDBClient() const;

    MCFOLD ::PositionTrackingDB::PositionTrackingDBServer* $getPositionTrackerDBServer() const;

    MCAPI void $flushRunTimeLighting();

    MCAPI void $loadBlockDefinitionGroup(::Experiments const& experiments);

    MCAPI void $initializeBlockDefinitionGroup();

    MCAPI ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> $getUnknownBlockTypeRegistry();

    MCAPI bool $isClientSideGenerationEnabled();

    MCAPI bool $blockNetworkIdsAreHashes();

    MCAPI ::ItemRegistryRef $getItemRegistry() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::BlockTypeRegistry> $getBlockTypeRegistry() const;

    MCFOLD ::Level* $asLevel();

    MCAPI bool $use3DBiomeMaps() const;

    MCAPI void $pauseAndFlushTaskGroups();

    MCFOLD ::DimensionManager& $getDimensionManager();

    MCFOLD ::DimensionManager const& $getDimensionManager() const;

    MCFOLD void $subChunkTickAndSendRequests();

    MCAPI void $_subTick();

    MCFOLD ::StackRefResult<::PauseManager> $getPauseManager();

    MCFOLD ::StackRefResult<::PauseManager const> $getPauseManager() const;

    MCAPI bool $isClientSide() const;

    MCAPI ::SubClientId $getSubClientId() const;

    MCAPI ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const& $getPlayerList() const;

    MCAPI ::std::string const& $getPlayerXUID(::mce::UUID const& uuid) const;

    MCAPI ::std::string const& $getPlayerPlatformOnlineId(::mce::UUID const& uuid) const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager> $getPlayerListManager();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager const> $getPlayerListManager() const;

    MCAPI ::std::vector<::WeakEntityRef> const& $getActiveUsers() const;

    MCFOLD void $notifySubChunkRequestManager(::SubChunkPacket const& packet);

    MCFOLD ::SubChunkRequestManager* $getSubChunkRequestManager();

    MCAPI ::std::vector<::Actor*> $getRuntimeActorList() const;

    MCFOLD ::PacketSender* $getPacketSender() const;

    MCAPI ::Bedrock::NonOwnerPointer<::NetEventCallback> $getNetEventCallback() const;

    MCAPI void $setNetEventCallback(::Bedrock::NonOwnerPointer<::NetEventCallback> val);

    MCAPI ::gsl::not_null<::StackRefResult<::ILevelRandom>> $getILevelRandom();

    MCAPI ::IRandom& $getIRandom() const;

    MCAPI ::Random& $getRandom() const;

    MCFOLD ::Random& $getThreadRandom() const;

    MCAPI ::HitResult& $getHitResult();

    MCAPI ::HitResult& $getLiquidHitResult();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::HitResultWrapper> $getHitResultWrapper();

    MCFOLD ::std::string const& $getImmersiveReaderString() const;

    MCAPI void $setImmersiveReaderString(::std::string newString);

    MCAPI ::AdventureSettings& $getAdventureSettings();

    MCAPI ::AdventureSettings const& $getAdventureSettings() const;

    MCAPI ::GameRules const& $getGameRules() const;

    MCAPI ::GameRules& $getGameRules();

    MCAPI bool $hasStartWithMapEnabled() const;

    MCAPI bool $isEditorWorld() const;

    MCAPI bool $isHardcore() const;

    MCAPI ::Abilities& $getDefaultAbilities();

    MCAPI ::PermissionsHandler& $getDefaultPermissions();

    MCAPI ::PermissionsHandler const& $getDefaultPermissions() const;

    MCFOLD bool $getTearingDown() const;

    MCAPI void $takePicture(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    );

    MCFOLD ::LevelSoundManager& $getLevelSoundManager();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> $getSoundPlayer() const;

    MCAPI void $setSimPaused(bool value);

    MCAPI bool $getSimPaused();

    MCAPI void $setFinishedInitializing();

    MCFOLD ::LootTables& $getLootTables();

    MCAPI void $updateWeather(float rainLevel, int rainTime, float lightningLevel, int lightningTime);

    MCAPI int $getNetherScale() const;

    MCFOLD ::Scoreboard& $getScoreboard();

    MCFOLD ::Scoreboard const& $getScoreboard() const;

    MCFOLD ::Scoreboard* $tryGetScoreboard();

    MCAPI ::LayeredAbilities* $getPlayerAbilities(::ActorUniqueID const& playerId);

    MCAPI void $setPlayerAbilities(::ActorUniqueID const& playerId, ::LayeredAbilities const& abilities);

    MCAPI void $sendAllPlayerAbilities(::Player const& playerReference);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerAbilitiesManager> $getPlayerAbilitiesManager();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsManager> $getPlayerPermissionsManager();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsSynchroniser> $getPlayerPermissionsSynchroniser();

    MCFOLD ::Recipes& $getRecipes() const;

    MCAPI ::BlockReducer* $getBlockReducer() const;

    MCFOLD ::std::weak_ptr<::TrimPatternRegistry const> $getTrimPatternRegistry() const;

    MCFOLD ::std::weak_ptr<::TrimPatternRegistry> $getTrimPatternRegistry();

    MCFOLD ::std::weak_ptr<::TrimMaterialRegistry const> $getTrimMaterialRegistry() const;

    MCFOLD ::std::weak_ptr<::TrimMaterialRegistry> $getTrimMaterialRegistry();

    MCAPI ::BlockType const& $getRegisteredBorderBlock() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LevelChunkPerformanceTelemetry> $getLevelChunkPerformanceTelemetry();

    MCFOLD ::cereal::ReflectionCtx& $cerealContext();

    MCFOLD ::cereal::ReflectionCtx const& $cerealContext() const;

    MCFOLD ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> $getChunkGenerationManager();

    MCFOLD ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> $getChunkGenerationManager() const;

    MCFOLD void $clearAllGenerationRequests(::NetworkIdentifier const&, ::SubClientId);

    MCAPI void $digestServerBlockProperties(::StartGamePacket const& packet);

    MCAPI ::MolangPackSettingsCache const* $getMolangPackSettingsCache() const;

    MCFOLD ::PlayerDeathManager* $_getPlayerDeathManager();

    MCAPI void $_initializeMapDataManager();

    MCFOLD ::cereal::ReflectionCtx& $_cerealContext();

    MCAPI void $_onLowMemory();

#ifdef LL_PLAT_C
    MCAPI ::GameType $getDefaultGameType() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIWorldRegistriesProvider();

    MCNAPI static void** $vftableForBlockSourceListener();

    MCNAPI static void** $vftableForILevel();
    // NOLINTEND
};
