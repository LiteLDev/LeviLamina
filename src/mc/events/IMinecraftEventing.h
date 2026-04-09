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
#include "mc/deps/application/storage_migration/StorageMigrationType.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/RawInputType.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/events/ConnectedStorageEventType.h"
#include "mc/events/EduControlPanelUpdateType.h"
#include "mc/events/FatalClientPackErrorType.h"
#include "mc/events/IConnectionEventing.h"
#include "mc/events/IExternalSessionTelemetry.h"
#include "mc/events/IMinecraftEventingProvider.h"
#include "mc/events/IPackTelemetry.h"
#include "mc/events/IScreenChangedEventing.h"
#include "mc/events/IUIEventTelemetry.h"
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
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/server/safety/ChatFloodingAction.h"
#include "mc/util/ValidationStatus.h"
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
class ItemDescriptor;
class Level;
class LevelChunk;
class LevelSeed64;
class LevelSettings;
class MessagePerformance;
class NetworkIdentifier;
class PackInstance;
class PackManifest;
class PackSettings;
class PerfContextTrackerReport;
class Player;
class PlayerRespawnTelemetryData;
class PushNotificationMessage;
class ScriptPluginResult;
class StructureEditorData;
class StructureTelemetryClientData;
struct AsyncJoinAllow;
struct AsyncJoinDeny;
struct ChunkRecyclerTelemetryOutput;
struct DBStoragePerformanceTelemetryData;
struct ExtraLicenseData;
struct ImageTelemetryInfo;
struct LevelStorageEventingContext;
struct LowMemoryReport;
struct NewBlockID;
struct PacksInfoData;
struct ProfilerLiteTelemetry;
struct SplitScreenUpdatedEventData;
struct StackStats;
struct WebviewDownloadInfo;
namespace Bedrock { class CrashTelemetryProcessor; }
namespace Bedrock { struct DeviceIdContext; }
namespace Bedrock { struct DirectoryEntry; }
namespace Bedrock::Http { class Status; }
namespace Bedrock::PubSub { class Subscription; }
namespace Core::Profile { struct FileCounters; }
namespace Json { class Value; }
namespace PuvLoadData { struct TelemetryEventData; }
namespace Social { class GameConnectionInfo; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct PlayerIDs; }
namespace Social::Events { class Event; }
namespace Social::Events { class EventManager; }
namespace Social::Events { class IEventListener; }
namespace Social::Events { class Measurement; }
namespace Social::Events { class OptionChange; }
namespace Social::Events { class Property; }
namespace Social::Events { struct InboxSummaryData; }
namespace Social::Events { struct ServerTelemetryData; }
namespace Webview { struct TelemetryCommonProperties; }
namespace mce { class UUID; }
// clang-format on

