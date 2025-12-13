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
#include "mc/client/store/iap/PurchasePath.h"
#include "mc/client/store/iap/RealmsOfferPeriod.h"
#include "mc/client/store/iap/RealmsOfferTier.h"
#include "mc/client/store/iap/RealmsPurchaseIntent.h"
#include "mc/client/store/iap/transactions/RealmsPurchaseFlow.h"
#include "mc/client/store/iap/transactions/TransactionStatus.h"
#include "mc/client/util/edu_cloud_utils/Operation.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/storage_migration/StorageMigrationType.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ValidationStatus.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/RawInputType.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/events/ConnectedStorageEventType.h"
#include "mc/events/EduControlPanelUpdateType.h"
#include "mc/events/FatalClientPackErrorType.h"
#include "mc/events/IConnectionEventing.h"
#include "mc/events/IPackTelemetry.h"
#include "mc/events/IScreenChangedEventing.h"
#include "mc/events/IUIEventTelemetry.h"
#include "mc/events/IWebviewTelemetry.h"
#include "mc/events/NetworkType.h"
#include "mc/events/OpenCodeMethod.h"
#include "mc/events/RealmsPurchaseStage.h"
#include "mc/events/RealmsPurchaseStatus.h"
#include "mc/events/RealmsPurchaseTelemetryFailureReason.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/events/UserGeneratedUriSource.h"
#include "mc/events/identity/EduSignInStage.h"
#include "mc/identity/IdentitySignInTrigger.h"
#include "mc/identity/SignInResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/services/signaling/SignalServiceConnectStage.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/server/safety/ChatFloodingAction.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/level/FileArchiverOutcome.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/storage/DBStorageFolderWatcherSnapshotKind.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AppPlatform;
class Block;
class ChalkboardBlockActor;
class ContentIdentity;
class DBStorageFolderWatcher;
class Experiments;
class IClientInstance;
class ItemDescriptor;
class LevelChunk;
class LevelSeed64;
class LevelSettings;
class MessagePerformance;
class MultiPlayerLevel;
class NetworkIdentifier;
class Offer;
class Options;
class PackInstance;
class PackManifest;
class PackSettings;
class PerfContextTrackerReport;
class Player;
class PlayerRespawnTelemetryData;
class PushNotificationMessage;
class RequestTelemetry;
class ScriptPluginResult;
class SearchRequestTelemetry;
class StructureEditorData;
class StructureTelemetryClientData;
struct AsyncJoinAllow;
struct AsyncJoinDeny;
struct ChunkRecyclerTelemetryOutput;
struct DBStoragePerformanceTelemetryData;
struct ExtraLicenseData;
struct LevelStorageEventingContext;
struct LowMemoryReport;
struct NewBlockID;
struct PacksInfoData;
struct PlatformOfferPurchaseDetails;
struct ProductSku;
struct ProfilerLiteTelemetry;
struct SerialWorkListLogEntry;
struct StackStats;
struct WebviewDownloadInfo;
struct glTFExportData;
namespace Bedrock { class CrashTelemetryProcessor; }
namespace Bedrock { struct DeviceIdContext; }
namespace Bedrock { struct DirectoryEntry; }
namespace Bedrock::Http { class Status; }
namespace Core::Profile { struct FileCounters; }
namespace Json { class Value; }
namespace OreUI { struct DataTracker; }
namespace PlayerMessaging { struct SigninID; }
namespace PuvLoadData { struct TelemetryEventData; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class Identity; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct PlayerIDs; }
namespace Social::Events { class EventManager; }
namespace Social::Events { class IEventListener; }
namespace Social::Events { class Measurement; }
namespace Social::Events { class Property; }
namespace Social::Events { struct InboxSummaryData; }
namespace Social::eventData { class PersonaOfferClickedData; }
namespace Social::eventData { class StoreOfferClickedData; }
namespace Webview { struct TelemetryCommonProperties; }
namespace librarySearch { struct TelemetryData; }
namespace mce { class UUID; }
namespace Legacy { struct WorldConversionReport; }
namespace storeSearch { struct TelemetryData; }
// clang-format on

