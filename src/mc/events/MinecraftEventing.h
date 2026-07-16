#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ActiveDirectoryAction.h"
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/client/game/DiskStatus.h"
#include "mc/client/game/edu_cloud/CloudItemType.h"
#include "mc/client/game/edu_cloud/ConflictResolutionStatus.h"
#include "mc/client/gui/screens/controllers/ClassroomSetting.h"
#include "mc/client/gui/screens/controllers/EduShareMethodType.h"
#include "mc/client/gui/screens/controllers/EduShareUriType.h"
#include "mc/client/gui/screens/controllers/SettingsScreenMode.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/MultiplayerState.h"
#include "mc/client/social/ServiceState.h"
#include "mc/client/store/iap/transactions/TransactionStatus.h"
#include "mc/client/util/edu_cloud_utils/Operation.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/crash_manager/CrashTelemetryProcessor.h"
#include "mc/deps/application/storage_migration/StorageMigrationType.h"
#include "mc/deps/application/storage_migration/WorldRecoveryTelemetryHandler.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/RawInputType.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/events/ConnectedStorageEventType.h"
#include "mc/events/EduControlPanelUpdateType.h"
#include "mc/events/FatalClientPackErrorType.h"
#include "mc/events/IConnectionEventing.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/events/NetworkType.h"
#include "mc/events/OpenCodeMethod.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/events/UserGeneratedUriSource.h"
#include "mc/events/identity/EduSignInStage.h"
#include "mc/events/store_event_data/StoreType.h"
#include "mc/identity/IdentitySignInTrigger.h"
#include "mc/identity/IdentityType.h"
#include "mc/identity/SignInResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/services/signaling/SignalServiceConnectStage.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/server/safety/ChatFloodingAction.h"
#include "mc/util/ValidationStatus.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/containers/managers/controllers/MapOutputType.h"
#include "mc/world/item/ItemAcquisitionMethod.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/FileArchiverOutcome.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/block/CommandBlockMode.h"
#include "mc/world/level/storage/DBStorageFolderWatcherSnapshotKind.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AppPlatform;
class ArmorTrim;
class BaseCommandBlock;
class Block;
class BlockPos;
class ChalkboardBlockActor;
class ChunkRecyclerTelemetryData;
class ContentIdentity;
class DBStorageFolderWatcher;
class Experiments;
class IPacketObserver;
class ItemDescriptor;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class Level;
class LevelChunk;
class LevelData;
class LevelSeed64;
class LevelSettings;
class MessagePerformance;
class Mob;
class MobEffectInstance;
class NetworkIdentifier;
class PackInstance;
class PackManifest;
class PackSettings;
class PacketObserver;
class PerfContextTrackerReport;
class Player;
class PlayerRespawnTelemetryData;
class ScriptPluginResult;
class StructureEditorData;
class StructureTelemetryClientData;
class TaskGroup;
class TelemetryInfo;
struct AsyncJoinAllow;
struct AsyncJoinDeny;
struct BiomeIdType;
struct ChunkRecyclerTelemetryOutput;
struct DBStoragePerformanceTelemetryData;
struct DimensionTransferTelemetryData;
struct DimensionType;
struct ImageTelemetryInfo;
struct LevelStorageEventingContext;
struct LowMemoryReport;
struct MinecraftEventingDependencies;
struct NewBlockID;
struct OnlineAudioStreamEnded;
struct PacksInfoData;
struct ProfilerLiteTelemetry;
struct ResourceProcessingPerfData;
struct SplitScreenUpdatedEventData;
struct StackStats;
struct WebviewDownloadInfo;
namespace Bedrock { class SessionInfo; }
namespace Bedrock { struct CrashUploadStatus; }
namespace Bedrock { struct DeviceIdContext; }
namespace Bedrock { struct DirectoryEntry; }
namespace Bedrock { struct WorldRecoveryTelemetryEvent; }
namespace Bedrock::Http { class Status; }
namespace Bedrock::Profile::Whisker { struct ScopeData; }
namespace Bedrock::Profiling::Orchestrator { struct PerformanceContext; }
namespace Bedrock::Profiling::Orchestrator { struct TriggerContext; }
namespace Bedrock::Profiling::WhiskerLists { struct ScopeEntry; }
namespace Core { class Path; }
namespace Core::Profile { struct FileCounters; }
namespace Identity { struct EduDSTelemetryIdentifier; }
namespace Json { class Value; }
namespace PuvLoadData { struct TelemetryEventData; }
namespace Social { class GameConnectionInfo; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct PlayerIDs; }
namespace Social::Events { class AchievementEventing; }
namespace Social::Events { class Event; }
namespace Social::Events { class EventManager; }
namespace Social::Events { class IEventListener; }
namespace Social::Events { class Measurement; }
namespace Social::Events { class MobTelemetry; }
namespace Social::Events { class OptionChange; }
namespace Social::Events { class Property; }
namespace Social::Events { class TelemetryHeartbeat; }
namespace Social::Events { struct ServerTelemetryData; }
namespace Webview { struct TelemetryCommonProperties; }
namespace dragon::texturestreaming { struct TextureStreamingPerformanceTelemetryData; }
namespace mce { class UUID; }
class IPurchaseEventing;
class PushNotificationMessage;
struct ExtraLicenseData;
namespace Social::Events { struct InboxSummaryData; }
// clang-format on