class IMinecraftEventing : public ::Bedrock::EnableNonOwnerReferences,
                           public ::IPackTelemetry,
                           public ::IScreenChangedEventing,
                           public ::IConnectionEventing,
                           public ::IUIEventTelemetry,
                           public ::IExternalSessionTelemetry,
                           public ::IMinecraftEventingProvider {
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
        RealmsPurchase         = 10,
        PartyTravel            = 11,
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

    enum class StructureBlockActionType : int {
        Unknown     = -1,
        Save        = 0,
        Load        = 1,
        Export      = 2,
        Export3D    = 3,
        LeaveScreen = 4,
        Import      = 5,
    };

    enum class SuspendTriggersDisconnect : int {
        Yes = 0,
        No  = 1,
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

    using EventAndManagerWriter = ::brstd::function_ref<
        void(::Social::Events::EventManager&, ::Social::Events::Event&) const,
        void(::Social::Events::EventManager&, ::Social::Events::Event&)>;

    using EventWriter = ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>;

    using OptionsObserver = ::std::function<void(bool)>;

    using RegisterOptionsObserver = ::brstd::function_ref<
        ::Bedrock::PubSub::Subscription(::std::function<void(bool)>) const,
        ::Bedrock::PubSub::Subscription(::std::function<void(bool)>)>;

    using SignInErrorDetails = ::std::vector<::std::pair<::std::string, ::std::string>>;

    using TestBuildIdType = char const*;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMinecraftEventing() /*override*/;

    virtual void init(::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform) = 0;

    virtual void initDeviceAndSessionIds() = 0;

    virtual void initEditorEventListener() = 0;

    virtual void shutdown() = 0;

    virtual ::std::string const& getPlayerSessionId() = 0;

    virtual ::std::chrono::steady_clock::time_point getWorldSessionIdGenerationTimestamp() const = 0;

    virtual bool getShouldHaveAchievementsEnabled() = 0;

    virtual void setShouldHaveAchievementsEnabled(bool value) = 0;

    virtual bool getAchievementsAlwaysEnabled() = 0;

    virtual uint getPrimaryLocalUserId() const = 0;

    virtual void forceSendEvents() = 0;

    virtual ::Social::Events::EventManager& getEventManager() const = 0;

    virtual void updatePrimaryLocalUserId(uint const& userId) = 0;

    virtual ::std::string getUserUID(::Social::IdentityType type, ::std::string const& primaryId) const = 0;

    virtual void registerSecondaryUserCommonProperties(uint const& userId, ::std::string const& uid) const = 0;

    virtual void unregisterSecondaryUserCommonProperties(uint const& userId) const = 0;

    virtual void updateIsLegacyPlayer(bool isLegacyPlayer) const = 0;

    virtual void updateIsTrial(bool isTrial) const = 0;

    virtual void updateEditionType() const = 0;

    virtual void updateClientId() const = 0;

    virtual void registerOptionsObserver(
        ::brstd::function_ref<
            ::Bedrock::PubSub::Subscription(::std::function<void(bool)>) const,
            ::Bedrock::PubSub::Subscription(::std::function<void(bool)>)> registerObserver
    ) = 0;

    virtual void addListener(::std::unique_ptr<::Social::Events::IEventListener> listener) = 0;

    virtual void clearListeners() = 0;

    virtual ::Json::Value propertiesAsJsonValue() const = 0;

    virtual void fireEvent(
        ::std::string const&                                eventName,
        ::std::vector<::Social::Events::Property> const&    properties,
        ::std::vector<::Social::Events::Measurement> const& measurements,
        bool                                                shouldAggregate
    ) = 0;

    virtual void fireEventBlockTypeRegistryChecksumMismatch(
        ::std::string const& reason,
        uint64 const&        serverBlockChecksum,
        uint64 const&        clientBlockChecksum,
        ::std::string const& serverVersion
    ) = 0;

    virtual void fireEventOnSuccessfulClientLogin(::Level const* level) = 0;

    virtual void fireEventStartClient(::std::string const& ipAddress, bool isTextToSpeechEnabled) = 0;

    virtual void fireEventStartWorld(
        ::NetworkType                                networkType,
        ::std::string const&                         ipAddress,
        ::Social::MultiplayerServiceIdentifier const friendWorldType
    ) = 0;

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
        ::std::string const&                                     partyId,
        bool                                                     isPartyLeader,
        bool                                                     isPartyDestination,
        bool                                                     isServerTransfer,
        bool                                                     isReconnect,
        ::Social::GameConnectionInfo const&                      connectionInfo
    ) = 0;

    virtual void fireEventClientLastPackets(
        uint const&          userId,
        ::SubClientId const  subId,
        int                  correlationId,
        ::Json::Value const& lastSentPackets,
        ::Json::Value const& lastReceivedPackets
    ) = 0;

    virtual void fireEventSignalServiceConnect(
        ::SignalServiceConnectStage stage,
        bool                        bIsSigningInAsHost,
        ::Json::Value const&        stageProperties,
        ::std::string const&        signinId,
        ::std::string const&        correlationId,
        bool                        isJsonRpc
    ) = 0;

    virtual void fireEventSignalMessagePerformance(
        ::std::string const&        signinId,
        ::MessagePerformance const& messagePerformanceEvent,
        bool                        isJsonRpc
    ) = 0;

    virtual void fireEventOnClientDisconnect(
        ::SubClientId                      subId,
        bool                               isNetworked,
        ::Connection::DisconnectFailReason reason,
        ::std::string const&               titleMessage,
        ::std::string const&               errorMessage,
        ::std::string const&               codeword
    ) = 0;

    virtual void fireEventOnServerDisconnect(
        ::Connection::DisconnectFailReason reason,
        ::std::string const&               disconnectedClientId,
        ::SubClientId                      subId,
        ::std::string const&               reasonContext,
        uint64                             clientCount,
        ::std::string const&               firstTimeStamp
    ) = 0;

    virtual void fireEventOnServerAsyncJoinTaskVerdict(
        ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny> const& joinVerdict,
        ::SubClientId const                                          subId,
        uint                                                         verdictQueueLength
    ) = 0;

    virtual void fireEventHttpClientError(::std::string const& error) = 0;

    virtual void
    fireGlobalResourcePackCrashRecovery(::PackInstance& packInstance, ::mce::UUID recoveryID, int order) = 0;

    virtual void fireServerConnectionEvent(
        ::IConnectionEventing::ServerConnectionOutcome outcome,
        uint                                           pingLatency,
        double                                         timeElapsed,
        ::std::string const&                           creatorName,
        ::std::string const&                           worldId
    ) = 0;

    virtual void fireServerConnectionAttemptEvent(
        ::std::string const& creatorName,
        bool                 isTransfer,
        ::std::string const& serverAddress
    ) = 0;

    virtual void fireTextToSpeechToggled(bool uiTTS, bool chatTTS) = 0;

    virtual void fireEventAppInitFileOpenStats(
        ::Core::Profile::FileCounters const& openForRead,
        ::Core::Profile::FileCounters const& openForWrite
    ) = 0;

    virtual void fireEventStartupPerformance(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;

    virtual void fireEventOnAppStart(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;

    virtual void fireEventOnAppSuspend(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::IMinecraftEventing::SuspendTriggersDisconnect                                             triggersDisconnect,
        bool reconnectOnResumeEnabled,
        bool forceDisableEvents
    ) = 0;

    virtual void fireEventOnAppResume(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::optional<int64> sessionAuthValidUntil
    ) = 0;

    virtual void fireEventOnDeviceLost(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;

    virtual void fireEventHardwareInfo() = 0;

    virtual void fireEventDeviceLost() = 0;

    virtual void fireEventRenderingSizeChanged() = 0;

    virtual void fireEventDiskStatus(::DiskStatus status, ::Core::LevelStorageState errorCode, uint64 freeSpace) = 0;

    virtual void fireEventStorageAreaFull(
        ::std::string const&                            areaPath,
        ::std::vector<::Bedrock::DirectoryEntry> const& diskSizeData
    ) = 0;

    virtual void fireEventOptionsUpdated(
        bool                                                                                        onStartup,
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;

    virtual void fireEventChatSettingsUpdated(
        ::Player const*                                  player,
        ::std::vector<::Social::Events::Property> const& properties
    ) const = 0;

    virtual void fireEventPerformanceMetrics(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::ProfilerLiteTelemetry const&                                                              profileTelemetry,
        bool                                                                                        IsEcoFrameThrottled,
        int                                                                                         fpsThrottle
    ) = 0;

    virtual void fireEventPerformanceContext(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::PerfContextTrackerReport const&                                                           perfContextReport,
        bool                                                                                        IsEcoFrameThrottled,
        int                                                                                         fpsThrottle
    ) = 0;

    virtual void fireEventDevSlashCommandExecuted(::std::string const& commandName, ::std::string const& command) = 0;

    virtual void fireCommandParseTableTelemetry(
        bool const                                                         isServer,
        ::std::vector<::IMinecraftEventing::CommandParseTableEntry> const& parseTableDetails
    ) const = 0;

    virtual void fireEventPlayerTravelled(::Player* player, float metersTravelledSinceLastEvent, int newBiome) = 0;

    virtual void fireEventVideoPlayed(::std::string const& productId, ::std::string const& videoUrl) = 0;

    virtual void fireEventRespondedToAcceptContent(
        ::PacksInfoData const& data,
        bool                   accepted,
        bool                   downloadOptionalResourcePacks
    ) = 0;

    virtual void fireEventWorldLoadTimes(
        ::std::string const&                                   calledFromScreen,
        ::std::vector<::std::pair<::std::string, float>> const progressHandlerLoadTimes
    ) = 0;

    virtual void fireCDNDownloadEvent(
        ::std::string const&                                packId,
        ::std::string const&                                versionNumber,
        ::std::string const&                                hostUrl,
        ::IMinecraftEventing::CDNDownloadResult const&      downloadResult,
        ::IMinecraftEventing::CDNDownloadEventOrigin const& origin,
        float const&                                        elapsedTime
    ) = 0;

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
    ) = 0;

    virtual void fireEventSignOutOfIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        ::std::string const&                    accountId,
        ::std::string const&                    errorCode
    ) = 0;

    virtual void fireEventAppPaused() = 0;

    virtual void fireEventAppUnpaused() = 0;

    virtual void fireEventAppSurfaceCreated() = 0;

    virtual void fireEventAppSurfaceDestroyed() = 0;

    virtual void fireEventSplitScreenUpdated(::SplitScreenUpdatedEventData const& data) = 0;

    virtual void fireEventPopupClosed(::std::string const& popupName) const = 0;

    virtual void fireEventWorldImported(int64 worldSeed, uint64 worldSize) = 0;

    virtual void fireEventWorldImportedResult(::FileArchiverOutcome importResult) = 0;

    virtual void fireCurrentInputUpdated(uint userId, ::InputMode inputMode) = 0;

    virtual void fireEventTreatmentPackApplied(::PackManifest const& manifest) = 0;

    virtual void fireEventPackPlayed(::PackInstance const& packInstance, uint priority) = 0;

    virtual void fireEventTreatmentPackDownloadFailed(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    ) = 0;

    virtual void fireEventTreatmentPackDownloaded(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    ) = 0;

    virtual void fireEventTreatmentPackRemoved(::std::string packId) = 0;

    virtual void
    fireEventContentLogsInWorldSession(::std::string const& logArea, uint errorCount, uint warningCount) = 0;

    virtual void fireEventEntitlementCacheLoadTimeout() = 0;

    virtual void fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow) = 0;

    virtual void fireRealmConnectionEventGenericLambdaCalled(
        ::IMinecraftEventing::RealmConnectionFlow   realmConnectionFlow,
        ::IMinecraftEventing::RealmConnectionLambda realmConnectionLambda,
        ::IMinecraftEventing::RealmConnectionResult realmConnectionResult
    ) = 0;

    virtual void fireEventCompoundCreatorCreated(int compoundId, int count) = 0;

    virtual void fireEventElementConstructorUsed(
        int                                             atomicNumber,
        int                                             count,
        ::IMinecraftEventing::ElementConstructorUseType useType
    ) = 0;

    virtual void fireEventEntitySpawned(::Player* player, int mobType, uint spawnMethod) = 0;

    virtual void fireEventReducerBlockEntered(::ItemDescriptor const& item) = 0;

    virtual void fireEventRespawn(::Player& player, int dimID) = 0;

    virtual void fireEventServerRespawnSearchTime(::Player& player, ::PlayerRespawnTelemetryData const& data) = 0;

    virtual void firePackSettingsEvent(
        ::PackSettings const& packSettings,
        ::PackManifest const& manifest,
        ::std::string         serializedPackSettings
    ) = 0;

    virtual void removeTestBuildIdTag() = 0;

    virtual void removeTestTelemetryTag() = 0;

    virtual void setTestBuildIdTag(char const* id) = 0;

    virtual void setTestTelemetryTag(char const* name) = 0;

    virtual void stopDebugEventLoggingForAllListeners() = 0;

    virtual void tick() = 0;

    virtual void fireEventMultiplayerClientConnectionStateChanged(
        ::std::string const& connectionType,
        uint                 fromState,
        uint                 toState,
        uint                 port,
        ::std::string const& status
    ) = 0;

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
    ) = 0;

    virtual void fireEventServerReceivedValidPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              clientSubId
    ) = 0;

    virtual void fireEventClientSentOrReceivedPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              clientSubId,
        ::std::string              correlationId,
        bool                       isOutgoing
    ) = 0;

    virtual void fireEventJoinCanceled(::LoadingState currentState) = 0;

    virtual void fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType              notificationType,
        int                                                         notificationCount,
        ::std::set<::IMinecraftEventing::IgnoredNotificationSource> notificationSources
    ) = 0;

    virtual void fireClubsEngagementEvent(
        ::IMinecraftEventing::ClubsEngagementAction     action,
        ::IMinecraftEventing::ClubsEngagementTargetType engagementTargetType,
        char const*                                     target,
        int64 const                                     realmId,
        ::std::string const&                            clubId
    ) = 0;

    virtual void fireClubsOpenFeedScreenEvent(
        ::IMinecraftEventing::ClubsFeedScreenSource const source,
        int64 const                                       realmId,
        ::std::string const&                              clubId,
        int                                               unreadPosts
    ) = 0;

    virtual void
    fireEventEntitlementListInfo(::std::vector<::ContentIdentity>& entitlementContentIds, bool isLegacyList) = 0;

    virtual void fireEventStorage(int state, ::std::string const& extra) = 0;

    virtual void fireEventDlcStorageFull(
        ::std::string const& productId,
        uint64               dlcSize,
        uint64               onDiskScratchSpace,
        uint64               scratchSpace,
        uint64               premiumSpace
    ) = 0;

    virtual void
    fireEventPlatformStorePurchaseFailure(::std::string const& productId, ::std::string const& errorMessage) = 0;

    virtual void fireEventPurchaseFailureDetails(
        int                  httpCode,
        ::std::string const& errorMessage,
        ::std::string const& productId,
        ::std::string const& transactionId
    ) = 0;

    virtual void fireEventTreatmentsCleared() = 0;

    virtual void
    fireEventTreatmentsSet(::std::vector<::std::string> const& treatments, ::std::string const& treatmentContext) = 0;

    virtual void fireEventProgressionsSet(::std::vector<::std::string> const& progressions) = 0;

    virtual void fireEventPackImportTimeout(::std::string const& productId) = 0;

    virtual void
    fireEventFatalClientPackError(::FatalClientPackErrorType errorType, ::gsl::span<::std::string const> packIds) = 0;

    virtual void fireEventStoreErrorPage(
        ::std::string const& errorCode,
        ::std::string const& pageId,
        ::std::string const& discoveryServiceTitleId,
        ::std::string const& playFabTitleId
    ) = 0;

    virtual void setServerIdsforClient(
        ::std::string const&                         multiplayerCorrelationId,
        ::std::string const&                         serverVersion,
        ::Social::Events::ServerTelemetryData const& serverTelemetryData
    ) = 0;

    virtual void setConnectionGUID(::std::string const& connectionGUID) = 0;

    virtual void removeConnectionGUID() = 0;

    virtual void fireEventSearchCatalogRequest(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;

    virtual void fireEventStoreLocalizationBinaryFetchResponse(int const status, uint const currentFetchAttempt) = 0;

    virtual void fireEventStoreSessionResponse(
        ::std::string const& responseType,
        int const            status,
        int const            retryCount,
        bool const           asyncServicesManager
    ) = 0;

    virtual void fireEventStoreDiscoveryRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    ) = 0;

    virtual void fireEventStoreInventoryRefreshRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    ) = 0;

    virtual void fireEventInventoryVersionRefreshRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    ) = 0;

    virtual void fireEventServerDrivenLayoutPageLoaded(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::string                                                                               pageID,
        int                                                                                         requestSize,
        int                                                                                         responseSize,
        int                                                                                         rowCount,
        int                                                                                         itemCount,
        int                                                                                         imageCount
    ) = 0;

    virtual void fireEventServerDrivenLayoutImagesLoaded(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::string                                                                               pageID,
        ::ImageTelemetryInfo const&                                                                 imageTelemetryInfo
    ) = 0;

    virtual void fireEventLockedItemGiven() = 0;

    virtual void fireEventPlayerBounced(::Player* player, ::Block const& block, int bounceHeight) = 0;

    virtual void fireEventSetValidForAchievements(::Player* player, bool currentlyValidForAchievements) = 0;

    virtual void fireEventAchievementReceived(
        ::std::string const& title,
        ::std::string const& description,
        ::std::string const& achievementId
    ) = 0;

    virtual void updatePlayerUndergroundStatus(::Player* player, bool isUnderground);

    virtual void fireEventPlayerAttemptingExploit(::Player* player, ::IMinecraftEventing::ExploitType exploitType) = 0;

    virtual void fireEventWorldLoaded(
        ::Player* player,
        ::brstd::function_ref<
            void(::Social::Events::EventManager&, ::Social::Events::Event&) const,
            void(::Social::Events::EventManager&, ::Social::Events::Event&)> writer
    ) = 0;

    virtual void fireEventMarkLevelForSync(
        ::std::string const&                         levelId,
        int64                                        local,
        int64                                        remote,
        ::IMinecraftEventing::MarkLevelForSyncReason reason
    ) = 0;

    virtual void fireMinecraftVersionLaunched(bool launchedLegacy) = 0;

    virtual void fireMinecraftVersionInviteAccepted(bool launchedLegacy, uint64 inviteGameOwner) = 0;

    virtual void fireInviteStatusReceived(::std::string id) = 0;

    virtual void fireInviteStatusSentImpl(uint userId, ::std::vector<::std::string> invitationIds) = 0;

    virtual void fireDayOneExperienceStateChanged(
        ::IMinecraftEventing::DayOneExperienceState newState,
        ::std::optional<uint>                       importedWorldIndex,
        ::std::optional<uint64>                     importedWorldTimestamp
    ) = 0;

    virtual void fireContentDecryptionFailure(
        ::std::string const& failedContentIds,
        ::std::string const& contentKey,
        ::std::string const& failurePoint
    ) = 0;

    virtual void fireWorldConversionAttemptEvent(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;

    virtual void fireWorldConversionInitiatedEvent(::std::string const& converterVersion) = 0;

    virtual void fireWorldUpgradedToCnCPart2(
        bool                 willUpgrade,
        ::std::string const& baseGameVersion,
        ::Experiments const& experiments,
        ::std::string const& lastOpenedVersion,
        ::LevelSeed64        worldSeed,
        float                worldSizeMB
    ) = 0;

    virtual void fireEventAssertFailed(::std::string const& assertBucket, ::std::string const& message) = 0;

    virtual void fireEventCrashSystemFailedToInit() = 0;

    virtual void fireChatUsedEvent(uint chatLength, bool isSlashCommand) = 0;

    virtual void fireEventJoinByCode(::std::string const&) = 0;

    virtual void fireEventBlockPlacedByCommand(::Block const& placedBlock, int numberOfBlocksPlaced) = 0;

    virtual void fireEventServerPlayerJoinedGame(
        ::NetworkIdentifier const& id,
        ::SubClientId              subId,
        ::std::string const&       firstConnectionTime
    ) = 0;

    virtual void fireEventScriptPluginDiscovery(::ScriptPluginResult const& pluginResult, bool client) = 0;

    virtual void fireEventScriptPluginRun(
        ::ScriptPluginResult const& pluginResult,
        ::std::chrono::microseconds runDuration,
        bool                        client
    ) = 0;

    virtual void fireEventScriptDebuggerListen(bool client, bool autoAttach) = 0;

    virtual void fireEventScriptDebuggerConnect(bool client, bool autoAttach, int retries) = 0;

    virtual void fireEditorEventToolActivated(::std::string const& toolName) = 0;

    virtual void fireEditorUndo(::std::string const& transactionName) = 0;

    virtual void fireEditorRedo(::std::string const& transactionName) = 0;

    virtual void fireEditorScriptAction(
        ::std::string const& scriptSource,
        ::std::string const& actionName,
        ::std::string const& actionMetadata
    ) = 0;

    virtual void fireEditorTutorialEvent(
        ::std::string_view                    type,
        ::std::optional<::std::string> const& state,
        ::std::string const&                  currentStage,
        ::std::optional<::std::string> const& previousStage
    ) = 0;

    virtual void fireEventWorldLoadedClassroomCustomization(
        ::IMinecraftEventing::WorldClassroomCustomization                  customization,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) = 0;

    virtual void fireClassroomSettingUpdated(::ClassroomSetting classroomSetting, ::SettingsScreenMode settingMode) = 0;

    virtual void fireEventNpcPropertiesUpdated(::Actor& npcOwner, bool isEditorWorldbuilder) = 0;

    virtual void fireEventBoardTextUpdated(::ChalkboardBlockActor& board) = 0;

    virtual void fireEventCameraUsed(bool isSelfie) = 0;

    virtual void fireEventPortfolioExported(int imageCount, int captionedCount) = 0;

    virtual void fireQuickPlayEvent() = 0;

    virtual void firePermissionsSetEvent(
        ::PlayerPermissionLevel const  prevPlayerPermissionLevel,
        ::CommandPermissionLevel const prevCommandPermissionLevel,
        ::PlayerPermissionLevel const  playerPermissionLevel,
        ::CommandPermissionLevel const commandPermissionLevel
    ) = 0;

    virtual void fireExternalUriLaunched(::std::string const& uri) const = 0;

    virtual void fireUserGeneratedUriLaunched(::UserGeneratedUriSource source) const = 0;

    virtual void fireUserGeneratedUriLaunchFailed(
        ::UserGeneratedUriSource              source,
        ::Util::ResourceUri::ValidationStatus reasonCode,
        ::std::string const&                  additionalData
    ) const = 0;

    virtual void fireEventEmptyLibraryCategoryError(::std::string const& categoryTitle) const = 0;

    virtual void
    fireCodeBuilderCachePerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const = 0;

    virtual void fireCodeBuilderLoadPerformance(
        ::std::string const&        stage,
        uint64                      tutorialSize,
        uint64                      downloadSize,
        ::std::chrono::milliseconds elapsedTimeMS
    ) const = 0;

    virtual void
    fireCodeBuilderRunPerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const = 0;

    virtual void fireLibraryButtonPressed(
        ::std::string const& productId,
        ::std::string const& worldName,
        ::std::string const& buttonAction
    ) = 0;

    virtual void fireCourseButtonPressed(::std::string const& courseTitle, ::std::string const& courseId) = 0;

    virtual void fireLessonActionTaken(
        ::std::string const&                        lessonTitle,
        ::std::string const&                        lessonId,
        ::std::string const&                        courseId,
        ::IMinecraftEventing::EducationLessonAction buttonAction,
        int                                         score
    ) = 0;

    virtual void fireLessonProgressEvent(
        ::std::string const& lessonTitle,
        ::std::string const& lessonId,
        ::std::string const& courseId,
        ::std::string const& activityId,
        ::std::string const& action,
        ::std::string const& educationCreatorID,
        ::std::string const& educationCreatorWorldID,
        int                  score
    ) = 0;

    virtual void fireShareButtonPressed(
        ::std::string const& location,
        ::EduShareUriType    shareType,
        ::EduShareMethodType methodType,
        bool                 includesResource
    ) = 0;

    virtual void
    fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint const entryPoint) const = 0;

    virtual void fireInAppCodeBuilderActivated(
        ::OpenCodeMethod     method,
        ::std::string const& ideName,
        ::std::string const& educationCreatorID,
        ::std::string const& educationCreatorWorldID
    ) const = 0;

    virtual void fireInAppCodeBuilderDismissed(::std::string const& ideName) const = 0;

    virtual void fireCodeCommandButtonPressed() = 0;

    virtual void fireIDESelected(::std::string const& name) const = 0;

    virtual void fireEventEduResources() const = 0;

    virtual void fireEventEduiOSPurchaseTransaction(::TransactionStatus const& status) const = 0;

    virtual void fireEventCodeBuilderClosed() const = 0;

    virtual void fireEventCodeBuilderLog(
        ::Webview::TelemetryCommonProperties const& properties,
        ::std::string const&                        message,
        ::std::string&                              level
    ) const = 0;

    virtual void fireEventCodeBuilderScoreChanged(::std::string const& objective, int const score) const = 0;

    virtual void fireEventCodeBuilderRuntimeAction(::std::string const& action) const = 0;

    virtual void fireEventEduServiceStatus(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        int                                                                durationMS,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const = 0;

    virtual void
    fireEventWebviewDownload(::std::string const& downloadState, ::WebviewDownloadInfo const& downloadInfo) const = 0;

    virtual void fireEduServiceRequestFailed(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        ::std::string const&                                               error,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const = 0;

    virtual void fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const = 0;

    virtual void fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const = 0;

    virtual void fireEventOptionsChanged(
        ::std::string const&                            optionGroup,
        ::std::unordered_map<::std::string, int> const& events
    ) const = 0;

    virtual void fireEventOptionsChangedAlt(
        ::std::string const&                                                       optionGroup,
        ::std::unordered_map<::std::string, ::Social::Events::OptionChange> const& changes
    ) const = 0;

    virtual void fireEventTagButtonPressed(::std::string const& tag, bool showMore) const = 0;

    virtual void fireEventLevelDataOverride(::std::string_view valueName) const = 0;

    virtual void fireEventEduContentVerificationFailed() const = 0;

    virtual void fireEventLibrarySearch(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) const = 0;

    virtual void fireEventLibrarySearchItemSelected(
        int const            sessionId,
        int const            correlationId,
        ::std::string const& productId,
        int const            row,
        int const            column
    ) const = 0;

    virtual void
    fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType updateType, double elapsedTimeSec) const = 0;

    virtual void fireEventWorldExported(int64 worldSeed, uint64 worldSize) = 0;

    virtual void
    fireEventControlRemappedByPlayer(::std::string const& actionName, ::RawInputType inputType, int keyCode) const = 0;

    virtual void fireEventDifficultySet(
        ::SharedTypes::Legacy::Difficulty oldDifficulty,
        ::SharedTypes::Legacy::Difficulty newDifficulty
    ) = 0;

    virtual void fireEventGameRulesUpdated(bool oldValue, bool newValue, ::std::string const& gameRuleName) = 0;

    virtual void fireEventGameRulesUpdated(int oldValue, int newValue, ::std::string const& gameRuleName) = 0;

    virtual void fireEventGameRulesUpdated(float oldValue, float newValue, ::std::string const& gameRuleName) = 0;

    virtual void fireEventDefaultGameTypeChanged(::GameType oldGameType, ::GameType newGameType) = 0;

    virtual void fireEventNewContentCheckCompleted(::std::string const& newContentPrefix, bool hasNewStoreContent) = 0;

    virtual void fireEventEncyclopediaTopicChanged(::std::string const& topicName, ::InputMode inputMode) = 0;

    virtual void fireEventHowToPlayTopicChanged(::std::string const& topicName, ::InputMode inputMode) = 0;

    virtual void fireEventAndroidHelpRequest() = 0;

    virtual void
    fireEventWorldFilesListed(uint64 numLevels, uint64 totalSizeMB, uint64 largestLevelMB, uint64 smallestLevelMB) = 0;

    virtual void fireEventLabTableCreated(int reactionId, int productId, int productAux) = 0;

    virtual void fireEventPlayerMessageSay(::std::string const& fromName, ::std::string const& message) = 0;

    virtual void fireEventPlayerMessageTell(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    ) = 0;

    virtual void fireEventPlayerMessageChat(::std::string const& fromName, ::std::string const& message) = 0;

    virtual void fireEventPlayerMessageMe(::std::string const& fromName, ::std::string const& message) = 0;

    virtual void fireEventPlayerMessageTitle(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    ) = 0;

    virtual void fireEventPlayerDamaged(::Player* player, ::SharedTypes::Legacy::ActorDamageCause damageCause) = 0;

    virtual void fireEventPlayerKicked(::std::string const& sessionType, ::std::string const& kickedPlayer) = 0;

    virtual void fireEventPlayerBanned(::std::string const& bannedPlayer) = 0;

    virtual void fireEventRealmShared(
        ::std::string const&                   url,
        ::IMinecraftEventing::ShareMode const& mode,
        int64 const&                           worldId
    ) = 0;

    virtual void fireEventRealmMemberlistCleared(int64 const& worldId, int const& numberOfUsersRemoved) = 0;

    virtual void fireEventRealmUrlGenerated(::std::string const& url, int64 const& worldId) = 0;

    virtual void fireEventStructureExport(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::IMinecraftEventing::ExportOutcome                                                         outcome,
        ::IMinecraftEventing::ExportStage                                                           stage
    ) const = 0;

    virtual void fireEventContentShared(
        ::std::string const&                   productId,
        ::std::string const&                   url,
        ::IMinecraftEventing::ShareMode const& mode
    ) = 0;

    virtual void fireEventStorageReport(::std::string const& report) = 0;

    virtual void fireEventStackLoaded(::StackStats const& stats) = 0;

    virtual void fireEventUnknownBlockReceived(::NewBlockID const& blockId, ushort data) = 0;

    virtual void fireEventSignInEdu(
        ::std::string const&                                            mutsUserId,
        ::edu::Role                                                     role,
        ::Identity::EduSignInStage                                      stage,
        ::std::string const&                                            tenantType,
        ::std::string const&                                            error,
        ::std::vector<::std::pair<::std::string, ::std::string>> const& details
    ) = 0;

    virtual void fireEventSignOutEdu(
        ::std::string const& mutsUserId,
        ::edu::Role          role,
        ::std::string const& tenantType,
        ::std::string const& action,
        ::std::string const& error
    ) = 0;

    virtual void
    fireEventSwitchAccountEdu(::std::string const& mutsUserId, ::edu::Role role, ::std::string const& tenantType) = 0;

    virtual void fireEventEduDemoConversion(::edu::Role role, ::LastClickedSource lastClickedSource) = 0;

    virtual void fireEventPopupFiredEdu(
        ::std::string const&          mutsUserId,
        ::std::string const&          dialogType,
        ::std::string const&          experienceId,
        ::std::string const&          title,
        ::ActiveDirectoryAction const postAction
    ) = 0;

    virtual void fireEventPlayIntegrityCheck(
        ::std::string const& result,
        ::std::string const& appRecognitionVerdict,
        ::std::string const& deviceIntegrity,
        ::std::string const& appLicensingVerdict
    ) = 0;

    virtual void fireEventCloudOperationStartedEdu(
        ::EduCloudUtils::Operation const      operation,
        ::EduCloud::CloudItemType const       cloudItemType,
        ::std::string const&                  cloudCorrelationId,
        uint64 const                          size,
        ::std::optional<::std::string> const& driveItemId
    ) = 0;

    virtual void fireEventCloudMyWorldsSummary(
        int const totalWorldsCount,
        int const placeholderCount,
        int const needsUploadCount,
        int const ctagMismatchCount,
        int const conflictCount
    ) = 0;

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
    ) = 0;

    virtual void fireEventCloudConflictCheckEdu(
        ::std::string const&                       cloudCorrelationId,
        ::EduCloud::ConflictResolutionStatus const conflictStatus
    ) = 0;

    virtual void fireEventPurchaseGameAttempt(
        ::std::string const& storeId,
        ::std::string const& activeTab,
        ::std::string const& productId
    ) = 0;

    virtual void fireEventPurchaseGameResult(int purchaseResult) = 0;

    virtual void fireEventTrialDeviceIdCorrelation(
        int64                myTime,
        ::std::string const& theirId,
        int64                theirTime,
        ::std::string const& theirLastSessionId
    ) = 0;

    virtual void fireEventDeviceIdManagerFailOnIdentityGained() = 0;

    virtual void fireEventPushNotificationReceived(::PushNotificationMessage const& msg) = 0;

    virtual void fireEventPushNotificationOpened(::std::string const& threadId, ::std::string const& deepLink) = 0;

    virtual void firePerfTestEvent(
        ::std::string const&                                    testArtifact,
        ::std::string const&                                    modelName,
        ::std::string const&                                    renderSize,
        uint                                                    renderDistance,
        uint                                                    simDistance,
        ::std::string const&                                    memorySize,
        ::std::vector<::std::pair<::std::string, float>> const& testArtifactData
    ) = 0;

    virtual void fireEventLicenseCheck(bool isLicensed, ::ExtraLicenseData& data) = 0;

    virtual void fireQueryOfferResult(::std::string const& storeID, int NumberOfOffers, bool QuerySucceeded) = 0;

    virtual void fireEventQueryPurchasesResult(
        ::std::string const& storeID,
        ::std::string const& priorPurchaseIds,
        int                  NumberOfPurchases,
        bool                 QuerySucceeded
    ) = 0;

    virtual void
    fireEventWorldGenerated(::std::string const& levelId, ::LevelSettings const& levelSettings, bool fromTemplate) = 0;

    virtual void fireEventCopyWorldEducationEnabled() = 0;

    virtual void fireEventBundleSubOfferClicked(
        int                  offerIndex,
        int                  bundleSubOfferCount,
        ::std::string const& telemetryId,
        ::std::string const& productId,
        bool                 isOnSale,
        ::std::string const& timeRemainingOnSale
    ) = 0;

    virtual void fireEventStoreOfferClicked(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;

    virtual void fireEventStoreOfferClicked(::std::string const telemetryId, ::std::string const& productId) = 0;

    virtual void fireEventPersonaOfferClicked(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;

    virtual void fireEventStoreSearch(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;

    virtual void fireEventSearchItemSelected(
        int const            correlationId,
        int const            sessionId,
        ::std::string const& productId,
        int const            row,
        int const            column,
        int const            currentPage,
        ::std::string const& searchType
    ) = 0;

    virtual void fireEventUserListUpdated(
        ::std::string const& productId,
        ::std::string const& listId,
        ::std::string const& operation,
        bool                 success
    ) = 0;

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
    ) = 0;

    virtual void fireEventRealmsGeneralCall(::std::string const& callName, ::Bedrock::Http::Status returnCode) = 0;

    virtual void fireEventRealmsRealmSpecificCall(
        ::std::string const&    callName,
        int64                   realmId,
        ::Bedrock::Http::Status returnCode
    ) = 0;

    virtual void fireEventRealmDownload(
        ::std::string const& correlationId,
        ::std::string const& downloadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB
    ) = 0;

    virtual void fireEventRealmUpload(
        ::std::string const& correlationId,
        ::std::string const& uploadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB,
        bool const           isPack
    ) = 0;

    virtual void
    fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow) = 0;

    virtual void fireRealmConnectionEventRealmAPIResponse(
        ::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow,
        int                                       responseCode
    ) = 0;

    virtual ::std::string getSessionId() = 0;

    virtual void fireEventChunkLoaded(::LevelChunk& chunk) = 0;

    virtual void fireEventChunkUnloaded(::LevelChunk& chunk) = 0;

    virtual void fireEventChunkChanged(::LevelChunk& chunk) = 0;

    virtual void fireEventMultiplayerSessionUpdate(::Bedrock::NonOwnerPointer<::Level> level) = 0;

    virtual void fireEventLevelDestruct(bool isTransfer) = 0;

    virtual void flagEventDeepLink() = 0;

    virtual void flagEventPlayerGameTypeDefault(bool isDefault) = 0;

    virtual void fileEventCloudWorldPullFailed(
        ::std::string const& reason,
        ::std::string const& worldID,
        bool                 localLevelDatUsed
    ) = 0;

    virtual void
    fireEventLevelDatLoadFailed(::std::string const& reason, ::std::string const& worldID, bool isFatal) = 0;

    virtual void fireEventWorldCorruptionCausedWorldShutdown(
        ::LevelStorageEventingContext const& context,
        ::std::string const&                 reason,
        ::std::optional<bool>                isOutOfDiskSpace
    ) = 0;

    virtual void fireEventClientLeftGameDueToUnrecoverableError(::std::string const& reason, bool isServer) = 0;

    virtual void fireEventServerShutdownDueToError(::std::string const& reason) = 0;

    virtual void fireEventServerInitializationFailed(
        ::std::string const& failReason,
        bool                 serverLevelExists,
        bool                 serverNetworkHandlerValid
    ) = 0;

    virtual void fireEventDBStorageSizeSnapshot(
        ::LevelStorageEventingContext const& context,
        ::DBStorageFolderWatcher const&      folderWatcher,
        ::DBStorageFolderWatcherSnapshotKind kind
    ) = 0;

    virtual void fireEventLevelDBPerformanceData(
        ::LevelStorageEventingContext const&       context,
        ::DBStoragePerformanceTelemetryData const& perfData
    ) = 0;

    virtual void fireEventDBReadFail(::LevelStorageEventingContext const& context, ::std::string const& reason) = 0;

    virtual void fireEventSidebarNavigation(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& telemetryId,
        int const            depthLevel,
        bool const           isSelected,
        bool const           areChildrenVisible,
        bool const           hasChildren
    ) = 0;

    virtual void fireEventSidebarVerboseToggled(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& verboseNavigationType,
        bool const           verboseState
    ) = 0;

    virtual void fireEventPersonaUserLoadedActive(
        ::persona::ProfileType const personaProfile,
        ::std::string const&         classicSkinId,
        bool                         personaUsesClassicSkin
    ) = 0;

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
    ) = 0;

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
    ) = 0;

    virtual void fireEventPersonaSkinChanged(
        ::persona::ProfileType const personaProfile,
        ::std::string const&         classicSkinId,
        bool                         isClassicSkinUsed
    ) = 0;

    virtual void fireEventPersonaAvatarsListed(::std::vector<::persona::ProfileType> const& profileTypesUsed) = 0;

    virtual void
    fireEventPersonaEmotePlayed(::std::string const& emoteProductId, bool isEmoteEndedEarly, int emoteSlotId) = 0;

    virtual void
    fireEventDefaultCastSelected(int previewIndex, ::mce::UUID appearanceId, ::std::string const& appearanceName) = 0;

    virtual void fireEventPersonaInitalizationEvent(
        uint                 secondsToCompletion,
        ::std::string const& status,
        ::std::string const& user
    ) = 0;

    virtual void fireEventPersonaGeneralError(::std::string const& personaErrorName, uint duplicateErrorsFired) = 0;

    virtual void fireEventPersonaLoadingPieces(uint piecesLoaded, double timeToLoadInSeconds) = 0;

    virtual void fireEventPersonaCreationFailed(
        ::std::string const& errorName,
        ::std::string const& pieceId,
        bool                 missingTop,
        bool                 missingBottom,
        ::std::string const& repositoryPieceType,
        ::std::string const& appearancePieceType
    ) = 0;

    virtual void fireEventPersonaCategoryInformation(::std::string const& categoryInformation) = 0;

    virtual void fireEventDisplayLoggedError(
        ::std::string const& errorMessageTemplate,
        ::std::string const& errorMessage,
        ::std::string const& errorParameters
    ) = 0;

    virtual void fireEventWorldHistoryPackSourceMissingDuringUpgrade(
        ::std::string const& worldPath,
        ::std::string const& levelId,
        ::std::string const& deletionCandidate
    ) = 0;

    virtual void fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    ) = 0;

    virtual void fireStructureBlockRedstoneActivated(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    ) = 0;

    virtual void fireEventOreUIError(uint const& userId, ::std::string const& errorType) = 0;

    virtual void fireEventOreUIScreenPerformance(
        uint const&                                                                                 userId,
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;

    virtual void fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool const           isOwner
    ) = 0;

    virtual void fireEventOnboardingWorldCreationUsage(
        bool onboardingWorldCreationUsed,
        bool hasWorlds,
        bool hasOnlyBaseGamePacks
    ) = 0;

    virtual void fireEventDeviceAccountSuccess(bool isNewAccount, ::std::string const& accountID) = 0;

    virtual void fireEventDeviceAccountFailure(
        ::IMinecraftEventing::SignInStage               stage,
        ::IMinecraftEventing::DeviceAccountFailurePhase phase,
        uint                                            resultStatus,
        ::std::string const&                            accountID
    ) = 0;

    virtual ::std::shared_ptr<void*> requestEventDeferment() = 0;

    virtual ::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> getCrashTelemetryProcessor() = 0;

    virtual void fireEventLevelChunkPerformanceData(bool isClientSide) = 0;

    virtual void fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const& output) = 0;

    virtual void fireEventActorValueValidationFailed(::std::string const& invalidValue, char const* caller) = 0;

    virtual void fireDBStorageError(::LevelStorageEventingContext const& context, ::std::string const& errorType) = 0;

    virtual void fireServerStarted(
        ::Social::Events::ServerTelemetryData const&              serverTelemetryData,
        ::std::unordered_map<::std::string, ::std::string> const& propertiesChanged
    ) = 0;

    virtual void fireServerShutdown() = 0;

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
    ) = 0;

    virtual void fireBannedSkinVerificationEvent(
        uint const&          userId,
        ::std::string const& serverType,
        ::std::string const& skinData,
        bool                 wasApproved,
        int const            eventCode,
        ::std::string const& message
    ) = 0;

    virtual void fireEventPlayerReportSent(
        bool                 successfulReportSent,
        ::std::string const& failureSource,
        ::std::string const& failureReason,
        ::std::string const& reportID
    ) = 0;

    virtual void
    fireEventOneDSPlayerReportPayload(::std::string const& reportPayloadJson, ::std::string const& reportID) = 0;

    virtual void
    fireEventSafetyHTTPRequest(::std::string const& method, ::std::string const& url, int const responseCode) = 0;

    virtual void fireEventProfanityFilter(bool localFilter, bool remoteFilter, bool playerFilter) = 0;

    virtual void fireEventChatFloodingActionTaken(
        ::std::string const&         authorXuid,
        ::Safety::ChatFloodingAction action,
        ::std::string const&         message
    ) = 0;

    virtual void fireEventTextProcessorStartupFailed(::std::string const& stage, int retryCount, int maxRetryCount) = 0;

    virtual void firePlayerAccountMetadata(
        ::Social::PermissionCheckResult multiPlayerAllowed,
        ::Social::PermissionCheckResult chatAllowed,
        ::Social::PermissionCheckResult addFriendAllowed,
        ::Social::PermissionCheckResult ugcAllowed,
        ::Social::PermissionCheckResult clubsAllowed,
        ::Social::PermissionCheckResult viewProfilesAllowed,
        bool                            isChildAccount,
        bool                            isGuest
    ) = 0;

    virtual void fireEventBlockUser(::std::string const& xuid, bool isSuccess, bool isBlocked) = 0;

    virtual void fireEventMuteUser(::std::string const& xuid, bool isSuccess, bool isMuted) = 0;

    virtual void fireStorageMigrationEvent(
        bool                                              isSuccessful,
        ::Bedrock::StorageMigration::StorageMigrationType migrationType,
        int                                               numFilesMigrated,
        int                                               numFilesTotal,
        ::std::chrono::nanoseconds                        duration,
        ::std::string const&                              failureReason
    ) = 0;

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
    ) = 0;

    virtual void
    fireEventConnectedStorageError(char const* message, ::std::string const& levelId, int64 quotaRemaining) = 0;

    virtual void fireEventUwpToGdkMigrationComplete(
        ::Bedrock::DeviceIdContext const& deviceIdContext,
        ::std::string const&              gdkDeviceId,
        ::std::string_view                migrationErrors
    ) = 0;

    virtual void fireEventOSKErrorEncountered(::std::string_view failureReason) = 0;

    virtual void fireNetworkChangedEvent(::std::string const& networkConnectionType) = 0;

    virtual void fireEventMessageServiceImpression(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl
    ) = 0;

    virtual void fireEventMessageReceived(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl
    ) = 0;

    virtual void fireEventPartyPlayFabError(
        ::std::string const& functionName,
        ::std::string const& errorMessage,
        ::std::string const& partyId
    ) = 0;

    virtual void fireEventGoogleAccountHoldWarning(bool navigatedToSubscription) = 0;

    virtual void fireDelayedEventReportOfflineAction(::std::string const& offlineAction) = 0;

    virtual void
    fireEventFeedbackSubmitted(::std::string const& productId, bool safetyCheckSuccessful, bool isValidText) = 0;

    virtual void fireEventTrackDeeplinks(
        ::std::string const& deeplinkDestination,
        ::std::string const& deeplinkSource,
        ::std::string const& educationReferrerId,
        ::std::string const& educationReferrerType
    ) = 0;

    virtual void
    firePlayerUnexpectedFallDamage(float const fallDistance, bool isVehicle, float const divergenceAmount) = 0;

    virtual void
    fireEventActorMovementCorrectionDivergence(::ActorType actorType, ::std::vector<float> const& divergences) = 0;

    virtual void fireEventDedicatedServerDiscoveryResponse(int const status, int const retryAttempt) = 0;

    virtual void fireEventInGamePause(bool pauseStatus) = 0;

    virtual void fireEventGameTip(int gameTipId, int gameTipEventType, int gameTipTestGroup, ::InputMode inputMode) = 0;

    virtual void fireEventAddedFriend(
        ::std::string const&                      addedXuid,
        ::IMinecraftEventing::AddedFriendLocation location,
        bool                                      success
    ) = 0;

    virtual void fireEventInboxSummary(::Social::Events::InboxSummaryData const& data) = 0;

    virtual void fireEventTrialStatusFailed(int errorCode) = 0;

    virtual void
    fireEventSaveDataExpansion(uint64 preExpansionSize, uint64 postExpansionSize, uint64 levelUsedSize) = 0;

    virtual void fireEventProfileButtonPressed(::std::string const& entryPoint) const = 0;

    virtual void fireEventWorldCopy(uint64 worldSize, uint64 filesSum, ::LevelSeed64 worldSeed) = 0;

    virtual void fireEventWriteBudgetLow(
        uint64                     remainingWriteBudget,
        float                      writeRateMBPerMin,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    ) = 0;

    virtual void fireEventWriteBudgetReplenished(
        ::std::chrono::nanoseconds throttledTime,
        uint64                     lowestWriteBudget,
        ::std::optional<uint64>    lowestSystemThrottlingPerSec,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    ) = 0;

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
    ) = 0;

    virtual void fireEventLowMemoryDetected(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::LowMemoryReport const&                                                                    report
    ) = 0;

    virtual void fireEventReceivedApplicationExitInfo(
        ::std::string const& description,
        int                  reasonCode,
        int                  exitCode,
        int                  importanceCode,
        int64                residentSetSize,
        int64                proportionalSetSize,
        ::std::string const& sessionId,
        bool                 deviceSupportsReasonLowMem
    ) = 0;

    virtual void fireEventBug1341395(::std::string const& details) = 0;

    virtual void fireEventImmersiveReaderStatus(::Bedrock::Http::Status const status) = 0;

    virtual void fireEventPacketSerializationMismatch(
        ::MinecraftPacketIds packetId,
        ::std::string_view   legacyStream,
        ::std::string_view   cerealStream
    ) = 0;

    virtual void
    fireEventPUVLoad(::std::string const& resourceCategory, ::PuvLoadData::TelemetryEventData&& loadData) = 0;

    virtual void fireEventRemoteDesktop(bool isRemoteDesktop) = 0;
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

    MCNAPI static void** $vftableForIExternalSessionTelemetry();

    MCNAPI static void** $vftableForIMinecraftEventingProvider();

    MCNAPI static void** $vftableForIScreenChangedEventing();
    // NOLINTEND
};