class IMinecraftEventing : public ::Bedrock::EnableNonOwnerReferences,
                           public ::IPackTelemetry,
                           public ::IScreenChangedEventing,
                           public ::IConnectionEventing,
                           public ::IWebviewTelemetry,
                           public ::IUIEventTelemetry {
public:
    // IMinecraftEventing inner types declare
    // clang-format off
    struct CommandParseTableEntry;
    // clang-format on

    // IMinecraftEventing inner types define
    enum class AddedFriendLocation : int {
        AddFriendsRecommendedFriends = 0,
        AddFriendsRecentlyPlayedWith = 1,
        AddFriendsFollowers          = 2,
        AddFriendsSearch             = 3,
        ProfileMain                  = 4,
        JsonUI                       = 5,
        ProfileFriendsList           = 6,
        ProfileFollowersList         = 7,
    };

    enum class AuthenticationOutcome : int {
        Success         = 0,
        Failed          = 1,
        AccountRequired = 2,
    };

    enum class CDNDownloadEventOrigin : int {
        Manifest                  = 0,
        SystemServicePacks        = 1,
        WorldResourcePackDownload = 2,
    };

    enum class CDNDownloadResult : int {
        Success            = 0,
        Failure            = 1,
        Timeout            = 2,
        AddedToPackRepo    = 3,
        NotFoundInPackRepo = 4,
        NotOnStack         = 5,
    };

    enum class ChunkCacheResultType : int {
        SuccessFromCache   = 0,
        SuccessFromNetwork = 1,
        Failure            = 2,
    };

    enum class ClubsEngagementAction : int {
        Like    = 0,
        Unlike  = 1,
        Post    = 2,
        Delete  = 3,
        Report  = 4,
        Comment = 5,
    };

    enum class ClubsEngagementTargetType : int {
        Unknown       = 0,
        ImageFeedPost = 1,
        TextFeedPost  = 2,
        Comment       = 3,
        RealmEvent    = 4,
        Gamertag      = 5,
    };

    enum class ClubsFeedScreenSource : int {
        PlayScreen  = 0,
        PauseScreen = 1,
        SlotsScreen = 2,
    };

    enum class DayOneExperienceState : int {
        Started                    = 0,
        CompletedWithoutWorlds     = 1,
        CompletedWithImportSkipped = 2,
        CompletedWithImport        = 3,
    };

    enum class DeviceAccountFailurePhase : int {
        Unknown                 = 0,
        SignIn                  = 1,
        LoadCredentials         = 2,
        TitleKey                = 3,
        StoreVerify             = 4,
        PlayFabCreateConfigured = 5,
        PlayFabCreate           = 6,
    };

    enum class EducationLessonAction : int {
        Start    = 0,
        Continue = 1,
        Restart  = 2,
        Host     = 3,
        Join     = 4,
        Finish   = 5,
    };

    enum class ElementConstructorUseType : int {
        Created = 0,
        Entered = 1,
    };

    enum class ExploitType : int {
        DropItem                   = 0,
        ExcessiveChatMessageLength = 1,
        SoundPacket                = 2,
    };

    enum class ExportOutcome : int {
        Failed  = 0,
        Success = 1,
    };

    enum class ExportStage : int {
        Initiated = 0,
        Completed = 1,
    };

    enum class FileTransmissionDirection : int {
        Download = 0,
        Upload   = 1,
    };

    enum class FileTransmissionState : int {
        Failed    = 0,
        Started   = 1,
        Completed = 2,
        Resumed   = 3,
        Canceled  = -1,
    };

    enum class FileTransmissionType : int {
        RealmFile         = 1,
        Dlc               = 2,
        Remix3DDeprecated = 3,
        DlcUpdateAuto     = 4,
        DlcUpdateUser     = 5,
    };

    enum class IgnoredNotificationSource : int {
        OwnRealm     = 0,
        FriendsRealm = 1,
        Count        = 2,
    };

    enum class IgnoredNotificationsType : int {
        UnreadPost   = 0,
        RealmsInvite = 1,
        Count        = 2,
    };

    enum class LessonCompleteDialogEntryPoint : int {
        EduPauseMenu  = 0,
        LessonCommand = 1,
    };

    enum class MarkLevelForSyncReason : int {
        DoesntExist        = 0,
        LocalOutOfDate     = 1,
        ManifestInBadState = 2,
        FirstSyncBlob      = 3,
    };

    enum class MultiplayerSessionUpdateTrigger : int {
        None         = -1,
        PlayerJoined = 0,
        PlayerLeft   = 1,
    };

    enum class PetDeathContext : int {
        DiedOfOtherCause = 0,
        PlayerMurdered   = 1,
        OwnerMurdered    = 2,
        MobMurdered      = 3,
    };

    enum class ProfileError : int {
        None                              = 0,
        UserNotFound                      = 1,
        NoInternet                        = 2,
        NotAllowedToViewProfilesAdult     = 3,
        NotAllowedToViewProfilesChild     = 4,
        NotLoggedInWithMSA                = 5,
        LoggedInWithMSAButPlatformProfile = 6,
    };

    enum class PromotionType : int {
        Featured = 0,
        Default  = 1,
        None     = 2,
    };

    enum class PurchaseResult : int {
        Success  = 1,
        Canceled = 0,
        Failed   = -1,
    };

    enum class PurchaseStage : int {
        Unknown     = 0,
        Store       = 1,
        Marketplace = 2,
    };

    enum class RealmConnectionFlow : int {
        PlayScreen             = 0,
        SettingsScreen         = 1,
        InviteLink             = 2,
        AllowList              = 3,
        Marketplace            = 4,
        CreateScreen           = 5,
        SlotsScreen            = 6,
        ConnectToRealmLink     = 7,
        EditWorld              = 8,
        TimelineRequiredScreen = 9,
    };

    enum class RealmConnectionLambda : int {
        CompletedCallback                 = 0,
        RetryCallback                     = 1,
        ProgressScreenTickCallback        = 2,
        ProgressScreenOnCancelCallback    = 3,
        GameServerConnectProgressCallback = 4,
    };

    enum class RealmConnectionResult : int {
        Success                       = 0,
        SuccessWithWarning            = 1,
        FailWithUnnassignedDevVersion = 2,
        Fail                          = 3,
        Retry                         = 4,
        CancelByUser                  = 5,
        InvalidCallback               = 6,
        Unknown                       = 7,
        TimedOut                      = 8,
    };

    enum class ServerType : int {
        Unknown         = 0,
        DedicatedServer = 1,
        PublicServer    = 2,
    };

    enum class ShareMode : int {
        Share = 1,
        Copy  = 2,
    };

    enum class SignInAccountType : int {
        Unknown         = 0,
        PlayFabDevice   = 1,
        XboxLive        = 2,
        Psn             = 3,
        PlayFabXboxLive = 4,
        PlayFabPsn      = 5,
        PlayFabNsa      = 6,
    };

    enum class SignInStage : int {
        Unknown             = 0,
        Starting            = 1,
        Failed              = 2,
        Canceled            = 3,
        Succeeded           = 4,
        SucceededNewAccount = 5,
        FailedCreate        = 6,
    };

    enum class StoreType : int {
        Store        = 0,
        DressingRoom = 1,
    };

    enum class StructureBlockActionType : int {
        Unknown     = -1,
        Save        = 0,
        Load        = 1,
        Export      = 2,
        Export3D    = 3,
        LeaveScreen = 4,
        Import      = 5,
    };

    enum class WorldClassroomCustomization : int {
        ResourceUri = 0,
    };

    struct CommandParseTableEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkf81146;
        ::ll::UntypedStorage<8, 8> mUnk92e4f2;
        // NOLINTEND

    public:
        // prevent constructor by default
        CommandParseTableEntry& operator=(CommandParseTableEntry const&);
        CommandParseTableEntry(CommandParseTableEntry const&);
        CommandParseTableEntry();
    };

    using CommandParseTableDetails = ::std::vector<::IMinecraftEventing::CommandParseTableEntry>;

    using SignInErrorDetails = ::std::vector<::std::pair<::std::string, ::std::string>>;

    using TestBuildIdType = char const*;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMinecraftEventing() /*override*/;

    virtual void init(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&,
        ::std::unique_ptr<::Social::Events::EventManager>
    ) = 0;

    virtual void initDeviceAndSessionIds() = 0;

    virtual void initEditorEventListener() = 0;

    virtual void shutdown() = 0;

    virtual ::std::string const& getPlayerSessionId() = 0;

    virtual ::std::chrono::steady_clock::time_point getWorldSessionIdGenerationTimestamp() const = 0;

    virtual bool getShouldHaveAchievementsEnabled() = 0;

    virtual void setShouldHaveAchievementsEnabled(bool) = 0;

    virtual bool getAchievementsAlwaysEnabled() = 0;

    virtual uint getPrimaryLocalUserId() const = 0;

    virtual void forceSendEvents() = 0;

    virtual ::Social::Events::EventManager& getEventManager() const = 0;

    virtual void updatePrimaryLocalUserId(uint const&) = 0;

    virtual void registerSecondaryUserCommonProperties(uint const&, ::Social::Identity&) const = 0;

    virtual void unregisterSecondaryUserCommonProperties(uint const&) const = 0;

    virtual void updateIsLegacyPlayer(bool) const = 0;

    virtual void updateIsTrial(bool) const = 0;

    virtual void updateEditionType() const = 0;

    virtual void updateClientId() const = 0;

    virtual void registerOptionsObserver(::std::shared_ptr<::Options>) = 0;

    virtual void addListener(::std::unique_ptr<::Social::Events::IEventListener>) = 0;

    virtual void clearListeners() = 0;

    virtual ::Json::Value propertiesAsJsonValue() const = 0;

    virtual void fireEvent(
        ::std::string const&,
        ::std::vector<::Social::Events::Property> const&,
        ::std::vector<::Social::Events::Measurement> const&,
        bool
    ) = 0;

    virtual void fireEventBlockTypeRegistryChecksumMismatch(
        ::std::string const&,
        uint64 const&,
        uint64 const&,
        ::std::string const&
    ) = 0;

    virtual void fireEventOnSuccessfulClientLogin(::MultiPlayerLevel const*) = 0;

    virtual void fireEventStartClient(::std::string const&) = 0;

    virtual void
    fireEventStartWorld(::NetworkType, ::std::string const&, ::Social::MultiplayerServiceIdentifier const) = 0;

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
        bool,
        ::Social::GameConnectionInfo const&
    ) = 0;

    virtual void
    fireEventClientLastPackets(uint const&, ::SubClientId const, int, ::Json::Value const&, ::Json::Value const&) = 0;

    virtual void fireEventSignalServiceConnect(
        ::SignalServiceConnectStage,
        bool,
        ::Json::Value const&,
        ::PlayerMessaging::SigninID const&,
        ::std::string const&,
        bool
    ) = 0;

    virtual void
    fireEventSignalMessagePerformance(::PlayerMessaging::SigninID const&, ::MessagePerformance const&, bool) = 0;

    virtual void fireEventOnClientDisconnect(
        ::SubClientId,
        bool,
        ::Connection::DisconnectFailReason,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&
    ) = 0;

    virtual void fireEventOnServerDisconnect(
        ::Connection::DisconnectFailReason,
        ::std::string const&,
        ::SubClientId,
        ::std::string const&,
        uint64,
        ::std::string const&
    ) = 0;

    virtual void fireEventOnServerAsyncJoinTaskVerdict(
        ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny> const&,
        ::SubClientId const,
        uint
    ) = 0;

    virtual void fireEventHttpClientError(::std::string const&) = 0;

    virtual void fireGlobalResourcePackCrashRecovery(::PackInstance&, ::mce::UUID, int) = 0;

    virtual void fireServerConnectionEvent(
        ::IConnectionEventing::ServerConnectionOutcome,
        uint,
        double,
        ::std::string const&,
        ::std::string const&
    ) = 0;

    virtual void fireServerConnectionAttemptEvent(::std::string const&, bool, ::std::string const&) = 0;

    virtual void fireTextToSpeechToggled(bool, bool) = 0;

    virtual void
    fireEventAppInitFileOpenStats(::Core::Profile::FileCounters const&, ::Core::Profile::FileCounters const&) = 0;

    virtual void fireEventStartupPerformance(
        ::std::vector<::SerialWorkListLogEntry> const&,
        ::std::vector<::SerialWorkListLogEntry> const&,
        ::std::vector<::SerialWorkListLogEntry> const&
    ) = 0;

    virtual void fireEventOnAppStart(::std::vector<::SerialWorkListLogEntry> const&) = 0;

    virtual void fireEventOnAppSuspend(::std::vector<::SerialWorkListLogEntry> const&, bool) = 0;

    virtual void fireEventOnAppResume(::std::vector<::SerialWorkListLogEntry> const&) = 0;

    virtual void fireEventOnDeviceLost(::std::vector<::SerialWorkListLogEntry> const&) = 0;

    virtual void fireEventHardwareInfo() = 0;

    virtual void fireEventDeviceLost() = 0;

    virtual void fireEventRenderingSizeChanged() = 0;

    virtual void fireEventDiskStatus(::DiskStatus, ::Core::LevelStorageState, uint64) = 0;

    virtual void fireEventStorageAreaFull(::std::string const&, ::std::vector<::Bedrock::DirectoryEntry> const&) = 0;

    virtual void fireEventOptionsUpdated(::Options&, ::InputMode, bool) = 0;

    virtual void
    fireEventChatSettingsUpdated(::Player const*, ::std::vector<::Social::Events::Property> const&) const = 0;

    virtual void fireEventPerformanceMetrics(::ProfilerLiteTelemetry const&, bool, int) = 0;

    virtual void fireEventPerformanceContext(::PerfContextTrackerReport const&, bool, int) = 0;

    virtual void fireEventDevSlashCommandExecuted(::std::string const&, ::std::string const&) = 0;

    virtual void fireCommandParseTableTelemetry(
        bool const,
        ::std::vector<::IMinecraftEventing::CommandParseTableEntry> const&
    ) const = 0;

    virtual void fireEventPlayerTravelled(::Player*, float) = 0;

    virtual void fireEventVideoPlayed(::std::string const&, ::std::string const&) = 0;

    virtual void fireEventRespondedToAcceptContent(::PacksInfoData const&, bool, bool) = 0;

    virtual void
    fireEventWorldLoadTimes(::std::string const&, ::std::vector<::std::pair<::std::string, float>> const) = 0;

    virtual void fireCDNDownloadEvent(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::IMinecraftEventing::CDNDownloadResult const&,
        ::IMinecraftEventing::CDNDownloadEventOrigin const&,
        float const&
    ) = 0;

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
    ) = 0;

    virtual void fireEventSignOutOfIdentity(
        ::IMinecraftEventing::SignInAccountType,
        ::Social::IdentitySignInTrigger,
        ::std::string const&,
        ::std::string const&
    ) = 0;

    virtual void fireEventAppPaused() = 0;

    virtual void fireEventAppUnpaused() = 0;

    virtual void fireEventAppSurfaceCreated() = 0;

    virtual void fireEventAppSurfaceDestroyed() = 0;

    virtual void fireEventSplitScreenUpdated(::IClientInstance const&) = 0;

    virtual void fireEventPopupClosed(::std::string const&) const = 0;

    virtual void fireEventWorldImported(int64, uint64) = 0;

    virtual void fireEventWorldImportedResult(::FileArchiverOutcome) = 0;

    virtual void fireCurrentInputUpdated(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&) = 0;

    virtual void fireEventTreatmentPackApplied(::PackManifest const&) = 0;

    virtual void fireEventPackPlayed(::PackInstance const&, uint) = 0;

    virtual void fireEventTreatmentPackDownloadFailed(::std::string, ::std::string, ::std::string, ::std::string) = 0;

    virtual void fireEventTreatmentPackDownloaded(::std::string, ::std::string, ::std::string, ::std::string) = 0;

    virtual void fireEventTreatmentPackRemoved(::std::string) = 0;

    virtual void fireEventContentLogsInWorldSession(::std::string const&, uint, uint) = 0;

    virtual void fireEventEntitlementCacheLoadTimeout() = 0;

    virtual void fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow) = 0;

    virtual void fireRealmConnectionEventGenericLambdaCalled(
        ::IMinecraftEventing::RealmConnectionFlow,
        ::IMinecraftEventing::RealmConnectionLambda,
        ::IMinecraftEventing::RealmConnectionResult
    ) = 0;

    virtual void fireEventCompoundCreatorCreated(int, int) = 0;

    virtual void fireEventElementConstructorUsed(int, int, ::IMinecraftEventing::ElementConstructorUseType) = 0;

    virtual void fireEventEntitySpawned(::Player*, int, uint) = 0;

    virtual void fireEventReducerBlockEntered(::ItemDescriptor const&) = 0;

    virtual void fireEventRespawn(::Player&, int) = 0;

    virtual void fireEventServerRespawnSearchTime(::Player&, ::PlayerRespawnTelemetryData const&) = 0;

    virtual void firePackSettingsEvent(::PackSettings const&, ::PackManifest const&, ::std::string) = 0;

    virtual void removeTestBuildIdTag() = 0;

    virtual void removeTestTelemetryTag() = 0;

    virtual void setTestBuildIdTag(char const*) = 0;

    virtual void setTestTelemetryTag(char const*) = 0;

    virtual void stopDebugEventLoggingForAllListeners() = 0;

    virtual void tick() = 0;

    virtual void
    fireEventMultiplayerClientConnectionStateChanged(::std::string const&, uint, uint, uint, ::std::string const&) = 0;

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
    ) = 0;

    virtual void
    fireEventServerReceivedValidPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId) = 0;

    virtual void fireEventJoinCanceled(::LoadingState) = 0;

    virtual void fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType,
        int,
        ::std::set<::IMinecraftEventing::IgnoredNotificationSource>
    ) = 0;

    virtual void fireClubsEngagementEvent(
        ::IMinecraftEventing::ClubsEngagementAction,
        ::IMinecraftEventing::ClubsEngagementTargetType,
        char const*,
        int64 const,
        ::std::string const&
    ) = 0;

    virtual void fireClubsOpenFeedScreenEvent(
        ::IMinecraftEventing::ClubsFeedScreenSource const,
        int64 const,
        ::std::string const&,
        int
    ) = 0;

    virtual void fireEventEntitlementListInfo(::std::vector<::ContentIdentity>&, bool) = 0;

    virtual void fireEventStorage(int, ::std::string const&) = 0;

    virtual void fireEventDlcStorageFull(::std::string const&, uint64, uint64, uint64, uint64) = 0;

    virtual void fireEventIAPPurchaseAttempt(::std::string const&, ::std::string const&, ::Offer&, ::PurchasePath) = 0;

    virtual void fireEventIAPPurchaseResolved(
        ::std::string const&,
        ::std::string const&,
        ::Offer&,
        ::IMinecraftEventing::PurchaseResult,
        ::PurchasePath
    ) = 0;

    virtual void
    fireEventIAPRedeemAttempt(::std::string const&, ::std::string const&, ::std::string const&, ::PurchasePath) = 0;

    virtual void fireEventIAPRedeemResolved(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::IMinecraftEventing::PurchaseResult,
        ::PurchasePath
    ) = 0;

    virtual void fireEventPurchaseAttempt(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::IMinecraftEventing::StoreType,
        ::PurchasePath,
        ::std::optional<uint64>
    ) = 0;

    virtual void fireEventPurchaseResolved(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::IMinecraftEventing::StoreType,
        ::IMinecraftEventing::PurchaseResult,
        ::PurchasePath,
        ::std::optional<uint64>
    ) = 0;

    virtual void fireEventUnfulfilledPurchaseFound(::PlatformOfferPurchaseDetails&) = 0;

    virtual void fireEventPlatformStorePurchaseFailure(::std::string const&, ::std::string const&) = 0;

    virtual void
    fireEventPurchaseFailureDetails(int, ::std::string const&, ::std::string const&, ::std::string const&) = 0;

    virtual void fireEventTreatmentsCleared() = 0;

    virtual void fireEventTreatmentsSet(::std::vector<::std::string> const&, ::std::string const&) = 0;

    virtual void fireEventProgressionsSet(::std::vector<::std::string> const&) = 0;

    virtual void fireEventPackImportTimeout(::std::string const&) = 0;

    virtual void fireEventFatalClientPackError(::FatalClientPackErrorType, ::gsl::span<::std::string const>) = 0;

    virtual void
    fireEventStoreErrorPage(::std::string const&, ::std::string const&, ::std::string const&, ::std::string const&) = 0;

    virtual void setServerIdsforClient(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&
    ) = 0;

    virtual void setConnectionGUID(::std::string const&) = 0;

    virtual void removeConnectionGUID() = 0;

    virtual void prepEventSearchCatalogRequest(::SearchRequestTelemetry const&) = 0;

    virtual void fireEventSearchCatalogRequest(::SearchRequestTelemetry const&) = 0;

    virtual void fireEventStoreLocalizationBinaryFetchResponse(int const, uint const) = 0;

    virtual void fireEventStoreSessionResponse(::std::string const&, int const, int const, bool const) = 0;

    virtual void fireEventStoreDiscoveryRequestResponse(int const, int const, bool const) = 0;

    virtual void fireEventStoreInventoryRefreshRequestResponse(int const, int const, bool const) = 0;

    virtual void fireEventInventoryVersionRefreshRequestResponse(int const, int const, bool const) = 0;

    virtual void fireEventServerDrivenLayoutPageLoaded(::RequestTelemetry&, ::std::string, int, int, int, int, int) = 0;

    virtual void fireEventServerDrivenLayoutImagesLoaded(
        ::RequestTelemetry&,
        ::std::string,
        int,
        uint64,
        int,
        int,
        int,
        ::std::vector<ushort>&
    ) = 0;

    virtual void fireEventLockedItemGiven() = 0;

    virtual void fireEventPlayerBounced(::Player*, ::Block const&, int) = 0;

    virtual void fireEventSetValidForAchievements(::Player*, bool) = 0;

    virtual void fireEventAchievementReceived(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    virtual void updatePlayerUndergroundStatus(::Player* player, bool isUnderground);

    virtual void fireEventPlayerAttemptingExploit(::Player*, ::IMinecraftEventing::ExploitType) = 0;

    virtual void
    fireEventWorldLoaded(::Player*, ::persona::ProfileType const, ::std::string const&, bool, ::NetworkType) = 0;

    virtual void
    fireEventMarkLevelForSync(::std::string const&, int64, int64, ::IMinecraftEventing::MarkLevelForSyncReason) = 0;

    virtual void fireMinecraftVersionLaunched(bool) = 0;

    virtual void fireMinecraftVersionInviteAccepted(bool, uint64) = 0;

    virtual void fireInviteStatusReceived(::std::string) = 0;

    virtual void fireInviteStatusSentImpl(uint, ::std::vector<::std::string>) = 0;

    virtual void fireDayOneExperienceStateChanged(
        ::IMinecraftEventing::DayOneExperienceState,
        ::std::optional<uint>,
        ::std::optional<uint64>
    ) = 0;

    virtual void fireContentDecryptionFailure(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    virtual void fireWorldConversionAttemptEvent(::Legacy::WorldConversionReport const&) = 0;

    virtual void fireWorldConversionInitiatedEvent(::std::string const&) = 0;

    virtual void fireWorldUpgradedToCnCPart2(
        bool,
        ::std::string const&,
        ::Experiments const&,
        ::std::string const&,
        ::LevelSeed64,
        float
    ) = 0;

    virtual void fireEventAssertFailed(::std::string const&, ::std::string const&) = 0;

    virtual void fireEventCrashSystemFailedToInit() = 0;

    virtual void fireChatUsedEvent(uint, bool) = 0;

    virtual void fireEventJoinByCode(::std::string const&) = 0;

    virtual void fireEventBlockPlacedByCommand(::Block const&, int) = 0;

    virtual void fireEventServerPlayerJoinedGame(::NetworkIdentifier const&, ::SubClientId, ::std::string const&) = 0;

    virtual void fireEventScriptPluginDiscovery(::ScriptPluginResult const&, bool) = 0;

    virtual void fireEventScriptPluginRun(::ScriptPluginResult const&, ::std::chrono::microseconds, bool) = 0;

    virtual void fireEventScriptDebuggerListen(bool, bool) = 0;

    virtual void fireEventScriptDebuggerConnect(bool, bool, int) = 0;

    virtual void fireEditorEventToolActivated(::std::string const&) = 0;

    virtual void fireEditorUndo(::std::string const&) = 0;

    virtual void fireEditorRedo(::std::string const&) = 0;

    virtual void fireEditorScriptAction(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    virtual void fireEditorTutorialEvent(
        ::std::string_view,
        ::std::optional<::std::string> const&,
        ::std::string const&,
        ::std::optional<::std::string> const&
    ) = 0;

    virtual void fireEventWorldLoadedClassroomCustomization(
        ::IMinecraftEventing::WorldClassroomCustomization,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>>
    ) = 0;

    virtual void fireClassroomSettingUpdated(::ClassroomSetting, ::SettingsScreenMode) = 0;

    virtual void fireEventNpcPropertiesUpdated(::Actor&, bool) = 0;

    virtual void fireEventBoardTextUpdated(::ChalkboardBlockActor&) = 0;

    virtual void fireEventCameraUsed(bool) = 0;

    virtual void fireEventPortfolioExported(int, int) = 0;

    virtual void fireQuickPlayEvent() = 0;

    virtual void firePermissionsSetEvent(
        ::PlayerPermissionLevel const,
        ::CommandPermissionLevel const,
        ::PlayerPermissionLevel const,
        ::CommandPermissionLevel const
    ) = 0;

    virtual void fireExternalUriLaunched(::std::string const&) const = 0;

    virtual void fireUserGeneratedUriLaunched(::UserGeneratedUriSource) const = 0;

    virtual void fireUserGeneratedUriLaunchFailed(
        ::UserGeneratedUriSource,
        ::Util::ResourceUri::ValidationStatus,
        ::std::string const&
    ) const = 0;

    virtual void fireEventEmptyLibraryCategoryError(::std::string const&) const = 0;

    virtual void fireCodeBuilderCachePerformance(::std::string const&, ::std::chrono::milliseconds) const = 0;

    virtual void
    fireCodeBuilderLoadPerformance(::std::string const&, uint64, uint64, ::std::chrono::milliseconds) const = 0;

    virtual void fireCodeBuilderRunPerformance(::std::string const&, ::std::chrono::milliseconds) const = 0;

    virtual void fireLibraryButtonPressed(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    virtual void fireCourseButtonPressed(::std::string const&, ::std::string const&) = 0;

    virtual void fireLessonActionTaken(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::IMinecraftEventing::EducationLessonAction,
        int
    ) = 0;

    virtual void fireLessonProgressEvent(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        int
    ) = 0;

    virtual void fireShareButtonPressed(::std::string const&, ::EduShareUriType, ::EduShareMethodType, bool) = 0;

    virtual void fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint const) const = 0;

    virtual void fireInAppCodeBuilderActivated(
        ::OpenCodeMethod,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&
    ) const = 0;

    virtual void fireInAppCodeBuilderDismissed(::std::string const&) const = 0;

    virtual void fireCodeCommandButtonPressed() = 0;

    virtual void fireIDESelected(::std::string const&) const = 0;

    virtual void fireEventEduResources() const = 0;

    virtual void fireEventEduiOSPurchaseTransaction(::TransactionStatus const&) const = 0;

    virtual void fireEventCodeBuilderClosed() const = 0;

    virtual void fireEventCodeBuilderLog(
        ::Webview::TelemetryCommonProperties const&,
        ::std::string const&,
        ::std::string&
    ) const = 0;

    virtual void fireEventCodeBuilderScoreChanged(::std::string const&, int const) const = 0;

    virtual void fireEventCodeBuilderRuntimeAction(::std::string const&) const = 0;

    virtual void fireEventEduServiceStatus(
        ::std::string const&,
        ::std::string const&,
        int,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>>
    ) const = 0;

    virtual void fireEventWebviewDownload(::std::string const&, ::WebviewDownloadInfo const&) const = 0;

    virtual void fireEduServiceRequestFailed(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>>
    ) const = 0;

    virtual void
    fireEventButtonPressed(::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) const = 0;

    virtual void
    fireEventModalShown(::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) const = 0;

    virtual void
    fireEventOptionsChanged(::std::string const&, ::std::unordered_map<::std::string, int> const&) const = 0;

    virtual void fireEventTagButtonPressed(::std::string const&, bool) const = 0;

    virtual void fireEventLevelDataOverride(::std::string_view) const = 0;

    virtual void fireEventEduContentVerificationFailed() const = 0;

    virtual void fireEventLibrarySearch(::librarySearch::TelemetryData const&) const = 0;

    virtual void
    fireEventLibrarySearchItemSelected(int const, int const, ::std::string const&, int const, int const) const = 0;

    virtual void fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType, double) const = 0;

    virtual void fireEventWorldExported(int64, uint64) = 0;

    virtual void fireEventControlRemappedByPlayer(::std::string const&, ::RawInputType, int) const = 0;

    virtual void fireEventDifficultySet(::SharedTypes::Legacy::Difficulty, ::SharedTypes::Legacy::Difficulty) = 0;

    virtual void fireEventGameRulesUpdated(bool, bool, ::std::string const&) = 0;

    virtual void fireEventGameRulesUpdated(int, int, ::std::string const&) = 0;

    virtual void fireEventGameRulesUpdated(float, float, ::std::string const&) = 0;

    virtual void fireEventDefaultGameTypeChanged(::GameType, ::GameType) = 0;

    virtual void fireEventNewContentCheckCompleted(::std::string const&, bool) = 0;

    virtual void fireEventEncyclopediaTopicChanged(::std::string const&, ::InputMode) = 0;

    virtual void fireEventHowToPlayTopicChanged(::std::string const&, ::InputMode) = 0;

    virtual void fireEventAndroidHelpRequest() = 0;

    virtual void fireEventWorldFilesListed(uint64, uint64, uint64, uint64) = 0;

    virtual void fireEventLabTableCreated(int, int, int) = 0;

    virtual void fireEventPlayerMessageSay(::std::string const&, ::std::string const&) = 0;

    virtual void fireEventPlayerMessageTell(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    virtual void fireEventPlayerMessageChat(::std::string const&, ::std::string const&) = 0;

    virtual void fireEventPlayerMessageMe(::std::string const&, ::std::string const&) = 0;

    virtual void fireEventPlayerMessageTitle(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    virtual void fireEventPlayerDamaged(::Player*, ::SharedTypes::Legacy::ActorDamageCause) = 0;

    virtual void fireEventPlayerKicked(::std::string const&, ::std::string const&) = 0;

    virtual void fireEventPlayerBanned(::std::string const&) = 0;

    virtual void fireEventRealmShared(::std::string const&, ::IMinecraftEventing::ShareMode const&, int64 const&) = 0;

    virtual void fireEventRealmMemberlistCleared(int64 const&, int const&) = 0;

    virtual void fireEventRealmUrlGenerated(::std::string const&, int64 const&) = 0;

    virtual void fireEventStructureExport(
        ::glTFExportData const&,
        ::IMinecraftEventing::ExportOutcome,
        ::IMinecraftEventing::ExportStage
    ) const = 0;

    virtual void
    fireEventContentShared(::std::string const&, ::std::string const&, ::IMinecraftEventing::ShareMode const&) = 0;

    virtual void fireEventStorageReport(::std::string const&) = 0;

    virtual void fireEventStackLoaded(::StackStats const&) = 0;

    virtual void fireEventUnknownBlockReceived(::NewBlockID const&, ushort) = 0;

    virtual void fireEventSignInEdu(
        ::std::string const&,
        ::edu::Role,
        ::Identity::EduSignInStage,
        ::std::string const&,
        ::std::string const&,
        ::std::vector<::std::pair<::std::string, ::std::string>> const&
    ) = 0;

    virtual void fireEventSignOutEdu(
        ::std::string const&,
        ::edu::Role,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&
    ) = 0;

    virtual void fireEventSwitchAccountEdu(::std::string const&, ::edu::Role, ::std::string const&) = 0;

    virtual void fireEventEduDemoConversion(::edu::Role, ::LastClickedSource) = 0;

    virtual void fireEventPopupFiredEdu(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::ActiveDirectoryAction const
    ) = 0;

    virtual void fireEventPlayIntegrityCheck(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&
    ) = 0;

    virtual void fireEventCloudOperationStartedEdu(
        ::EduCloudUtils::Operation const,
        ::EduCloud::CloudItemType const,
        ::std::string const&,
        uint64 const,
        ::std::optional<::std::string> const&
    ) = 0;

    virtual void fireEventCloudMyWorldsSummary(int const, int const, int const, int const, int const) = 0;

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
    ) = 0;

    virtual void fireEventCloudConflictCheckEdu(::std::string const&, ::EduCloud::ConflictResolutionStatus const) = 0;

    virtual void fireEventPurchaseGameAttempt(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    virtual void fireEventPurchaseGameResult(int) = 0;

    virtual void fireEventTrialDeviceIdCorrelation(int64, ::std::string const&, int64, ::std::string const&) = 0;

    virtual void fireEventDeviceIdManagerFailOnIdentityGained() = 0;

    virtual void fireEventPushNotificationPermission(bool, ::std::string const&) = 0;

    virtual void fireEventPushNotificationReceived(::PushNotificationMessage const&) = 0;

    virtual void fireEventPushNotificationOpened(::std::string const&, ::std::string const&) = 0;

    virtual void firePerfTestEvent(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        uint,
        uint,
        ::std::string const&,
        ::std::vector<::std::pair<::std::string, float>> const&
    ) = 0;

    virtual void fireEventLicenseCheck(bool, ::ExtraLicenseData&) = 0;

    virtual void fireQueryOfferResult(::std::string const&, int, bool) = 0;

    virtual void fireEventQueryPurchasesResult(::std::string const&, ::std::string const&, int, bool) = 0;

    virtual void fireEventWorldGenerated(::std::string const&, ::LevelSettings const&, bool) = 0;

    virtual void fireEventCopyWorldEducationEnabled() = 0;

    virtual void fireEventBundleSubOfferClicked(
        int,
        int,
        ::std::string const&,
        ::std::string const&,
        bool,
        ::std::string const&
    ) = 0;

    virtual void fireEventStoreOfferClicked(::Social::eventData::StoreOfferClickedData const&) = 0;

    virtual void fireEventStoreOfferClicked(::std::string const, ::std::string const&) = 0;

    virtual void fireEventPersonaOfferClicked(::Social::eventData::PersonaOfferClickedData const&) = 0;

    virtual void fireEventStoreSearch(::storeSearch::TelemetryData const&) = 0;

    virtual void fireEventSearchItemSelected(
        int const,
        int const,
        ::std::string const&,
        int const,
        int const,
        int const,
        ::std::string const&
    ) = 0;

    virtual void fireEventRealmsPurchase(
        ::std::string const&,
        ::RealmsPurchaseFlow,
        ::RealmsPurchaseIntent,
        ::RealmsOfferPeriod,
        ::RealmsOfferTier,
        bool,
        ::ProductSku const&,
        ::RealmsPurchaseStage,
        ::RealmsPurchaseStatus,
        ::RealmsPurchaseTelemetryFailureReason,
        ::std::vector<::Offer*> const&
    ) = 0;

    virtual void fireEventUserListUpdated(
        ::std::string const& productId,
        ::std::string const& listId,
        ::std::string const& operation,
        bool                 success
    ) = 0;

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
    ) = 0;

    virtual void fireEventRealmsGeneralCall(::std::string const&, ::Bedrock::Http::Status) = 0;

    virtual void fireEventRealmsRealmSpecificCall(::std::string const&, int64, ::Bedrock::Http::Status) = 0;

    virtual void
    fireEventRealmDownload(::std::string const&, ::std::string const&, int const, int const, int const) = 0;

    virtual void
    fireEventRealmUpload(::std::string const&, ::std::string const&, int const, int const, int const, bool const) = 0;

    virtual void fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow) = 0;

    virtual void fireRealmConnectionEventRealmAPIResponse(::IMinecraftEventing::RealmConnectionFlow, int) = 0;

    virtual ::std::string getSessionId() = 0;

    virtual void fireEventChunkLoaded(::LevelChunk&) = 0;

    virtual void fireEventChunkUnloaded(::LevelChunk&) = 0;

    virtual void fireEventChunkChanged(::LevelChunk&) = 0;

    virtual void fireEventMultiplayerSessionUpdate(::Bedrock::NonOwnerPointer<::MultiPlayerLevel>) = 0;

    virtual void fireEventLevelDestruct(bool) = 0;

    virtual void flagEventDeepLink() = 0;

    virtual void flagEventPlayerGameTypeDefault(bool) = 0;

    virtual void fileEventCloudWorldPullFailed(::std::string const&, ::std::string const&, bool) = 0;

    virtual void fireEventLevelDatLoadFailed(::std::string const&, ::std::string const&, bool) = 0;

    virtual void fireEventWorldCorruptionCausedWorldShutdown(
        ::LevelStorageEventingContext const&,
        ::std::string const&,
        ::std::optional<bool>
    ) = 0;

    virtual void fireEventClientLeftGameDueToUnrecoverableError(::std::string const&, bool) = 0;

    virtual void fireEventServerShutdownDueToError(::std::string const&) = 0;

    virtual void fireEventDBStorageSizeSnapshot(
        ::LevelStorageEventingContext const&,
        ::DBStorageFolderWatcher const&,
        ::DBStorageFolderWatcherSnapshotKind
    ) = 0;

    virtual void fireEventLevelDBPerformanceData(
        ::LevelStorageEventingContext const&,
        ::DBStoragePerformanceTelemetryData const&
    ) = 0;

    virtual void fireEventDBReadFail(::LevelStorageEventingContext const&, ::std::string const&) = 0;

    virtual void fireEventSidebarNavigation(
        uint const&,
        ::std::string const&,
        ::std::string const&,
        int const,
        bool const,
        bool const,
        bool const
    ) = 0;

    virtual void
    fireEventSidebarVerboseToggled(uint const&, ::std::string const&, ::std::string const&, bool const) = 0;

    virtual void fireEventPersonaUserLoadedActive(::persona::ProfileType const, ::std::string const&, bool) = 0;

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
        ::IMinecraftEventing::StoreType
    ) = 0;

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
    ) = 0;

    virtual void fireEventPersonaSkinChanged(::persona::ProfileType const, ::std::string const&, bool) = 0;

    virtual void fireEventPersonaAvatarsListed(::std::vector<::persona::ProfileType> const&) = 0;

    virtual void fireEventPersonaEmotePlayed(::std::string const&, bool, int) = 0;

    virtual void fireEventDefaultCastSelected(int, ::mce::UUID, ::std::string const&) = 0;

    virtual void fireEventPersonaInitalizationEvent(uint, ::std::string const&, ::std::string const&) = 0;

    virtual void fireEventPersonaGeneralError(::std::string const&, uint) = 0;

    virtual void fireEventPersonaLoadingPieces(uint, double) = 0;

    virtual void fireEventPersonaStillLoading(
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        ::std::vector<::persona::ProfileType> const&,
        int,
        double
    ) = 0;

    virtual void fireEventPersonaCreationFailed(
        ::std::string const&,
        ::std::string const&,
        bool,
        bool,
        ::std::string const&,
        ::std::string const&
    ) = 0;

    virtual void fireEventPersonaCategoryInformation(::std::string const&) = 0;

    virtual void fireEventDisplayLoggedError(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    virtual void fireEventWorldHistoryPackSourceMissingDuringUpgrade(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&
    ) = 0;

    virtual void fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType,
        ::StructureEditorData const&,
        ::StructureTelemetryClientData const*
    ) = 0;

    virtual void fireStructureBlockRedstoneActivated(
        ::IMinecraftEventing::StructureBlockActionType,
        ::StructureEditorData const&,
        ::StructureTelemetryClientData const*
    ) = 0;

    virtual void fireEventOreUIError(uint const&, ::std::string const&) = 0;

    virtual void fireEventOreUIScreenPerformance(uint const&, ::OreUI::DataTracker const&) = 0;

    virtual void fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool const           isOwner
    ) = 0;

    virtual void fireEventOnboardingWorldCreationUsage(bool, bool, bool) = 0;

    virtual void fireEventDeviceAccountSuccess(bool, ::std::string const&) = 0;

    virtual void fireEventDeviceAccountFailure(
        ::IMinecraftEventing::SignInStage,
        ::IMinecraftEventing::DeviceAccountFailurePhase,
        uint,
        ::std::string const&
    ) = 0;

    virtual ::std::shared_ptr<void*> requestEventDeferment() = 0;

    virtual ::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> getCrashTelemetryProcessor() = 0;

    virtual void fireEventLevelChunkPerformanceData(bool) = 0;

    virtual void fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const&) = 0;

    virtual void fireEventActorValueValidationFailed(::std::string const&, char const*) = 0;

    virtual void fireDBStorageError(::LevelStorageEventingContext const&, ::std::string const&) = 0;

    virtual void
    fireServerStarted(::LevelSettings const&, ::std::unordered_map<::std::string, ::std::string> const&) = 0;

    virtual void fireServerShutdown() = 0;

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
    ) = 0;

    virtual void fireBannedSkinVerificationEvent(
        uint const&,
        ::std::string const&,
        ::std::string const&,
        bool,
        int const,
        ::std::string const&
    ) = 0;

    virtual void fireEventPlayerReportSent(bool, ::std::string const&, ::std::string const&, ::std::string const&) = 0;

    virtual void fireEventOneDSPlayerReportPayload(::std::string const&, ::std::string const&) = 0;

    virtual void fireEventSafetyHTTPRequest(::std::string const&, ::std::string const&, int const) = 0;

    virtual void fireEventProfanityFilter(bool, bool, bool) = 0;

    virtual void
    fireEventChatFloodingActionTaken(::std::string const&, ::Safety::ChatFloodingAction, ::std::string const&) = 0;

    virtual void fireEventTextProcessorStartupFailed(::std::string const&, int, int) = 0;

    virtual void firePlayerAccountMetadata(
        ::Social::PermissionCheckResult,
        ::Social::PermissionCheckResult,
        ::Social::PermissionCheckResult,
        ::Social::PermissionCheckResult,
        ::Social::PermissionCheckResult,
        ::Social::PermissionCheckResult,
        bool,
        bool
    ) = 0;

    virtual void fireEventBlockUser(::std::string const&, bool, bool) = 0;

    virtual void fireEventMuteUser(::std::string const&, bool, bool) = 0;

    virtual void fireStorageMigrationEvent(
        bool,
        ::Bedrock::StorageMigration::StorageMigrationType,
        int,
        int,
        ::std::chrono::nanoseconds,
        ::std::string const&
    ) = 0;

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
    ) = 0;

    virtual void fireEventConnectedStorageError(char const*, ::std::string const&, int64) = 0;

    virtual void
    fireEventUwpToGdkMigrationComplete(::Bedrock::DeviceIdContext const&, ::std::string const&, ::std::string_view) = 0;

    virtual void fireNetworkChangedEvent(::std::string const&) = 0;

    virtual void fireEventMessageServiceImpression(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        bool const
    ) = 0;

    virtual void fireEventMessageReceived(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        bool const
    ) = 0;

    virtual void fireEventGoogleAccountHoldWarning(bool) = 0;

    virtual void fireDelayedEventReportOfflineAction(::std::string const&) = 0;

    virtual void fireEventFeedbackSubmitted(::std::string const&, bool, bool) = 0;

    virtual void
    fireEventTrackDeeplinks(::std::string const&, ::std::string const&, ::std::string const&, ::std::string const&) = 0;

    virtual void fireEventReceivedUniqueWebSessionId(::std::string const&) = 0;

    virtual void firePlayerUnexpectedFallDamage(float const, bool, float const) = 0;

    virtual void fireEventActorMovementCorrectionDivergence(::ActorType, ::std::vector<float> const&) = 0;

    virtual void fireEventDedicatedServerDiscoveryResponse(int const, int const) = 0;

    virtual void fireEventInGamePause(bool) = 0;

    virtual void fireEventGameTip(int, int, int, ::InputMode) = 0;

    virtual void fireEventAddedFriend(::std::string const&, ::IMinecraftEventing::AddedFriendLocation, bool) = 0;

    virtual void fireEventInboxSummary(::Social::Events::InboxSummaryData const&) = 0;

    virtual void fireEventTrialStatusFailed(int) = 0;

    virtual void fireEventSaveDataExpansion(uint64, uint64, uint64) = 0;

    virtual void fireEventProfileButtonPressed(::std::string const&) const = 0;

    virtual void fireEventWorldCopy(uint64, uint64, ::LevelSeed64) = 0;

    virtual void fireEventWriteBudgetLow(uint64, float, ::std::chrono::nanoseconds, bool, ::std::string const&) = 0;

    virtual void fireEventWriteBudgetReplenished(
        ::std::chrono::nanoseconds,
        uint64,
        ::std::optional<uint64>,
        ::std::chrono::nanoseconds,
        bool,
        ::std::string const&
    ) = 0;

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
    ) = 0;

    virtual void fireEventLowMemoryDetected(::LowMemoryReport const&) = 0;

    virtual void fireEventReceivedApplicationExitInfo(
        ::std::string const&,
        int,
        int,
        int,
        int64,
        int64,
        ::std::string const&,
        bool
    ) = 0;

    virtual void fireEventBug1341395(::std::string const&) = 0;

    virtual void fireEventImmersiveReaderStatus(::Bedrock::Http::Status const) = 0;

    virtual void fireEventPacketSerializationMismatch(::MinecraftPacketIds, ::std::string_view, ::std::string_view) = 0;

    virtual void fireEventPUVLoad(::std::string const&, ::PuvLoadData::TelemetryEventData&&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $updatePlayerUndergroundStatus(::Player* player, bool isUnderground);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIUIEventTelemetry();

    MCNAPI static void** $vftableForIConnectionEventing();

    MCNAPI static void** $vftableForIPackTelemetry();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForIWebviewTelemetry();

    MCNAPI static void** $vftableForIScreenChangedEventing();
    // NOLINTEND
};