class MinecraftEventing : public ::IMinecraftEventing,
                          public ::Bedrock::CrashTelemetryProcessor,
                          public ::Bedrock::WorldRecoveryTelemetryHandler {
public:
    // MinecraftEventing inner types declare
    // clang-format off
    struct RealmsTelemetryBox;
    // clang-format on

    // MinecraftEventing inner types define
    enum class AccountType : int {
        Xbl   = 1,
        Guest = 2,
        Other = 3,
    };

    enum class AchievementIds : uchar {
        ChestFullOfCobblestone          = 7,
        DiamondForYou                   = 10,
        IronBelly                       = 20,
        IronMan                         = 21,
        OnARail                         = 29,
        Overkill                        = 30,
        ReturnToSender                  = 37,
        SniperDuel                      = 38,
        StayinFrosty                    = 39,
        TakeInventory                   = 40,
        MapRoom                         = 50,
        FreightStation                  = 52,
        SmeltEverything                 = 53,
        TasteOfYourOwnMedicine          = 54,
        WhenPigsFly                     = 56,
        Inception                       = 58,
        ArtificialSelection             = 60,
        FreeDiver                       = 61,
        SpawnTheWither                  = 62,
        Beaconator                      = 63,
        GreatView                       = 64,
        SuperSonic                      = 65,
        TheEndAgain                     = 66,
        TreasureHunter                  = 67,
        ShootingStar                    = 68,
        FashionShow                     = 69,
        SelfPublishedAuthor             = 71,
        AlternativeFuel                 = 72,
        SleepWithTheFishes              = 73,
        Castaway                        = 74,
        ImAMarineBiologist              = 75,
        SailThe7Seas                    = 76,
        MeGold                          = 77,
        Ahoy                            = 78,
        Atlantis                        = 79,
        OnePickleTwoPickleSeaPickleFour = 80,
        DoaBarrelRoll                   = 81,
        Moskstraumen                    = 82,
        Echolocation                    = 83,
        WhereHaveYouBeen                = 84,
        TopOfTheWorld                   = 85,
        FruitOnTheLoom                  = 86,
        SoundTheAlarm                   = 87,
        BuyLowSellHigh                  = 88,
        Disenchanted                    = 89,
        TimeForStew                     = 90,
        BeeOurGuest                     = 91,
        TotalBeeLocation                = 92,
        StickySituation                 = 93,
        CoverMeInDebris                 = 94,
        FloatYourGoat                   = 95,
        Friend                          = 96,
        WaxOnWaxOff                     = 97,
        StriderRiddenInLavaInOverworld  = 98,
        GoatHornAcquired                = 99,
        JukeboxUsedInMeadows            = 100,
        TradedAtWorldHeight             = 101,
        SurvivedFallFromWorldHeight     = 102,
        SneakCloseToSculkSensor         = 103,
        ItSpreads                       = 104,
        BirthdaySong                    = 105,
        WithOurPowersCombined           = 106,
        PlantingThePast                 = 107,
        CarefulRestoration              = 108,
        Revaulting                      = 109,
        CraftersCraftingCrafters        = 110,
        WhoNeedsRockets                 = 111,
        OverOverkill                    = 112,
        HeartTransplanter               = 113,
        StayHydrated                    = 114,
        MobKabob                        = 115,
        AdventuringTime                 = 116,
        UhOh                            = 117,
        Count                           = 118,
    };

    enum class BlockPlacementMethod : int {
        Entity  = 0,
        Command = 1,
    };

    enum class ChangeType : int {
        Unknown = 0,
        Added   = 1,
        Removed = 2,
        Updated = 3,
    };

    enum class InteractionType : uchar {
        Breeding   = 1,
        Taming     = 2,
        Curing     = 3,
        Crafted    = 4,
        Shearing   = 5,
        Milking    = 6,
        Trading    = 7,
        Feeding    = 8,
        Igniting   = 9,
        Coloring   = 10,
        Naming     = 11,
        Leashing   = 12,
        Unleashing = 13,
        PetSleep   = 14,
        Trusting   = 15,
        Commanding = 16,
        Equipping  = 17,
    };

    enum class ItemInteractMethod : int {
        Use   = 0,
        Place = 1,
    };

    enum class POIBlockInteractionType : uchar {
        None                = 0,
        Extend              = 1,
        Clone               = 2,
        Lock                = 3,
        Create              = 4,
        CreateLocator       = 5,
        Rename              = 6,
        ItemPlaced          = 7,
        ItemRemoved         = 8,
        Cooking             = 9,
        Dousing             = 10,
        Lighting            = 11,
        Haystack            = 12,
        Filled              = 13,
        Emptied             = 14,
        AddDye              = 15,
        DyeItem             = 16,
        ClearItem           = 17,
        EnchantArrow        = 18,
        CompostItemPlaced   = 19,
        RecoveredBonemeal   = 20,
        BookPlaced          = 21,
        BookOpened          = 22,
        Disenchant          = 23,
        Repair              = 24,
        DisenchantAndRepair = 25,
    };

    enum class PoiEventBlockType : int {
        BlastFurnace     = 0,
        BrewingStand     = 1,
        CartographyTable = 2,
        Grindstone       = 3,
        Loom             = 4,
        Smoker           = 5,
        Stonecutter      = 6,
        Barrel           = 7,
        Bell             = 8,
        Campfire         = 9,
        Cauldron         = 10,
        Composter        = 11,
        Lectern          = 12,
    };

    enum class PoiEventType : int {
        BlockUsageAttempt = 0,
        BlockUsed         = 1,
    };

    enum class TeleportationCause : int {
        Unknown                 = 0,
        Projectile              = 1,
        ChorusFruit             = 2,
        Command                 = 3,
        Behavior                = 4,
        TeleportationCauseCount = 5,
    };

    struct RealmsTelemetryBox {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka099be;
        // NOLINTEND

    public:
        // prevent constructor by default
        RealmsTelemetryBox& operator=(RealmsTelemetryBox const&);
        RealmsTelemetryBox(RealmsTelemetryBox const&);
        RealmsTelemetryBox();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TelemetryInfo>>                      mTelemetryInfo;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Social::Events::TelemetryHeartbeat>> mHeartbeat;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::AppPlatform>>              mAppPlatform;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mAssertTelemetrySubscription;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                      mSettingsDir;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mPlayerSessionID;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mAppSessionID;
    ::ll::TypedStorage<1, 1, bool>                                                    mShouldHaveAchievementsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mAchievementsAlwaysEnabled;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mAchivementsAlwaysOptionSubscription;
    ::ll::TypedStorage<8, 8, double>                                           mLastScreenTimestamp;
    ::ll::TypedStorage<8, 8, double>                                           mLastImGuiScreenTimestamp;
    ::ll::TypedStorage<1, 1, bool>                                             mFlagPlayerGameTypeDefault;
    ::ll::TypedStorage<1, 1, bool>                                             mFlagDeepLink;
    ::ll::TypedStorage<4, 4, int>                                              mNumTimesDeviceLost;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, double>>              mPlayerLastDamagedTimestamp;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>          mWorldSessionIdGenerationTimestamp;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::IMinecraftEventing>> mServiceRegistrationToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PacketObserver>>              mPacketObserver;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::IPacketObserver>>    mPacketObserverRegistrationToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkRecyclerTelemetryData>>  mChunkRecyclerTelemetryData;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::ChunkRecyclerTelemetryData>>
        mChunkRecyclerTelemetryDataRegistrationToken;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::Bedrock::WorldRecoveryTelemetryHandler>>
        mWorldRecoveryRegistrationToken;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::MinecraftEventingDependencies>>> mDeps;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                                      mTaskGroup;
    ::ll::TypedStorage<
        8,
        88,
        ::Bedrock::Threading::BasicLockbox<::MinecraftEventing::RealmsTelemetryBox, ::Bedrock::Threading::Mutex>>
        mRealmsTelemetry;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftEventing();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftEventing() /*override*/ = default;

    virtual ::IPurchaseEventing& getPurchaseEventing() /*override*/;

    virtual void init(::Bedrock::NonOwnerPointer<::AppPlatform> const&) /*override*/;

    virtual void initDeviceAndSessionIds() /*override*/;

    virtual void initEditorEventListener() /*override*/;

    virtual void shutdown() /*override*/;

    virtual void updatePrimaryLocalUserId(uint const&) /*override*/;

    virtual ::std::string getUserUID(::Social::IdentityType, ::std::string const&) const /*override*/;

    virtual void registerSecondaryUserCommonProperties(uint const&, ::std::string const&) const /*override*/;

    virtual void unregisterSecondaryUserCommonProperties(uint const&) const /*override*/;

    virtual void updateIsLegacyPlayer(bool) const /*override*/;

    virtual void updateIsTrial(bool) const /*override*/;

    virtual void updateEditionType() const /*override*/;

    virtual void updateClientId() const /*override*/;

    virtual void addListener(::std::unique_ptr<::Social::Events::IEventListener>) /*override*/;

    virtual void clearListeners() /*override*/;

    virtual void registerOptionsObserver(
        ::brstd::function_ref<
            ::Bedrock::PubSub::Subscription(::std::function<void(bool)>) const,
            ::Bedrock::PubSub::Subscription(::std::function<void(bool)>)>
    ) /*override*/;

    virtual void setTestBuildIdTag(char const*) /*override*/;

    virtual void removeTestBuildIdTag() /*override*/;

    virtual void setTestTelemetryTag(char const*) /*override*/;

    virtual void removeTestTelemetryTag() /*override*/;

    virtual void stopDebugEventLoggingForAllListeners() /*override*/;

    virtual void tick() /*override*/;

    virtual void forceSendEvents() /*override*/;

    virtual ::std::string getSessionId() /*override*/;

    virtual ::std::string const& getPlayerSessionId() /*override*/;

    virtual ::std::chrono::steady_clock::time_point getWorldSessionIdGenerationTimestamp() const /*override*/;

    virtual void fireEventDefaultGameTypeChanged(::GameType, ::GameType) /*override*/;

    virtual void fireEventWorldLoaded(
        ::Player*,
        ::brstd::function_ref<
            void(::Social::Events::EventManager&, ::Social::Events::Event&) const,
            void(::Social::Events::EventManager&, ::Social::Events::Event&)>
    ) /*override*/;

    virtual void fireEventMarkLevelForSync(
        ::std::string const&,
        int64,
        int64,
        ::IMinecraftEventing::MarkLevelForSyncReason
    ) /*override*/;

    virtual void fireEventLockedItemGiven() /*override*/;

    virtual void
    fireEventWorldLoadTimes(::std::string const&, ::std::vector<::std::pair<::std::string, float>> const) /*override*/;

    virtual void fireEventBlockPlacedByCommand(::Block const&, int) /*override*/;

    virtual void fireEventEntitySpawned(::Player*, int, uint) /*override*/;

    virtual void fireEventDevSlashCommandExecuted(::std::string const&, ::std::string const&) /*override*/;

    virtual void
    fireCommandParseTableTelemetry(bool const, ::std::vector<::IMinecraftEventing::CommandParseTableEntry> const&) const
        /*override*/;

    virtual void fireEventPlayerTravelled(::Player*, float, int) /*override*/;

    virtual void fireEventPlayerBounced(::Player*, ::Block const&, int) /*override*/;

    virtual void fireEventPlayerDamaged(::Player*, ::SharedTypes::Legacy::ActorDamageCause) /*override*/;

    virtual void fireEventSetValidForAchievements(::Player*, bool) /*override*/;

    virtual void
    fireEventAchievementReceived(::std::string const&, ::std::string const&, ::std::string const&) /*override*/;

    virtual void updatePlayerUndergroundStatus(::Player*, bool const) /*override*/;

    virtual void fireEventPlayerAttemptingExploit(::Player*, ::IMinecraftEventing::ExploitType) /*override*/;

    virtual void fireEventWorldGenerated(::std::string const&, ::LevelSettings const&, bool) /*override*/;

    virtual void fireEventMultiplayerClientConnectionStateChanged(
        ::std::string const&,
        uint,
        uint,
        uint,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventPacketViolationDetected(
        uint64,
        ::std::string,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        ::NetworkIdentifier const&,
        uint,
        ::SubClientId,
        ::SubClientId,
        uint
    ) /*override*/;

    virtual void
    fireEventServerReceivedValidPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId) /*override*/;

    virtual void fireEventClientSentOrReceivedPacket(
        ::NetworkIdentifier const&,
        ::MinecraftPacketIds,
        ::SubClientId,
        ::std::string,
        bool
    ) /*override*/;

    virtual void fireEventJoinCanceled(::LoadingState) /*override*/;

    virtual void fireEvent(
        ::std::string const&,
        ::std::vector<::Social::Events::Property> const&,
        ::std::vector<::Social::Events::Measurement> const&,
        bool
    ) /*override*/;

    virtual void fireEventBlockTypeRegistryChecksumMismatch(
        ::std::string const&,
        uint64 const&,
        uint64 const&,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventOnSuccessfulClientLogin(::Level const*) /*override*/;

    virtual void
    fireEventStartWorld(::NetworkType, ::std::string const&, ::Social::MultiplayerServiceIdentifier const) /*override*/;

    virtual void fireEventPlayerJoinWorld(
        uint const&,
        ::SubClientId const,
        bool,
        ::std::optional<bool>,
        ::IConnectionEventing::PlayerJoinWorldAttemptState const,
        int,
        ::Connection::DisconnectFailReason,
        ::Json::Value const&,
        ::TransportLayer,
        ::NetworkType,
        ::Social::MultiplayerState,
        bool,
        bool,
        ::Social::MultiplayerServiceIdentifier,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        bool,
        bool,
        bool,
        bool,
        bool,
        uint64,
        ::Social::GameConnectionInfo const&
    ) /*override*/;

    virtual void fireEventClientLastPackets(
        uint const&,
        ::SubClientId const,
        int,
        ::Json::Value const&,
        ::Json::Value const&
    ) /*override*/;

    virtual void fireEventSignalServiceConnect(
        ::SignalServiceConnectStage,
        bool,
        ::Json::Value const&,
        ::std::string const&,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventSignalMessagePerformance(::std::string const&, ::MessagePerformance const&) /*override*/;

    virtual void fireEventOnClientDisconnect(
        ::NetworkIdentifier const&,
        ::SubClientId,
        bool,
        ::Connection::DisconnectFailReason,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventOnServerDisconnect(
        ::Connection::DisconnectFailReason,
        ::NetworkIdentifier const&,
        ::SubClientId,
        ::std::string const&,
        uint64,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventOnServerAsyncJoinTaskVerdict(
        ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny> const&,
        ::SubClientId const,
        uint
    ) /*override*/;

    virtual void fireEventHttpClientError(::std::string const&) /*override*/;

    virtual void fireEventNPLNLifecycle(int, ::Social::MultiplayerState, ::Social::ServiceState) /*override*/;

    virtual void fireEventNPLNRpcFailure(
        int,
        int,
        ::Social::MultiplayerState,
        ::Social::ServiceState,
        ::std::optional<::std::chrono::seconds>
    ) /*override*/;

    virtual void fireEventSignInToIdentity(
        ::IMinecraftEventing::SignInAccountType,
        ::Social::IdentitySignInTrigger,
        ::std::string const&,
        bool,
        ::IMinecraftEventing::SignInStage,
        ::Social::SignInResult,
        int,
        ::Social::PlayerIDs,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventSignOutOfIdentity(
        ::IMinecraftEventing::SignInAccountType,
        ::Social::IdentitySignInTrigger,
        ::std::string const&,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventSignInEdu(
        ::std::string const&,
        ::edu::Role,
        ::Identity::EduSignInStage,
        ::std::string const&,
        ::std::string const&,
        ::std::vector<::std::pair<::std::string, ::std::string>> const&
    ) /*override*/;

    virtual void fireEventSignOutEdu(
        ::std::string const&,
        ::edu::Role,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventSwitchAccountEdu(::std::string const&, ::edu::Role, ::std::string const&) /*override*/;

    virtual void fireEventEduDemoConversion(::edu::Role, ::LastClickedSource) /*override*/;

    virtual void fireEventCloudOperationStartedEdu(
        ::EduCloudUtils::Operation const,
        ::EduCloud::CloudItemType const,
        ::std::string const&,
        uint64 const,
        ::std::optional<::std::string> const&
    ) /*override*/;

    virtual void fireEventCloudOperationEndedEdu(
        ::EduCloudUtils::Operation const,
        ::EduCloud::CloudItemType const,
        ::std::string const&,
        ::std::chrono::milliseconds const,
        uint const,
        uint64 const,
        ::std::optional<::std::string> const&,
        ::std::optional<::std::string> const&,
        ::std::optional<::std::string> const&,
        ::std::optional<::std::string> const&
    ) /*override*/;

    virtual void fireEventCloudMyWorldsSummary(int const, int const, int const, int const, int const) /*override*/;

    virtual void
    fireEventCloudConflictCheckEdu(::std::string const&, ::EduCloud::ConflictResolutionStatus const) /*override*/;

    virtual void fireEventPopupFiredEdu(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::ActiveDirectoryAction const
    ) /*override*/;

    virtual void fireEventPlayIntegrityCheck(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&
    ) /*override*/;

    virtual void fireServerConnectionEvent(
        ::IConnectionEventing::ServerConnectionOutcome,
        uint,
        double,
        ::std::string const&,
        ::std::string const&
    ) /*override*/;

    virtual void fireServerConnectionAttemptEvent(::std::string const&, bool, ::std::string const&) /*override*/;

    virtual void
    fireEventServerPlayerJoinedGame(::NetworkIdentifier const&, ::SubClientId, ::std::string const&) /*override*/;

    virtual void fireEventScriptPluginDiscovery(::ScriptPluginResult const&, bool) /*override*/;

    virtual void fireEventScriptPluginRun(::ScriptPluginResult const&, ::std::chrono::microseconds, bool) /*override*/;

    virtual void fireEventScriptDebuggerListen(bool, bool) /*override*/;

    virtual void fireEventScriptDebuggerConnect(bool, bool, int) /*override*/;

    virtual void fireEditorEventToolActivated(::std::string const&) /*override*/;

    virtual void fireEditorUndo(::std::string const&) /*override*/;

    virtual void fireEditorRedo(::std::string const&) /*override*/;

    virtual void fireEditorScriptAction(::std::string const&, ::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEditorTutorialEvent(
        ::std::string_view,
        ::std::optional<::std::string> const&,
        ::std::string const&,
        ::std::optional<::std::string> const&
    ) /*override*/;

    virtual void fireEventStartClient(::std::string const&, bool) /*override*/;

    virtual void fireEventHardwareInfo() /*override*/;

    virtual void fireEventDeviceLost() /*override*/;

    virtual void fireEventRenderingSizeChanged() /*override*/;

    virtual void fireEventDiskStatus(::DiskStatus, ::Core::LevelStorageState, uint64) /*override*/;

    virtual void
    fireEventStorageAreaFull(::std::string const&, ::std::vector<::Bedrock::DirectoryEntry> const&) /*override*/;

    virtual void fireEventAppPaused() /*override*/;

    virtual void fireEventAppUnpaused() /*override*/;

    virtual void fireEventAppSurfaceCreated() /*override*/;

    virtual void fireEventAppSurfaceDestroyed() /*override*/;

    virtual void
    fireEventPurchaseGameAttempt(::std::string const&, ::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventPurchaseGameResult(int) /*override*/;

    virtual void
    fireEventTrialDeviceIdCorrelation(int64, ::std::string const&, int64, ::std::string const&) /*override*/;

    virtual void fireEventDeviceIdManagerFailOnIdentityGained() /*override*/;

    virtual void fireEventDlcStorageFull(::std::string const&, uint64, uint64, uint64, uint64) /*override*/;

    virtual void fireEventTotalDlcSizes(uint64, uint64) /*override*/;

    virtual void fireEventPushNotificationReceived(::PushNotificationMessage const&) /*override*/;

    virtual void fireEventPushNotificationOpened(::std::string const&, ::std::string const&) /*override*/;

    virtual void firePerfTestEvent(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        uint,
        uint,
        ::std::string const&,
        ::std::vector<::std::pair<::std::string, float>> const&
    ) /*override*/;

    virtual void fireEventLicenseCheck(bool, ::ExtraLicenseData&) /*override*/;

    virtual void fireQueryOfferResult(::std::string const&, int, bool) /*override*/;

    virtual void fireEventQueryPurchasesResult(::std::string const&, ::std::string const&, int, bool) /*override*/;

    virtual void
    fireEventPurchaseFailureDetails(int, ::std::string const&, ::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventPlatformStorePurchaseFailure(::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventDeviceAccountFailure(
        ::IMinecraftEventing::SignInStage,
        ::IMinecraftEventing::DeviceAccountFailurePhase,
        uint,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventDeviceAccountSuccess(bool, ::std::string const&) /*override*/;

    virtual void fireEventEntitlementListInfo(::std::vector<::ContentIdentity>&, bool) /*override*/;

    virtual void fireEventVideoPlayed(::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventBundleSubOfferClicked(
        int,
        int,
        ::std::string const&,
        ::std::string const&,
        bool,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventStoreOfferClicked(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>
    ) /*override*/;

    virtual void fireEventStoreOfferClicked(::std::string const, ::std::string const&) /*override*/;

    virtual void fireEventPersonaOfferClicked(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>
    ) /*override*/;

    virtual void fireEventStoreSearch(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>
    ) /*override*/;

    virtual void fireEventSearchItemSelected(
        int const,
        int const,
        ::std::string const&,
        int const,
        int const,
        int const,
        ::std::string const&
    ) /*override*/;

    virtual void
    fireEventUserListUpdated(::std::string const&, ::std::string const&, ::std::string const&, bool) /*override*/;

    virtual void fireEventUgcAcquisitionStateChanged(
        ::std::string const&,
        uint64,
        double,
        bool,
        int,
        bool,
        int,
        ::std::string const&,
        ::std::string const&,
        int,
        int
    ) /*override*/;

    virtual void fireEventSearchCatalogRequest(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>
    ) /*override*/;

    virtual void fireEventStoreSessionResponse(::std::string const&, int const, int const, bool const) /*override*/;

    virtual void fireEventStoreDiscoveryRequestResponse(int const, int const, bool const) /*override*/;

    virtual void fireEventStoreInventoryRefreshRequestResponse(int const, int const, bool const) /*override*/;

    virtual void fireEventInventoryVersionRefreshRequestResponse(int const, int const, bool const) /*override*/;

    virtual void fireEventServerDrivenLayoutPageLoaded(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>,
        ::std::string,
        int,
        int,
        int,
        int,
        int
    ) /*override*/;

    virtual void fireEventServerDrivenLayoutImagesLoaded(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>,
        ::std::string,
        ::ImageTelemetryInfo const&
    ) /*override*/;

    virtual void fireEventTreatmentsSet(::std::vector<::std::string> const&, ::std::string const&) /*override*/;

    virtual void updateAppliedTreatmentPacks(::std::vector<::std::string> const&) /*override*/;

    virtual void fireEventProgressionsSet(::std::vector<::std::string> const&) /*override*/;

    virtual void fireEventTreatmentsCleared() /*override*/;

    virtual void fireEventPackImportTimeout(::std::string const&) /*override*/;

    virtual void
        fireEventFatalClientPackError(::FatalClientPackErrorType, ::gsl::span<::std::string const>) /*override*/;

    virtual void fireEventStoreErrorPage(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&
    ) /*override*/;

    virtual void setServerIdsforClient(
        ::std::string const&,
        ::std::string const&,
        ::Social::Events::ServerTelemetryData const&
    ) /*override*/;

    virtual void removeServerIdsForClient() /*override*/;

    virtual void setConnectionCommonProperties(uint, ::std::string const&, ::NetworkType) /*override*/;

    virtual void removeConnectionCommonProperties(uint) /*override*/;

    virtual void trySetExperienceIdentifiers(::std::string const&, ::std::string const&) /*override*/;

    virtual void removeExperienceIdentifiers() /*override*/;

    virtual ::std::string getExperienceId() const /*override*/;

    virtual ::std::string getExperienceSessionId() const /*override*/;

    virtual void fireEventOptionsUpdated(
        bool,
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>
    ) /*override*/;

    virtual void fireEventChatSettingsUpdated(::Player const*, ::std::vector<::Social::Events::Property> const&) const
        /*override*/;

    virtual void fireEventControlRemappedByPlayer(::std::string const&, ::RawInputType, int) const /*override*/;

    virtual void
        fireEventDifficultySet(::SharedTypes::Legacy::Difficulty, ::SharedTypes::Legacy::Difficulty) /*override*/;

    virtual void fireEventGameRulesUpdated(bool, bool, ::std::string const&) /*override*/;

    virtual void fireEventGameRulesUpdated(int, int, ::std::string const&) /*override*/;

    virtual void fireEventGameRulesUpdated(float, float, ::std::string const&) /*override*/;

    virtual void fireCurrentInputUpdated(uint, ::InputMode) /*override*/;

    virtual void fireEventSplitScreenUpdated(::SplitScreenUpdatedEventData const&) /*override*/;

    virtual void fireEventPerformanceMetrics(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>,
        ::ProfilerLiteTelemetry const&,
        bool,
        int
    ) /*override*/;

    virtual void fireEventPerformanceContext(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>,
        ::PerfContextTrackerReport const&,
        bool,
        int
    ) /*override*/;

    virtual void
        fireEventProfilerMetadata(::gsl::span<::Bedrock::Profiling::WhiskerLists::ScopeEntry const>) /*override*/;

    virtual void fireEventProfilerCapture(
        ::Bedrock::Profiling::Orchestrator::TriggerContext const&,
        ::Bedrock::Profiling::Orchestrator::PerformanceContext const&,
        ::std::optional<::gsl::span<::gsl::not_null<::Bedrock::Profile::Whisker::ScopeData const*>> const> const&,
        ::std::optional<::brstd::flat_map<
            ::std::string,
            uint64,
            ::std::less<::std::string>,
            ::std::vector<::std::string>,
            ::std::vector<uint64>> const> const&
    ) /*override*/;

    virtual void
    fireTextureStreamingPerf(::dragon::texturestreaming::TextureStreamingPerformanceTelemetryData const&) /*override*/;

    virtual void fireEventScreenChanged(
        uint const&,
        ::std::string const&,
        ::std::unordered_map<::std::string, ::std::string> const&
    ) /*override*/;

    virtual void fireEventImGuiScreenChanged(
        ::std::string const&,
        ::std::unordered_map<::std::string, ::std::string> const&
    ) /*override*/;

    virtual void fireEventPopupClosed(::std::string const&) const /*override*/;

    virtual void fireEventNewContentCheckCompleted(::std::string const&, bool) /*override*/;

    virtual void fireEventEncyclopediaTopicChanged(::std::string const&, ::InputMode) /*override*/;

    virtual void fireEventHowToPlayTopicChanged(::std::string const&, ::InputMode) /*override*/;

    virtual void fireEventAndroidHelpRequest() /*override*/;

    virtual void fireEventWorldFilesListed(uint64, uint64, uint64, uint64) /*override*/;

    virtual void fireEventStorage(int, ::std::string const&) /*override*/;

    virtual void fireEventStorageReport(::std::string const&) /*override*/;

    virtual void fireEventPlayerMessageSay(::std::string const&, ::std::string const&) /*override*/;

    virtual void
    fireEventPlayerMessageTell(::std::string const&, ::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventPlayerMessageChat(::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventPlayerMessageMe(::std::string const&, ::std::string const&) /*override*/;

    virtual void
    fireEventPlayerMessageTitle(::std::string const&, ::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventPlayerKicked(::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventPlayerBanned(::std::string const&) /*override*/;

    virtual void fireEventChunkLoaded(::LevelChunk&) /*override*/;

    virtual void fireEventChunkUnloaded(::LevelChunk&) /*override*/;

    virtual void fireEventChunkChanged(::LevelChunk&) /*override*/;

    virtual void fireEventPackPlayed(::PackInstance const&, uint) /*override*/;

    virtual void fireEventRespondedToAcceptContent(::PacksInfoData const&, bool, bool) /*override*/;

    virtual void fireEventStackLoaded(::StackStats const&, ::gsl::span<::PackInstance const>) /*override*/;

    virtual void firePackSettingsEvent(::PackSettings const&, ::PackManifest const&, ::std::string) /*override*/;

    virtual void fireEventTreatmentPackApplied(::PackManifest const&) /*override*/;

    virtual void
        fireEventTreatmentPackDownloadFailed(::std::string, ::std::string, ::std::string, ::std::string) /*override*/;

    virtual void
        fireEventTreatmentPackDownloaded(::std::string, ::std::string, ::std::string, ::std::string) /*override*/;

    virtual void fireEventTreatmentPackRemoved(::std::string) /*override*/;

    virtual void fireCDNDownloadEvent(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::IMinecraftEventing::CDNDownloadResult const&,
        ::IMinecraftEventing::CDNDownloadEventOrigin const&,
        float const&
    ) /*override*/;

    virtual void fireEventContentLogsInWorldSession(::std::string const&, uint, uint) /*override*/;

    virtual void fireEventEntitlementCacheLoadTimeout() /*override*/;

    virtual void fireTextToSpeechToggled(bool, bool) /*override*/;

    virtual void fireEventWorldLoadedClassroomCustomization(
        ::IMinecraftEventing::WorldClassroomCustomization,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>>
    ) /*override*/;

    virtual void fireClassroomSettingUpdated(::ClassroomSetting, ::SettingsScreenMode) /*override*/;

    virtual void fireEventNpcPropertiesUpdated(::Actor&, bool) /*override*/;

    virtual void fireEventBoardTextUpdated(::ChalkboardBlockActor&) /*override*/;

    virtual void fireEventCameraUsed(bool) /*override*/;

    virtual void fireEventPortfolioExported(int, int) /*override*/;

    virtual void fireQuickPlayEvent() /*override*/;

    virtual void firePermissionsSetEvent(
        ::PlayerPermissionLevel const,
        ::CommandPermissionLevel const,
        ::PlayerPermissionLevel const,
        ::CommandPermissionLevel const
    ) /*override*/;

    virtual void fireExternalUriLaunched(::std::string const&) const /*override*/;

    virtual void fireUserGeneratedUriLaunched(::UserGeneratedUriSource) const /*override*/;

    virtual void fireUserGeneratedUriLaunchFailed(
        ::UserGeneratedUriSource,
        ::Util::ResourceUri::ValidationStatus,
        ::std::string const&
    ) const /*override*/;

    virtual void fireEventEmptyLibraryCategoryError(::std::string const&) const /*override*/;

    virtual void fireCodeBuilderCachePerformance(::std::string const&, ::std::chrono::milliseconds) const /*override*/;

    virtual void fireCodeBuilderLoadPerformance(::std::string const&, uint64, uint64, ::std::chrono::milliseconds) const
        /*override*/;

    virtual void fireCodeBuilderRunPerformance(::std::string const&, ::std::chrono::milliseconds) const /*override*/;

    virtual void
    fireLibraryButtonPressed(::std::string const&, ::std::string const&, ::std::string const&) /*override*/;

    virtual void fireCourseButtonPressed(::std::string const&, ::std::string const&) /*override*/;

    virtual void fireLessonActionTaken(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::IMinecraftEventing::EducationLessonAction,
        int
    ) /*override*/;

    virtual void fireLessonProgressEvent(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        int
    ) /*override*/;

    virtual void
    fireShareButtonPressed(::std::string const&, ::EduShareUriType, ::EduShareMethodType, bool) /*override*/;

    virtual void fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint const) const
        /*override*/;

    virtual void fireEventEduiOSPurchaseTransaction(::TransactionStatus const&) const /*override*/;

    virtual void fireInAppCodeBuilderActivated(
        ::OpenCodeMethod,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&
    ) const /*override*/;

    virtual void fireInAppCodeBuilderDismissed(::std::string const&) const /*override*/;

    virtual void fireCodeCommandButtonPressed() /*override*/;

    virtual void fireIDESelected(::std::string const&) const /*override*/;

    virtual void fireEventEduResources() const /*override*/;

    virtual void fireEventCodeBuilderClosed() const /*override*/;

    virtual void
    fireEventCodeBuilderLog(::Webview::TelemetryCommonProperties const&, ::std::string const&, ::std::string&) const
        /*override*/;

    virtual void fireEventCodeBuilderScoreChanged(::std::string const&, int const) const /*override*/;

    virtual void fireEventEduServiceStatus(
        ::std::string const&,
        ::std::string const&,
        int,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>>
    ) const /*override*/;

    virtual void fireEventCodeBuilderRuntimeAction(::std::string const&) const /*override*/;

    virtual void fireEventWebviewDownload(::std::string const&, ::WebviewDownloadInfo const&) const /*override*/;

    virtual void fireEduServiceRequestFailed(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>>
    ) const /*override*/;

    virtual void
    fireEventButtonPressed(::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) const
        /*override*/;

    virtual void fireEventOptionsChanged(::std::string const&, ::std::unordered_map<::std::string, int> const&) const
        /*override*/;

    virtual void fireEventOptionsChangedAlt(
        ::std::string const&,
        ::std::unordered_map<::std::string, ::Social::Events::OptionChange> const&
    ) const /*override*/;

    virtual void
    fireEventModalShown(::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) const
        /*override*/;

    virtual void fireEventTagButtonPressed(::std::string const&, bool) const /*override*/;

    virtual void fireEventLevelDataOverride(::std::string_view) const /*override*/;

    virtual void fireEventEduContentVerificationFailed() const /*override*/;

    virtual void fireEventLibrarySearch(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>
    ) const /*override*/;

    virtual void
    fireEventLibrarySearchItemSelected(int const, int const, ::std::string const&, int const, int const) const
        /*override*/;

    virtual void fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType, double) const /*override*/;

    virtual void fireEventWorldExported(int64, uint64) /*override*/;

    virtual void fireEventWorldImported(int64, uint64) /*override*/;

    virtual void fireEventWorldImportedResult(::FileArchiverOutcome) /*override*/;

    virtual void fireGlobalResourcePackCrashRecovery(::PackInstance&, ::mce::UUID, int) /*override*/;

    virtual void
    fireEventRealmShared(::std::string const&, ::IMinecraftEventing::ShareMode const&, int64 const&) /*override*/;

    virtual void fireEventRealmMemberlistCleared(int64 const&, int const&) /*override*/;

    virtual void fireEventRealmUrlGenerated(::std::string const&, int64 const&) /*override*/;

    virtual void fireEventStructureExport(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>,
        ::IMinecraftEventing::ExportOutcome,
        ::IMinecraftEventing::ExportStage
    ) const /*override*/;

    virtual void fireEventContentShared(
        ::std::string const&,
        ::std::string const&,
        ::IMinecraftEventing::ShareMode const&
    ) /*override*/;

    virtual void fireMinecraftVersionLaunched(bool) /*override*/;

    virtual void fireMinecraftVersionInviteAccepted(bool, uint64) /*override*/;

    virtual void fireInviteStatusReceived(::std::string) /*override*/;

    virtual void fireInviteStatusSentImpl(uint, ::std::vector<::std::string>) /*override*/;

    virtual void fireDayOneExperienceStateChanged(
        ::IMinecraftEventing::DayOneExperienceState,
        ::std::optional<uint>,
        ::std::optional<uint64>
    ) /*override*/;

    virtual void
    fireContentDecryptionFailure(::std::string const&, ::std::string const&, ::std::string const&) /*override*/;

    virtual void fireWorldConversionAttemptEvent(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>
    ) /*override*/;

    virtual void fireWorldConversionInitiatedEvent(::std::string const&) /*override*/;

    virtual void fireWorldUpgradedToCnCPart2(
        bool,
        ::std::string const&,
        ::Experiments const&,
        ::std::string const&,
        ::LevelSeed64,
        float
    ) /*override*/;

    virtual void fireEventAssertFailed(::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventCrashSystemFailedToInit() /*override*/;

    virtual void fireChatUsedEvent(uint, bool) /*override*/;

    virtual void fireEventJoinByCode(::std::string const&) /*override*/;

    virtual void fireEventAppInitFileOpenStats(
        ::Core::Profile::FileCounters const&,
        ::Core::Profile::FileCounters const&
    ) /*override*/;

    virtual void fireEventStartupPerformance(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>
    ) /*override*/;

    virtual void fireEventOnAppStart(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>
    ) /*override*/;

    virtual void fireEventOnAppSuspend(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>,
        ::IMinecraftEventing::SuspendTriggersDisconnect,
        bool,
        bool
    ) /*override*/;

    virtual void fireEventOnAppResume(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>,
        ::std::optional<int64>
    ) /*override*/;

    virtual void fireEventOnDeviceLost(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>
    ) /*override*/;

    virtual void fireEventRealmsGeneralCall(::std::string const&, ::Bedrock::Http::Status) /*override*/;

    virtual void fireEventRealmsRealmSpecificCall(::std::string const&, int64, ::Bedrock::Http::Status) /*override*/;

    virtual void
    fireEventRealmDownload(::std::string const&, ::std::string const&, int const, int const, int const) /*override*/;

    virtual void fireEventRealmUpload(
        ::std::string const&,
        ::std::string const&,
        int const,
        int const,
        int const,
        bool const
    ) /*override*/;

    virtual void fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow) /*override*/;

    virtual void fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow) /*override*/;

    virtual void fireRealmConnectionEventRealmAPIResponse(::IMinecraftEventing::RealmConnectionFlow, int) /*override*/;

    virtual void fireRealmConnectionEventGenericLambdaCalled(
        ::IMinecraftEventing::RealmConnectionFlow,
        ::IMinecraftEventing::RealmConnectionLambda,
        ::IMinecraftEventing::RealmConnectionResult
    ) /*override*/;

    virtual void fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType,
        int,
        ::std::set<::IMinecraftEventing::IgnoredNotificationSource>
    ) /*override*/;

    virtual void fireClubsOpenFeedScreenEvent(
        ::IMinecraftEventing::ClubsFeedScreenSource const,
        int64 const,
        ::std::string const&,
        int
    ) /*override*/;

    virtual void fireClubsEngagementEvent(
        ::IMinecraftEventing::ClubsEngagementAction,
        ::IMinecraftEventing::ClubsEngagementTargetType,
        char const*,
        int64 const,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventCopyWorldEducationEnabled() /*override*/;

    virtual void fireEventRespawn(::Player&, int) /*override*/;

    virtual void fireEventServerRespawnSearchTime(::Player&, ::PlayerRespawnTelemetryData const&) /*override*/;

    virtual void fireEventUnknownBlockReceived(::NewBlockID const&, ushort) /*override*/;

    virtual void fireEventCompoundCreatorCreated(int, int) /*override*/;

    virtual void fireEventLabTableCreated(int, int, int) /*override*/;

    virtual void
    fireEventElementConstructorUsed(int, int, ::IMinecraftEventing::ElementConstructorUseType) /*override*/;

    virtual void fireEventReducerBlockEntered(::ItemDescriptor const&) /*override*/;

    virtual void fireEventMultiplayerSessionUpdate(::Bedrock::NonOwnerPointer<::Level>) /*override*/;

    virtual void fireEventLevelDestruct() /*override*/;

    virtual void flagEventDeepLink() /*override*/;

    virtual void flagEventPlayerGameTypeDefault(bool) /*override*/;

    virtual void fileEventCloudWorldPullFailed(::std::string const&, ::std::string const&, bool) /*override*/;

    virtual void fireEventLevelDatLoadFailed(::std::string const&, ::std::string const&, bool) /*override*/;

    virtual void fireEventWorldCorruptionCausedWorldShutdown(
        ::LevelStorageEventingContext const&,
        ::std::string const&,
        ::std::optional<bool>
    ) /*override*/;

    virtual void fireEventClientLeftGameDueToUnrecoverableError(::std::string const&, bool) /*override*/;

    virtual void fireEventServerShutdownDueToError(::std::string const&) /*override*/;

    virtual void fireEventServerInitializationFailed(::std::string const&, bool, bool) /*override*/;

    virtual void fireEventDBStorageSizeSnapshot(
        ::LevelStorageEventingContext const&,
        ::DBStorageFolderWatcher const&,
        ::DBStorageFolderWatcherSnapshotKind
    ) /*override*/;

    virtual void fireEventLevelDBPerformanceData(
        ::LevelStorageEventingContext const&,
        ::DBStoragePerformanceTelemetryData const&
    ) /*override*/;

    virtual void fireEventDBReadFail(::LevelStorageEventingContext const&, ::std::string const&) /*override*/;

    virtual void fireEventWorldHistoryPackSourceMissingDuringUpgrade(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&
    ) /*override*/;

    virtual void fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType,
        ::StructureEditorData const&,
        ::StructureTelemetryClientData const*
    ) /*override*/;

    virtual void fireStructureBlockRedstoneActivated(
        ::IMinecraftEventing::StructureBlockActionType,
        ::StructureEditorData const&,
        ::StructureTelemetryClientData const*
    ) /*override*/;

    virtual void fireEventSidebarNavigation(
        uint const&,
        ::std::string const&,
        ::std::string const&,
        int const,
        bool const,
        bool const,
        bool const
    ) /*override*/;

    virtual void
    fireEventSidebarVerboseToggled(uint const&, ::std::string const&, ::std::string const&, bool const) /*override*/;

    virtual void
    fireEventPersonaUserLoadedActive(::persona::ProfileType const, ::std::string const&, bool) /*override*/;

    virtual void fireEventPersonaItemPreviewed(
        ::persona::ProfileType const,
        ::std::string const&,
        ::std::string const&,
        uint,
        uint,
        ::IMinecraftEventing::PromotionType,
        bool,
        ::std::string const&,
        ::std::string const&,
        double,
        ::StoreEventData::StoreType
    ) /*override*/;

    virtual void fireEventPersonaAvatarUpdated(
        ::persona::ProfileType const,
        ::std::vector<::std::string> const&,
        ::std::vector<bool> const&,
        ::std::vector<bool> const&,
        bool,
        bool,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        bool,
        ::std::vector<::std::string> const&,
        ::std::vector<::std::string> const&
    ) /*override*/;

    virtual void fireEventPersonaSkinChanged(::persona::ProfileType const, ::std::string const&, bool) /*override*/;

    virtual void fireEventPersonaAvatarsListed(::std::vector<::persona::ProfileType> const&) /*override*/;

    virtual void fireEventPersonaEmotePlayed(::std::string const&, bool, int) /*override*/;

    virtual void fireEventDefaultCastSelected(int, ::mce::UUID, ::std::string const&) /*override*/;

    virtual void fireEventPersonaInitalizationEvent(uint, ::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventPersonaGeneralError(::std::string const&, uint) /*override*/;

    virtual void fireEventPersonaLoadingPieces(uint, double) /*override*/;

    virtual void fireEventPersonaCreationFailed(
        ::std::string_view,
        ::std::string_view,
        bool,
        bool,
        ::std::string_view,
        ::std::string_view
    ) /*override*/;

    virtual void fireEventPersonaCategoryInformation(::std::string const&) /*override*/;

    virtual void
    fireEventDisplayLoggedError(::std::string const&, ::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventOreUIError(uint const&, ::std::string const&) /*override*/;

    virtual void fireEventOreUIScreenPerformance(
        uint const&,
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>
    ) /*override*/;

    virtual void fireEventRealmsStoriesOptIn(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        bool const
    ) /*override*/;

    virtual void fireEventOnboardingWorldCreationUsage(bool, bool, bool) /*override*/;

    virtual ::std::shared_ptr<void*> requestEventDeferment() /*override*/;

    virtual ::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> getCrashTelemetryProcessor() /*override*/;

    virtual void sendCrashTelemetryNow(::std::shared_ptr<::Bedrock::SessionInfo>) /*override*/;

    virtual void addCrashTelemetryToBatch(::std::shared_ptr<::Bedrock::SessionInfo>) /*override*/;

    virtual void sendBatchedCrashTelemetry() /*override*/;

    virtual void sendCrashStatusTelemetry(::Bedrock::CrashUploadStatus const&) /*override*/;

    virtual void fireEventLevelChunkPerformanceData(bool) /*override*/;

    virtual void fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const&) /*override*/;

    virtual void fireEventActorValueValidationFailed(::std::string const&, char const*) /*override*/;

    virtual void fireScreenLoadTimeUpdateEvent(
        uint const&,
        ::std::string const&,
        ::std::chrono::nanoseconds,
        ::std::string const&
    ) /*override*/;

    virtual void fireDBStorageError(::LevelStorageEventingContext const&, ::std::string const&) /*override*/;

    virtual void fireStorageMigrationEvent(
        bool,
        ::Bedrock::StorageMigration::StorageMigrationType,
        int,
        int,
        double,
        double,
        ::std::chrono::nanoseconds,
        ::std::string const&,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventConnectedStorageResult(
        ::ConnectedStorageEventType,
        bool,
        uint,
        ::std::optional<uint>,
        ::std::string const&,
        ::std::string const&,
        int64,
        ::std::optional<uint>,
        ::std::optional<uint>,
        ::std::optional<uint>
    ) /*override*/;

    virtual void fireEventConnectedStorageError(char const*, ::std::string const&, int64) /*override*/;

    virtual void fireServerStarted(
        ::Social::Events::ServerTelemetryData const&,
        ::std::unordered_map<::std::string, ::std::string> const&
    ) /*override*/;

    virtual void fireServerShutdown() /*override*/;

    virtual void fireSafetyServiceTextProcessEvent(
        ::std::string const&,
        ::TextProcessingEventOrigin,
        ushort,
        ::std::string const&,
        bool,
        double,
        char,
        char,
        ::Json::Value const&,
        bool,
        bool
    ) /*override*/;

    virtual void fireBannedSkinVerificationEvent(
        uint const&,
        ::std::string const&,
        bool,
        int const,
        ::std::string const&
    ) /*override*/;

    virtual void
    fireEventPlayerReportSent(bool, ::std::string const&, ::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventOneDSPlayerReportPayload(::std::string const&, ::std::string const&) /*override*/;

    virtual void firePlayerAccountMetadata(
        ::Social::PermissionCheckResult,
        ::Social::PermissionCheckResult,
        ::Social::PermissionCheckResult,
        ::Social::PermissionCheckResult,
        ::Social::PermissionCheckResult,
        ::Social::PermissionCheckResult,
        bool,
        bool
    ) /*override*/;

    virtual void fireEventSafetyHTTPRequest(::std::string const&, ::std::string const&, int const) /*override*/;

    virtual void fireEventProfanityFilter(bool, bool, bool) /*override*/;

    virtual void fireEventChatFloodingActionTaken(
        ::std::string const&,
        ::Safety::ChatFloodingAction,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventTextProcessorStartupFailed(::std::string const&, int, int) /*override*/;

    virtual void fireEventBlockUser(::std::string const&, bool, bool) /*override*/;

    virtual void fireEventMuteUser(::std::string const&, bool, bool) /*override*/;

    virtual void fireWorldRecoveryTelemetryEvent(::Bedrock::WorldRecoveryTelemetryEvent const&) /*override*/;

    virtual ::Json::Value propertiesAsJsonValue() const /*override*/;

    virtual void fireEventUwpToGdkMigrationComplete(
        ::Bedrock::DeviceIdContext const&,
        ::std::string const&,
        ::std::string_view
    ) /*override*/;

    virtual void fireEventOSKErrorEncountered(::std::string_view) /*override*/;

    virtual void fireNetworkChangedEvent(::std::string const&) /*override*/;

    virtual void fireEventMessageServiceImpression(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        bool const,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventMessageReceived(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        bool const,
        ::std::string const&
    ) /*override*/;

    virtual void
    fireEventPartyPlayFabError(::std::string const&, ::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventPartyButtonPressed(::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventPartyTravelToastExpired(::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventGoogleAccountHoldWarning(bool) /*override*/;

    virtual void fireDelayedEventReportOfflineAction(::std::string const&) /*override*/;

    virtual void fireEventFeedbackSubmitted(::std::string const&, bool, bool) /*override*/;

    virtual void fireEventTrackDeeplinks(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventUriActivation(::std::string const&, ::std::string const&) /*override*/;

    virtual void fireEventReceivedUniqueWebSessionId(::std::string const&) /*override*/;

    virtual void fireEventReceivedUniqueLauncherSessionId(::std::string const&) /*override*/;

    virtual void firePlayerUnexpectedFallDamage(float const, bool, float const) /*override*/;

    virtual void fireEventActorMovementCorrectionDivergence(::ActorType, ::std::vector<float> const&) /*override*/;

    virtual void fireEventDedicatedServerDiscoveryResponse(int const, int const) /*override*/;

    virtual void fireEventInGamePause(bool) /*override*/;

    virtual void fireEventGameTip(int, int, int, ::InputMode) /*override*/;

    virtual void
    fireEventAddedFriend(::std::string const&, ::IMinecraftEventing::AddedFriendLocation, bool) /*override*/;

    virtual void fireEventInboxSummary(::Social::Events::InboxSummaryData const&) /*override*/;

    virtual void fireEventTrialStatusFailed(int) /*override*/;

    virtual void fireEventSaveDataExpansion(uint64, uint64, uint64) /*override*/;

    virtual void fireEventProfileButtonPressed(::std::string const&) const /*override*/;

    virtual void fireEventWorldCopy(uint64, uint64, ::LevelSeed64) /*override*/;

    virtual void
    fireEventWriteBudgetLow(uint64, float, float, ::std::chrono::nanoseconds, bool, ::std::string const&) /*override*/;

    virtual void fireEventWriteBudgetReplenished(
        ::std::chrono::nanoseconds,
        uint64,
        ::std::optional<uint64>,
        ::std::chrono::nanoseconds,
        bool,
        ::std::string const&
    ) /*override*/;

    virtual void fireEventLargeFileWriteStall(
        uint64,
        ::std::vector<::std::string> const&,
        ::std::chrono::nanoseconds,
        ::std::chrono::nanoseconds,
        ::std::string const&,
        uint64,
        bool,
        ::std::chrono::nanoseconds,
        ::std::chrono::nanoseconds,
        int,
        uint64,
        ::std::vector<::std::string> const&
    ) /*override*/;

    virtual void fireEventLowMemoryDetected(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>,
        ::LowMemoryReport const&
    ) /*override*/;

    virtual void fireEventReceivedApplicationExitInfo(
        ::std::string const&,
        int,
        int,
        int,
        int64,
        int64,
        ::std::string const&,
        bool
    ) /*override*/;

    virtual void fireEventImmersiveReaderStatus(::Bedrock::Http::Status const) /*override*/;

    virtual void
        fireEventPacketSerializationMismatch(::MinecraftPacketIds, ::std::string_view, ::std::string_view) /*override*/;

    virtual void fireEventPUVLoad(::std::string const&, ::PuvLoadData::TelemetryEventData&&) /*override*/;

    virtual void fireEventRemoteDesktop(bool) /*override*/;

    virtual void fireEventResourceProcessingPerf(::ResourceProcessingPerfData const&) /*override*/;

    virtual void fireEventOnlineAudioStreamEnded(::OnlineAudioStreamEnded const&) /*override*/;

    virtual void fireEventDimensionTransfer(::DimensionTransferTelemetryData const&) /*override*/;

    virtual ::Social::Events::EventManager& getEventManager() const /*override*/;

    virtual uint getPrimaryLocalUserId() const /*override*/;

    virtual bool getShouldHaveAchievementsEnabled() /*override*/;

    virtual void setShouldHaveAchievementsEnabled(bool) /*override*/;

    virtual bool getAchievementsAlwaysEnabled() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinecraftEventing(::Core::Path const& logFileDir, ::MinecraftEventingDependencies&& deps);

#ifdef LL_PLAT_S
    MCAPI void initForDedicatedServer(
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&                          appPlatform,
        bool                                                                      eventRecordingEnabled,
        ::brstd::move_only_function<::Identity::EduDSTelemetryIdentifier() const> getEduDSTelemetryIdentifier
    );
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void fireEventAgentCreated(::Player& player);
#endif

    MCAPI static void fireEventAwardAchievement(::Player* player, ::MinecraftEventing::AchievementIds achievementId);

#ifdef LL_PLAT_C
    MCAPI static void fireEventBarrelBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );
#endif

    MCAPI static void fireEventBehaviorErrored(::Player* player, ::std::string const& errorMessage);

    MCAPI static void fireEventBehaviorFailed(::Player* player, ::std::string const& failureMessage);

    MCAPI static void fireEventBellBlockUsed(::Player* player, ::std::string const& itemUsed);

    MCAPI static void fireEventBlockBroken(
        ::Player*                                 player,
        ::Block const&                            destroyedBlock,
        ::MinecraftEventing::BlockPlacementMethod method,
        int                                       variantData
    );

    MCAPI static void fireEventBlockFound(::Player* player, ::BlockPos const& blockPos);

#ifdef LL_PLAT_C
    MCAPI static void fireEventBlockPlaced(::Player* player, ::Block const& placedBlock, bool underWater);

    MCAPI static void fireEventBookCopied(::Player* player, ::ItemInstance const& book);

    MCAPI static void fireEventBookEdited(::Player* player, ::ItemDescriptor const& item, uint pageCount);

    MCAPI static void fireEventBookExported(::Player* player, int textPageCount, int photoPageCount);

    MCAPI static void fireEventBookImageImported(::Player* player);

    MCAPI static void fireEventBossKilled(::Player* player, int partySize, int64 bossUniqueId, int bossType);
#endif

    MCAPI static void fireEventCampfireBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

#ifdef LL_PLAT_C
    MCAPI static void fireEventCaravanChanged(::Mob& mob, int caravanSize);

    MCAPI static void
    fireEventCartographyBlockUsed(::Player* player, ::std::string const& itemUsed, ::MapOutputType mapOutputType);

    MCAPI static void fireEventCauldronBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

    MCAPI static void fireEventCauldronUsed(::Player* player, short contentsType, uint contentsColor, short fillLevel);

    MCAPI static void fireEventCommandBlockEdited(
        ::Player*                 player,
        ::BaseCommandBlock const& commandBlock,
        bool                      isMinecart,
        ::CommandBlockMode        mode,
        bool                      isConditionalMode,
        bool                      isRedstoneMode
    );

    MCAPI static void fireEventComposterBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

    MCAPI static void fireEventCraftingSessionStart(::Player* player, uint craftingType);

    MCAPI static void fireEventCustomContentRegistered(::Player* player, int customBlockCount);

    MCAPI static void fireEventDecoratedPotCrafted(::Player* player, ::std::array<::std::string, 4> const& sides);

    MCAPI static void fireEventEndOfDay(::Player* player, ::Level& level);

    MCAPI static void fireEventEntityInteracted(
        ::Player const*                      player,
        int                                  legacyInteractedEntityType,
        ::MinecraftEventing::InteractionType interactionType,
        int                                  interactedEntityVariant,
        uchar                                interactedEntityColor,
        ::Actor const*                       interactedEntity
    );

    MCAPI static void fireEventGameTypeChanged(::Player* player, ::GameType oldGameType, ::GameType newGameType);

    MCAPI static void fireEventGrindstoneBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

    MCAPI static void fireEventItemAcquired(
        ::Player*               player,
        ::ItemDescriptor const& itemDescriptor,
        uint                    amountAcquired,
        ::ItemAcquisitionMethod itemAcquisitionMethod
    );

    MCAPI static void fireEventItemCrafted(
        ::Player*             player,
        ::ItemInstance const& item,
        bool                  recipeBook,
        bool                  hadSearchString,
        bool                  craftedAutomatically,
        int                   startingTabId,
        int                   endingTabId,
        int                   numTabsChanged,
        bool                  filterOn,
        bool                  recipeBookShown
    );

    MCAPI static void fireEventItemDropped(::Player* player, ::ItemDescriptor const& item);

    MCAPI static void fireEventItemEquipped(::Player* player, ::ItemInstance const& item, int slot);

    MCAPI static void fireEventItemInteracted(
        ::Player*                               player,
        ::ItemInstance const&                   item,
        ::MinecraftEventing::ItemInteractMethod method
    );

    MCAPI static void fireEventItemNamed(::Player* player, ::ItemDescriptor const& item);

    MCAPI static void
    fireEventItemSmelted(::Player* player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem);
#endif

    MCAPI static void fireEventItemUsed(::Player* player, ::ItemDescriptor const& item, ::ItemUseMethod useMethod);

    MCAPI static void fireEventJukeboxUsed(::Player* player, ::ItemDescriptor const& disc, ::BiomeIdType biome);

#ifdef LL_PLAT_C
    MCAPI static void fireEventLecternBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );
#endif

    MCAPI static void fireEventMobDied(::Mob& mob, int causeOfDeath);

    MCAPI static void fireEventMobEffectChanged(
        ::Mob&                          mob,
        ::MobEffectInstance const&      effectInstance,
        ::MinecraftEventing::ChangeType change
    );

#ifdef LL_PLAT_C
    MCAPI static void fireEventMobKilled(
        ::Player*            player,
        ::Actor*             entKiller,
        ::Mob&               mobKilled,
        uint                 method,
        ::std::string const& traderName,
        int                  traderTier
    );
#endif

    MCAPI static void fireEventMobTeleportedToOwner(::Mob& mob);

#ifdef LL_PLAT_C
    MCAPI static void fireEventMultiplayerRoundEnd(::Player* player, int exitStatus);

    MCAPI static void fireEventMultiplayerRoundStart(::Player* player, ::Level& level);

    MCAPI static void fireEventPOIBlockUsed(
        ::Player*                              player,
        ::std::string const&                   itemUsed,
        ::MinecraftEventing::PoiEventBlockType blockType
    );

    MCAPI static void
    fireEventPiglinBarter(::Player* player, ::std::string const& itemUsed, bool wasTargetingBarteringPlayer);

    MCAPI static void fireEventPlayerDied(::Player* player, int killerId, int killerVariant, int reason, bool inRaid);

    MCAPI static void
    fireEventPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);

    MCAPI static void fireEventPlayerSaved(::Player* player);
#endif

    MCAPI static void fireEventPlayerTeleported(
        ::Player*                               player,
        float                                   metersTravelled,
        ::MinecraftEventing::TeleportationCause cause,
        int                                     sourceType
    );

    MCAPI static void fireEventPlayerTransform(::Player& player);

#ifdef LL_PLAT_C
    MCAPI static void fireEventPortalUsed(::Player* player, ::DimensionType dimToId, ::DimensionType dimFromId);

    MCAPI static void fireEventPotionBrewed(::Player* player, ::ItemDescriptor const& item, uint itemCount);

    MCAPI static void fireEventSignedBookOpened(::Player* player, bool isAuthor);
#endif

    MCAPI static void fireEventSlashCommandExecuted(
        ::Player*            player,
        ::std::string const& commandName,
        int                  successCount,
        int                  errorCount,
        ::std::string const& errorList
    );

#ifdef LL_PLAT_C
    MCAPI static void fireEventTargetBlockHit(::Player* player, int redstoneLevel);

    MCAPI static void fireEventTradeCompleted(
        ::Player*               player,
        ::Actor*                trader,
        ::ItemDescriptor const& itemA,
        ::ItemDescriptor const& itemB,
        ::ItemInstance const&   tradedFor,
        int                     traderEmeraldCount
    );

    MCAPI static void fireEventTrimApplied(::Player* player, ::ArmorTrim const& armorTrim);

    MCAPI static void fireEventWaxOnWaxOff(::Player* player, int blockID);
#endif

    MCAPI static void fireEventWolfArmorDamageValueChanged(
        ::Actor&                owner,
        ::ItemDescriptor const& item,
        int                     oldDamageValue,
        int                     newDamageValue
    );

#ifdef LL_PLAT_C
    MCAPI static void fireEventWorldUnloaded(::Player* player, ::LevelData const& levelData, uint unloadReason);

    MCAPI static void fireInviteStatusSent(::Player* player, ::std::vector<::std::string> invitationIds);

    MCAPI static void fireRaidEvent(::Player* player, int currentwave, int totalWaves, bool success);
#endif

    MCAPI static void onActorSpawned(::Actor const& actor, ::std::optional<::std::string> customInit, ::Actor* spawner);

    MCAPI static void onMobDied(::Mob const& mob, ::std::string const& cause);

    MCAPI static void onVehicleEntered(::Player& player, ::Actor& vehicle);

    MCAPI static void onVehicleExited(::Player& player);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::Social::Events::AchievementEventing>& mAchievementEventing();

    MCAPI static ::Social::Events::MobTelemetry& mMobTelemetry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path const& logFileDir, ::MinecraftEventingDependencies&& deps);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
