#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ActiveDirectoryAction.h"
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/client/game/DiskStatus.h"
#include "mc/client/game/edu_cloud/ConflictResolutionStatus.h"
#include "mc/client/gui/screens/controllers/ClassroomSetting.h"
#include "mc/client/gui/screens/controllers/EduShareMethodType.h"
#include "mc/client/gui/screens/controllers/EduShareUriType.h"
#include "mc/client/gui/screens/controllers/RealmsPurchaseFailureReason.h"
#include "mc/client/gui/screens/controllers/SettingsScreenMode.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/MultiplayerState.h"
#include "mc/client/store/iap/PurchasePath.h"
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
#include "mc/events/ConnectedStorageEventType.h"
#include "mc/events/EduControlPanelUpdateType.h"
#include "mc/events/IConnectionEventing.h"
#include "mc/events/IPackTelemetry.h"
#include "mc/events/IScreenChangedEventing.h"
#include "mc/events/IUIEventTelemetry.h"
#include "mc/events/IWebviewTelemetry.h"
#include "mc/events/OpenCodeMethod.h"
#include "mc/events/RealmsPurchaseFulfillmentStage.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/events/UserGeneratedUriSource.h"
#include "mc/events/identity/EduSignInStage.h"
#include "mc/identity/IdentitySignInTrigger.h"
#include "mc/identity/SignInResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/SignalServiceConnectStage.h"
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/server/safety/ChatFloodingAction.h"
#include "mc/world/Difficulty.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/level/FileArchiverOutcome.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/storage/DBStorageFolderWatcherSnapshotKind.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AppPlatform;
class ArmorStand;
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
class Vec3;
struct ChunkRecyclerTelemetryOutput;
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
namespace Core::Profile { struct FileCounters; }
namespace Json { class Value; }
namespace Legacy { struct WorldConversionReport; }
namespace OreUI { struct DataTracker; }
namespace Realms { struct RealmId; }
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

    enum class DeviceAccountFailurePhase : int {
        Unknown                 = 0,
        SignIn                  = 1,
        LoadCredentials         = 2,
        TitleKey                = 3,
        StoreVerify             = 4,
        PlayFabCreateConfigured = 5,
        PlayFabCreate           = 6,
    };

    enum class NetworkType : int {
        Local      = 0,
        Lan        = 1,
        External   = 2,
        Friend     = 3,
        Realm      = 4,
        ThirdParty = 5,
        Gathering  = 6,
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

    enum class ShareMode : int {
        Share = 1,
        Copy  = 2,
    };

    enum class AuthenticationOutcome : int {
        Success         = 0,
        Failed          = 1,
        AccountRequired = 2,
    };

    enum class ExportOutcome : int {
        Failed  = 0,
        Success = 1,
    };

    enum class ExportStage : int {
        Initiated = 0,
        Completed = 1,
    };

    enum class ClubsFeedScreenSource : int {
        PlayScreen  = 0,
        PauseScreen = 1,
        SlotsScreen = 2,
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

    enum class DayOneExperienceState : int {
        Started                    = 0,
        CompletedWithoutWorlds     = 1,
        CompletedWithImportSkipped = 2,
        CompletedWithImport        = 3,
    };

    enum class ElementConstructorUseType : int {
        Created = 0,
        Entered = 1,
    };

    enum class RealmConnectionFlow : int {
        PlayScreen         = 0,
        SettingsScreen     = 1,
        InviteLink         = 2,
        AllowList          = 3,
        Marketplace        = 4,
        CreateScreen       = 5,
        SlotsScreen        = 6,
        ConnectToRealmLink = 7,
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

    enum class IgnoredNotificationsType : int {
        UnreadPost   = 0,
        RealmsInvite = 1,
        Count        = 2,
    };

    enum class IgnoredNotificationSource : int {
        OwnRealm     = 0,
        FriendsRealm = 1,
        Count        = 2,
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

    enum class StructureBlockActionType : int {
        Unknown     = -1,
        Save        = 0,
        Load        = 1,
        Export      = 2,
        Export3D    = 3,
        LeaveScreen = 4,
        Import      = 5,
    };

    enum class EducationLessonAction : int {
        Start    = 0,
        Continue = 1,
        Restart  = 2,
        Host     = 3,
        Join     = 4,
        Finish   = 5,
    };

    enum class StoreType : int {
        Store        = 0,
        DressingRoom = 1,
    };

    enum class PromotionType : int {
        Featured = 0,
        Default  = 1,
        None     = 2,
    };

    enum class ChunkCacheResultType : int {
        SuccessFromCache   = 0,
        SuccessFromNetwork = 1,
        Failure            = 2,
    };

    enum class LessonCompleteDialogEntryPoint : int {
        EduPauseMenu  = 0,
        LessonCommand = 1,
    };

    using TestBuildIdType = char const*;

    enum class WorldClassroomCustomization : int {
        ResourceUri = 0,
    };

    enum class ServerType : int {
        Unknown         = 0,
        DedicatedServer = 1,
        PublicServer    = 2,
    };

    enum class ExploitType : int {
        DropItem                   = 0,
        ExcessiveChatMessageLength = 1,
        SoundPacket                = 2,
    };

    enum class CDNDownloadResult : int {
        Success            = 0,
        Failure            = 1,
        Timeout            = 2,
        AddedToPackRepo    = 3,
        NotFoundInPackRepo = 4,
        NotOnStack         = 5,
    };

    enum class CDNDownloadEventOrigin : int {
        Manifest                  = 0,
        SystemServicePacks        = 1,
        WorldResourcePackDownload = 2,
    };

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

    enum class ProfileError : int {
        None                              = 0,
        UserNotFound                      = 1,
        NoInternet                        = 2,
        NotAllowedToViewProfilesAdult     = 3,
        NotAllowedToViewProfilesChild     = 4,
        NotLoggedInWithMSA                = 5,
        LoggedInWithMSAButPlatformProfile = 6,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IMinecraftEventing() /*override*/;

    // vIndex: 1
    virtual void
    init(::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&, ::Bedrock::NonOwnerPointer<::AppPlatform> const&) = 0;

    // vIndex: 2
    virtual void initDeviceAndSessionIds() = 0;

    // vIndex: 3
    virtual void initEditorEventListener() = 0;

    // vIndex: 4
    virtual void shutdown() = 0;

    // vIndex: 5
    virtual ::std::string const& getPlayerSessionId() = 0;

    // vIndex: 6
    virtual ::std::chrono::steady_clock::time_point getWorldSessionIdGenerationTimestamp() const = 0;

    // vIndex: 7
    virtual bool getShouldHaveAchievementsEnabled() = 0;

    // vIndex: 8
    virtual void setShouldHaveAchievementsEnabled(bool) = 0;

    // vIndex: 9
    virtual bool getAchievementsAlwaysEnabled() = 0;

    // vIndex: 10
    virtual uint getPrimaryLocalUserId() const = 0;

    // vIndex: 11
    virtual void forceSendEvents() = 0;

    // vIndex: 12
    virtual ::Social::Events::EventManager& getEventManager() const = 0;

    // vIndex: 13
    virtual void updatePrimaryLocalUserId(uint const&) = 0;

    // vIndex: 14
    virtual void registerSecondaryUserCommonProperties(uint const&, ::Social::Identity&) const = 0;

    // vIndex: 15
    virtual void unregisterSecondaryUserCommonProperties(uint const&) const = 0;

    // vIndex: 16
    virtual void updateIsLegacyPlayer(bool) = 0;

    // vIndex: 17
    virtual void updateIsTrial(bool) const = 0;

    // vIndex: 18
    virtual void registerOptionsObserver(::std::shared_ptr<::Options>) = 0;

    // vIndex: 19
    virtual void addListener(::std::unique_ptr<::Social::Events::IEventListener>) = 0;

    // vIndex: 20
    virtual void clearListeners() = 0;

    // vIndex: 21
    virtual ::Json::Value propertiesAsJsonValue() const = 0;

    // vIndex: 22
    virtual void fireEvent(
        ::std::string const&,
        ::std::vector<::Social::Events::Property> const&,
        ::std::vector<::Social::Events::Measurement> const&,
        bool
    ) = 0;

    // vIndex: 23
    virtual void
    fireEventBlockTypeRegistryChecksumMismatch(::std::string const&, uint64 const&, uint64 const&, ::std::string const&) = 0;

    // vIndex: 3
    virtual void fireEventOnSuccessfulClientLogin(::MultiPlayerLevel const*) = 0;

    // vIndex: 24
    virtual void fireEventStartClient(::std::string const&) = 0;

    // vIndex: 25
    virtual void fireEventStartWorld(
        ::IMinecraftEventing::NetworkType,
        ::std::string const&,
        ::Social::MultiplayerServiceIdentifier const
    ) = 0;

    // vIndex: 26
    virtual void
    fireEventPlayerJoinWorld(uint const&, ::SubClientId const, bool, ::std::optional<bool>, ::IConnectionEventing::PlayerJoinWorldAttemptState const, int, ::Connection::DisconnectFailReason, ::TransportLayer, ::IMinecraftEventing::NetworkType, ::Social::MultiplayerState, bool, ::Social::MultiplayerServiceIdentifier, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 27
    virtual void
    fireEventSignalServiceConnect(::SignalServiceConnectStage, bool, ::std::string const&, uint64, ::std::string const&) = 0;

    // vIndex: 28
    virtual void fireEventOnClientDisconnect(::SubClientId, bool, ::Connection::DisconnectFailReason) = 0;

    // vIndex: 29
    virtual void
    fireEventOnServerDisconnect(::Connection::DisconnectFailReason, ::std::string const&, ::SubClientId, ::std::string const&, uint64, ::std::string const&) = 0;

    // vIndex: 30
    virtual void fireEventHttpClientError(::std::string const&) = 0;

    // vIndex: 31
    virtual void fireGlobalResourcePackCrashRecovery(::PackInstance&, ::mce::UUID, int) = 0;

    // vIndex: 1
    virtual void
    fireServerConnectionEvent(::IConnectionEventing::ServerConnectionOutcome, uint, double, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 32
    virtual void fireServerConnectionAttemptEvent(::std::string const&, bool, ::std::string const&) = 0;

    // vIndex: 33
    virtual void fireTextToSpeechToggled(bool, bool) = 0;

    // vIndex: 34
    virtual void
    fireEventAppInitFileOpenStats(::Core::Profile::FileCounters const&, ::Core::Profile::FileCounters const&) = 0;

    // vIndex: 35
    virtual void
    fireEventStartupPerformance(::std::vector<::SerialWorkListLogEntry> const&, ::std::vector<::SerialWorkListLogEntry> const&, ::std::vector<::SerialWorkListLogEntry> const&) = 0;

    // vIndex: 36
    virtual void fireEventOnAppStart(::std::vector<::SerialWorkListLogEntry> const&) = 0;

    // vIndex: 37
    virtual void fireEventOnAppSuspend(::std::vector<::SerialWorkListLogEntry> const&, bool) = 0;

    // vIndex: 38
    virtual void fireEventOnAppResume(::std::vector<::SerialWorkListLogEntry> const&) = 0;

    // vIndex: 39
    virtual void fireEventOnDeviceLost(::std::vector<::SerialWorkListLogEntry> const&) = 0;

    // vIndex: 40
    virtual void fireEventHardwareInfo() = 0;

    // vIndex: 41
    virtual void fireEventDeviceLost() = 0;

    // vIndex: 42
    virtual void fireEventRenderingSizeChanged() = 0;

    // vIndex: 43
    virtual void fireEventDiskStatus(::DiskStatus, ::Core::LevelStorageState, uint64) = 0;

    // vIndex: 44
    virtual void fireEventStorageAreaFull(::std::string const&, ::std::vector<::Bedrock::DirectoryEntry> const&) = 0;

    // vIndex: 45
    virtual void fireEventOptionsUpdated(::Options&, ::InputMode, bool) = 0;

    // vIndex: 46
    virtual void
    fireEventChatSettingsUpdated(::Player const*, ::std::vector<::Social::Events::Property> const&) const = 0;

    // vIndex: 47
    virtual void fireEventPerformanceMetrics(::ProfilerLiteTelemetry const&, bool) = 0;

    // vIndex: 48
    virtual void fireEventPerformanceContext(::PerfContextTrackerReport const&) = 0;

    // vIndex: 49
    virtual void fireEventDevSlashCommandExecuted(::std::string const&, ::std::string const&) = 0;

    // vIndex: 50
    virtual void
    fireCommandParseTableTelemetry(bool const, ::std::vector<::IMinecraftEventing::CommandParseTableEntry> const&)
        const = 0;

    // vIndex: 51
    virtual void fireEventPlayerTravelled(::Player*, float) = 0;

    // vIndex: 52
    virtual void fireEventVideoPlayed(::std::string const&, ::std::string const&) = 0;

    // vIndex: 53
    virtual void fireEventRespondedToAcceptContent(::PacksInfoData const&, bool, bool) = 0;

    // vIndex: 54
    virtual void
    tryFireEventProgressLoadTimes(::std::string const&, ::std::vector<::std::pair<::std::string, float>> const) = 0;

    // vIndex: 55
    virtual void
    fireCDNDownloadEvent(::std::string const&, ::std::string const&, ::std::string const&, ::IMinecraftEventing::CDNDownloadResult const&, ::IMinecraftEventing::CDNDownloadEventOrigin const&, float const&) = 0;

    // vIndex: 56
    virtual void
    fireEventSignInToIdentity(::IMinecraftEventing::SignInAccountType, ::Social::IdentitySignInTrigger, ::std::string const&, bool, ::IMinecraftEventing::SignInStage, ::Social::SignInResult, int, ::Social::PlayerIDs, ::std::string const&) = 0;

    // vIndex: 57
    virtual void
    fireEventSignOutOfIdentity(::IMinecraftEventing::SignInAccountType, ::Social::IdentitySignInTrigger, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 58
    virtual void fireEventAppPaused() = 0;

    // vIndex: 59
    virtual void fireEventAppUnpaused() = 0;

    // vIndex: 60
    virtual void fireEventAppSurfaceCreated() = 0;

    // vIndex: 61
    virtual void fireEventAppSurfaceDestroyed() = 0;

    // vIndex: 62
    virtual void fireEventSplitScreenUpdated(::IClientInstance const&) = 0;

    // vIndex: 63
    virtual void fireEventPopupClosed(::std::string const&) const = 0;

    // vIndex: 64
    virtual void fireEventWorldImported(int64, uint64) = 0;

    // vIndex: 65
    virtual void fireEventWorldImportedResult(::FileArchiverOutcome) = 0;

    // vIndex: 66
    virtual void fireCurrentInputUpdated(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&) = 0;

    // vIndex: 67
    virtual void fireEventTreatmentPackApplied(::PackManifest const&) = 0;

    // vIndex: 68
    virtual void fireEventPackPlayed(::PackInstance const&, uint) = 0;

    // vIndex: 69
    virtual void fireEventTreatmentPackDownloadFailed(::std::string, ::std::string, ::std::string, ::std::string) = 0;

    // vIndex: 70
    virtual void fireEventTreatmentPackDownloaded(::std::string, ::std::string, ::std::string, ::std::string) = 0;

    // vIndex: 71
    virtual void fireEventTreatmentPackRemoved(::std::string) = 0;

    // vIndex: 72
    virtual void fireEventContentLogsInWorldSession(::std::string const&, uint, uint) = 0;

    // vIndex: 73
    virtual void fireEventEntitlementCacheLoadTimeout() = 0;

    // vIndex: 74
    virtual void fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow) = 0;

    // vIndex: 75
    virtual void fireRealmConnectionEventGenericLambdaCalled(
        ::IMinecraftEventing::RealmConnectionFlow,
        ::IMinecraftEventing::RealmConnectionLambda,
        ::IMinecraftEventing::RealmConnectionResult
    ) = 0;

    // vIndex: 76
    virtual void fireEventCompoundCreatorCreated(int, int) = 0;

    // vIndex: 77
    virtual void fireEventElementConstructorUsed(int, int, ::IMinecraftEventing::ElementConstructorUseType) = 0;

    // vIndex: 78
    virtual void fireEventEntitySpawned(::Player*, int, uint) = 0;

    // vIndex: 79
    virtual void fireEventReducerBlockEntered(::ItemDescriptor const&) = 0;

    // vIndex: 80
    virtual void fireEventRespawn(::Player&, int) = 0;

    // vIndex: 81
    virtual void fireEventServerRespawnSearchTime(::Player&, ::PlayerRespawnTelemetryData const&) = 0;

    // vIndex: 82
    virtual void firePackSettingsEvent(::PackSettings const&, ::PackManifest const&) = 0;

    // vIndex: 83
    virtual void removeTestBuildIdTag() = 0;

    // vIndex: 84
    virtual void removeTestTelemetryTag() = 0;

    // vIndex: 85
    virtual void setTestBuildIdTag(char const*) = 0;

    // vIndex: 86
    virtual void setTestTelemetryTag(char const*) = 0;

    // vIndex: 87
    virtual void stopDebugEventLoggingForAllListeners() = 0;

    // vIndex: 88
    virtual void tick() = 0;

    // vIndex: 89
    virtual void updateEditionType() = 0;

    // vIndex: 90
    virtual void
    fireEventMultiplayerClientConnectionStateChanged(::std::string const&, uint, uint, uint, ::std::string const&) = 0;

    // vIndex: 91
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

    // vIndex: 92
    virtual void fireEventJoinCanceled(::LoadingState) = 0;

    // vIndex: 93
    virtual void
    fireIgnoredNotificationsEvent(::IMinecraftEventing::IgnoredNotificationsType, int, ::std::set<::IMinecraftEventing::IgnoredNotificationSource>) = 0;

    // vIndex: 94
    virtual void
    fireClubsEngagementEvent(::IMinecraftEventing::ClubsEngagementAction, ::IMinecraftEventing::ClubsEngagementTargetType, char const*, ::Realms::RealmId const, ::std::string const&) = 0;

    // vIndex: 95
    virtual void fireClubsOpenFeedScreenEvent(
        ::IMinecraftEventing::ClubsFeedScreenSource const,
        ::Realms::RealmId const,
        ::std::string const&,
        int
    ) = 0;

    // vIndex: 96
    virtual void fireEventEntitlementListInfo(::std::vector<::ContentIdentity>&, bool) = 0;

    // vIndex: 97
    virtual void fireEventStorage(int, ::std::string const&) = 0;

    // vIndex: 98
    virtual void fireEventDlcStorageFull(::std::string const&, uint64, uint64, uint64, uint64) = 0;

    // vIndex: 99
    virtual void fireEventIAPPurchaseAttempt(::std::string const&, ::std::string const&, ::Offer&, ::PurchasePath) = 0;

    // vIndex: 100
    virtual void fireEventIAPPurchaseResolved(
        ::std::string const&,
        ::std::string const&,
        ::Offer&,
        ::IMinecraftEventing::PurchaseResult,
        ::PurchasePath
    ) = 0;

    // vIndex: 101
    virtual void
    fireEventIAPRedeemAttempt(::std::string const&, ::std::string const&, ::std::string const&, ::PurchasePath) = 0;

    // vIndex: 102
    virtual void fireEventIAPRedeemResolved(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::IMinecraftEventing::PurchaseResult,
        ::PurchasePath
    ) = 0;

    // vIndex: 103
    virtual void fireEventPurchaseAttempt(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::IMinecraftEventing::StoreType,
        ::PurchasePath
    ) = 0;

    // vIndex: 104
    virtual void fireEventPurchaseResolved(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::IMinecraftEventing::StoreType,
        ::IMinecraftEventing::PurchaseResult,
        ::PurchasePath
    ) = 0;

    // vIndex: 105
    virtual void fireEventUnfulfilledPurchaseFound(::PlatformOfferPurchaseDetails&) = 0;

    // vIndex: 106
    virtual void
    fireEventPurchaseFailureDetails(int, ::std::string const&, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 107
    virtual void fireEventTreatmentsCleared() = 0;

    // vIndex: 108
    virtual void fireEventTreatmentsSet(::std::vector<::std::string> const&, ::std::string const&) = 0;

    // vIndex: 109
    virtual void fireEventProgressionsSet(::std::vector<::std::string> const&) = 0;

    // vIndex: 110
    virtual void fireEventPackImportTimeout(::std::string const&) = 0;

    // vIndex: 111
    virtual void fireEventStoreErrorPage(::std::string const&, ::std::string const&) = 0;

    // vIndex: 112
    virtual void setServerIdsforClient(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const,
        ::std::string const
    ) = 0;

    // vIndex: 113
    virtual void prepEventSearchCatalogRequest(::SearchRequestTelemetry const&) = 0;

    // vIndex: 114
    virtual void fireEventSearchCatalogRequest(::SearchRequestTelemetry const&) = 0;

    // vIndex: 115
    virtual void fireEventStoreLocalizationBinaryFetchResponse(int const, uint const) = 0;

    // vIndex: 116
    virtual void fireEventStoreSessionResponse(::std::string const&, int const, int const) = 0;

    // vIndex: 117
    virtual void fireEventStoreDiscoveryRequestResponse(int const, int const) = 0;

    // vIndex: 118
    virtual void fireEventStorePlayFabRequestResponse(ushort const) = 0;

    // vIndex: 119
    virtual void fireEventServerDrivenLayoutPageLoaded(::RequestTelemetry&, ::std::string, int, int, int, int, int) = 0;

    // vIndex: 120
    virtual void
    fireEventServerDrivenLayoutImagesLoaded(::RequestTelemetry&, ::std::string, int, uint64, int, int, int, ::std::vector<ushort>&) = 0;

    // vIndex: 121
    virtual void fireEventArmorStandItemEquipped(::ArmorStand const&, ::ItemDescriptor const&) = 0;

    // vIndex: 122
    virtual void fireEventLockedItemGiven() = 0;

    // vIndex: 123
    virtual void fireEventPlayerBounced(::Player*, ::Block const&, int) = 0;

    // vIndex: 124
    virtual void fireEventSetValidForAchievements(::Player*, bool) = 0;

    // vIndex: 125
    virtual void fireEventAchievementReceived(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 126
    virtual void updatePlayerUndergroundStatus(::Player* player, bool isUnderground);

    // vIndex: 127
    virtual void fireEventPlayerAttemptingExploit(::Player*, ::IMinecraftEventing::ExploitType) = 0;

    // vIndex: 128
    virtual void fireEventWorldLoaded(::Player*, ::std::string const&, ::std::string const&, bool) = 0;

    // vIndex: 129
    virtual void fireMinecraftVersionLaunched(bool) = 0;

    // vIndex: 130
    virtual void fireMinecraftVersionInviteAccepted(bool, uint64) = 0;

    // vIndex: 131
    virtual void fireInviteStatusReceived(::std::string) = 0;

    // vIndex: 132
    virtual void fireInviteStatusSentImpl(uint, ::std::vector<::std::string>) = 0;

    // vIndex: 133
    virtual void
        fireDayOneExperienceStateChanged(::IMinecraftEventing::DayOneExperienceState, ::std::optional<uint>, ::std::optional<uint64>) = 0;

    // vIndex: 134
    virtual void fireWorldConversionAttemptEvent(::Legacy::WorldConversionReport const&) = 0;

    // vIndex: 135
    virtual void fireWorldConversionInitiatedEvent(::std::string const&) = 0;

    // vIndex: 136
    virtual void fireWorldUpgradedToCnCPart2(
        bool,
        ::std::string const&,
        ::Experiments const&,
        ::std::string const&,
        ::LevelSeed64,
        float
    ) = 0;

    // vIndex: 137
    virtual void fireEventAssertFailed(::std::string const&, ::std::string const&) = 0;

    // vIndex: 138
    virtual void fireEventCrashSystemFailedToInit() = 0;

    // vIndex: 139
    virtual void fireChatUsedEvent(uint, bool) = 0;

    // vIndex: 140
    virtual void fireEventJoinByCode(::std::string const&) = 0;

    // vIndex: 141
    virtual void fireEventBlockPlacedByCommand(::Block const&, int) = 0;

    // vIndex: 142
    virtual void fireEventServerPlayerJoinedGame(::NetworkIdentifier const&, ::SubClientId, ::std::string const&) = 0;

    // vIndex: 143
    virtual void fireEventScriptPluginDiscovery(::ScriptPluginResult const&, bool) = 0;

    // vIndex: 144
    virtual void fireEventScriptPluginRun(::ScriptPluginResult const&, ::std::chrono::microseconds, bool) = 0;

    // vIndex: 145
    virtual void fireEventScriptDebuggerListen(bool, bool) = 0;

    // vIndex: 146
    virtual void fireEventScriptDebuggerConnect(bool, bool, int) = 0;

    // vIndex: 147
    virtual void fireEditorEventToolActivated(::std::string const&) = 0;

    // vIndex: 148
    virtual void fireEditorUndo(::std::string const&) = 0;

    // vIndex: 149
    virtual void fireEditorRedo(::std::string const&) = 0;

    // vIndex: 150
    virtual void fireEditorScriptAction(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 151
    virtual void
        fireEventWorldLoadedClassroomCustomization(::IMinecraftEventing::WorldClassroomCustomization, ::buffer_span<::std::pair<::std::string_view, ::std::string_view>>) = 0;

    // vIndex: 152
    virtual void fireClassroomSettingUpdated(::ClassroomSetting, ::SettingsScreenMode) = 0;

    // vIndex: 153
    virtual void fireEventNpcPropertiesUpdated(::Actor&, bool) = 0;

    // vIndex: 154
    virtual void fireEventBoardTextUpdated(::ChalkboardBlockActor&) = 0;

    // vIndex: 155
    virtual void fireEventCameraUsed(bool) = 0;

    // vIndex: 156
    virtual void fireEventPortfolioExported(int, int) = 0;

    // vIndex: 157
    virtual void fireQuickPlayEvent() = 0;

    // vIndex: 158
    virtual void firePermissionsSetEvent(
        ::PlayerPermissionLevel const,
        ::CommandPermissionLevel const,
        ::PlayerPermissionLevel const,
        ::CommandPermissionLevel const
    ) = 0;

    // vIndex: 159
    virtual void fireExternalUriLaunched(::std::string const&) const = 0;

    // vIndex: 160
    virtual void fireUserGeneratedUriLaunched(::UserGeneratedUriSource) const = 0;

    // vIndex: 161
    virtual void
    fireUserGeneratedUriLaunchFailed(::UserGeneratedUriSource, ::Util::ResourceUri::ValidationStatus, ::std::string const&)
        const = 0;

    // vIndex: 162
    virtual void fireEventEmptyLibraryCategoryError(::std::string const&) const = 0;

    // vIndex: 163
    virtual void fireLibraryButtonPressed(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 164
    virtual void fireCourseButtonPressed(::std::string const&, ::std::string const&) = 0;

    // vIndex: 165
    virtual void fireLessonActionTaken(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::IMinecraftEventing::EducationLessonAction,
        int
    ) = 0;

    // vIndex: 166
    virtual void fireLessonProgressEvent(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        int
    ) = 0;

    // vIndex: 167
    virtual void fireShareButtonPressed(::std::string const&, ::EduShareUriType, ::EduShareMethodType, bool) = 0;

    // vIndex: 168
    virtual void fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint const) const = 0;

    // vIndex: 169
    virtual void fireInAppCodeBuilderActivated(::OpenCodeMethod, ::std::string const&) const = 0;

    // vIndex: 170
    virtual void fireInAppCodeBuilderDismissed(::std::string const&) const = 0;

    // vIndex: 171
    virtual void fireCodeCommandButtonPressed() = 0;

    // vIndex: 172
    virtual void fireIDESelected(::std::string const&) const = 0;

    // vIndex: 173
    virtual void fireEventEduResources() const = 0;

    // vIndex: 174
    virtual void fireEventEduiOSPurchaseTransaction(::TransactionStatus const&) const = 0;

    // vIndex: 175
    virtual void fireEventCodeBuilderClosed() const = 0;

    // vIndex: 176
    virtual void
    fireEventCodeBuilderLog(::Webview::TelemetryCommonProperties const&, ::std::string const&, ::std::string&)
        const = 0;

    // vIndex: 177
    virtual void fireEventCodeBuilderScoreChanged(::std::string const&, int const) const = 0;

    // vIndex: 178
    virtual void fireEventCodeBuilderRuntimeAction(::std::string const&) const = 0;

    // vIndex: 179
    virtual void
    fireEventEduServiceStatus(::std::string const&, ::std::string const&, int, ::buffer_span<::std::pair<::std::string_view, ::std::string_view>>)
        const = 0;

    // vIndex: 180
    virtual void fireEventWebviewDownload(::std::string const&, ::WebviewDownloadInfo const&) const = 0;

    // vIndex: 181
    virtual void
    fireEduServiceRequestFailed(::std::string const&, ::std::string const&, ::std::string const&, ::buffer_span<::std::pair<::std::string_view, ::std::string_view>>)
        const = 0;

    // vIndex: 182
    virtual void
    fireEventButtonPressed(::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) const = 0;

    // vIndex: 183
    virtual void
    fireEventModalShown(::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) const = 0;

    // vIndex: 184
    virtual void
    fireEventOptionsChanged(::std::string const&, ::std::unordered_map<::std::string, int> const&) const = 0;

    // vIndex: 185
    virtual void fireEventTagButtonPressed(::std::string const&, bool) const = 0;

    // vIndex: 186
    virtual void fireEventLevelDataOverride(::std::string_view) const = 0;

    // vIndex: 187
    virtual void fireEventEduContentVerificationFailed() const = 0;

    // vIndex: 188
    virtual void fireEventLibrarySearch(::librarySearch::TelemetryData const&) const = 0;

    // vIndex: 189
    virtual void
    fireEventLibrarySearchItemSelected(int const, int const, ::std::string const&, int const, int const) const = 0;

    // vIndex: 190
    virtual void fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType, double) const = 0;

    // vIndex: 191
    virtual void fireEventWorldExported(int64, uint64) = 0;

    // vIndex: 192
    virtual void fireEventControlRemappedByPlayer(::std::string const&, ::RawInputType, int) const = 0;

    // vIndex: 193
    virtual void fireEventDifficultySet(::Difficulty, ::Difficulty) = 0;

    // vIndex: 196
    virtual void fireEventGameRulesUpdated(bool, bool, ::std::string const&) = 0;

    // vIndex: 195
    virtual void fireEventGameRulesUpdated(int, int, ::std::string const&) = 0;

    // vIndex: 194
    virtual void fireEventGameRulesUpdated(float, float, ::std::string const&) = 0;

    // vIndex: 197
    virtual void fireEventDefaultGameTypeChanged(::GameType, ::GameType) = 0;

    // vIndex: 2
    virtual void fireEventConnectionFailed(::IConnectionEventing::ConnectionFailureReason) = 0;

    // vIndex: 198
    virtual void fireEventOfferRated(::std::string const&, int, int, int, double) = 0;

    // vIndex: 199
    virtual void fireEventNewContentCheckCompleted(::std::string const&, bool) = 0;

    // vIndex: 200
    virtual void fireEventEncyclopediaTopicChanged(::std::string const&, ::InputMode) = 0;

    // vIndex: 201
    virtual void fireEventHowToPlayTopicChanged(::std::string const&, ::InputMode) = 0;

    // vIndex: 202
    virtual void fireEventAndroidHelpRequest() = 0;

    // vIndex: 203
    virtual void fireEventWorldFilesListed(uint64, uint64, uint64, uint64) = 0;

    // vIndex: 204
    virtual void fireEventLabTableCreated(int, int, int) = 0;

    // vIndex: 205
    virtual void fireEventPlayerMessageSay(::std::string const&, ::std::string const&) = 0;

    // vIndex: 206
    virtual void fireEventPlayerMessageTell(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 207
    virtual void fireEventPlayerMessageChat(::std::string const&, ::std::string const&) = 0;

    // vIndex: 208
    virtual void fireEventPlayerMessageMe(::std::string const&, ::std::string const&) = 0;

    // vIndex: 209
    virtual void fireEventPlayerMessageTitle(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 210
    virtual void fireEventPlayerDamaged(::Player*, ::ActorDamageCause) = 0;

    // vIndex: 211
    virtual void fireEventPlayerKicked(::std::string const&, ::std::string const&) = 0;

    // vIndex: 212
    virtual void fireEventPlayerBanned(::std::string const&) = 0;

    // vIndex: 213
    virtual void
    fireEventRealmShared(::std::string const&, ::IMinecraftEventing::ShareMode const&, ::Realms::RealmId const&) = 0;

    // vIndex: 214
    virtual void fireEventRealmMemberlistCleared(::Realms::RealmId const&, int const&) = 0;

    // vIndex: 215
    virtual void fireEventRealmUrlGenerated(::std::string const&, ::Realms::RealmId const&) = 0;

    // vIndex: 216
    virtual void fireEventStructureExport(
        ::glTFExportData const&,
        ::IMinecraftEventing::ExportOutcome,
        ::IMinecraftEventing::ExportStage
    ) const = 0;

    // vIndex: 217
    virtual void
    fireEventContentShared(::std::string const&, ::std::string const&, ::IMinecraftEventing::ShareMode const&) = 0;

    // vIndex: 218
    virtual void fireEventStorageReport(::std::string const&) = 0;

    // vIndex: 219
    virtual void fireEventStackLoaded(::StackStats const&) = 0;

    // vIndex: 220
    virtual void fireEventUnknownBlockReceived(::NewBlockID const&, ushort) = 0;

    // vIndex: 221
    virtual void
    fireEventSignInEdu(::std::string const&, ::edu::Role, ::Identity::EduSignInStage, ::std::string const&, ::std::string const&, ::std::vector<::std::pair<::std::string, ::std::string>> const&) = 0;

    // vIndex: 222
    virtual void
    fireEventSignOutEdu(::std::string const&, ::edu::Role, ::std::string const&, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 223
    virtual void fireEventSwitchAccountEdu(::std::string const&, ::edu::Role, ::std::string const&) = 0;

    // vIndex: 224
    virtual void fireEventEduDemoConversion(::edu::Role, ::LastClickedSource) = 0;

    // vIndex: 225
    virtual void fireEventPopupFiredEdu(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::ActiveDirectoryAction const
    ) = 0;

    // vIndex: 226
    virtual void
    fireEventPlayIntegrityCheck(::std::string const&, ::std::string const&, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 227
    virtual void
    fireEventCloudOperationStartedEdu(::EduCloudUtils::Operation const, ::std::string const&, uint64 const, ::std::optional<::std::string> const&) = 0;

    // vIndex: 228
    virtual void fireEventCloudMyWorldsSummary(int const, int const, int const, int const, int const) = 0;

    // vIndex: 229
    virtual void fireEventCloudOperationEndedEdu(::EduCloudUtils::Operation const, ::std::string const&, ::std::chrono::milliseconds const, uint const, uint64 const, ::std::optional<::std::string> const&, ::std::optional<::std::string> const&, ::std::optional<::std::string> const&, ::std::optional<::std::string> const&) = 0;

    // vIndex: 230
    virtual void fireEventCloudConflictCheckEdu(::std::string const&, ::EduCloud::ConflictResolutionStatus const) = 0;

    // vIndex: 231
    virtual void fireEventPurchaseGameAttempt(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 232
    virtual void fireEventPurchaseGameResult(int) = 0;

    // vIndex: 233
    virtual void fireEventTrialDeviceIdCorrelation(int64, ::std::string const&, int64, ::std::string const&) = 0;

    // vIndex: 234
    virtual void fireEventDeviceIdManagerFailOnIdentityGained() = 0;

    // vIndex: 235
    virtual void fireEventPushNotificationPermission(bool, ::std::string const&) = 0;

    // vIndex: 236
    virtual void fireEventPushNotificationReceived(::PushNotificationMessage const&) = 0;

    // vIndex: 237
    virtual void fireEventPushNotificationOpened(::std::string const&, ::std::string const&) = 0;

    // vIndex: 238
    virtual void
    firePerfTestEvent(::std::string const&, ::std::string const&, ::std::string const&, uint, uint, ::std::string const&, ::std::vector<::std::pair<::std::string, float>> const&) = 0;

    // vIndex: 239
    virtual void fireEventLicenseCheck(bool, ::ExtraLicenseData&) = 0;

    // vIndex: 240
    virtual void fireQueryOfferResult(::std::string const&, int, bool) = 0;

    // vIndex: 241
    virtual void fireEventQueryPurchasesResult(::std::string const&, int, bool) = 0;

    // vIndex: 242
    virtual void fireEventWorldGenerated(::std::string const&, ::LevelSettings const&, bool) = 0;

    // vIndex: 243
    virtual void fireEventCopyWorldEducationEnabled() = 0;

    // vIndex: 244
    virtual void
    fireEventBundleSubOfferClicked(int, int, ::std::string const&, ::std::string const&, bool, ::std::string const&) = 0;

    // vIndex: 246
    virtual void fireEventStoreOfferClicked(::Social::eventData::StoreOfferClickedData const&) = 0;

    // vIndex: 245
    virtual void fireEventStoreOfferClicked(::std::string const, ::std::string const&) = 0;

    // vIndex: 247
    virtual void fireEventPersonaOfferClicked(::Social::eventData::PersonaOfferClickedData const&) = 0;

    // vIndex: 248
    virtual void fireEventStoreSearch(::storeSearch::TelemetryData const&) = 0;

    // vIndex: 249
    virtual void
    fireEventSearchItemSelected(int const, int const, ::std::string const&, int const, int const, int const) = 0;

    // vIndex: 250
    virtual void fireEventRealmsSubscriptionPurchaseStarted(::ProductSku const&, ::RealmsPurchaseIntent) = 0;

    // vIndex: 251
    virtual void fireEventRealmsSubscriptionPurchaseSucceeded(::ProductSku const&, ::RealmsPurchaseIntent) = 0;

    // vIndex: 252
    virtual void fireEventRealmsSubscriptionPurchaseFailed(
        ::ProductSku const&,
        ::RealmsPurchaseIntent,
        ::RealmsPurchaseFailureReason
    ) = 0;

    // vIndex: 253
    virtual void
    fireEventRealmsPurchaseFulfillment(::std::string const&, ::std::string const&, ::std::string const&, ::PurchasePath, ::RealmsPurchaseFlow, ::RealmsPurchaseFulfillmentStage, ::std::string const&) = 0;

    // vIndex: 254
    virtual void fireEventUserListUpdated(::std::string const&, ::std::string const&, ::std::string const&, bool) = 0;

    // vIndex: 255
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

    // vIndex: 256
    virtual void
    fireEventRealmDownload(::std::string const&, ::std::string const&, int const, int const, int const) = 0;

    // vIndex: 257
    virtual void
    fireEventRealmUpload(::std::string const&, ::std::string const&, int const, int const, int const, bool const) = 0;

    // vIndex: 258
    virtual void fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow) = 0;

    // vIndex: 259
    virtual void fireRealmConnectionEventRealmAPIResponse(::IMinecraftEventing::RealmConnectionFlow, int) = 0;

    // vIndex: 260
    virtual ::std::string getSessionId() = 0;

    // vIndex: 261
    virtual void fireEventChunkLoaded(::LevelChunk&) = 0;

    // vIndex: 262
    virtual void fireEventChunkUnloaded(::LevelChunk&) = 0;

    // vIndex: 263
    virtual void fireEventChunkChanged(::LevelChunk&) = 0;

    // vIndex: 264
    virtual void fireEventMultiplayerSessionUpdate(::Bedrock::NonOwnerPointer<::MultiPlayerLevel>) = 0;

    // vIndex: 265
    virtual void fireEventLevelDestruct() = 0;

    // vIndex: 266
    virtual void flagEventDeepLink() = 0;

    // vIndex: 267
    virtual void flagEventPlayerGameTypeDefault(bool) = 0;

    // vIndex: 268
    virtual void fileEventCloudWorldPullFailed(::std::string const&, ::std::string const&, bool) = 0;

    // vIndex: 269
    virtual void fireEventLevelDatLoadFailed(::std::string const&, ::std::string const&, bool) = 0;

    // vIndex: 270
    virtual void
    fireEventWorldCorruptionCausedWorldShutdown(::LevelStorageEventingContext const&, ::std::string const&, ::std::optional<bool>) = 0;

    // vIndex: 271
    virtual void fireEventClientLeftGameDueToUnrecoverableError(::std::string const&, bool) = 0;

    // vIndex: 272
    virtual void fireEventServerShutdownDueToError(::std::string const&) = 0;

    // vIndex: 273
    virtual void fireEventDBStorageSizeSnapshot(
        ::LevelStorageEventingContext const&,
        ::DBStorageFolderWatcher const&,
        ::DBStorageFolderWatcherSnapshotKind
    ) = 0;

    // vIndex: 274
    virtual void fireEventSidebarNavigation(
        uint const&,
        ::std::string const&,
        ::std::string const&,
        int const,
        bool const,
        bool const,
        bool const
    ) = 0;

    // vIndex: 275
    virtual void
    fireEventSidebarVerboseToggled(uint const&, ::std::string const&, ::std::string const&, bool const) = 0;

    // vIndex: 276
    virtual void fireEventPersonaUserLoadedActive(::std::string const&, ::std::string const&, bool) = 0;

    // vIndex: 277
    virtual void fireEventPersonaItemPreviewed(
        ::std::string const&,
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

    // vIndex: 278
    virtual void fireEventPersonaSkinChanged(::std::string const&, ::std::string const&, bool) = 0;

    // vIndex: 279
    virtual void
    fireEventPersonaAvatarUpdated(::std::string const&, ::std::vector<::std::string> const&, ::std::vector<bool> const&, ::std::vector<bool> const&, bool, bool, ::std::string const&, ::std::string const&, ::std::string const&, bool, ::std::vector<::std::string> const&, ::std::vector<::std::string> const&) = 0;

    // vIndex: 280
    virtual void fireEventPersonaAvatarsListed(::std::vector<::std::string> const&) = 0;

    // vIndex: 281
    virtual void fireEventPersonaEmotePlayed(::std::string const&, bool, int) = 0;

    // vIndex: 282
    virtual void fireEventDefaultCastSelected(int, ::mce::UUID, ::std::string const&) = 0;

    // vIndex: 283
    virtual void fireEventPersonaInitalizationEvent(uint, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 284
    virtual void fireEventPersonaGeneralError(::std::string const&, uint) = 0;

    // vIndex: 285
    virtual void fireEventPersonaLoadingPieces(uint, double) = 0;

    // vIndex: 286
    virtual void fireEventPersonaStillLoading(
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        ::std::vector<::std::string> const&,
        int,
        double
    ) = 0;

    // vIndex: 287
    virtual void
    fireEventPersonaCreationFailed(::std::string const&, ::std::string const&, bool, bool, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 288
    virtual void fireEventPersonaCategoryInformation(::std::string const&) = 0;

    // vIndex: 289
    virtual void
    fireEventWorldHistoryPackSourceMissingDuringUpgrade(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 290
    virtual void
    fireStructureBlockAction(::IMinecraftEventing::StructureBlockActionType, ::StructureEditorData const&, ::StructureTelemetryClientData const*) = 0;

    // vIndex: 291
    virtual void
    fireStructureBlockRedstoneActivated(::IMinecraftEventing::StructureBlockActionType, ::StructureEditorData const&, ::StructureTelemetryClientData const*) = 0;

    // vIndex: 292
    virtual void fireEventOreUIError(uint const&, ::std::string const&) = 0;

    // vIndex: 293
    virtual void fireEventOreUIScreenPerformance(uint const&, ::OreUI::DataTracker const&) = 0;

    // vIndex: 294
    virtual void
    fireEventRealmsStoriesOptIn(::std::string const&, ::std::string const&, ::std::string const&, bool const) = 0;

    // vIndex: 295
    virtual void fireEventOnboardingWorldCreationUsage(bool, bool, bool) = 0;

    // vIndex: 296
    virtual void fireEventVRModeChanged(bool const) = 0;

    // vIndex: 297
    virtual void fireEventDeviceAccountSuccess(bool, ::std::string const&) = 0;

    // vIndex: 298
    virtual void
    fireEventDeviceAccountFailure(::IMinecraftEventing::SignInStage, ::IMinecraftEventing::DeviceAccountFailurePhase, uint, ::std::string const&) = 0;

    // vIndex: 299
    virtual ::std::shared_ptr<void*> requestEventDeferment() = 0;

    // vIndex: 300
    virtual ::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> getCrashTelemetryProcessor() = 0;

    // vIndex: 301
    virtual void fireEventLevelChunkPerformanceData(bool) = 0;

    // vIndex: 302
    virtual void fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const&) = 0;

    // vIndex: 303
    virtual void fireEventActorValueValidationFailed(::std::string const&, char const*) = 0;

    // vIndex: 304
    virtual void fireDBStorageError(::LevelStorageEventingContext const&, ::std::string const&) = 0;

    // vIndex: 305
    virtual void
    fireServerStarted(::IMinecraftEventing::ServerType, ::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) = 0;

    // vIndex: 306
    virtual void fireServerShutdown(::std::string const&) = 0;

    // vIndex: 307
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

    // vIndex: 308
    virtual void
    firePassthroughTextProcessEvent(::std::string const&, ::TextProcessingEventOrigin, ::std::string const&) = 0;

    // vIndex: 309
    virtual void
    fireBannedSkinVerificationEvent(uint const&, ::std::string const&, ::std::string const&, bool, int const, ::std::string const&) = 0;

    // vIndex: 310
    virtual void fireEventPlayerReportSent(bool, ::std::string const&, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 311
    virtual void fireEventOneDSPlayerReportPayload(::std::string const&, ::std::string const&) = 0;

    // vIndex: 312
    virtual void fireEventSafetyHTTPRequest(::std::string const&, ::std::string const&, int const) = 0;

    // vIndex: 313
    virtual void fireEventProfanityFilter(bool, bool, bool) = 0;

    // vIndex: 314
    virtual void
    fireEventChatFloodingActionTaken(::std::string const&, ::Safety::ChatFloodingAction, ::std::string const&) = 0;

    // vIndex: 315
    virtual void fireEventTextProcessorStartupFailed(::std::string const&, int, int) = 0;

    // vIndex: 316
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

    // vIndex: 317
    virtual void fireEventBlockUser(::std::string const&, bool, bool) = 0;

    // vIndex: 318
    virtual void fireEventMuteUser(::std::string const&, bool, bool) = 0;

    // vIndex: 319
    virtual void
    fireStorageMigrationEvent(bool, ::Bedrock::StorageMigration::StorageMigrationType, int, int, ::std::chrono::nanoseconds, ::std::string const&) = 0;

    // vIndex: 320
    virtual void
    fireEventConnectedStorageResult(::ConnectedStorageEventType, bool, uint, ::std::optional<uint>, ::std::string const&, ::std::string const&, int64, ::std::optional<uint>, ::std::optional<uint>, ::std::optional<uint>) = 0;

    // vIndex: 321
    virtual void fireEventConnectedStorageError(char const*, ::std::string const&, int64) = 0;

    // vIndex: 322
    virtual void fireEventUwpToGdkMigrationComplete(::Bedrock::DeviceIdContext const&, ::std::string const&) = 0;

    // vIndex: 323
    virtual void fireNetworkChangedEvent(::std::string const&) = 0;

    // vIndex: 324
    virtual void fireEventMessageServiceImpression(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        bool const
    ) = 0;

    // vIndex: 325
    virtual void fireEventMessageReceived(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        bool const
    ) = 0;

    // vIndex: 326
    virtual void fireEventGoogleAccountHoldWarning(bool) = 0;

    // vIndex: 327
    virtual void fireDelayedEventReportOfflineAction(::std::string const&) = 0;

    // vIndex: 328
    virtual void fireEventFeedbackSubmitted(::std::string const&, bool, bool) = 0;

    // vIndex: 329
    virtual void fireEventPlayerActionComparisonFailed(::std::string const&) = 0;

    // vIndex: 330
    virtual void fireEventTrackDeeplinks(::std::string const&, ::std::string const&) = 0;

    // vIndex: 331
    virtual void fireEventVehiclePositionComparisonFailed(::Vec3 const&, ::Vec3 const&) = 0;

    // vIndex: 332
    virtual void firePlayerUnexpectedFallDamage(float const, bool, float const) = 0;

    // vIndex: 333
    virtual void fireEventActorMovementCorrectionDivergence(::ActorType, ::std::vector<float> const&) = 0;

    // vIndex: 334
    virtual void fireEventDedicatedServerDiscoveryResponse(int const, int const) = 0;

    // vIndex: 335
    virtual void fireEventGameTip(int, int, int, ::InputMode) = 0;

    // vIndex: 336
    virtual void fireEventAddedFriend(::std::string const&, ::IMinecraftEventing::AddedFriendLocation, bool) = 0;

    // vIndex: 337
    virtual void fireEventInboxSummary(::Social::Events::InboxSummaryData const&) = 0;

    // vIndex: 338
    virtual void fireEventTrialStatusFailed(int) = 0;

    // vIndex: 339
    virtual void fireEventSaveDataExpansion(uint64, uint64, uint64) = 0;

    // vIndex: 340
    virtual void fireEventProfileButtonPressed(::std::string const&) const = 0;

    // vIndex: 341
    virtual void fireEventWorldCopy(uint64, uint64, ::LevelSeed64) = 0;

    // vIndex: 342
    virtual void fireEventWriteBudgetLow(uint64, float, ::std::chrono::nanoseconds, bool, ::std::string const&) = 0;

    // vIndex: 343
    virtual void
    fireEventWriteBudgetReplenished(::std::chrono::nanoseconds, uint64, ::std::optional<uint64>, ::std::chrono::nanoseconds, bool, ::std::string const&) = 0;

    // vIndex: 344
    virtual void fireEventLargeFileWriteStall(uint64, ::std::vector<::std::string> const&, ::std::chrono::nanoseconds, ::std::chrono::nanoseconds, ::std::string const&, uint64, bool, ::std::chrono::nanoseconds, ::std::chrono::nanoseconds, int, uint64, ::std::vector<::std::string> const&) = 0;

    // vIndex: 345
    virtual void fireEventLowMemoryDetected(::LowMemoryReport const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $updatePlayerUndergroundStatus(::Player* player, bool isUnderground);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIUIEventTelemetry();

    MCAPI static void** $vftableForIConnectionEventing();

    MCAPI static void** $vftableForIPackTelemetry();

    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForIWebviewTelemetry();

    MCAPI static void** $vftableForIScreenChangedEventing();
    // NOLINTEND
};
