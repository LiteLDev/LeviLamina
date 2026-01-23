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
#include "mc/deps/core/utility/ValidationStatus.h"
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
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/server/safety/ChatFloodingAction.h"
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
class IPurchaseEventing;
class IRealmsTelemetry;
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
class PushNotificationMessage;
class ScriptPluginResult;
class StructureEditorData;
class StructureTelemetryClientData;
class TaskGroup;
class TelemetryInfo;
struct AsyncJoinAllow;
struct AsyncJoinDeny;
struct ChunkRecyclerTelemetryOutput;
struct DBStoragePerformanceTelemetryData;
struct ExtraLicenseData;
struct LevelStorageEventingContext;
struct LowMemoryReport;
struct MinecraftEventingDependencies;
struct NewBlockID;
struct PacksInfoData;
struct ProfilerLiteTelemetry;
struct SplitScreenUpdatedEventData;
struct StackStats;
struct WebviewDownloadInfo;
struct glTFExportData;
namespace Bedrock { class SessionInfo; }
namespace Bedrock { struct CrashUploadStatus; }
namespace Bedrock { struct DeviceIdContext; }
namespace Bedrock { struct DirectoryEntry; }
namespace Bedrock { struct WorldRecoveryTelemetryEvent; }
namespace Bedrock::Http { class Status; }
namespace Core { class Path; }
namespace Core::Profile { struct FileCounters; }
namespace Identity { struct EduDSTelemetryIdentifier; }
namespace Json { class Value; }
namespace PlayerMessaging { struct SigninID; }
namespace PuvLoadData { struct TelemetryEventData; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct PlayerIDs; }
namespace Social::Events { class AchievementEventing; }
namespace Social::Events { class Event; }
namespace Social::Events { class EventManager; }
namespace Social::Events { class IEventListener; }
namespace Social::Events { class Measurement; }
namespace Social::Events { class MobTelemetry; }
namespace Social::Events { class PlayerTelemetry; }
namespace Social::Events { class Property; }
namespace Social::Events { class RealtimeRoute; }
namespace Social::Events { class ScreenFlow; }
namespace Social::Events { class TelemetryHeartbeat; }
namespace Social::Events { struct InboxSummaryData; }
namespace Webview { struct TelemetryCommonProperties; }
namespace mce { class UUID; }
namespace Legacy { struct WorldConversionReport; }
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
        Count                           = 116,
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
        ::ll::UntypedStorage<8, 8> mUnk60033d;
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
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Social::IUserManager>>     mUserManager;
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
    virtual ~MinecraftEventing() /*override*/;

    virtual ::IPurchaseEventing& getPurchaseEventing() /*override*/;

    virtual void init(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const& userManager,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&             appPlatform
    ) /*override*/;

    virtual void initDeviceAndSessionIds() /*override*/;

    virtual void initEditorEventListener() /*override*/;

    virtual void shutdown() /*override*/;

    virtual void updatePrimaryLocalUserId(uint const& userId) /*override*/;

    virtual ::std::string getUserUID(::Social::IdentityType type, ::std::string const& primaryId) const /*override*/;

    virtual void registerSecondaryUserCommonProperties(uint const& userId, ::std::string const& uid) const /*override*/;

    virtual void unregisterSecondaryUserCommonProperties(uint const& userId) const /*override*/;

    virtual void updateIsLegacyPlayer(bool isLegacyPlayer) const /*override*/;

    virtual void updateIsTrial(bool isTrial) const /*override*/;

    virtual void updateEditionType() const /*override*/;

    virtual void updateClientId() const /*override*/;

    virtual void addListener(::std::unique_ptr<::Social::Events::IEventListener> listener) /*override*/;

    virtual void clearListeners() /*override*/;

    virtual void registerOptionsObserver(
        ::brstd::function_ref<
            ::Bedrock::PubSub::Subscription(::std::function<void(bool)>) const,
            ::Bedrock::PubSub::Subscription(::std::function<void(bool)>)> registerObserver
    ) /*override*/;

    virtual void setTestBuildIdTag(char const* id) /*override*/;

    virtual void removeTestBuildIdTag() /*override*/;

    virtual void setTestTelemetryTag(char const* name) /*override*/;

    virtual void removeTestTelemetryTag() /*override*/;

    virtual void stopDebugEventLoggingForAllListeners() /*override*/;

    virtual void tick() /*override*/;

    virtual void forceSendEvents() /*override*/;

    virtual ::std::string getSessionId() /*override*/;

    virtual ::std::string const& getPlayerSessionId() /*override*/;

    virtual ::std::chrono::steady_clock::time_point getWorldSessionIdGenerationTimestamp() const /*override*/;

    virtual void fireEventDefaultGameTypeChanged(::GameType, ::GameType) /*override*/;

    virtual void fireEventWorldLoaded(
        ::Player* player,
        ::brstd::function_ref<
            void(::Social::Events::EventManager&, ::Social::Events::Event&) const,
            void(::Social::Events::EventManager&, ::Social::Events::Event&)> writer
    ) /*override*/;

    virtual void fireEventMarkLevelForSync(
        ::std::string const&                         levelId,
        int64                                        local,
        int64                                        remote,
        ::IMinecraftEventing::MarkLevelForSyncReason reason
    ) /*override*/;

    virtual void fireEventLockedItemGiven() /*override*/;

    virtual void fireEventWorldLoadTimes(
        ::std::string const&                                   calledFromScreen,
        ::std::vector<::std::pair<::std::string, float>> const progressHandlerLoadTimes
    ) /*override*/;

    virtual void fireEventBlockPlacedByCommand(::Block const& placedBlock, int numberOfBlocksPlaced) /*override*/;

    virtual void fireEventEntitySpawned(::Player* player, int mobType, uint spawnMethod) /*override*/;

    virtual void
    fireEventDevSlashCommandExecuted(::std::string const& commandName, ::std::string const& command) /*override*/;

    virtual void fireCommandParseTableTelemetry(
        bool const                                                         isServer,
        ::std::vector<::IMinecraftEventing::CommandParseTableEntry> const& parseTableDetails
    ) const /*override*/;

    virtual void
    fireEventPlayerTravelled(::Player* player, float metersTravelledSinceLastEvent, int newBiome) /*override*/;

    virtual void fireEventPlayerBounced(::Player* player, ::Block const& block, int bounceHeight) /*override*/;

    virtual void
    fireEventPlayerDamaged(::Player* player, ::SharedTypes::Legacy::ActorDamageCause damageCause) /*override*/;

    virtual void fireEventSetValidForAchievements(::Player* player, bool currentlyValidForAchievements) /*override*/;

    virtual void fireEventAchievementReceived(
        ::std::string const& title,
        ::std::string const& description,
        ::std::string const& achievementId
    ) /*override*/;

    virtual void updatePlayerUndergroundStatus(::Player* player, bool const isUnderground) /*override*/;

    virtual void
    fireEventPlayerAttemptingExploit(::Player* player, ::IMinecraftEventing::ExploitType exploitType) /*override*/;

    virtual void fireEventWorldGenerated(
        ::std::string const&   levelId,
        ::LevelSettings const& levelSettings,
        bool                   fromTemplate
    ) /*override*/;

    virtual void fireEventMultiplayerClientConnectionStateChanged(
        ::std::string const& connectionType,
        uint                 fromState,
        uint                 toState,
        uint                 port,
        ::std::string const& status
    ) /*override*/;

    virtual void fireEventPacketViolationDetected(
        uint64                     readResult,
        ::std::string              readResultContext,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::NetworkIdentifier const& netId,
        uint                       numViolations,
        ::SubClientId              clientSubId,
        ::SubClientId              senderSubId,
        uint                       packetStreamLength
    ) /*override*/;

    virtual void fireEventServerReceivedValidPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              clientSubId
    ) /*override*/;

    virtual void fireEventClientSentOrReceivedPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              clientSubId,
        ::std::string              correlationId,
        bool                       isOutgoing
    ) /*override*/;

    virtual void fireEventJoinCanceled(::LoadingState currentState) /*override*/;

    virtual void fireEvent(
        ::std::string const&                                eventName,
        ::std::vector<::Social::Events::Property> const&    properties,
        ::std::vector<::Social::Events::Measurement> const& measurements,
        bool                                                shouldAggregate
    ) /*override*/;

    virtual void fireEventBlockTypeRegistryChecksumMismatch(
        ::std::string const& reason,
        uint64 const&        serverBlockChecksum,
        uint64 const&        clientBlockChecksum,
        ::std::string const& serverVersion
    ) /*override*/;

    virtual void fireEventOnSuccessfulClientLogin(::Level const* level) /*override*/;

    virtual void fireEventStartWorld(
        ::NetworkType                                networkType,
        ::std::string const&                         ipAddress,
        ::Social::MultiplayerServiceIdentifier const friendWorldType
    ) /*override*/;

    virtual void fireEventPlayerJoinWorld(
        uint const&                                              userId,
        ::SubClientId const                                      subId,
        bool                                                     isJoiningLocalServer,
        ::std::optional<bool>                                    isUsingTURN,
        ::IConnectionEventing::PlayerJoinWorldAttemptState const JoinState,
        int                                                      attemptId,
        ::Connection::DisconnectFailReason                       failReason,
        ::Json::Value const&                                     failDebugInfo,
        ::TransportLayer                                         transportLayer,
        ::NetworkType                                            networkTypeOverride,
        ::Social::MultiplayerState                               multiplayerState,
        bool                                                     isConnectedToApplicationLayer,
        bool                                                     isFilteringProfanity,
        ::Social::MultiplayerServiceIdentifier                   multiplayerServiceIdentifier,
        ::std::string const&                                     titleMessage,
        ::std::string const&                                     errorMessage,
        ::std::string const&                                     codeword,
        bool                                                     isServerTransfer,
        ::Social::GameConnectionInfo const&                      connectionInfo
    ) /*override*/;

    virtual void fireEventClientLastPackets(
        uint const&          userId,
        ::SubClientId const  subId,
        int                  correlationId,
        ::Json::Value const& lastSentPackets,
        ::Json::Value const& lastReceivedPackets
    ) /*override*/;

    virtual void fireEventSignalServiceConnect(
        ::SignalServiceConnectStage        stage,
        bool                               bIsSigningInAsHost,
        ::Json::Value const&               stageProperties,
        ::PlayerMessaging::SigninID const& signinId,
        ::std::string const&               correlationId,
        bool                               isJsonRpc
    ) /*override*/;

    virtual void fireEventSignalMessagePerformance(
        ::PlayerMessaging::SigninID const& signinId,
        ::MessagePerformance const&        messagePerformanceEvent,
        bool                               isJsonRpc
    ) /*override*/;

    virtual void fireEventOnClientDisconnect(
        ::SubClientId                      subId,
        bool                               isNetworked,
        ::Connection::DisconnectFailReason reason,
        ::std::string const&               titleMessage,
        ::std::string const&               errorMessage,
        ::std::string const&               codeword
    ) /*override*/;

    virtual void fireEventOnServerDisconnect(
        ::Connection::DisconnectFailReason reason,
        ::std::string const&               disconnectedClientId,
        ::SubClientId                      subId,
        ::std::string const&               reasonContext,
        uint64                             clientCount,
        ::std::string const&               firstTimeStamp
    ) /*override*/;

    virtual void fireEventOnServerAsyncJoinTaskVerdict(
        ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny> const& joinVerdict,
        ::SubClientId const                                          subId,
        uint                                                         verdictQueueLength
    ) /*override*/;

    virtual void fireEventHttpClientError(::std::string const& error) /*override*/;

    virtual void fireEventSignInToIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        ::std::string const&                    signInSource,
        bool                                    signInUIShown,
        ::IMinecraftEventing::SignInStage       stage,
        ::Social::SignInResult                  result,
        int                                     retryCount,
        ::Social::PlayerIDs                     ids,
        ::std::string const&                    errorCode
    ) /*override*/;

    virtual void fireEventSignOutOfIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        ::std::string const&                    accountId,
        ::std::string const&                    errorCode
    ) /*override*/;

    virtual void fireEventSignInEdu(
        ::std::string const&                                            mutsUserId,
        ::edu::Role                                                     role,
        ::Identity::EduSignInStage                                      stage,
        ::std::string const&                                            tenantType,
        ::std::string const&                                            error,
        ::std::vector<::std::pair<::std::string, ::std::string>> const& details
    ) /*override*/;

    virtual void fireEventSignOutEdu(
        ::std::string const& mutsUserId,
        ::edu::Role          role,
        ::std::string const& tenantType,
        ::std::string const& action,
        ::std::string const& error
    ) /*override*/;

    virtual void fireEventSwitchAccountEdu(
        ::std::string const& mutsUserId,
        ::edu::Role          role,
        ::std::string const& tenantType
    ) /*override*/;

    virtual void fireEventEduDemoConversion(::edu::Role role, ::LastClickedSource lastClickedSource) /*override*/;

    virtual void fireEventCloudOperationStartedEdu(
        ::EduCloudUtils::Operation const      operation,
        ::EduCloud::CloudItemType const       cloudItemType,
        ::std::string const&                  cloudCorrelationId,
        uint64 const                          size,
        ::std::optional<::std::string> const& driveItemId
    ) /*override*/;

    virtual void fireEventCloudOperationEndedEdu(
        ::EduCloudUtils::Operation const      operation,
        ::EduCloud::CloudItemType const       cloudItemType,
        ::std::string const&                  cloudCorrelationId,
        ::std::chrono::milliseconds const     elapsedTime,
        uint const                            status,
        uint64 const                          size,
        ::std::optional<::std::string> const& driveItemId,
        ::std::optional<::std::string> const& errorCode,
        ::std::optional<::std::string> const& errorMessage,
        ::std::optional<::std::string> const& error
    ) /*override*/;

    virtual void fireEventCloudMyWorldsSummary(
        int const totalWorldsCount,
        int const placeholderCount,
        int const needsUploadCount,
        int const ctagMismatchCount,
        int const conflictCount
    ) /*override*/;

    virtual void fireEventCloudConflictCheckEdu(
        ::std::string const&                       cloudCorrelationId,
        ::EduCloud::ConflictResolutionStatus const conflictStatus
    ) /*override*/;

    virtual void fireEventPopupFiredEdu(
        ::std::string const&          mutsUserId,
        ::std::string const&          dialogType,
        ::std::string const&          experienceId,
        ::std::string const&          title,
        ::ActiveDirectoryAction const postAction
    ) /*override*/;

    virtual void fireEventPlayIntegrityCheck(
        ::std::string const& result,
        ::std::string const& appRecognitionVerdict,
        ::std::string const& deviceIntegrity,
        ::std::string const& appLicensingVerdict
    ) /*override*/;

    virtual void fireServerConnectionEvent(
        ::IConnectionEventing::ServerConnectionOutcome outcome,
        uint                                           pingLatency,
        double                                         timeElapsed,
        ::std::string const&                           creatorName,
        ::std::string const&                           worldId
    ) /*override*/;

    virtual void fireServerConnectionAttemptEvent(
        ::std::string const& creatorName,
        bool                 isTransfer,
        ::std::string const& serverAddress
    ) /*override*/;

    virtual void fireEventServerPlayerJoinedGame(
        ::NetworkIdentifier const& id,
        ::SubClientId              subId,
        ::std::string const&       firstConnectionTime
    ) /*override*/;

    virtual void fireEventScriptPluginDiscovery(::ScriptPluginResult const& pluginResult, bool client) /*override*/;

    virtual void fireEventScriptPluginRun(
        ::ScriptPluginResult const& pluginResult,
        ::std::chrono::microseconds runDuration,
        bool                        client
    ) /*override*/;

    virtual void fireEventScriptDebuggerListen(bool client, bool autoAttach) /*override*/;

    virtual void fireEventScriptDebuggerConnect(bool client, bool autoAttach, int retries) /*override*/;

    virtual void fireEditorEventToolActivated(::std::string const& toolName) /*override*/;

    virtual void fireEditorUndo(::std::string const& transactionName) /*override*/;

    virtual void fireEditorRedo(::std::string const& transactionName) /*override*/;

    virtual void fireEditorScriptAction(
        ::std::string const& scriptSource,
        ::std::string const& actionName,
        ::std::string const& actionMetadata
    ) /*override*/;

    virtual void fireEditorTutorialEvent(
        ::std::string_view                    type,
        ::std::optional<::std::string> const& state,
        ::std::string const&                  currentStage,
        ::std::optional<::std::string> const& previousStage
    ) /*override*/;

    virtual void fireEventStartClient(::std::string const& ipAddress, bool isTextToSpeechEnabled) /*override*/;

    virtual void fireEventHardwareInfo() /*override*/;

    virtual void fireEventDeviceLost() /*override*/;

    virtual void fireEventRenderingSizeChanged() /*override*/;

    virtual void
    fireEventDiskStatus(::DiskStatus status, ::Core::LevelStorageState errorCode, uint64 freeSpace) /*override*/;

    virtual void fireEventStorageAreaFull(
        ::std::string const&                            areaPath,
        ::std::vector<::Bedrock::DirectoryEntry> const& diskSizeData
    ) /*override*/;

    virtual void fireEventAppPaused() /*override*/;

    virtual void fireEventAppUnpaused() /*override*/;

    virtual void fireEventAppSurfaceCreated() /*override*/;

    virtual void fireEventAppSurfaceDestroyed() /*override*/;

    virtual void fireEventPurchaseGameAttempt(
        ::std::string const& storeId,
        ::std::string const& activeTab,
        ::std::string const& productId
    ) /*override*/;

    virtual void fireEventPurchaseGameResult(int purchaseResult) /*override*/;

    virtual void fireEventTrialDeviceIdCorrelation(
        int64                myTime,
        ::std::string const& theirId,
        int64                theirTime,
        ::std::string const& theirLastSessionId
    ) /*override*/;

    virtual void fireEventDeviceIdManagerFailOnIdentityGained() /*override*/;

    virtual void fireEventDlcStorageFull(
        ::std::string const& productId,
        uint64               dlcSize,
        uint64               onDiskScratchSpace,
        uint64               scratchSpace,
        uint64               premiumSpace
    ) /*override*/;

    virtual void fireEventPushNotificationPermission(bool permission, ::std::string const& deviceId) /*override*/;

    virtual void fireEventPushNotificationReceived(::PushNotificationMessage const& msg) /*override*/;

    virtual void
    fireEventPushNotificationOpened(::std::string const& threadId, ::std::string const& deepLink) /*override*/;

    virtual void firePerfTestEvent(
        ::std::string const&                                    testArtifact,
        ::std::string const&                                    modelName,
        ::std::string const&                                    renderSize,
        uint                                                    renderDistance,
        uint                                                    simDistance,
        ::std::string const&                                    memorySize,
        ::std::vector<::std::pair<::std::string, float>> const& testArtifactData
    ) /*override*/;

    virtual void fireEventLicenseCheck(bool isLicensed, ::ExtraLicenseData& data) /*override*/;

    virtual void
    fireQueryOfferResult(::std::string const& storeID, int NumberOfOffers, bool QuerySucceeded) /*override*/;

    virtual void fireEventQueryPurchasesResult(
        ::std::string const& storeID,
        ::std::string const& priorPurchaseIds,
        int                  NumberOfPurchases,
        bool                 QuerySucceeded
    ) /*override*/;

    virtual void fireEventPurchaseFailureDetails(
        int                  httpCode,
        ::std::string const& errorMessage,
        ::std::string const& productId,
        ::std::string const& transactionId
    ) /*override*/;

    virtual void fireEventPlatformStorePurchaseFailure(
        ::std::string const& productId,
        ::std::string const& errorMessage
    ) /*override*/;

    virtual void fireEventDeviceAccountFailure(
        ::IMinecraftEventing::SignInStage               stage,
        ::IMinecraftEventing::DeviceAccountFailurePhase phase,
        uint                                            resultStatus,
        ::std::string const&                            accountID
    ) /*override*/;

    virtual void fireEventDeviceAccountSuccess(bool isNewAccount, ::std::string const& accountID) /*override*/;

    virtual void fireEventEntitlementListInfo(
        ::std::vector<::ContentIdentity>& entitlementContentIds,
        bool                              isLegacyList
    ) /*override*/;

    virtual void fireEventVideoPlayed(::std::string const& productId, ::std::string const& videoUrl) /*override*/;

    virtual void fireEventBundleSubOfferClicked(
        int                  offerIndex,
        int                  bundleSubOfferCount,
        ::std::string const& telemetryId,
        ::std::string const& productId,
        bool                 isOnSale,
        ::std::string const& timeRemainingOnSale
    ) /*override*/;

    virtual void fireEventStoreOfferClicked(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;

    virtual void
    fireEventStoreOfferClicked(::std::string const telemetryId, ::std::string const& productId) /*override*/;

    virtual void fireEventPersonaOfferClicked(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;

    virtual void fireEventStoreSearch(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;

    virtual void fireEventSearchItemSelected(
        int const            correlationId,
        int const            sessionId,
        ::std::string const& productId,
        int const            row,
        int const            column,
        int const            currentPage,
        ::std::string const& searchType
    ) /*override*/;

    virtual void fireEventUserListUpdated(
        ::std::string const& productId,
        ::std::string const& listId,
        ::std::string const& operation,
        bool                 success
    ) /*override*/;

    virtual void fireEventUgcAcquisitionStateChanged(
        ::std::string const& ugcProductId,
        uint64               downloadSize,
        double               elapsedTime,
        bool                 isUpdate,
        int                  retries,
        bool                 silent,
        int                  numContentTrackers,
        ::std::string const& result,
        ::std::string const& resultDetails,
        int                  httpStatus,
        int                  errorCode
    ) /*override*/;

    virtual void fireEventSearchCatalogRequest(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;

    virtual void
    fireEventStoreLocalizationBinaryFetchResponse(int const status, uint const currentFetchAttempt) /*override*/;

    virtual void fireEventStoreSessionResponse(
        ::std::string const& responseType,
        int const            status,
        int const            retryCount,
        bool const           asyncServicesManager
    ) /*override*/;

    virtual void fireEventStoreDiscoveryRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    ) /*override*/;

    virtual void fireEventStoreInventoryRefreshRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    ) /*override*/;

    virtual void fireEventInventoryVersionRefreshRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    ) /*override*/;

    virtual void fireEventServerDrivenLayoutPageLoaded(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::string                                                                               pageID,
        int                                                                                         requestSize,
        int                                                                                         responseSize,
        int                                                                                         rowCount,
        int                                                                                         itemCount,
        int                                                                                         imageCount
    ) /*override*/;

    virtual void fireEventServerDrivenLayoutImagesLoaded(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::string                                                                               pageID,
        int                                                                                         imageCount,
        uint64                                                                                      totalImagesSize,
        int                                                                                         successCount,
        int                                                                                         failCount,
        int                                                                                         cachedCount,
        ::std::vector<ushort>&                                                                      responseCodes
    ) /*override*/;

    virtual void fireEventTreatmentsSet(
        ::std::vector<::std::string> const& treatments,
        ::std::string const&                treatmentContext
    ) /*override*/;

    virtual void fireEventProgressionsSet(::std::vector<::std::string> const& progressions) /*override*/;

    virtual void fireEventTreatmentsCleared() /*override*/;

    virtual void fireEventPackImportTimeout(::std::string const& productId) /*override*/;

    virtual void fireEventFatalClientPackError(
        ::FatalClientPackErrorType       errorType,
        ::gsl::span<::std::string const> packIds
    ) /*override*/;

    virtual void fireEventStoreErrorPage(
        ::std::string const& errorCode,
        ::std::string const& pageId,
        ::std::string const& discoveryServiceTitleId,
        ::std::string const& playFabTitleId
    ) /*override*/;

    virtual void setServerIdsforClient(
        ::std::string const& multiplayerCorrelationId,
        ::std::string const& serverVersion,
        ::std::string const& serverId,
        ::std::string const& worldId,
        ::std::string const& scenarioId,
        ::std::string const& ownerId
    ) /*override*/;

    virtual void setConnectionGUID(::std::string const& connectionGUID) /*override*/;

    virtual void removeConnectionGUID() /*override*/;

    virtual void fireEventOptionsUpdated(
        bool                                                                                        onStartup,
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;

    virtual void fireEventChatSettingsUpdated(
        ::Player const*                                  player,
        ::std::vector<::Social::Events::Property> const& properties
    ) const /*override*/;

    virtual void
    fireEventControlRemappedByPlayer(::std::string const& actionName, ::RawInputType inputType, int keyCode) const
        /*override*/;

    virtual void
        fireEventDifficultySet(::SharedTypes::Legacy::Difficulty, ::SharedTypes::Legacy::Difficulty) /*override*/;

    virtual void
    fireEventGameRulesUpdated(bool oldValue, bool newValue, ::std::string const& gameRuleName) /*override*/;

    virtual void fireEventGameRulesUpdated(int oldValue, int newValue, ::std::string const& gameRuleName) /*override*/;

    virtual void
    fireEventGameRulesUpdated(float oldValue, float newValue, ::std::string const& gameRuleName) /*override*/;

    virtual void fireCurrentInputUpdated(uint userId, ::InputMode inputMode) /*override*/;

    virtual void fireEventSplitScreenUpdated(::SplitScreenUpdatedEventData const& data) /*override*/;

    virtual void fireEventPerformanceMetrics(
        ::ProfilerLiteTelemetry const& profileTelemetry,
        bool                           IsEcoFrameThrottled,
        int                            fpsThrottle
    ) /*override*/;

    virtual void fireEventPerformanceContext(
        ::PerfContextTrackerReport const& perfContextReport,
        bool                              IsEcoFrameThrottled,
        int                               fpsThrottle
    ) /*override*/;

    virtual void fireEventScreenChanged(
        uint const&                                               userId,
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    ) /*override*/;

    virtual void fireEventImGuiScreenChanged(
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    ) /*override*/;

    virtual void fireEventPopupClosed(::std::string const& popupName) const /*override*/;

    virtual void
    fireEventNewContentCheckCompleted(::std::string const& newContentPrefix, bool hasNewStoreContent) /*override*/;

    virtual void fireEventEncyclopediaTopicChanged(::std::string const& topicName, ::InputMode inputMode) /*override*/;

    virtual void fireEventHowToPlayTopicChanged(::std::string const& topicName, ::InputMode inputMode) /*override*/;

    virtual void fireEventAndroidHelpRequest() /*override*/;

    virtual void fireEventWorldFilesListed(
        uint64 numLevels,
        uint64 totalSizeMB,
        uint64 largestLevelMB,
        uint64 smallestLevelMB
    ) /*override*/;

    virtual void fireEventStorage(int state, ::std::string const& extra) /*override*/;

    virtual void fireEventStorageReport(::std::string const& report) /*override*/;

    virtual void fireEventPlayerMessageSay(::std::string const& fromName, ::std::string const& message) /*override*/;

    virtual void fireEventPlayerMessageTell(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    ) /*override*/;

    virtual void fireEventPlayerMessageChat(::std::string const& fromName, ::std::string const& message) /*override*/;

    virtual void fireEventPlayerMessageMe(::std::string const& fromName, ::std::string const& message) /*override*/;

    virtual void fireEventPlayerMessageTitle(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    ) /*override*/;

    virtual void
    fireEventPlayerKicked(::std::string const& sessionType, ::std::string const& kickedPlayer) /*override*/;

    virtual void fireEventPlayerBanned(::std::string const& bannedPlayer) /*override*/;

    virtual void fireEventChunkLoaded(::LevelChunk& chunk) /*override*/;

    virtual void fireEventChunkUnloaded(::LevelChunk& chunk) /*override*/;

    virtual void fireEventChunkChanged(::LevelChunk& chunk) /*override*/;

    virtual void fireEventPackPlayed(::PackInstance const& packInstance, uint priority) /*override*/;

    virtual void fireEventRespondedToAcceptContent(
        ::PacksInfoData const& data,
        bool                   accepted,
        bool                   downloadOptionalResourcePacks
    ) /*override*/;

    virtual void fireEventStackLoaded(::StackStats const& stats) /*override*/;

    virtual void firePackSettingsEvent(
        ::PackSettings const& packSettings,
        ::PackManifest const& manifest,
        ::std::string         serializedPackSettings
    ) /*override*/;

    virtual void fireEventTreatmentPackApplied(::PackManifest const& manifest) /*override*/;

    virtual void fireEventTreatmentPackDownloadFailed(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    ) /*override*/;

    virtual void fireEventTreatmentPackDownloaded(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    ) /*override*/;

    virtual void fireEventTreatmentPackRemoved(::std::string packId) /*override*/;

    virtual void fireCDNDownloadEvent(
        ::std::string const&                                packId,
        ::std::string const&                                versionNumber,
        ::std::string const&                                hostUrl,
        ::IMinecraftEventing::CDNDownloadResult const&      downloadResult,
        ::IMinecraftEventing::CDNDownloadEventOrigin const& origin,
        float const&                                        elapsedTime
    ) /*override*/;

    virtual void
    fireEventContentLogsInWorldSession(::std::string const& logArea, uint errorCount, uint warningCount) /*override*/;

    virtual void fireEventEntitlementCacheLoadTimeout() /*override*/;

    virtual void fireTextToSpeechToggled(bool uiTTS, bool chatTTS) /*override*/;

    virtual void fireEventWorldLoadedClassroomCustomization(
        ::IMinecraftEventing::WorldClassroomCustomization                  customization,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) /*override*/;

    virtual void
    fireClassroomSettingUpdated(::ClassroomSetting classroomSetting, ::SettingsScreenMode settingMode) /*override*/;

    virtual void fireEventNpcPropertiesUpdated(::Actor& npcOwner, bool isEditorWorldbuilder) /*override*/;

    virtual void fireEventBoardTextUpdated(::ChalkboardBlockActor& board) /*override*/;

    virtual void fireEventCameraUsed(bool isSelfie) /*override*/;

    virtual void fireEventPortfolioExported(int imageCount, int captionedCount) /*override*/;

    virtual void fireQuickPlayEvent() /*override*/;

    virtual void firePermissionsSetEvent(
        ::PlayerPermissionLevel const,
        ::CommandPermissionLevel const,
        ::PlayerPermissionLevel const,
        ::CommandPermissionLevel const
    ) /*override*/;

    virtual void fireExternalUriLaunched(::std::string const& uri) const /*override*/;

    virtual void fireUserGeneratedUriLaunched(::UserGeneratedUriSource source) const /*override*/;

    virtual void fireUserGeneratedUriLaunchFailed(
        ::UserGeneratedUriSource              source,
        ::Util::ResourceUri::ValidationStatus reasonCode,
        ::std::string const&                  additionalData
    ) const /*override*/;

    virtual void fireEventEmptyLibraryCategoryError(::std::string const& categoryTitle) const /*override*/;

    virtual void
    fireCodeBuilderCachePerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const
        /*override*/;

    virtual void fireCodeBuilderLoadPerformance(
        ::std::string const&        stage,
        uint64                      tutorialSize,
        uint64                      downloadSize,
        ::std::chrono::milliseconds elapsedTimeMS
    ) const /*override*/;

    virtual void
    fireCodeBuilderRunPerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const
        /*override*/;

    virtual void fireLibraryButtonPressed(
        ::std::string const& productId,
        ::std::string const& worldName,
        ::std::string const& buttonAction
    ) /*override*/;

    virtual void fireCourseButtonPressed(::std::string const& courseTitle, ::std::string const& courseId) /*override*/;

    virtual void fireLessonActionTaken(
        ::std::string const&                        lessonTitle,
        ::std::string const&                        lessonId,
        ::std::string const&                        courseId,
        ::IMinecraftEventing::EducationLessonAction buttonAction,
        int                                         score
    ) /*override*/;

    virtual void fireLessonProgressEvent(
        ::std::string const& lessonTitle,
        ::std::string const& lessonId,
        ::std::string const& courseId,
        ::std::string const& activityId,
        ::std::string const& action,
        ::std::string const& educationCreatorID,
        ::std::string const& educationCreatorWorldID,
        int                  score
    ) /*override*/;

    virtual void fireShareButtonPressed(
        ::std::string const& location,
        ::EduShareUriType    shareType,
        ::EduShareMethodType methodType,
        bool                 includesResource
    ) /*override*/;

    virtual void
    fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint const entryPoint) const
        /*override*/;

    virtual void fireEventEduiOSPurchaseTransaction(::TransactionStatus const& status) const /*override*/;

    virtual void fireInAppCodeBuilderActivated(
        ::OpenCodeMethod     method,
        ::std::string const& ideName,
        ::std::string const& educationCreatorID,
        ::std::string const& educationCreatorWorldID
    ) const /*override*/;

    virtual void fireInAppCodeBuilderDismissed(::std::string const& ideName) const /*override*/;

    virtual void fireCodeCommandButtonPressed() /*override*/;

    virtual void fireIDESelected(::std::string const& name) const /*override*/;

    virtual void fireEventEduResources() const /*override*/;

    virtual void fireEventCodeBuilderClosed() const /*override*/;

    virtual void fireEventCodeBuilderLog(
        ::Webview::TelemetryCommonProperties const& properties,
        ::std::string const&                        message,
        ::std::string&                              level
    ) const /*override*/;

    virtual void fireEventCodeBuilderScoreChanged(::std::string const& objective, int const score) const /*override*/;

    virtual void fireEventEduServiceStatus(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        int                                                                durationMS,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const /*override*/;

    virtual void fireEventCodeBuilderRuntimeAction(::std::string const& action) const /*override*/;

    virtual void
    fireEventWebviewDownload(::std::string const& downloadState, ::WebviewDownloadInfo const& downloadInfo) const
        /*override*/;

    virtual void fireEduServiceRequestFailed(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        ::std::string const&                                               error,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const /*override*/;

    virtual void fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const /*override*/;

    virtual void fireEventOptionsChanged(
        ::std::string const&                            optionGroup,
        ::std::unordered_map<::std::string, int> const& events
    ) const /*override*/;

    virtual void fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const /*override*/;

    virtual void fireEventTagButtonPressed(::std::string const& tag, bool showMore) const /*override*/;

    virtual void fireEventLevelDataOverride(::std::string_view valueName) const /*override*/;

    virtual void fireEventEduContentVerificationFailed() const /*override*/;

    virtual void fireEventLibrarySearch(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) const /*override*/;

    virtual void fireEventLibrarySearchItemSelected(
        int const            sessionId,
        int const            correlationId,
        ::std::string const& productId,
        int const            row,
        int const            column
    ) const /*override*/;

    virtual void fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType updateType, double elapsedTimeSec) const
        /*override*/;

    virtual void fireEventWorldExported(int64 worldSeed, uint64 worldSize) /*override*/;

    virtual void fireEventWorldImported(int64 worldSeed, uint64 worldSize) /*override*/;

    virtual void fireEventWorldImportedResult(::FileArchiverOutcome) /*override*/;

    virtual void
    fireGlobalResourcePackCrashRecovery(::PackInstance& packInstance, ::mce::UUID recoveryID, int order) /*override*/;

    virtual void fireEventRealmShared(
        ::std::string const&                   url,
        ::IMinecraftEventing::ShareMode const& mode,
        int64 const&                           worldId
    ) /*override*/;

    virtual void fireEventRealmMemberlistCleared(int64 const& worldId, int const& numberOfUsersRemoved) /*override*/;

    virtual void fireEventRealmUrlGenerated(::std::string const& url, int64 const& worldId) /*override*/;

    virtual void fireEventStructureExport(
        ::glTFExportData const&             exportData,
        ::IMinecraftEventing::ExportOutcome outcome,
        ::IMinecraftEventing::ExportStage   stage
    ) const /*override*/;

    virtual void fireEventContentShared(
        ::std::string const&                   productId,
        ::std::string const&                   url,
        ::IMinecraftEventing::ShareMode const& mode
    ) /*override*/;

    virtual void fireMinecraftVersionLaunched(bool launchedLegacy) /*override*/;

    virtual void fireMinecraftVersionInviteAccepted(bool launchedLegacy, uint64 inviteGameOwner) /*override*/;

    virtual void fireInviteStatusReceived(::std::string id) /*override*/;

    virtual void fireInviteStatusSentImpl(uint userId, ::std::vector<::std::string> invitationIds) /*override*/;

    virtual void fireDayOneExperienceStateChanged(
        ::IMinecraftEventing::DayOneExperienceState newState,
        ::std::optional<uint>                       importedWorldIndex,
        ::std::optional<uint64>                     importedWorldTimestamp
    ) /*override*/;

    virtual void fireContentDecryptionFailure(
        ::std::string const& failedContentIds,
        ::std::string const& contentKey,
        ::std::string const& failurePoint
    ) /*override*/;

    virtual void fireWorldConversionAttemptEvent(::Legacy::WorldConversionReport const& report) /*override*/;

    virtual void fireWorldConversionInitiatedEvent(::std::string const& converterVersion) /*override*/;

    virtual void fireWorldUpgradedToCnCPart2(
        bool                 willUpgrade,
        ::std::string const& baseGameVersion,
        ::Experiments const& experiments,
        ::std::string const& lastOpenedVersion,
        ::LevelSeed64        worldSeed,
        float                worldSizeMB
    ) /*override*/;

    virtual void fireEventAssertFailed(::std::string const& assertBucket, ::std::string const& message) /*override*/;

    virtual void fireEventCrashSystemFailedToInit() /*override*/;

    virtual void fireChatUsedEvent(uint chatLength, bool isSlashCommand) /*override*/;

    virtual void fireEventJoinByCode(::std::string const&) /*override*/;

    virtual void fireEventAppInitFileOpenStats(
        ::Core::Profile::FileCounters const& openForRead,
        ::Core::Profile::FileCounters const& openForWrite
    ) /*override*/;

    virtual void fireEventStartupPerformance(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;

    virtual void fireEventOnAppStart(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;

    virtual void fireEventOnAppSuspend(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::IMinecraftEventing::SuspendTriggersDisconnect                                             triggersDisconnect,
        bool                                                                                        forceDisableEvents
    ) /*override*/;

    virtual void fireEventOnAppResume(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::optional<int64> sessionAuthValidUntil
    ) /*override*/;

    virtual void fireEventOnDeviceLost(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;

    virtual void
    fireEventRealmsGeneralCall(::std::string const& callName, ::Bedrock::Http::Status returnCode) /*override*/;

    virtual void fireEventRealmsRealmSpecificCall(
        ::std::string const&    callName,
        int64                   realmId,
        ::Bedrock::Http::Status returnCode
    ) /*override*/;

    virtual void fireEventRealmDownload(
        ::std::string const& correlationId,
        ::std::string const& downloadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB
    ) /*override*/;

    virtual void fireEventRealmUpload(
        ::std::string const& correlationId,
        ::std::string const& uploadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB,
        bool const           isPack
    ) /*override*/;

    virtual void
    fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow) /*override*/;

    virtual void
    fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow) /*override*/;

    virtual void fireRealmConnectionEventRealmAPIResponse(
        ::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow,
        int                                       responseCode
    ) /*override*/;

    virtual void fireRealmConnectionEventGenericLambdaCalled(
        ::IMinecraftEventing::RealmConnectionFlow   realmConnectionFlow,
        ::IMinecraftEventing::RealmConnectionLambda realmConnectionLambda,
        ::IMinecraftEventing::RealmConnectionResult realmConnectionResult
    ) /*override*/;

    virtual void fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType              notificationType,
        int                                                         notificationCount,
        ::std::set<::IMinecraftEventing::IgnoredNotificationSource> notificationSources
    ) /*override*/;

    virtual void fireClubsOpenFeedScreenEvent(
        ::IMinecraftEventing::ClubsFeedScreenSource const source,
        int64 const                                       realmId,
        ::std::string const&                              clubId,
        int                                               unreadPosts
    ) /*override*/;

    virtual void fireClubsEngagementEvent(
        ::IMinecraftEventing::ClubsEngagementAction     action,
        ::IMinecraftEventing::ClubsEngagementTargetType engagementTargetType,
        char const*                                     target,
        int64 const                                     realmId,
        ::std::string const&                            clubId
    ) /*override*/;

    virtual void fireEventCopyWorldEducationEnabled() /*override*/;

    virtual void fireEventRespawn(::Player& player, int dimID) /*override*/;

    virtual void
    fireEventServerRespawnSearchTime(::Player& player, ::PlayerRespawnTelemetryData const& data) /*override*/;

    virtual void fireEventUnknownBlockReceived(::NewBlockID const& blockId, ushort data) /*override*/;

    virtual void fireEventCompoundCreatorCreated(int compoundId, int count) /*override*/;

    virtual void fireEventLabTableCreated(int reactionId, int productId, int productAux) /*override*/;

    virtual void fireEventElementConstructorUsed(
        int                                             atomicNumber,
        int                                             count,
        ::IMinecraftEventing::ElementConstructorUseType useType
    ) /*override*/;

    virtual void fireEventReducerBlockEntered(::ItemDescriptor const& item) /*override*/;

    virtual void fireEventMultiplayerSessionUpdate(::Bedrock::NonOwnerPointer<::Level> level) /*override*/;

    virtual void fireEventLevelDestruct(bool isTransfer) /*override*/;

    virtual void flagEventDeepLink() /*override*/;

    virtual void flagEventPlayerGameTypeDefault(bool isDefault) /*override*/;

    virtual void fileEventCloudWorldPullFailed(
        ::std::string const& reason,
        ::std::string const& worldID,
        bool                 localLevelDatUsed
    ) /*override*/;

    virtual void
    fireEventLevelDatLoadFailed(::std::string const& reason, ::std::string const& worldID, bool isFatal) /*override*/;

    virtual void fireEventWorldCorruptionCausedWorldShutdown(
        ::LevelStorageEventingContext const& context,
        ::std::string const&                 reason,
        ::std::optional<bool>                isOutOfDiskSpace
    ) /*override*/;

    virtual void
    fireEventClientLeftGameDueToUnrecoverableError(::std::string const& reason, bool isServer) /*override*/;

    virtual void fireEventServerShutdownDueToError(::std::string const& reason) /*override*/;

    virtual void fireEventServerInitializationFailed(
        ::std::string const& failReason,
        bool                 serverLevelExists,
        bool                 serverNetworkHandlerValid
    ) /*override*/;

    virtual void fireEventDBStorageSizeSnapshot(
        ::LevelStorageEventingContext const& context,
        ::DBStorageFolderWatcher const&      folderWatcher,
        ::DBStorageFolderWatcherSnapshotKind kind
    ) /*override*/;

    virtual void fireEventLevelDBPerformanceData(
        ::LevelStorageEventingContext const&       context,
        ::DBStoragePerformanceTelemetryData const& perfData
    ) /*override*/;

    virtual void
    fireEventDBReadFail(::LevelStorageEventingContext const& context, ::std::string const& reason) /*override*/;

    virtual void fireEventWorldHistoryPackSourceMissingDuringUpgrade(
        ::std::string const& worldPath,
        ::std::string const& levelId,
        ::std::string const& deletionCandidate
    ) /*override*/;

    virtual void fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    ) /*override*/;

    virtual void fireStructureBlockRedstoneActivated(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    ) /*override*/;

    virtual void fireEventSidebarNavigation(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& telemetryId,
        int const            depthLevel,
        bool const           isSelected,
        bool const           areChildrenVisible,
        bool const           hasChildren
    ) /*override*/;

    virtual void fireEventSidebarVerboseToggled(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& verboseNavigationType,
        bool const           verboseState
    ) /*override*/;

    virtual void fireEventPersonaUserLoadedActive(
        ::persona::ProfileType const personaProfile,
        ::std::string const&         classicSkinId,
        bool                         personaUsesClassicSkin
    ) /*override*/;

    virtual void fireEventPersonaItemPreviewed(
        ::persona::ProfileType const        personaProfile,
        ::std::string const&                itemOfferId,
        ::std::string const&                productId,
        uint                                row,
        uint                                column,
        ::IMinecraftEventing::PromotionType promotionType,
        bool                                isOwned,
        ::std::string const&                creatorId,
        ::std::string const&                creatorName,
        double                              secondsToLoadContent,
        ::StoreEventData::StoreType         storeType
    ) /*override*/;

    virtual void fireEventPersonaAvatarUpdated(
        ::persona::ProfileType const        personaProfile,
        ::std::vector<::std::string> const& newAppearancePieceIds,
        ::std::vector<bool> const&          newPieces,
        ::std::vector<bool> const&          tintedPieces,
        bool                                isNewPersona,
        bool                                isBeingDeleted,
        ::std::string const&                bodySize,
        ::std::string const&                armSize,
        ::std::string const&                classicSkinId,
        bool                                usesClassicSkin,
        ::std::vector<::std::string> const& emotesPieceIds,
        ::std::vector<::std::string> const& emoteSlotNumbers
    ) /*override*/;

    virtual void fireEventPersonaSkinChanged(
        ::persona::ProfileType const personaProfile,
        ::std::string const&         classicSkinId,
        bool                         isClassicSkinUsed
    ) /*override*/;

    virtual void
    fireEventPersonaAvatarsListed(::std::vector<::persona::ProfileType> const& profileTypesUsed) /*override*/;

    virtual void fireEventPersonaEmotePlayed(
        ::std::string const& emoteProductId,
        bool                 isEmoteEndedEarly,
        int                  emoteSlotId
    ) /*override*/;

    virtual void fireEventDefaultCastSelected(
        int                  previewIndex,
        ::mce::UUID          appearanceId,
        ::std::string const& appearanceName
    ) /*override*/;

    virtual void fireEventPersonaInitalizationEvent(
        uint                 secondsToCompletion,
        ::std::string const& status,
        ::std::string const& user
    ) /*override*/;

    virtual void
    fireEventPersonaGeneralError(::std::string const& personaErrorName, uint duplicateErrorsFired) /*override*/;

    virtual void fireEventPersonaLoadingPieces(uint piecesLoaded, double timeToLoadInSeconds) /*override*/;

    virtual void fireEventPersonaStillLoading(
        bool                                         isSignedIn,
        bool                                         selectedSkinInitialized,
        bool                                         isStillSyncingWithService,
        bool                                         isRepoStillBuildingAppearances,
        bool                                         isPendingSkinStillLoading,
        bool                                         isRefreshingEntitlements,
        bool                                         isUserUpdateInProgress,
        bool                                         isSelectedSkinLoaded,
        ::std::vector<::persona::ProfileType> const& failingPersonaProfiles,
        int                                          unknownPersonasCount,
        double                                       timeElapsed
    ) /*override*/;

    virtual void fireEventPersonaCreationFailed(
        ::std::string const& errorName,
        ::std::string const& pieceId,
        bool                 missingTop,
        bool                 missingBottom,
        ::std::string const& repositoryPieceType,
        ::std::string const& appearancePieceType
    ) /*override*/;

    virtual void fireEventPersonaCategoryInformation(::std::string const& categoryInformation) /*override*/;

    virtual void fireEventDisplayLoggedError(
        ::std::string const& errorMessageTemplate,
        ::std::string const& errorMessage,
        ::std::string const& errorParameters
    ) /*override*/;

    virtual void fireEventOreUIError(uint const& userId, ::std::string const& errorType) /*override*/;

    virtual void fireEventOreUIScreenPerformance(
        uint const&                                                                                 userId,
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;

    virtual void fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool const           isOwner
    ) /*override*/;

    virtual void fireEventOnboardingWorldCreationUsage(
        bool onboardingWorldCreationUsed,
        bool hasWorlds,
        bool hasOnlyBaseGamePacks
    ) /*override*/;

    virtual ::std::shared_ptr<void*> requestEventDeferment() /*override*/;

    virtual ::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> getCrashTelemetryProcessor() /*override*/;

    virtual void sendCrashTelemetryNow(::std::shared_ptr<::Bedrock::SessionInfo> session) /*override*/;

    virtual void addCrashTelemetryToBatch(::std::shared_ptr<::Bedrock::SessionInfo> session) /*override*/;

    virtual void sendBatchedCrashTelemetry() /*override*/;

    virtual void sendCrashStatusTelemetry(::Bedrock::CrashUploadStatus const& status) /*override*/;

    virtual void fireEventLevelChunkPerformanceData(bool isClientSide) /*override*/;

    virtual void fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const& output) /*override*/;

    virtual void
    fireEventActorValueValidationFailed(::std::string const& invalidValue, char const* caller) /*override*/;

    virtual void fireScreenLoadTimeUpdateEvent(
        uint const&                userId,
        ::std::string const&       screenName,
        ::std::chrono::nanoseconds duration,
        ::std::string const&       loadInstanceId
    ) /*override*/;

    virtual void
    fireDBStorageError(::LevelStorageEventingContext const& context, ::std::string const& errorType) /*override*/;

    virtual void fireStorageMigrationEvent(
        bool                                              isSuccessful,
        ::Bedrock::StorageMigration::StorageMigrationType migrationType,
        int                                               numFilesMigrated,
        int                                               numFilesTotal,
        ::std::chrono::nanoseconds                        duration,
        ::std::string const&                              failureReason
    ) /*override*/;

    virtual void fireEventConnectedStorageResult(
        ::ConnectedStorageEventType eventType,
        bool                        succeeded,
        uint                        durationMs,
        ::std::optional<uint>       chunksSent,
        ::std::string const&        errorMessage,
        ::std::string const&        levelId,
        int64                       quotaRemaining,
        ::std::optional<uint>       filesToAddCount,
        ::std::optional<uint>       filesToDeleteCount,
        ::std::optional<uint>       HACK_oldFilesToDeleteCount
    ) /*override*/;

    virtual void fireEventConnectedStorageError(
        char const*          message,
        ::std::string const& levelId,
        int64                quotaRemaining
    ) /*override*/;

    virtual void fireServerStarted(
        ::LevelSettings const&                                    settings,
        ::std::unordered_map<::std::string, ::std::string> const& propertiesChanged
    ) /*override*/;

    virtual void fireServerShutdown() /*override*/;

    virtual void fireSafetyServiceTextProcessEvent(
        ::std::string const&        authorId,
        ::TextProcessingEventOrigin eventOrigin,
        ushort                      responseCode,
        ::std::string const&        message,
        bool                        wasFlagged,
        double                      responseTime,
        char                        risk,
        char                        trustLevel,
        ::Json::Value const&        events,
        bool                        isProcessorOffline,
        bool                        isCachedResponse
    ) /*override*/;

    virtual void fireBannedSkinVerificationEvent(
        uint const&          userId,
        ::std::string const& serverType,
        ::std::string const& skinData,
        bool                 wasApproved,
        int const            eventCode,
        ::std::string const& message
    ) /*override*/;

    virtual void fireEventPlayerReportSent(
        bool                 successfulReportSent,
        ::std::string const& failureSource,
        ::std::string const& failureReason,
        ::std::string const& reportID
    ) /*override*/;

    virtual void fireEventOneDSPlayerReportPayload(
        ::std::string const& reportPayloadJson,
        ::std::string const& reportID
    ) /*override*/;

    virtual void firePlayerAccountMetadata(
        ::Social::PermissionCheckResult multiPlayerAllowed,
        ::Social::PermissionCheckResult chatAllowed,
        ::Social::PermissionCheckResult addFriendAllowed,
        ::Social::PermissionCheckResult ugcAllowed,
        ::Social::PermissionCheckResult clubsAllowed,
        ::Social::PermissionCheckResult viewProfilesAllowed,
        bool                            isChildAccount,
        bool                            isGuest
    ) /*override*/;

    virtual void fireEventSafetyHTTPRequest(
        ::std::string const& method,
        ::std::string const& url,
        int const            responseCode
    ) /*override*/;

    virtual void fireEventProfanityFilter(bool localFilter, bool remoteFilter, bool playerFilter) /*override*/;

    virtual void fireEventChatFloodingActionTaken(
        ::std::string const&         authorXuid,
        ::Safety::ChatFloodingAction action,
        ::std::string const&         message
    ) /*override*/;

    virtual void
    fireEventTextProcessorStartupFailed(::std::string const& stage, int retryCount, int maxRetryCount) /*override*/;

    virtual void fireEventBlockUser(::std::string const& xuid, bool isSuccess, bool isBlocked) /*override*/;

    virtual void fireEventMuteUser(::std::string const& xuid, bool isSuccess, bool isMuted) /*override*/;

    virtual void fireWorldRecoveryTelemetryEvent(::Bedrock::WorldRecoveryTelemetryEvent const& data) /*override*/;

    virtual ::Json::Value propertiesAsJsonValue() const /*override*/;

    virtual void fireEventUwpToGdkMigrationComplete(
        ::Bedrock::DeviceIdContext const& deviceIdContext,
        ::std::string const&              gdkDeviceId,
        ::std::string_view                migrationErrors
    ) /*override*/;

    virtual void fireNetworkChangedEvent(::std::string const& networkConnectionType) /*override*/;

    virtual void fireEventMessageServiceImpression(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl
    ) /*override*/;

    virtual void fireEventMessageReceived(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl
    ) /*override*/;

    virtual void fireEventGoogleAccountHoldWarning(bool navigatedToSubscription) /*override*/;

    virtual void fireDelayedEventReportOfflineAction(::std::string const& offlineAction) /*override*/;

    virtual void fireEventFeedbackSubmitted(
        ::std::string const& productId,
        bool                 safetyCheckSuccessful,
        bool                 isValidText
    ) /*override*/;

    virtual void fireEventTrackDeeplinks(
        ::std::string const& deeplinkDestination,
        ::std::string const& deeplinkSource,
        ::std::string const& educationReferrerId,
        ::std::string const& educationReferrerType
    ) /*override*/;

    virtual void fireEventReceivedUniqueWebSessionId(::std::string const& webSessionId) /*override*/;

    virtual void fireEventReceivedUniqueLauncherSessionId(::std::string const& launcherSessionId) /*override*/;

    virtual void
    firePlayerUnexpectedFallDamage(float const fallDistance, bool isVehicle, float const divergenceAmount) /*override*/;

    virtual void fireEventActorMovementCorrectionDivergence(
        ::ActorType                 actorType,
        ::std::vector<float> const& divergences
    ) /*override*/;

    virtual void fireEventDedicatedServerDiscoveryResponse(int const status, int const retryAttempt) /*override*/;

    virtual void fireEventInGamePause(bool pauseStatus) /*override*/;

    virtual void
    fireEventGameTip(int gameTipId, int gameTipEventType, int gameTipTestGroup, ::InputMode inputMode) /*override*/;

    virtual void fireEventAddedFriend(
        ::std::string const&                      addedXuid,
        ::IMinecraftEventing::AddedFriendLocation location,
        bool                                      success
    ) /*override*/;

    virtual void fireEventInboxSummary(::Social::Events::InboxSummaryData const& data) /*override*/;

    virtual void fireEventTrialStatusFailed(int errorCode) /*override*/;

    virtual void
    fireEventSaveDataExpansion(uint64 preExpansionSize, uint64 postExpansionSize, uint64 levelUsedSize) /*override*/;

    virtual void fireEventProfileButtonPressed(::std::string const& entryPoint) const /*override*/;

    virtual void fireEventWorldCopy(uint64 worldSize, uint64 filesSum, ::LevelSeed64 worldSeed) /*override*/;

    virtual void fireEventWriteBudgetLow(
        uint64                     remainingWriteBudget,
        float                      writeRateMBPerMin,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    ) /*override*/;

    virtual void fireEventWriteBudgetReplenished(
        ::std::chrono::nanoseconds throttledTime,
        uint64                     lowestWriteBudget,
        ::std::optional<uint64>    lowestSystemThrottlingPerSec,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    ) /*override*/;

    virtual void fireEventLargeFileWriteStall(
        uint64                              totalWriteSizeBytes,
        ::std::vector<::std::string> const& largestFileNames,
        ::std::chrono::nanoseconds          estimatedTotalWriteTime,
        ::std::chrono::nanoseconds          estimatedTotalWaitTime,
        ::std::string const&                originatingSystem,
        uint64                              budgetBytesAtStartOfOperation,
        bool                                operationWasCancelled,
        ::std::chrono::nanoseconds          totalWriteTime,
        ::std::chrono::nanoseconds          totalWaitTime,
        int                                 numberOfFilesWritten,
        uint64                              budgetBytesAtEndOfOperation,
        ::std::vector<::std::string> const& associatedContentIDs
    ) /*override*/;

    virtual void fireEventLowMemoryDetected(::LowMemoryReport const& report) /*override*/;

    virtual void fireEventReceivedApplicationExitInfo(
        ::std::string const& description,
        int                  reasonCode,
        int                  exitCode,
        int                  importanceCode,
        int64                residentSetSize,
        int64                proportionalSetSize,
        ::std::string const& sessionId,
        bool                 deviceSupportsReasonLowMem
    ) /*override*/;

    virtual void fireEventBug1341395(::std::string const& details) /*override*/;

    virtual void fireEventImmersiveReaderStatus(::Bedrock::Http::Status const status) /*override*/;

    virtual void fireEventPacketSerializationMismatch(
        ::MinecraftPacketIds packetId,
        ::std::string_view   legacyStream,
        ::std::string_view   cerealStream
    ) /*override*/;

    virtual void
    fireEventPUVLoad(::std::string const& resourceCategory, ::PuvLoadData::TelemetryEventData&& loadData) /*override*/;

    virtual ::Social::Events::EventManager& getEventManager() const /*override*/;

    virtual uint getPrimaryLocalUserId() const /*override*/;

    virtual bool getShouldHaveAchievementsEnabled() /*override*/;

    virtual void setShouldHaveAchievementsEnabled(bool value) /*override*/;

    virtual bool getAchievementsAlwaysEnabled() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinecraftEventing(::Core::Path const& logFileDir, ::MinecraftEventingDependencies&& deps);

    MCAPI void _addFlatWorldProperties(::Social::Events::Event& event, ::Json::Value const& flatWorldOptions) const;

    MCAPI void _fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        bool                                           redstoneActivated,
        ::StructureTelemetryClientData const*          telemetryClientData
    );

    MCAPI void _generateWorldSessionId();

    MCAPI void _init(::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform);

    MCAPI void _sendTelemetryHeartbeat(char const* trigger);

    MCAPI void fireEventMobTelemetry(::Social::Events::MobTelemetry& mobTelemetry);

    MCAPI void fireEventPlayerMessage(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message,
        ::std::string const& messageType
    );

    MCAPI void firePlayerTelemetryEvent(::Social::Events::PlayerTelemetry const& playerTelemetry);

    MCAPI void fireRealmsTelemetryEvent(::IRealmsTelemetry const& realmsTelemetry);

    MCAPI_S void initForDedicatedServer(
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&                          appPlatform,
        bool                                                                      eventRecordingEnabled,
        ::brstd::move_only_function<::Identity::EduDSTelemetryIdentifier() const> getEduDSTelemetryIdentifier
    );

    MCAPI void unregisterOptionsObserver();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    OnActorSetMainHand(::Actor const& actor, ::ItemInstance const& ToGoInHand, ::ItemInstance const& WasInHand);

    MCAPI_C static void fireEventAgentCreated(::Player& player);

    MCAPI_C static void fireEventBarrelBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

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

    MCAPI_C static void fireEventBlockPlaced(::Player* player, ::Block const& placedBlock, bool underWater);

    MCAPI_C static void fireEventBookCopied(::Player* player, ::ItemInstance const& book);

    MCAPI_C static void fireEventBookEdited(::Player* player, ::ItemDescriptor const& item, uint pageCount);

    MCAPI_C static void fireEventBookExported(::Player* player, int textPageCount, int photoPageCount);

    MCAPI_C static void fireEventBookImageImported(::Player* player);

    MCAPI static void fireEventCampfireBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

    MCAPI static void fireEventCaravanChanged(::Mob& mob, int caravanSize);

    MCAPI_C static void
    fireEventCartographyBlockUsed(::Player* player, ::std::string const& itemUsed, ::MapOutputType mapOutputType);

    MCAPI_C static void fireEventCauldronBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

    MCAPI_C static void fireEventCommandBlockEdited(
        ::Player*                 player,
        ::BaseCommandBlock const& commandBlock,
        bool                      isMinecart,
        ::CommandBlockMode        mode,
        bool                      isConditionalMode,
        bool                      isRedstoneMode
    );

    MCAPI_C static void fireEventComposterBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

    MCAPI_C static void fireEventCraftingSessionStart(::Player* player, uint craftingType);

    MCAPI_C static void fireEventCustomContentRegistered(::Player* player, int customBlockCount);

    MCAPI_C static void fireEventDecoratedPotCrafted(::Player* player, ::std::array<::std::string, 4> const& sides);

    MCAPI_C static void fireEventEndOfDay(::Player* player, ::Level& level);

    MCAPI_C static void fireEventEntityInteracted(
        ::Player const*                      player,
        int                                  legacyInteractedEntityType,
        ::MinecraftEventing::InteractionType interactionType,
        int                                  interactedEntityVariant,
        uchar                                interactedEntityColor,
        ::Actor const*                       interactedEntity
    );

    MCAPI_C static void fireEventGameTypeChanged(::Player* player, ::GameType oldGameType, ::GameType newGameType);

    MCAPI_C static void fireEventGrindstoneBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

    MCAPI_C static void fireEventItemAcquired(
        ::Player*               player,
        ::ItemDescriptor const& itemDescriptor,
        uint                    amountAcquired,
        ::ItemAcquisitionMethod itemAcquisitionMethod
    );

    MCAPI_C static void fireEventItemCrafted(
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

    MCAPI_C static void fireEventItemEquipped(::Player* player, ::ItemInstance const& item, int slot);

    MCAPI_C static void fireEventItemInteracted(
        ::Player*                               player,
        ::ItemInstance const&                   item,
        ::MinecraftEventing::ItemInteractMethod method
    );

    MCAPI_C static void fireEventItemNamed(::Player* player, ::ItemDescriptor const& item);

    MCAPI static void fireEventItemUsed(::Player* player, ::ItemDescriptor const& item, ::ItemUseMethod useMethod);

    MCAPI_C static void fireEventLecternBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

    MCAPI static void fireEventMobDied(::Mob& mob, int causeOfDeath);

    MCAPI static void fireEventMobEffectChanged(
        ::Mob&                          mob,
        ::MobEffectInstance const&      effectInstance,
        ::MinecraftEventing::ChangeType change
    );

    MCAPI_C static void fireEventMobKilled(
        ::Player*            player,
        ::Actor*             entKiller,
        ::Mob&               mobKilled,
        uint                 method,
        ::std::string const& traderName,
        int                  traderTier
    );

    MCAPI static void fireEventMobTeleportedToOwner(::Mob& mob);

    MCAPI_C static void fireEventMultiplayerRoundEnd(::Player* player, int exitStatus);

    MCAPI_C static void fireEventMultiplayerRoundStart(::Player* player, ::Level& level);

    MCAPI_C static void fireEventPOIBlockUsed(
        ::Player*                              player,
        ::std::string const&                   itemUsed,
        ::MinecraftEventing::PoiEventBlockType blockType
    );

    MCAPI_C static void
    fireEventPiglinBarter(::Player* player, ::std::string const& itemUsed, bool wasTargetingBarteringPlayer);

    MCAPI_C static void fireEventPlayerDied(::Player* player, int killerId, int killerVariant, int reason, bool inRaid);

    MCAPI_C static void
    fireEventPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);

    MCAPI static void fireEventPlayerTransform(::Player& player);

    MCAPI_C static void fireEventSignedBookOpened(::Player* player, bool isAuthor);

    MCAPI static void fireEventSlashCommandExecuted(
        ::Player*            player,
        ::std::string const& commandName,
        int                  successCount,
        int                  errorCount,
        ::std::string const& errorList
    );

    MCAPI_C static void fireEventTradeCompleted(
        ::Player*               player,
        ::Actor*                trader,
        ::ItemDescriptor const& itemA,
        ::ItemDescriptor const& itemB,
        ::ItemInstance const&   tradedFor,
        int                     traderEmeraldCount
    );

    MCAPI_C static void fireEventTrimApplied(::Player* player, ::ArmorTrim const& armorTrim);

    MCAPI static void fireEventWolfArmorDamageValueChanged(
        ::Actor&                owner,
        ::ItemDescriptor const& item,
        int                     oldDamageValue,
        int                     newDamageValue
    );

    MCAPI_C static void fireEventWorldUnloaded(::Player* player, ::LevelData const& levelData, uint unloadReason);

    MCAPI_C static void fireRaidEvent(::Player* player, int currentwave, int totalWaves, bool success);

    MCAPI static void onActorSpawned(::Actor const& actor, ::std::optional<::std::string> customInit, ::Actor* spawner);

    MCAPI static void onVehicleEntered(::Player& player, ::Actor& vehicle);

    MCAPI static void onVehicleExited(::Player& player);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::Social::Events::AchievementEventing>& mAchievementEventing();

    MCAPI static ::std::map<::std::string, int>& mCachedUUIDs();

    MCAPI static ::Social::Events::MobTelemetry& mMobTelemetry();

    MCAPI static ::std::unordered_map<uint, ::Social::Events::PlayerTelemetry>& mPlayerTelemetry();

    MCAPI static ::Social::Events::RealtimeRoute& mRealtimeRoute();

    MCAPI static ::Social::Events::ScreenFlow& mScreenFlow();

    MCAPI static ::Bedrock::Threading::Mutex& sHeartbeatMutex();

    MCAPI static ::Bedrock::Threading::Mutex& sMutex();

    MCAPI static ::Bedrock::Threading::Mutex& sPlayerTelemetryMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path const& logFileDir, ::MinecraftEventingDependencies&& deps);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::IPurchaseEventing& $getPurchaseEventing();

    MCAPI void $init(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const& userManager,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&             appPlatform
    );

    MCAPI void $initDeviceAndSessionIds();

    MCAPI void $initEditorEventListener();

    MCAPI void $shutdown();

    MCAPI void $updatePrimaryLocalUserId(uint const& userId);

    MCAPI ::std::string $getUserUID(::Social::IdentityType type, ::std::string const& primaryId) const;

    MCAPI void $registerSecondaryUserCommonProperties(uint const& userId, ::std::string const& uid) const;

    MCAPI void $unregisterSecondaryUserCommonProperties(uint const& userId) const;

    MCAPI void $updateIsLegacyPlayer(bool isLegacyPlayer) const;

    MCFOLD void $updateIsTrial(bool isTrial) const;

    MCAPI void $updateEditionType() const;

    MCFOLD void $updateClientId() const;

    MCAPI void $addListener(::std::unique_ptr<::Social::Events::IEventListener> listener);

    MCAPI void $clearListeners();

    MCAPI void $registerOptionsObserver(
        ::brstd::function_ref<
            ::Bedrock::PubSub::Subscription(::std::function<void(bool)>) const,
            ::Bedrock::PubSub::Subscription(::std::function<void(bool)>)> registerObserver
    );

    MCAPI void $setTestBuildIdTag(char const* id);

    MCAPI void $removeTestBuildIdTag();

    MCAPI void $setTestTelemetryTag(char const* name);

    MCAPI void $removeTestTelemetryTag();

    MCAPI void $stopDebugEventLoggingForAllListeners();

    MCAPI void $tick();

    MCAPI void $forceSendEvents();

    MCAPI ::std::string $getSessionId();

    MCFOLD ::std::string const& $getPlayerSessionId();

    MCAPI ::std::chrono::steady_clock::time_point $getWorldSessionIdGenerationTimestamp() const;

    MCAPI void $fireEventWorldLoaded(
        ::Player* player,
        ::brstd::function_ref<
            void(::Social::Events::EventManager&, ::Social::Events::Event&) const,
            void(::Social::Events::EventManager&, ::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventMarkLevelForSync(
        ::std::string const&                         levelId,
        int64                                        local,
        int64                                        remote,
        ::IMinecraftEventing::MarkLevelForSyncReason reason
    );

    MCAPI void $fireEventLockedItemGiven();

    MCAPI void $fireEventWorldLoadTimes(
        ::std::string const&                                   calledFromScreen,
        ::std::vector<::std::pair<::std::string, float>> const progressHandlerLoadTimes
    );

    MCAPI void $fireEventBlockPlacedByCommand(::Block const& placedBlock, int numberOfBlocksPlaced);

    MCAPI void $fireEventEntitySpawned(::Player* player, int mobType, uint spawnMethod);

    MCFOLD void $fireEventDevSlashCommandExecuted(::std::string const& commandName, ::std::string const& command);

    MCAPI void $fireCommandParseTableTelemetry(
        bool const                                                         isServer,
        ::std::vector<::IMinecraftEventing::CommandParseTableEntry> const& parseTableDetails
    ) const;

    MCAPI void $fireEventPlayerTravelled(::Player* player, float metersTravelledSinceLastEvent, int newBiome);

    MCAPI void $fireEventPlayerBounced(::Player* player, ::Block const& block, int bounceHeight);

    MCAPI void $fireEventSetValidForAchievements(::Player* player, bool currentlyValidForAchievements);

    MCAPI void $fireEventAchievementReceived(
        ::std::string const& title,
        ::std::string const& description,
        ::std::string const& achievementId
    );

    MCAPI void $updatePlayerUndergroundStatus(::Player* player, bool const isUnderground);

    MCAPI void $fireEventPlayerAttemptingExploit(::Player* player, ::IMinecraftEventing::ExploitType exploitType);

    MCAPI void
    $fireEventWorldGenerated(::std::string const& levelId, ::LevelSettings const& levelSettings, bool fromTemplate);

    MCAPI void $fireEventMultiplayerClientConnectionStateChanged(
        ::std::string const& connectionType,
        uint                 fromState,
        uint                 toState,
        uint                 port,
        ::std::string const& status
    );

    MCAPI void $fireEventJoinCanceled(::LoadingState currentState);

    MCAPI void $fireEvent(
        ::std::string const&                                eventName,
        ::std::vector<::Social::Events::Property> const&    properties,
        ::std::vector<::Social::Events::Measurement> const& measurements,
        bool                                                shouldAggregate
    );

    MCAPI void $fireEventBlockTypeRegistryChecksumMismatch(
        ::std::string const& reason,
        uint64 const&        serverBlockChecksum,
        uint64 const&        clientBlockChecksum,
        ::std::string const& serverVersion
    );

    MCFOLD void $fireEventOnSuccessfulClientLogin(::Level const* level);

    MCAPI void $fireEventStartWorld(
        ::NetworkType                                networkType,
        ::std::string const&                         ipAddress,
        ::Social::MultiplayerServiceIdentifier const friendWorldType
    );

    MCAPI void $fireEventClientLastPackets(
        uint const&          userId,
        ::SubClientId const  subId,
        int                  correlationId,
        ::Json::Value const& lastSentPackets,
        ::Json::Value const& lastReceivedPackets
    );

    MCAPI void $fireEventSignalServiceConnect(
        ::SignalServiceConnectStage        stage,
        bool                               bIsSigningInAsHost,
        ::Json::Value const&               stageProperties,
        ::PlayerMessaging::SigninID const& signinId,
        ::std::string const&               correlationId,
        bool                               isJsonRpc
    );

    MCAPI void $fireEventSignalMessagePerformance(
        ::PlayerMessaging::SigninID const& signinId,
        ::MessagePerformance const&        messagePerformanceEvent,
        bool                               isJsonRpc
    );

    MCAPI void $fireEventOnClientDisconnect(
        ::SubClientId                      subId,
        bool                               isNetworked,
        ::Connection::DisconnectFailReason reason,
        ::std::string const&               titleMessage,
        ::std::string const&               errorMessage,
        ::std::string const&               codeword
    );

    MCAPI void $fireEventOnServerDisconnect(
        ::Connection::DisconnectFailReason reason,
        ::std::string const&               disconnectedClientId,
        ::SubClientId                      subId,
        ::std::string const&               reasonContext,
        uint64                             clientCount,
        ::std::string const&               firstTimeStamp
    );

    MCAPI void $fireEventOnServerAsyncJoinTaskVerdict(
        ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny> const& joinVerdict,
        ::SubClientId const                                          subId,
        uint                                                         verdictQueueLength
    );

    MCAPI void $fireEventHttpClientError(::std::string const& error);

    MCAPI void $fireEventSignInToIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        ::std::string const&                    signInSource,
        bool                                    signInUIShown,
        ::IMinecraftEventing::SignInStage       stage,
        ::Social::SignInResult                  result,
        int                                     retryCount,
        ::Social::PlayerIDs                     ids,
        ::std::string const&                    errorCode
    );

    MCAPI void $fireEventSignOutOfIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        ::std::string const&                    accountId,
        ::std::string const&                    errorCode
    );

    MCAPI void $fireEventSignInEdu(
        ::std::string const&                                            mutsUserId,
        ::edu::Role                                                     role,
        ::Identity::EduSignInStage                                      stage,
        ::std::string const&                                            tenantType,
        ::std::string const&                                            error,
        ::std::vector<::std::pair<::std::string, ::std::string>> const& details
    );

    MCAPI void $fireEventSignOutEdu(
        ::std::string const& mutsUserId,
        ::edu::Role          role,
        ::std::string const& tenantType,
        ::std::string const& action,
        ::std::string const& error
    );

    MCAPI void
    $fireEventSwitchAccountEdu(::std::string const& mutsUserId, ::edu::Role role, ::std::string const& tenantType);

    MCAPI void $fireEventEduDemoConversion(::edu::Role role, ::LastClickedSource lastClickedSource);

    MCAPI void $fireEventCloudOperationStartedEdu(
        ::EduCloudUtils::Operation const      operation,
        ::EduCloud::CloudItemType const       cloudItemType,
        ::std::string const&                  cloudCorrelationId,
        uint64 const                          size,
        ::std::optional<::std::string> const& driveItemId
    );

    MCAPI void $fireEventCloudOperationEndedEdu(
        ::EduCloudUtils::Operation const      operation,
        ::EduCloud::CloudItemType const       cloudItemType,
        ::std::string const&                  cloudCorrelationId,
        ::std::chrono::milliseconds const     elapsedTime,
        uint const                            status,
        uint64 const                          size,
        ::std::optional<::std::string> const& driveItemId,
        ::std::optional<::std::string> const& errorCode,
        ::std::optional<::std::string> const& errorMessage,
        ::std::optional<::std::string> const& error
    );

    MCAPI void $fireEventCloudMyWorldsSummary(
        int const totalWorldsCount,
        int const placeholderCount,
        int const needsUploadCount,
        int const ctagMismatchCount,
        int const conflictCount
    );

    MCAPI void $fireEventCloudConflictCheckEdu(
        ::std::string const&                       cloudCorrelationId,
        ::EduCloud::ConflictResolutionStatus const conflictStatus
    );

    MCAPI void $fireEventPopupFiredEdu(
        ::std::string const&          mutsUserId,
        ::std::string const&          dialogType,
        ::std::string const&          experienceId,
        ::std::string const&          title,
        ::ActiveDirectoryAction const postAction
    );

    MCAPI void $fireEventPlayIntegrityCheck(
        ::std::string const& result,
        ::std::string const& appRecognitionVerdict,
        ::std::string const& deviceIntegrity,
        ::std::string const& appLicensingVerdict
    );

    MCAPI void $fireServerConnectionEvent(
        ::IConnectionEventing::ServerConnectionOutcome outcome,
        uint                                           pingLatency,
        double                                         timeElapsed,
        ::std::string const&                           creatorName,
        ::std::string const&                           worldId
    );

    MCAPI void $fireServerConnectionAttemptEvent(
        ::std::string const& creatorName,
        bool                 isTransfer,
        ::std::string const& serverAddress
    );

    MCAPI void $fireEventServerPlayerJoinedGame(
        ::NetworkIdentifier const& id,
        ::SubClientId              subId,
        ::std::string const&       firstConnectionTime
    );

    MCAPI void $fireEventScriptPluginDiscovery(::ScriptPluginResult const& pluginResult, bool client);

    MCAPI void $fireEventScriptPluginRun(
        ::ScriptPluginResult const& pluginResult,
        ::std::chrono::microseconds runDuration,
        bool                        client
    );

    MCAPI void $fireEventScriptDebuggerListen(bool client, bool autoAttach);

    MCAPI void $fireEventScriptDebuggerConnect(bool client, bool autoAttach, int retries);

    MCAPI void $fireEditorEventToolActivated(::std::string const& toolName);

    MCAPI void $fireEditorUndo(::std::string const& transactionName);

    MCAPI void $fireEditorRedo(::std::string const& transactionName);

    MCAPI void $fireEditorScriptAction(
        ::std::string const& scriptSource,
        ::std::string const& actionName,
        ::std::string const& actionMetadata
    );

    MCAPI void $fireEditorTutorialEvent(
        ::std::string_view                    type,
        ::std::optional<::std::string> const& state,
        ::std::string const&                  currentStage,
        ::std::optional<::std::string> const& previousStage
    );

    MCFOLD void $fireEventStartClient(::std::string const& ipAddress, bool isTextToSpeechEnabled);

    MCFOLD void $fireEventHardwareInfo();

    MCFOLD void $fireEventDeviceLost();

    MCAPI void $fireEventRenderingSizeChanged();

    MCAPI void $fireEventDiskStatus(::DiskStatus status, ::Core::LevelStorageState errorCode, uint64 freeSpace);

    MCAPI void $fireEventStorageAreaFull(
        ::std::string const&                            areaPath,
        ::std::vector<::Bedrock::DirectoryEntry> const& diskSizeData
    );

    MCAPI void $fireEventAppPaused();

    MCAPI void $fireEventAppUnpaused();

    MCAPI void $fireEventAppSurfaceCreated();

    MCAPI void $fireEventAppSurfaceDestroyed();

    MCAPI void $fireEventPurchaseGameAttempt(
        ::std::string const& storeId,
        ::std::string const& activeTab,
        ::std::string const& productId
    );

    MCAPI void $fireEventPurchaseGameResult(int purchaseResult);

    MCAPI void $fireEventTrialDeviceIdCorrelation(
        int64                myTime,
        ::std::string const& theirId,
        int64                theirTime,
        ::std::string const& theirLastSessionId
    );

    MCAPI void $fireEventDeviceIdManagerFailOnIdentityGained();

    MCAPI void $fireEventDlcStorageFull(
        ::std::string const& productId,
        uint64               dlcSize,
        uint64               onDiskScratchSpace,
        uint64               scratchSpace,
        uint64               premiumSpace
    );

    MCAPI void $fireEventPushNotificationPermission(bool permission, ::std::string const& deviceId);

    MCAPI void $fireEventPushNotificationReceived(::PushNotificationMessage const& msg);

    MCAPI void $fireEventPushNotificationOpened(::std::string const& threadId, ::std::string const& deepLink);

    MCFOLD void $firePerfTestEvent(
        ::std::string const&                                    testArtifact,
        ::std::string const&                                    modelName,
        ::std::string const&                                    renderSize,
        uint                                                    renderDistance,
        uint                                                    simDistance,
        ::std::string const&                                    memorySize,
        ::std::vector<::std::pair<::std::string, float>> const& testArtifactData
    );

    MCAPI void $fireEventLicenseCheck(bool isLicensed, ::ExtraLicenseData& data);

    MCAPI void $fireQueryOfferResult(::std::string const& storeID, int NumberOfOffers, bool QuerySucceeded);

    MCAPI void $fireEventQueryPurchasesResult(
        ::std::string const& storeID,
        ::std::string const& priorPurchaseIds,
        int                  NumberOfPurchases,
        bool                 QuerySucceeded
    );

    MCFOLD void $fireEventPurchaseFailureDetails(
        int                  httpCode,
        ::std::string const& errorMessage,
        ::std::string const& productId,
        ::std::string const& transactionId
    );

    MCAPI void
    $fireEventPlatformStorePurchaseFailure(::std::string const& productId, ::std::string const& errorMessage);

    MCFOLD void $fireEventDeviceAccountFailure(
        ::IMinecraftEventing::SignInStage               stage,
        ::IMinecraftEventing::DeviceAccountFailurePhase phase,
        uint                                            resultStatus,
        ::std::string const&                            accountID
    );

    MCAPI void $fireEventDeviceAccountSuccess(bool isNewAccount, ::std::string const& accountID);

    MCAPI void
    $fireEventEntitlementListInfo(::std::vector<::ContentIdentity>& entitlementContentIds, bool isLegacyList);

    MCAPI void $fireEventVideoPlayed(::std::string const& productId, ::std::string const& videoUrl);

    MCAPI void $fireEventBundleSubOfferClicked(
        int                  offerIndex,
        int                  bundleSubOfferCount,
        ::std::string const& telemetryId,
        ::std::string const& productId,
        bool                 isOnSale,
        ::std::string const& timeRemainingOnSale
    );

    MCAPI void $fireEventStoreOfferClicked(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventStoreOfferClicked(::std::string const telemetryId, ::std::string const& productId);

    MCAPI void $fireEventPersonaOfferClicked(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventStoreSearch(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCFOLD void $fireEventSearchItemSelected(
        int const            correlationId,
        int const            sessionId,
        ::std::string const& productId,
        int const            row,
        int const            column,
        int const            currentPage,
        ::std::string const& searchType
    );

    MCAPI void $fireEventUserListUpdated(
        ::std::string const& productId,
        ::std::string const& listId,
        ::std::string const& operation,
        bool                 success
    );

    MCAPI void $fireEventUgcAcquisitionStateChanged(
        ::std::string const& ugcProductId,
        uint64               downloadSize,
        double               elapsedTime,
        bool                 isUpdate,
        int                  retries,
        bool                 silent,
        int                  numContentTrackers,
        ::std::string const& result,
        ::std::string const& resultDetails,
        int                  httpStatus,
        int                  errorCode
    );

    MCAPI void $fireEventSearchCatalogRequest(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventStoreLocalizationBinaryFetchResponse(int const status, uint const currentFetchAttempt);

    MCAPI void $fireEventStoreSessionResponse(
        ::std::string const& responseType,
        int const            status,
        int const            retryCount,
        bool const           asyncServicesManager
    );

    MCAPI void
    $fireEventStoreDiscoveryRequestResponse(int const status, int const retryAttempt, bool const asyncServicesManager);

    MCAPI void $fireEventStoreInventoryRefreshRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    );

    MCAPI void $fireEventInventoryVersionRefreshRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    );

    MCAPI void $fireEventServerDrivenLayoutPageLoaded(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::string                                                                               pageID,
        int                                                                                         requestSize,
        int                                                                                         responseSize,
        int                                                                                         rowCount,
        int                                                                                         itemCount,
        int                                                                                         imageCount
    );

    MCAPI void $fireEventServerDrivenLayoutImagesLoaded(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::string                                                                               pageID,
        int                                                                                         imageCount,
        uint64                                                                                      totalImagesSize,
        int                                                                                         successCount,
        int                                                                                         failCount,
        int                                                                                         cachedCount,
        ::std::vector<ushort>&                                                                      responseCodes
    );

    MCAPI void
    $fireEventTreatmentsSet(::std::vector<::std::string> const& treatments, ::std::string const& treatmentContext);

    MCAPI void $fireEventProgressionsSet(::std::vector<::std::string> const& progressions);

    MCAPI void $fireEventTreatmentsCleared();

    MCAPI void $fireEventPackImportTimeout(::std::string const& productId);

    MCAPI void
    $fireEventFatalClientPackError(::FatalClientPackErrorType errorType, ::gsl::span<::std::string const> packIds);

    MCAPI void $fireEventStoreErrorPage(
        ::std::string const& errorCode,
        ::std::string const& pageId,
        ::std::string const& discoveryServiceTitleId,
        ::std::string const& playFabTitleId
    );

    MCAPI void $setServerIdsforClient(
        ::std::string const& multiplayerCorrelationId,
        ::std::string const& serverVersion,
        ::std::string const& serverId,
        ::std::string const& worldId,
        ::std::string const& scenarioId,
        ::std::string const& ownerId
    );

    MCAPI void $setConnectionGUID(::std::string const& connectionGUID);

    MCAPI void $removeConnectionGUID();

    MCAPI void $fireEventOptionsUpdated(
        bool                                                                                        onStartup,
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventChatSettingsUpdated(
        ::Player const*                                  player,
        ::std::vector<::Social::Events::Property> const& properties
    ) const;

    MCAPI void
    $fireEventControlRemappedByPlayer(::std::string const& actionName, ::RawInputType inputType, int keyCode) const;

#ifdef LL_PLAT_S
    MCFOLD void $fireEventGameRulesUpdated(bool oldValue, bool newValue, ::std::string const& gameRuleName);
#else // LL_PLAT_C
    MCAPI void $fireEventGameRulesUpdated(bool oldValue, bool newValue, ::std::string const& gameRuleName);
#endif

    MCFOLD void $fireEventGameRulesUpdated(int oldValue, int newValue, ::std::string const& gameRuleName);

#ifdef LL_PLAT_S
    MCFOLD void $fireEventGameRulesUpdated(float oldValue, float newValue, ::std::string const& gameRuleName);
#else // LL_PLAT_C
    MCAPI void $fireEventGameRulesUpdated(float oldValue, float newValue, ::std::string const& gameRuleName);
#endif

    MCAPI void $fireCurrentInputUpdated(uint userId, ::InputMode inputMode);

    MCAPI void $fireEventSplitScreenUpdated(::SplitScreenUpdatedEventData const& data);

    MCFOLD void $fireEventPerformanceMetrics(
        ::ProfilerLiteTelemetry const& profileTelemetry,
        bool                           IsEcoFrameThrottled,
        int                            fpsThrottle
    );

    MCFOLD void $fireEventPerformanceContext(
        ::PerfContextTrackerReport const& perfContextReport,
        bool                              IsEcoFrameThrottled,
        int                               fpsThrottle
    );

    MCAPI void $fireEventScreenChanged(
        uint const&                                               userId,
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    );

    MCFOLD void $fireEventImGuiScreenChanged(
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    );

    MCAPI void $fireEventPopupClosed(::std::string const& popupName) const;

    MCAPI void $fireEventNewContentCheckCompleted(::std::string const& newContentPrefix, bool hasNewStoreContent);

    MCAPI void $fireEventEncyclopediaTopicChanged(::std::string const& topicName, ::InputMode inputMode);

    MCAPI void $fireEventHowToPlayTopicChanged(::std::string const& topicName, ::InputMode inputMode);

    MCAPI void $fireEventAndroidHelpRequest();

    MCFOLD void
    $fireEventWorldFilesListed(uint64 numLevels, uint64 totalSizeMB, uint64 largestLevelMB, uint64 smallestLevelMB);

    MCFOLD void $fireEventStorage(int state, ::std::string const& extra);

    MCFOLD void $fireEventStorageReport(::std::string const& report);

    MCAPI void $fireEventPlayerMessageSay(::std::string const& fromName, ::std::string const& message);

    MCAPI void $fireEventPlayerMessageTell(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    );

    MCAPI void $fireEventPlayerMessageChat(::std::string const& fromName, ::std::string const& message);

    MCAPI void $fireEventPlayerMessageMe(::std::string const& fromName, ::std::string const& message);

    MCAPI void $fireEventPlayerMessageTitle(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    );

    MCAPI void $fireEventPlayerKicked(::std::string const& sessionType, ::std::string const& kickedPlayer);

    MCAPI void $fireEventPlayerBanned(::std::string const& bannedPlayer);

    MCAPI void $fireEventChunkLoaded(::LevelChunk& chunk);

    MCAPI void $fireEventChunkUnloaded(::LevelChunk& chunk);

    MCAPI void $fireEventChunkChanged(::LevelChunk& chunk);

    MCAPI void $fireEventPackPlayed(::PackInstance const& packInstance, uint priority);

    MCAPI void
    $fireEventRespondedToAcceptContent(::PacksInfoData const& data, bool accepted, bool downloadOptionalResourcePacks);

    MCAPI void $fireEventStackLoaded(::StackStats const& stats);

    MCAPI void $firePackSettingsEvent(
        ::PackSettings const& packSettings,
        ::PackManifest const& manifest,
        ::std::string         serializedPackSettings
    );

    MCAPI void $fireEventTreatmentPackApplied(::PackManifest const& manifest);

    MCAPI void $fireEventTreatmentPackDownloadFailed(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    );

    MCAPI void $fireEventTreatmentPackDownloaded(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    );

    MCAPI void $fireEventTreatmentPackRemoved(::std::string packId);

    MCAPI void $fireCDNDownloadEvent(
        ::std::string const&                                packId,
        ::std::string const&                                versionNumber,
        ::std::string const&                                hostUrl,
        ::IMinecraftEventing::CDNDownloadResult const&      downloadResult,
        ::IMinecraftEventing::CDNDownloadEventOrigin const& origin,
        float const&                                        elapsedTime
    );

    MCAPI void $fireEventContentLogsInWorldSession(::std::string const& logArea, uint errorCount, uint warningCount);

    MCAPI void $fireEventEntitlementCacheLoadTimeout();

    MCAPI void $fireTextToSpeechToggled(bool uiTTS, bool chatTTS);

    MCAPI void $fireEventWorldLoadedClassroomCustomization(
        ::IMinecraftEventing::WorldClassroomCustomization                  customization,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    );

    MCAPI void $fireClassroomSettingUpdated(::ClassroomSetting classroomSetting, ::SettingsScreenMode settingMode);

    MCAPI void $fireEventNpcPropertiesUpdated(::Actor& npcOwner, bool isEditorWorldbuilder);

    MCAPI void $fireEventBoardTextUpdated(::ChalkboardBlockActor& board);

    MCAPI void $fireEventCameraUsed(bool isSelfie);

    MCAPI void $fireEventPortfolioExported(int imageCount, int captionedCount);

    MCAPI void $fireQuickPlayEvent();

    MCAPI void $fireExternalUriLaunched(::std::string const& uri) const;

    MCAPI void $fireUserGeneratedUriLaunched(::UserGeneratedUriSource source) const;

    MCAPI void $fireEventEmptyLibraryCategoryError(::std::string const& categoryTitle) const;

    MCAPI void
    $fireCodeBuilderCachePerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const;

    MCAPI void $fireCodeBuilderLoadPerformance(
        ::std::string const&        stage,
        uint64                      tutorialSize,
        uint64                      downloadSize,
        ::std::chrono::milliseconds elapsedTimeMS
    ) const;

    MCAPI void
    $fireCodeBuilderRunPerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const;

    MCAPI void $fireLibraryButtonPressed(
        ::std::string const& productId,
        ::std::string const& worldName,
        ::std::string const& buttonAction
    );

    MCAPI void $fireCourseButtonPressed(::std::string const& courseTitle, ::std::string const& courseId);

    MCAPI void $fireLessonActionTaken(
        ::std::string const&                        lessonTitle,
        ::std::string const&                        lessonId,
        ::std::string const&                        courseId,
        ::IMinecraftEventing::EducationLessonAction buttonAction,
        int                                         score
    );

    MCAPI void $fireLessonProgressEvent(
        ::std::string const& lessonTitle,
        ::std::string const& lessonId,
        ::std::string const& courseId,
        ::std::string const& activityId,
        ::std::string const& action,
        ::std::string const& educationCreatorID,
        ::std::string const& educationCreatorWorldID,
        int                  score
    );

    MCAPI void $fireShareButtonPressed(
        ::std::string const& location,
        ::EduShareUriType    shareType,
        ::EduShareMethodType methodType,
        bool                 includesResource
    );

    MCAPI void
    $fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint const entryPoint) const;

    MCAPI void $fireEventEduiOSPurchaseTransaction(::TransactionStatus const& status) const;

    MCAPI void $fireInAppCodeBuilderActivated(
        ::OpenCodeMethod     method,
        ::std::string const& ideName,
        ::std::string const& educationCreatorID,
        ::std::string const& educationCreatorWorldID
    ) const;

    MCAPI void $fireInAppCodeBuilderDismissed(::std::string const& ideName) const;

    MCAPI void $fireCodeCommandButtonPressed();

    MCAPI void $fireIDESelected(::std::string const& name) const;

    MCAPI void $fireEventEduResources() const;

    MCAPI void $fireEventCodeBuilderClosed() const;

    MCAPI void $fireEventCodeBuilderLog(
        ::Webview::TelemetryCommonProperties const& properties,
        ::std::string const&                        message,
        ::std::string&                              level
    ) const;

    MCAPI void $fireEventCodeBuilderScoreChanged(::std::string const& objective, int const score) const;

    MCAPI void $fireEventEduServiceStatus(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        int                                                                durationMS,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const;

    MCAPI void $fireEventCodeBuilderRuntimeAction(::std::string const& action) const;

    MCAPI void
    $fireEventWebviewDownload(::std::string const& downloadState, ::WebviewDownloadInfo const& downloadInfo) const;

    MCAPI void $fireEduServiceRequestFailed(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        ::std::string const&                                               error,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const;

    MCAPI void $fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const;

    MCAPI void $fireEventOptionsChanged(
        ::std::string const&                            optionGroup,
        ::std::unordered_map<::std::string, int> const& events
    ) const;

    MCAPI void $fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const;

    MCAPI void $fireEventTagButtonPressed(::std::string const& tag, bool showMore) const;

    MCAPI void $fireEventLevelDataOverride(::std::string_view valueName) const;

    MCAPI void $fireEventEduContentVerificationFailed() const;

    MCAPI void $fireEventLibrarySearch(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) const;

    MCFOLD void $fireEventLibrarySearchItemSelected(
        int const            sessionId,
        int const            correlationId,
        ::std::string const& productId,
        int const            row,
        int const            column
    ) const;

    MCAPI void $fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType updateType, double elapsedTimeSec) const;

    MCAPI void $fireEventWorldExported(int64 worldSeed, uint64 worldSize);

    MCAPI void $fireEventWorldImported(int64 worldSeed, uint64 worldSize);

    MCAPI void $fireGlobalResourcePackCrashRecovery(::PackInstance& packInstance, ::mce::UUID recoveryID, int order);

    MCAPI void
    $fireEventRealmShared(::std::string const& url, ::IMinecraftEventing::ShareMode const& mode, int64 const& worldId);

    MCAPI void $fireEventRealmMemberlistCleared(int64 const& worldId, int const& numberOfUsersRemoved);

    MCAPI void $fireEventRealmUrlGenerated(::std::string const& url, int64 const& worldId);

    MCAPI void $fireEventStructureExport(
        ::glTFExportData const&             exportData,
        ::IMinecraftEventing::ExportOutcome outcome,
        ::IMinecraftEventing::ExportStage   stage
    ) const;

    MCAPI void $fireEventContentShared(
        ::std::string const&                   productId,
        ::std::string const&                   url,
        ::IMinecraftEventing::ShareMode const& mode
    );

    MCAPI void $fireMinecraftVersionLaunched(bool launchedLegacy);

    MCAPI void $fireMinecraftVersionInviteAccepted(bool launchedLegacy, uint64 inviteGameOwner);

    MCAPI void $fireInviteStatusReceived(::std::string id);

    MCAPI void $fireInviteStatusSentImpl(uint userId, ::std::vector<::std::string> invitationIds);

    MCAPI void $fireDayOneExperienceStateChanged(
        ::IMinecraftEventing::DayOneExperienceState newState,
        ::std::optional<uint>                       importedWorldIndex,
        ::std::optional<uint64>                     importedWorldTimestamp
    );

    MCAPI void $fireContentDecryptionFailure(
        ::std::string const& failedContentIds,
        ::std::string const& contentKey,
        ::std::string const& failurePoint
    );

    MCFOLD void $fireWorldConversionAttemptEvent(::Legacy::WorldConversionReport const& report);

    MCFOLD void $fireWorldConversionInitiatedEvent(::std::string const& converterVersion);

    MCAPI void $fireWorldUpgradedToCnCPart2(
        bool                 willUpgrade,
        ::std::string const& baseGameVersion,
        ::Experiments const& experiments,
        ::std::string const& lastOpenedVersion,
        ::LevelSeed64        worldSeed,
        float                worldSizeMB
    );

    MCAPI void $fireEventAssertFailed(::std::string const& assertBucket, ::std::string const& message);

    MCAPI void $fireEventCrashSystemFailedToInit();

    MCAPI void $fireChatUsedEvent(uint chatLength, bool isSlashCommand);

    MCAPI void $fireEventJoinByCode(::std::string const&);

    MCAPI void $fireEventAppInitFileOpenStats(
        ::Core::Profile::FileCounters const& openForRead,
        ::Core::Profile::FileCounters const& openForWrite
    );

    MCAPI void $fireEventStartupPerformance(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventOnAppStart(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventOnAppSuspend(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::IMinecraftEventing::SuspendTriggersDisconnect                                             triggersDisconnect,
        bool                                                                                        forceDisableEvents
    );

    MCAPI void $fireEventOnAppResume(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::optional<int64> sessionAuthValidUntil
    );

    MCAPI void $fireEventOnDeviceLost(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventRealmsGeneralCall(::std::string const& callName, ::Bedrock::Http::Status returnCode);

    MCAPI void
    $fireEventRealmsRealmSpecificCall(::std::string const& callName, int64 realmId, ::Bedrock::Http::Status returnCode);

    MCAPI void $fireEventRealmDownload(
        ::std::string const& correlationId,
        ::std::string const& downloadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB
    );

    MCAPI void $fireEventRealmUpload(
        ::std::string const& correlationId,
        ::std::string const& uploadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB,
        bool const           isPack
    );

    MCAPI void $fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow);

    MCAPI void $fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow);

    MCAPI void $fireRealmConnectionEventRealmAPIResponse(
        ::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow,
        int                                       responseCode
    );

    MCAPI void $fireRealmConnectionEventGenericLambdaCalled(
        ::IMinecraftEventing::RealmConnectionFlow   realmConnectionFlow,
        ::IMinecraftEventing::RealmConnectionLambda realmConnectionLambda,
        ::IMinecraftEventing::RealmConnectionResult realmConnectionResult
    );

    MCAPI void $fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType              notificationType,
        int                                                         notificationCount,
        ::std::set<::IMinecraftEventing::IgnoredNotificationSource> notificationSources
    );

    MCAPI void $fireClubsOpenFeedScreenEvent(
        ::IMinecraftEventing::ClubsFeedScreenSource const source,
        int64 const                                       realmId,
        ::std::string const&                              clubId,
        int                                               unreadPosts
    );

    MCAPI void $fireClubsEngagementEvent(
        ::IMinecraftEventing::ClubsEngagementAction     action,
        ::IMinecraftEventing::ClubsEngagementTargetType engagementTargetType,
        char const*                                     target,
        int64 const                                     realmId,
        ::std::string const&                            clubId
    );

    MCAPI void $fireEventCopyWorldEducationEnabled();

    MCAPI void $fireEventRespawn(::Player& player, int dimID);

    MCAPI void $fireEventServerRespawnSearchTime(::Player& player, ::PlayerRespawnTelemetryData const& data);

    MCAPI void $fireEventUnknownBlockReceived(::NewBlockID const& blockId, ushort data);

    MCAPI void $fireEventCompoundCreatorCreated(int compoundId, int count);

    MCAPI void $fireEventLabTableCreated(int reactionId, int productId, int productAux);

    MCAPI void $fireEventElementConstructorUsed(
        int                                             atomicNumber,
        int                                             count,
        ::IMinecraftEventing::ElementConstructorUseType useType
    );

    MCAPI void $fireEventReducerBlockEntered(::ItemDescriptor const& item);

    MCAPI void $fireEventMultiplayerSessionUpdate(::Bedrock::NonOwnerPointer<::Level> level);

    MCAPI void $fireEventLevelDestruct(bool isTransfer);

    MCAPI void $flagEventDeepLink();

    MCAPI void $flagEventPlayerGameTypeDefault(bool isDefault);

    MCAPI void
    $fileEventCloudWorldPullFailed(::std::string const& reason, ::std::string const& worldID, bool localLevelDatUsed);

    MCAPI void $fireEventLevelDatLoadFailed(::std::string const& reason, ::std::string const& worldID, bool isFatal);

    MCAPI void $fireEventWorldCorruptionCausedWorldShutdown(
        ::LevelStorageEventingContext const& context,
        ::std::string const&                 reason,
        ::std::optional<bool>                isOutOfDiskSpace
    );

    MCAPI void $fireEventClientLeftGameDueToUnrecoverableError(::std::string const& reason, bool isServer);

    MCAPI void $fireEventServerShutdownDueToError(::std::string const& reason);

    MCAPI void $fireEventServerInitializationFailed(
        ::std::string const& failReason,
        bool                 serverLevelExists,
        bool                 serverNetworkHandlerValid
    );

    MCFOLD void $fireEventDBStorageSizeSnapshot(
        ::LevelStorageEventingContext const& context,
        ::DBStorageFolderWatcher const&      folderWatcher,
        ::DBStorageFolderWatcherSnapshotKind kind
    );

    MCAPI void $fireEventLevelDBPerformanceData(
        ::LevelStorageEventingContext const&       context,
        ::DBStoragePerformanceTelemetryData const& perfData
    );

    MCAPI void $fireEventDBReadFail(::LevelStorageEventingContext const& context, ::std::string const& reason);

    MCFOLD void $fireEventWorldHistoryPackSourceMissingDuringUpgrade(
        ::std::string const& worldPath,
        ::std::string const& levelId,
        ::std::string const& deletionCandidate
    );

    MCAPI void $fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    );

    MCAPI void $fireStructureBlockRedstoneActivated(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    );

    MCAPI void $fireEventSidebarNavigation(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& telemetryId,
        int const            depthLevel,
        bool const           isSelected,
        bool const           areChildrenVisible,
        bool const           hasChildren
    );

    MCAPI void $fireEventSidebarVerboseToggled(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& verboseNavigationType,
        bool const           verboseState
    );

    MCAPI void $fireEventPersonaUserLoadedActive(
        ::persona::ProfileType const personaProfile,
        ::std::string const&         classicSkinId,
        bool                         personaUsesClassicSkin
    );

    MCAPI void $fireEventPersonaItemPreviewed(
        ::persona::ProfileType const        personaProfile,
        ::std::string const&                itemOfferId,
        ::std::string const&                productId,
        uint                                row,
        uint                                column,
        ::IMinecraftEventing::PromotionType promotionType,
        bool                                isOwned,
        ::std::string const&                creatorId,
        ::std::string const&                creatorName,
        double                              secondsToLoadContent,
        ::StoreEventData::StoreType         storeType
    );

    MCAPI void $fireEventPersonaAvatarUpdated(
        ::persona::ProfileType const        personaProfile,
        ::std::vector<::std::string> const& newAppearancePieceIds,
        ::std::vector<bool> const&          newPieces,
        ::std::vector<bool> const&          tintedPieces,
        bool                                isNewPersona,
        bool                                isBeingDeleted,
        ::std::string const&                bodySize,
        ::std::string const&                armSize,
        ::std::string const&                classicSkinId,
        bool                                usesClassicSkin,
        ::std::vector<::std::string> const& emotesPieceIds,
        ::std::vector<::std::string> const& emoteSlotNumbers
    );

    MCAPI void $fireEventPersonaSkinChanged(
        ::persona::ProfileType const personaProfile,
        ::std::string const&         classicSkinId,
        bool                         isClassicSkinUsed
    );

    MCAPI void $fireEventPersonaAvatarsListed(::std::vector<::persona::ProfileType> const& profileTypesUsed);

    MCAPI void
    $fireEventPersonaEmotePlayed(::std::string const& emoteProductId, bool isEmoteEndedEarly, int emoteSlotId);

    MCAPI void
    $fireEventDefaultCastSelected(int previewIndex, ::mce::UUID appearanceId, ::std::string const& appearanceName);

    MCAPI void $fireEventPersonaInitalizationEvent(
        uint                 secondsToCompletion,
        ::std::string const& status,
        ::std::string const& user
    );

    MCAPI void $fireEventPersonaGeneralError(::std::string const& personaErrorName, uint duplicateErrorsFired);

    MCAPI void $fireEventPersonaLoadingPieces(uint piecesLoaded, double timeToLoadInSeconds);

    MCAPI void $fireEventPersonaStillLoading(
        bool                                         isSignedIn,
        bool                                         selectedSkinInitialized,
        bool                                         isStillSyncingWithService,
        bool                                         isRepoStillBuildingAppearances,
        bool                                         isPendingSkinStillLoading,
        bool                                         isRefreshingEntitlements,
        bool                                         isUserUpdateInProgress,
        bool                                         isSelectedSkinLoaded,
        ::std::vector<::persona::ProfileType> const& failingPersonaProfiles,
        int                                          unknownPersonasCount,
        double                                       timeElapsed
    );

    MCAPI void $fireEventPersonaCreationFailed(
        ::std::string const& errorName,
        ::std::string const& pieceId,
        bool                 missingTop,
        bool                 missingBottom,
        ::std::string const& repositoryPieceType,
        ::std::string const& appearancePieceType
    );

    MCAPI void $fireEventPersonaCategoryInformation(::std::string const& categoryInformation);

    MCAPI void $fireEventDisplayLoggedError(
        ::std::string const& errorMessageTemplate,
        ::std::string const& errorMessage,
        ::std::string const& errorParameters
    );

    MCAPI void $fireEventOreUIError(uint const& userId, ::std::string const& errorType);

    MCAPI void $fireEventOreUIScreenPerformance(
        uint const&                                                                                 userId,
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool const           isOwner
    );

    MCAPI void
    $fireEventOnboardingWorldCreationUsage(bool onboardingWorldCreationUsed, bool hasWorlds, bool hasOnlyBaseGamePacks);

    MCAPI ::std::shared_ptr<void*> $requestEventDeferment();

    MCAPI ::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> $getCrashTelemetryProcessor();

    MCAPI void $sendCrashTelemetryNow(::std::shared_ptr<::Bedrock::SessionInfo> session);

    MCAPI void $addCrashTelemetryToBatch(::std::shared_ptr<::Bedrock::SessionInfo> session);

    MCAPI void $sendBatchedCrashTelemetry();

    MCAPI void $sendCrashStatusTelemetry(::Bedrock::CrashUploadStatus const& status);

    MCAPI void $fireEventLevelChunkPerformanceData(bool isClientSide);

    MCAPI void $fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const& output);

    MCAPI void $fireEventActorValueValidationFailed(::std::string const& invalidValue, char const* caller);

    MCAPI void $fireScreenLoadTimeUpdateEvent(
        uint const&                userId,
        ::std::string const&       screenName,
        ::std::chrono::nanoseconds duration,
        ::std::string const&       loadInstanceId
    );

    MCAPI void $fireDBStorageError(::LevelStorageEventingContext const& context, ::std::string const& errorType);

    MCAPI void $fireStorageMigrationEvent(
        bool                                              isSuccessful,
        ::Bedrock::StorageMigration::StorageMigrationType migrationType,
        int                                               numFilesMigrated,
        int                                               numFilesTotal,
        ::std::chrono::nanoseconds                        duration,
        ::std::string const&                              failureReason
    );

    MCAPI void $fireEventConnectedStorageResult(
        ::ConnectedStorageEventType eventType,
        bool                        succeeded,
        uint                        durationMs,
        ::std::optional<uint>       chunksSent,
        ::std::string const&        errorMessage,
        ::std::string const&        levelId,
        int64                       quotaRemaining,
        ::std::optional<uint>       filesToAddCount,
        ::std::optional<uint>       filesToDeleteCount,
        ::std::optional<uint>       HACK_oldFilesToDeleteCount
    );

    MCAPI void $fireEventConnectedStorageError(char const* message, ::std::string const& levelId, int64 quotaRemaining);

    MCAPI void $fireServerStarted(
        ::LevelSettings const&                                    settings,
        ::std::unordered_map<::std::string, ::std::string> const& propertiesChanged
    );

    MCAPI void $fireServerShutdown();

    MCAPI void $fireSafetyServiceTextProcessEvent(
        ::std::string const&        authorId,
        ::TextProcessingEventOrigin eventOrigin,
        ushort                      responseCode,
        ::std::string const&        message,
        bool                        wasFlagged,
        double                      responseTime,
        char                        risk,
        char                        trustLevel,
        ::Json::Value const&        events,
        bool                        isProcessorOffline,
        bool                        isCachedResponse
    );

    MCAPI void $fireBannedSkinVerificationEvent(
        uint const&          userId,
        ::std::string const& serverType,
        ::std::string const& skinData,
        bool                 wasApproved,
        int const            eventCode,
        ::std::string const& message
    );

    MCAPI void $fireEventPlayerReportSent(
        bool                 successfulReportSent,
        ::std::string const& failureSource,
        ::std::string const& failureReason,
        ::std::string const& reportID
    );

    MCAPI void
    $fireEventOneDSPlayerReportPayload(::std::string const& reportPayloadJson, ::std::string const& reportID);

    MCAPI void $firePlayerAccountMetadata(
        ::Social::PermissionCheckResult multiPlayerAllowed,
        ::Social::PermissionCheckResult chatAllowed,
        ::Social::PermissionCheckResult addFriendAllowed,
        ::Social::PermissionCheckResult ugcAllowed,
        ::Social::PermissionCheckResult clubsAllowed,
        ::Social::PermissionCheckResult viewProfilesAllowed,
        bool                            isChildAccount,
        bool                            isGuest
    );

    MCAPI void
    $fireEventSafetyHTTPRequest(::std::string const& method, ::std::string const& url, int const responseCode);

    MCAPI void $fireEventProfanityFilter(bool localFilter, bool remoteFilter, bool playerFilter);

    MCAPI void $fireEventChatFloodingActionTaken(
        ::std::string const&         authorXuid,
        ::Safety::ChatFloodingAction action,
        ::std::string const&         message
    );

    MCAPI void $fireEventTextProcessorStartupFailed(::std::string const& stage, int retryCount, int maxRetryCount);

    MCAPI void $fireEventBlockUser(::std::string const& xuid, bool isSuccess, bool isBlocked);

    MCAPI void $fireEventMuteUser(::std::string const& xuid, bool isSuccess, bool isMuted);

    MCAPI void $fireWorldRecoveryTelemetryEvent(::Bedrock::WorldRecoveryTelemetryEvent const& data);

    MCAPI ::Json::Value $propertiesAsJsonValue() const;

    MCAPI void $fireEventUwpToGdkMigrationComplete(
        ::Bedrock::DeviceIdContext const& deviceIdContext,
        ::std::string const&              gdkDeviceId,
        ::std::string_view                migrationErrors
    );

    MCAPI void $fireNetworkChangedEvent(::std::string const& networkConnectionType);

    MCAPI void $fireEventMessageServiceImpression(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl
    );

    MCAPI void $fireEventMessageReceived(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl
    );

    MCAPI void $fireEventGoogleAccountHoldWarning(bool navigatedToSubscription);

    MCAPI void $fireDelayedEventReportOfflineAction(::std::string const& offlineAction);

    MCAPI void
    $fireEventFeedbackSubmitted(::std::string const& productId, bool safetyCheckSuccessful, bool isValidText);

    MCAPI void $fireEventTrackDeeplinks(
        ::std::string const& deeplinkDestination,
        ::std::string const& deeplinkSource,
        ::std::string const& educationReferrerId,
        ::std::string const& educationReferrerType
    );

    MCAPI void $fireEventReceivedUniqueWebSessionId(::std::string const& webSessionId);

    MCAPI void $fireEventReceivedUniqueLauncherSessionId(::std::string const& launcherSessionId);

    MCAPI void $firePlayerUnexpectedFallDamage(float const fallDistance, bool isVehicle, float const divergenceAmount);

    MCAPI void $fireEventDedicatedServerDiscoveryResponse(int const status, int const retryAttempt);

    MCAPI void $fireEventInGamePause(bool pauseStatus);

    MCAPI void $fireEventGameTip(int gameTipId, int gameTipEventType, int gameTipTestGroup, ::InputMode inputMode);

    MCAPI void $fireEventAddedFriend(
        ::std::string const&                      addedXuid,
        ::IMinecraftEventing::AddedFriendLocation location,
        bool                                      success
    );

    MCAPI void $fireEventInboxSummary(::Social::Events::InboxSummaryData const& data);

    MCAPI void $fireEventTrialStatusFailed(int errorCode);

    MCAPI void $fireEventSaveDataExpansion(uint64 preExpansionSize, uint64 postExpansionSize, uint64 levelUsedSize);

    MCAPI void $fireEventProfileButtonPressed(::std::string const& entryPoint) const;

    MCAPI void $fireEventWorldCopy(uint64 worldSize, uint64 filesSum, ::LevelSeed64 worldSeed);

    MCAPI void $fireEventWriteBudgetLow(
        uint64                     remainingWriteBudget,
        float                      writeRateMBPerMin,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    );

    MCAPI void $fireEventWriteBudgetReplenished(
        ::std::chrono::nanoseconds throttledTime,
        uint64                     lowestWriteBudget,
        ::std::optional<uint64>    lowestSystemThrottlingPerSec,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    );

    MCAPI void $fireEventLargeFileWriteStall(
        uint64                              totalWriteSizeBytes,
        ::std::vector<::std::string> const& largestFileNames,
        ::std::chrono::nanoseconds          estimatedTotalWriteTime,
        ::std::chrono::nanoseconds          estimatedTotalWaitTime,
        ::std::string const&                originatingSystem,
        uint64                              budgetBytesAtStartOfOperation,
        bool                                operationWasCancelled,
        ::std::chrono::nanoseconds          totalWriteTime,
        ::std::chrono::nanoseconds          totalWaitTime,
        int                                 numberOfFilesWritten,
        uint64                              budgetBytesAtEndOfOperation,
        ::std::vector<::std::string> const& associatedContentIDs
    );

    MCAPI void $fireEventLowMemoryDetected(::LowMemoryReport const& report);

    MCAPI void $fireEventReceivedApplicationExitInfo(
        ::std::string const& description,
        int                  reasonCode,
        int                  exitCode,
        int                  importanceCode,
        int64                residentSetSize,
        int64                proportionalSetSize,
        ::std::string const& sessionId,
        bool                 deviceSupportsReasonLowMem
    );

    MCFOLD void $fireEventBug1341395(::std::string const& details);

    MCFOLD void $fireEventImmersiveReaderStatus(::Bedrock::Http::Status const status);

    MCAPI void $fireEventPUVLoad(::std::string const& resourceCategory, ::PuvLoadData::TelemetryEventData&& loadData);

    MCAPI ::Social::Events::EventManager& $getEventManager() const;

    MCAPI uint $getPrimaryLocalUserId() const;

    MCAPI bool $getShouldHaveAchievementsEnabled();

    MCAPI void $setShouldHaveAchievementsEnabled(bool value);

    MCAPI bool $getAchievementsAlwaysEnabled();

#ifdef LL_PLAT_C
    MCAPI void $fireEventPlayerDamaged(::Player* player, ::SharedTypes::Legacy::ActorDamageCause damageCause);

    MCAPI void $fireEventPacketViolationDetected(
        uint64                     readResult,
        ::std::string              readResultContext,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::NetworkIdentifier const& netId,
        uint                       numViolations,
        ::SubClientId              clientSubId,
        ::SubClientId              senderSubId,
        uint                       packetStreamLength
    );

    MCAPI void $fireEventServerReceivedValidPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              clientSubId
    );

    MCAPI void $fireEventClientSentOrReceivedPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              clientSubId,
        ::std::string              correlationId,
        bool                       isOutgoing
    );

    MCAPI void $fireEventPlayerJoinWorld(
        uint const&                                              userId,
        ::SubClientId const                                      subId,
        bool                                                     isJoiningLocalServer,
        ::std::optional<bool>                                    isUsingTURN,
        ::IConnectionEventing::PlayerJoinWorldAttemptState const JoinState,
        int                                                      attemptId,
        ::Connection::DisconnectFailReason                       failReason,
        ::Json::Value const&                                     failDebugInfo,
        ::TransportLayer                                         transportLayer,
        ::NetworkType                                            networkTypeOverride,
        ::Social::MultiplayerState                               multiplayerState,
        bool                                                     isConnectedToApplicationLayer,
        bool                                                     isFilteringProfanity,
        ::Social::MultiplayerServiceIdentifier                   multiplayerServiceIdentifier,
        ::std::string const&                                     titleMessage,
        ::std::string const&                                     errorMessage,
        ::std::string const&                                     codeword,
        bool                                                     isServerTransfer,
        ::Social::GameConnectionInfo const&                      connectionInfo
    );

    MCAPI void $fireUserGeneratedUriLaunchFailed(
        ::UserGeneratedUriSource              source,
        ::Util::ResourceUri::ValidationStatus reasonCode,
        ::std::string const&                  additionalData
    ) const;

    MCAPI void
    $fireEventActorMovementCorrectionDivergence(::ActorType actorType, ::std::vector<float> const& divergences);

    MCAPI void $fireEventPacketSerializationMismatch(
        ::MinecraftPacketIds packetId,
        ::std::string_view   legacyStream,
        ::std::string_view   cerealStream
    );
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForWorldRecoveryTelemetryHandler();

    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForIScreenChangedEventing();

    MCAPI static void** $vftableForIUIEventTelemetry();

    MCAPI static void** $vftableForIWebviewTelemetry();

    MCNAPI static void** $vftableForIExternalSessionTelemetry();

    MCNAPI static void** $vftableForIMinecraftEventingProvider();

    MCAPI static void** $vftableForIConnectionEventing();

    MCAPI static void** $vftableForCrashTelemetryProcessor();

    MCAPI static void** $vftableForIPackTelemetry();
    // NOLINTEND
};
