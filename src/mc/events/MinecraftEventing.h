#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/RealmsPurchaseFailureReason.h"
#include "mc/client/network/realms/RealmsPurchaseIntent.h"
#include "mc/client/social/IdentitySignInTrigger.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/MultiplayerState.h"
#include "mc/client/social/SignInResult.h"
#include "mc/deps/core/LevelStorageState.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/common/bedrock/StorageMigrationType.h"
#include "mc/deps/core/utility/ValidationStatus.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ActiveDirectoryAction.h"
#include "mc/enums/ClassroomSetting.h"
#include "mc/enums/Difficulty.h"
#include "mc/enums/DiskStatus.h"
#include "mc/enums/EduControlPanelUpdateType.h"
#include "mc/enums/EduShareMethodType.h"
#include "mc/enums/EduShareUriType.h"
#include "mc/enums/FileArchiverOutcome.h"
#include "mc/enums/GameType.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/LastClickedSource.h"
#include "mc/enums/LoadingState.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/OpenCodeMethod.h"
#include "mc/enums/PurchasePath.h"
#include "mc/enums/RawInputType.h"
#include "mc/enums/SettingsScreenMode.h"
#include "mc/enums/SubClientId.h"
#include "mc/enums/TransactionStatus.h"
#include "mc/enums/TransportLayer.h"
#include "mc/enums/UserGeneratedUriSource.h"
#include "mc/enums/connection/DisconnectFailReason.h"
#include "mc/enums/edu/Role.h"
#include "mc/enums/edu_cloud/Operation.h"
#include "mc/enums/identity/EduSignInStage.h"
#include "mc/enums/safety/ChatFloodingAction.h"
#include "mc/events/IConnectionEventing.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/resources/PacketViolationResponse.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"
#include "mc/world/events/ConnectedStorageEventType.h"
#include "mc/world/events/TextProcessingEventOrigin.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class CrashTelemetryProcessor; }
namespace Bedrock { class SessionInfo; }
namespace Bedrock { struct CrashUploadStatus; }
namespace Bedrock { struct DeviceIdContext; }
namespace Bedrock { struct DirectoryEntry; }
namespace Bedrock { struct WorldRecoveryTelemetryEvent; }
namespace Bedrock::Threading { class Mutex; }
namespace Core { class Path; }
namespace Core::Profile { struct FileCounters; }
namespace Json { class Value; }
namespace Legacy { struct WorldConversionReport; }
namespace Realms { struct RealmId; }
namespace Social { class IUserManager; }
namespace Social { class Identity; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct PlayerIDs; }
namespace Social::Events { class AchievementEventing; }
namespace Social::Events { class EventManager; }
namespace Social::Events { class IEventListener; }
namespace Social::Events { class PlayerTelemetry; }
namespace Social::Events { class Property; }
namespace Social::Events { class RealtimeRoute; }
namespace Social::Events { class ScreenFlow; }
namespace Social::Events { struct InboxSummaryData; }
namespace Social::eventData { class PersonaOfferClickedData; }
namespace Social::eventData { class StoreOfferClickedData; }
namespace Webview { struct TelemetryCommonProperties; }
namespace librarySearch { struct TelemetryData; }
namespace mce { class UUID; }
namespace storeSearch { struct TelemetryData; }
// clang-format on

class MinecraftEventing {
public:
    // MinecraftEventing inner types define
    enum class AchievementIds : int {
        ChestFullOfCobblestone          = 0x7,
        DiamondForYou                   = 0xA,
        IronBelly                       = 0x14,
        IronMan                         = 0x15,
        OnARail                         = 0x1D,
        Overkill                        = 0x1E,
        ReturnToSender                  = 0x25,
        SniperDuel                      = 0x26,
        StayinFrosty                    = 0x27,
        TakeInventory                   = 0x28,
        MapRoom                         = 0x32,
        FreightStation                  = 0x34,
        SmeltEverything                 = 0x35,
        TasteOfYourOwnMedicine          = 0x36,
        WhenPigsFly                     = 0x38,
        Inception                       = 0x3A,
        ArtificialSelection             = 0x3C,
        FreeDiver                       = 0x3D,
        SpawnTheWither                  = 0x3E,
        Beaconator                      = 0x3F,
        GreatView                       = 0x40,
        SuperSonic                      = 0x41,
        TheEndAgain                     = 0x42,
        TreasureHunter                  = 0x43,
        ShootingStar                    = 0x44,
        FashionShow                     = 0x45,
        Brilliance                      = 0x46,
        SelfPublishedAuthor             = 0x47,
        AlternativeFuel                 = 0x48,
        SleepWithTheFishes              = 0x49,
        Castaway                        = 0x4A,
        ImAMarineBiologist              = 0x4B,
        SailThe7Seas                    = 0x4C,
        MeGold                          = 0x4D,
        Ahoy                            = 0x4E,
        Atlantis                        = 0x4F,
        OnePickleTwoPickleSeaPickleFour = 0x50,
        DoaBarrelRoll                   = 0x51,
        Moskstraumen                    = 0x52,
        Echolocation                    = 0x53,
        WhereHaveYouBeen                = 0x54,
        TopOfTheWorld                   = 0x55,
        FruitOnTheLoom                  = 0x56,
        SoundTheAlarm                   = 0x57,
        BuyLowSellHigh                  = 0x58,
        Disenchanted                    = 0x59,
        TimeForStew                     = 0x5A,
        BeeOurGuest                     = 0x5B,
        TotalBeeLocation                = 0x5C,
        StickySituation                 = 0x5D,
        CoverMeInDebris                 = 0x5E,
        FloatYourGoat                   = 0x5F,
        Friend                          = 0x60,
        WaxOnWaxOff                     = 0x61,
        StriderRiddenInLavaInOverworld  = 0x62,
        GoatHornAcquired                = 0x63,
        JukeboxUsedInMeadows            = 0x64,
        TradedAtWorldHeight             = 0x65,
        SurvivedFallFromWorldHeight     = 0x66,
        SneakCloseToSculkSensor         = 0x67,
        ItSpreads                       = 0x68,
        BirthdaySong                    = 0x69,
        WithOurPowersCombined           = 0x6A,
    };

    enum class AcquisitionMethod : int {
        Unknown             = -1,
        None                = 0x0,
        PickedUp            = 0x1,
        Crafted             = 0x2,
        TakenFromChest      = 0x3,
        TakenFromEnderchest = 0x4,
        Bought              = 0x5,
        Anvil               = 0x6,
        Smelted             = 0x7,
        Brewed              = 0x8,
        Bottle              = 0x9,
        Trading             = 0xA,
        Fishing             = 0xB,
    };

    enum class BlockPlacementMethod : int {
        Entity  = 0x0,
        Command = 0x1,
    };

    enum class ChangeType : int {
        Unknown = 0x0,
        Added   = 0x1,
        Removed = 0x2,
        Updated = 0x3,
    };

    enum class InteractionType : int {
        Breeding   = 0x1,
        Taming     = 0x2,
        Curing     = 0x3,
        Crafted    = 0x4,
        Shearing   = 0x5,
        Milking    = 0x6,
        Trading    = 0x7,
        Feeding    = 0x8,
        Igniting   = 0x9,
        Coloring   = 0xA,
        Naming     = 0xB,
        Leashing   = 0xC,
        Unleashing = 0xD,
        PetSleep   = 0xE,
        Trusting   = 0xF,
        Commanding = 0x10,
    };

    enum class POIBlockInteractionType : int {
        None                = 0x0,
        Extend              = 0x1,
        Clone               = 0x2,
        Lock                = 0x3,
        Create              = 0x4,
        CreateLocator       = 0x5,
        Rename              = 0x6,
        ItemPlaced          = 0x7,
        ItemRemoved         = 0x8,
        Cooking             = 0x9,
        Dousing             = 0xA,
        Lighting            = 0xB,
        Haystack            = 0xC,
        Filled              = 0xD,
        Emptied             = 0xE,
        AddDye              = 0xF,
        DyeItem             = 0x10,
        ClearItem           = 0x11,
        EnchantArrow        = 0x12,
        CompostItemPlaced   = 0x13,
        RecoveredBonemeal   = 0x14,
        BookPlaced          = 0x15,
        BookOpened          = 0x16,
        Disenchant          = 0x17,
        Repair              = 0x18,
        DisenchantAndRepair = 0x19,
    };

    enum class TeleportationCause : int {
        Unknown     = 0x0,
        Projectile  = 0x1,
        ChorusFruit = 0x2,
        Command     = 0x3,
        Behavior    = 0x4,
        Count       = 0x5,
    };

    enum class UseMethod : int {
        Unknown    = -1,
        EquipArmor = 0x0,
        Eat        = 0x1,
        Attack     = 0x2,
        Consume    = 0x3,
        Throw      = 0x4,
        Shoot      = 0x5,
        Place      = 0x6,
        FillBottle = 0x7,
        FillBucket = 0x8,
        PourBucket = 0x9,
        UseTool    = 0xA,
    };

    enum class PoiEventBlockType : int {
        BlastFurnace     = 0x0,
        BrewingStand     = 0x1,
        CartographyTable = 0x2,
        Grindstone       = 0x3,
        Loom             = 0x4,
        Smoker           = 0x5,
        Stonecutter      = 0x6,
        Barrel           = 0x7,
        Bell             = 0x8,
        Campfire         = 0x9,
        Cauldron         = 0xA,
        Composter        = 0xB,
        Lectern          = 0xC,
    };

    enum class ItemInteractMethod : int {
        Use   = 0x0,
        Place = 0x1,
    };

    enum class AccountType : int {
        Xbl   = 0x1,
        Guest = 0x2,
        Other = 0x3,
    };

public:
    // prevent constructor by default
    MinecraftEventing& operator=(MinecraftEventing const&);
    MinecraftEventing(MinecraftEventing const&);
    MinecraftEventing();

public:
    // NOLINTBEGIN
    MCVAPI void addCrashTelemetryToBatch(std::shared_ptr<class Bedrock::SessionInfo> session);

    MCVAPI void addListener(std::unique_ptr<class Social::Events::IEventListener> listener);

    MCVAPI void
    fileEventCloudWorldPullFailed(std::string const& reason, std::string const& worldID, bool localLevelDatUsed);

    MCVAPI void
    fireBannedSkinVerificationEvent(uint const&, std::string const&, std::string const&, bool, int, std::string const&);

    MCVAPI void
    fireCDNDownloadEvent(std::string const&, std::string const&, std::string const&, ::IMinecraftEventing::CDNDownloadResult const&, ::IMinecraftEventing::CDNDownloadEventOrigin const&, float const&);

    MCVAPI void fireChatUsedEvent(uint chatLength, bool isSlashCommand);

    MCVAPI void fireChunkRecyclerTelemetryData(struct ChunkRecyclerTelemetryOutput const& output);

    MCVAPI void fireClassroomSettingUpdated(::ClassroomSetting classroomSetting, ::SettingsScreenMode settingMode);

    MCVAPI void fireClubsEngagementEvent(
        ::IMinecraftEventing::ClubsEngagementAction     action,
        ::IMinecraftEventing::ClubsEngagementTargetType engagementTargetType,
        char const*                                     target,
        struct Realms::RealmId                          realmId,
        std::string const&                              clubId
    );

    MCVAPI void fireClubsOpenFeedScreenEvent(
        ::IMinecraftEventing::ClubsFeedScreenSource source,
        struct Realms::RealmId                      realmId,
        std::string const&                          clubId,
        int                                         unreadPosts
    );

    MCVAPI void fireCodeCommandButtonPressed();

    MCVAPI void fireCommandParseTableTelemetry(
        bool                                                                  isServer,
        std::vector<struct IMinecraftEventing::CommandParseTableEntry> const& parseTableDetails
    ) const;

    MCVAPI void fireCourseButtonPressed(std::string const& courseTitle, std::string const& courseId);

    MCVAPI void fireCurrentInputUpdated(Bedrock::NotNullNonOwnerPtr<class IClientInstance> const& client);

    MCVAPI void fireDBStorageError(struct LevelStorageEventingContext const& context, std::string const& errorType);

    MCVAPI void fireDayOneExperienceStateChanged(
        ::IMinecraftEventing::DayOneExperienceState newState,
        std::optional<uint>                         importedWorldIndex,
        std::optional<uint64>                       importedWorldTimestamp
    );

    MCVAPI void fireDelayedEventReportOfflineAction(std::string const& offlineAction);

    MCVAPI void fireEduServiceRequestFailed(
        std::string const&                                               serviceName,
        std::string const&                                               requestName,
        std::string const&                                               error,
        class buffer_span<std::pair<std::string_view, std::string_view>> details
    ) const;

    MCVAPI void fireEventAchievementReceived(
        std::string const& title,
        std::string const& description,
        std::string const& achievementId
    );

    MCVAPI void fireEventActorMovementCorrectionDivergence(::ActorType, std::vector<float> const&);

    MCVAPI void fireEventActorValueValidationFailed(std::string const& invalidValue, char const* caller);

    MCVAPI void fireEventAddedFriend(std::string const&, ::IMinecraftEventing::AddedFriendLocation, bool);

    MCVAPI void fireEventAndroidHelpRequest();

    MCVAPI void fireEventAndroidScopedStorageDebug(uint64 numLevels);

    MCVAPI void fireEventAppInitFileOpenStats(
        struct Core::Profile::FileCounters const& openForRead,
        struct Core::Profile::FileCounters const& openForWrite
    );

    MCVAPI void fireEventAppPaused();

    MCVAPI void fireEventAppSurfaceCreated();

    MCVAPI void fireEventAppSurfaceDestroyed();

    MCVAPI void fireEventAppUnpaused();

    MCVAPI void fireEventArmorStandItemEquipped(class ArmorStand const& armorStand, class ItemDescriptor const& item);

    MCVAPI void fireEventAssertFailed(std::string const& assertBucket, std::string const& message);

    MCVAPI void fireEventBlockPlacedByCommand(class Block const& placedBlock, int numberOfBlocksPlaced);

    MCVAPI void fireEventBlockTypeRegistryChecksumMismatch(
        std::string const& reason,
        uint64 const&      serverBlockChecksum,
        uint64 const&      clientBlockChecksum,
        std::string const& serverVersion
    );

    MCVAPI void fireEventBlockUser(std::string const&, bool, bool);

    MCVAPI void fireEventBoardTextUpdated(class ChalkboardBlockActor& board);

    MCVAPI void fireEventBundleSubOfferClicked(
        int                offerIndex,
        int                bundleSubOfferCount,
        std::string const& telemetryId,
        std::string const& productId,
        bool               isOnSale,
        std::string const& timeRemainingOnSale
    );

    MCVAPI void fireEventButtonPressed(
        std::string const&                                  buttonName,
        std::unordered_map<std::string, std::string> const& details
    ) const;

    MCVAPI void fireEventCameraUsed(bool isSelfie);

    MCVAPI void fireEventChatFloodingActionTaken(std::string const&, ::Safety::ChatFloodingAction, std::string const&);

    MCVAPI void fireEventChatSettingsUpdated(
        class Player const*                                player,
        std::vector<class Social::Events::Property> const& properties
    ) const;

    MCVAPI void fireEventChunkChanged(class LevelChunk& chunk);

    MCVAPI void fireEventChunkLoaded(class LevelChunk& chunk);

    MCVAPI void fireEventChunkUnloaded(class LevelChunk& chunk);

    MCVAPI void fireEventClientLeftGameDueToUnrecoverableError(std::string const& reason, bool isServer);

    MCVAPI void fireEventCloudMyWorldsSummary(int, int, int, int, int);

    MCVAPI void
    fireEventCloudOperationEndedEdu(::EduCloud::Operation, std::string const&, std::chrono::milliseconds, uint, uint64, std::optional<std::string> const&, std::optional<std::string> const&, std::optional<std::string> const&, std::optional<std::string> const&);

    MCVAPI void
    fireEventCloudOperationStartedEdu(::EduCloud::Operation, std::string const&, uint64, std::optional<std::string> const&);

    MCVAPI void fireEventCodeBuilderClosed() const;

    MCVAPI void fireEventCodeBuilderLog(
        struct Webview::TelemetryCommonProperties const& properties,
        std::string const&                               message,
        std::string&                                     level
    ) const;

    MCVAPI void fireEventCodeBuilderRuntimeAction(std::string const& action) const;

    MCVAPI void fireEventCodeBuilderScoreChanged(std::string const& objective, int score) const;

    MCVAPI void fireEventCompoundCreatorCreated(int compoundId, int count);

    MCVAPI void fireEventConnectedStorageError(char const* message, std::string const& levelId, int64 quotaRemaining);

    MCVAPI void fireEventConnectedStorageResult(
        ::ConnectedStorageEventType eventType,
        bool                        succeeded,
        uint                        durationMs,
        std::optional<uint>         chunksSent,
        std::string const&          errorMessage,
        std::string const&          levelId,
        int64                       quotaRemaining,
        std::optional<uint>         filesToAddCount,
        std::optional<uint>         filesToDeleteCount,
        std::optional<uint>         HACK_oldFilesToDeleteCount
    );

    MCVAPI void fireEventConnectionFailed(::IConnectionEventing::ConnectionFailureReason failure);

    MCVAPI void fireEventContentLogsInWorldSession(std::string const& logArea, uint errorCount, uint warningCount);

    MCVAPI void fireEventContentShared(
        std::string const&                     productId,
        std::string const&                     url,
        ::IMinecraftEventing::ShareMode const& mode
    );

    MCVAPI void
    fireEventControlRemappedByPlayer(std::string const& actionName, ::RawInputType inputType, int keyCode) const;

    MCVAPI void fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType updateType, double elapsedTimeSec) const;

    MCVAPI void fireEventCopyWorldEducationEnabled();

    MCVAPI void fireEventCrashSystemFailedToInit();

    MCVAPI void fireEventDedicatedServerDiscoveryResponse(int, int);

    MCVAPI void
    fireEventDefaultCastSelected(int previewIndex, class mce::UUID appearanceId, std::string const& appearanceName);

    MCVAPI void fireEventDefaultGameTypeChanged(::GameType oldGameType, ::GameType newGameType);

    MCVAPI void fireEventDevSlashCommandExecuted(std::string const& commandName, std::string const& command);

    MCVAPI void fireEventDeviceAccountFailure(
        ::IMinecraftEventing::SignInStage               stage,
        ::IMinecraftEventing::DeviceAccountFailurePhase phase,
        uint                                            resultStatus,
        std::string const&                              accountID
    );

    MCVAPI void fireEventDeviceAccountSuccess(bool isNewAccount, std::string const& accountID);

    MCVAPI void fireEventDeviceIdManagerFailOnIdentityGained();

    MCVAPI void fireEventDeviceLost();

    MCVAPI void fireEventDifficultySet(::Difficulty oldDifficulty, ::Difficulty newDifficulty);

    MCVAPI void fireEventDiskStatus(::DiskStatus status, ::Core::LevelStorageState errorCode, uint64 freeSpace);

    MCVAPI void fireEventDlcStorageFull(std::string const&, uint64, uint64, uint64, uint64);

    MCVAPI void fireEventEduContentVerificationFailed() const;

    MCVAPI void fireEventEduDemoConversion(::edu::Role role, ::LastClickedSource lastClickedSource);

    MCVAPI void fireEventEduResources() const;

    MCVAPI void fireEventEduServiceStatus(
        std::string const&                                               serviceName,
        std::string const&                                               requestName,
        int                                                              durationMS,
        class buffer_span<std::pair<std::string_view, std::string_view>> details
    ) const;

    MCVAPI void fireEventEduiOSPurchaseTransaction(::TransactionStatus const& status) const;

    MCVAPI void fireEventElementConstructorUsed(
        int                                             atomicNumber,
        int                                             count,
        ::IMinecraftEventing::ElementConstructorUseType useType
    );

    MCVAPI void fireEventEmptyLibraryCategoryError(std::string const& categoryTitle) const;

    MCVAPI void fireEventEncyclopediaTopicChanged(std::string const&, ::InputMode);

    MCVAPI void fireEventEntitlementCacheLoadTimeout();

    MCVAPI void
    fireEventEntitlementListInfo(std::vector<class ContentIdentity>& entitlementContentIds, bool isLegacyList);

    MCVAPI void fireEventEntitySpawned(class Player* player, int mobType, uint spawnMethod);

    MCVAPI void fireEventFeedbackSubmitted(std::string const& productId, bool safetyCheckSuccessful, bool isValidText);

    MCVAPI void fireEventGameRulesUpdated(bool oldValue, bool newValue, std::string const& gameRuleName);

    MCVAPI void fireEventGameRulesUpdated(float oldValue, float newValue, std::string const& gameRuleName);

    MCVAPI void fireEventGameRulesUpdated(int oldValue, int newValue, std::string const& gameRuleName);

    MCVAPI void fireEventGameTip(int, int, int, ::InputMode);

    MCVAPI void fireEventGoogleAccountHoldWarning(bool navigatedToSubscription);

    MCVAPI void fireEventHardwareInfo();

    MCVAPI void fireEventHowToPlayTopicChanged(std::string const& topicName, ::InputMode inputMode);

    MCVAPI void fireEventHttpClientError(std::string const& error);

    MCVAPI void fireEventIAPPurchaseAttempt(
        std::string const& correlationId,
        std::string const& storeId,
        class Offer&       offer,
        ::PurchasePath     path
    );

    MCVAPI void fireEventIAPPurchaseResolved(
        std::string const&                   correlationId,
        std::string const&                   storeId,
        class Offer&                         offer,
        ::IMinecraftEventing::PurchaseResult purchaseRes,
        ::PurchasePath                       path
    );

    MCVAPI void fireEventIAPRedeemAttempt(
        std::string const& correlationId,
        std::string const& storeId,
        std::string const& productId,
        ::PurchasePath     path
    );

    MCVAPI void fireEventIAPRedeemResolved(
        std::string const&                   correlationId,
        std::string const&                   storeId,
        std::string const&                   productId,
        ::IMinecraftEventing::PurchaseResult purchaseRes,
        ::PurchasePath                       path
    );

    MCVAPI void fireEventImGuiScreenChanged(
        std::string const&                                  screenName,
        std::unordered_map<std::string, std::string> const& additionalProperties
    );

    MCVAPI void fireEventInboxSummary(struct Social::Events::InboxSummaryData const&);

    MCVAPI void fireEventJoinByCode(std::string const&);

    MCVAPI void fireEventJoinCanceled(::LoadingState currentState);

    MCVAPI void fireEventLabTableCreated(int reactionId, int productId, int productAux);

    MCVAPI void fireEventLevelChunkPerformanceData(bool isClientSide);

    MCVAPI void fireEventLevelDatLoadFailed(std::string const& reason, std::string const& worldID, bool isFatal);

    MCVAPI void fireEventLevelDataOverride(std::string_view valueName) const;

    MCVAPI void fireEventLevelDestruct();

    MCVAPI void fireEventLibrarySearch(struct librarySearch::TelemetryData const& telemetryData) const;

    MCVAPI void fireEventLibrarySearchItemSelected(
        int                sessionId,
        int                correlationId,
        std::string const& productId,
        int                row,
        int                column
    ) const;

    MCVAPI void fireEventLicenseCheck(bool isLicensed, struct ExtraLicenseData& data);

    MCVAPI void fireEventLockedItemGiven();

    MCVAPI void
    fireEventMessageReceived(std::string const&, std::string const&, std::string const&, std::string const&, bool);

    MCVAPI void fireEventMessageServiceImpression(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        bool
    );

    MCVAPI void fireEventModalShown(std::string const&, std::unordered_map<std::string, std::string> const&) const;

    MCVAPI void
    fireEventMultiplayerClientConnectionStateChanged(std::string const&, uint, uint, uint, std::string const&);

    MCVAPI void fireEventMultiplayerSessionUpdate(class Bedrock::NonOwnerPointer<class MultiPlayerLevel>);

    MCVAPI void fireEventMuteUser(std::string const&, bool, bool);

    MCVAPI void fireEventNewContentCheckCompleted(std::string const& newContentPrefix, bool hasNewStoreContent);

    MCVAPI void fireEventNpcPropertiesUpdated(class Actor& npcOwner, bool isEditorWorldbuilder);

    MCVAPI void
    fireEventOfferRated(std::string const& productId, int rating, int previous_rating, int count, double timeElapsed);

    MCVAPI void fireEventOnAppResume(std::vector<struct SerialWorkListLogEntry> const&);

    MCVAPI void fireEventOnAppStart(std::vector<struct SerialWorkListLogEntry> const&);

    MCVAPI void fireEventOnAppSuspend(std::vector<struct SerialWorkListLogEntry> const&, bool);

    MCVAPI void fireEventOnClientDisconnect(::SubClientId, bool, ::Connection::DisconnectFailReason);

    MCVAPI void fireEventOnDeviceLost(std::vector<struct SerialWorkListLogEntry> const&);

    MCVAPI void
    fireEventOnServerDisconnect(::Connection::DisconnectFailReason, std::string const&, ::SubClientId, std::string const&, uint64, std::string const&);

    MCVAPI void fireEventOnSuccessfulClientLogin(class MultiPlayerLevel const*);

    MCVAPI void fireEventOnboardingWorldCreationUsage(bool, bool, bool);

    MCVAPI void fireEventOneDSPlayerReportPayload(std::string const&, std::string const&);

    MCVAPI void fireEventOptionsChanged(std::string const&, std::unordered_map<std::string, int> const&) const;

    MCVAPI void fireEventOptionsUpdated(class Options& options, ::InputMode inputMode, bool onStartup);

    MCVAPI void fireEventOreUIError(uint const& userId, std::string const& errorType);

    MCVAPI void fireEventPackHashChanged(class PackManifest const& manifest);

    MCVAPI void fireEventPackImportTimeout(std::string const& productId);

    MCVAPI void fireEventPackPlayed(class PackInstance const& packInstance, uint priority);

    MCVAPI void fireEventPackUpgradeAttempt(class PackManifest const& manifest, class PackReport const& report);

    MCVAPI void fireEventPacketViolationDetected(
        uint64,
        std::string,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        class NetworkIdentifier const&,
        uint,
        ::SubClientId,
        ::SubClientId,
        uint
    );

    MCVAPI void fireEventPerformanceContext(class PerfContextTrackerReport const& perfContextReport);

    MCVAPI void
    fireEventPerformanceMetrics(struct ProfilerLiteTelemetry const& profileTelemetry, bool rayTracingEnabled);

    MCVAPI void fireEventPersonaAvatarUpdated(
        std::string const&              personaProfile,
        std::vector<std::string> const& newAppearancePieceIds,
        std::vector<bool> const&        newPieces,
        std::vector<bool> const&        tintedPieces,
        bool                            isNewPersona,
        bool                            isBeingDeleted,
        std::string const&              bodySize,
        std::string const&              armSize,
        std::string const&              classicSkinId,
        bool                            usesClassicSkin,
        std::vector<std::string> const& emotesPieceIds,
        std::vector<std::string> const& emoteSlotNumbers
    );

    MCVAPI void fireEventPersonaAvatarsListed(std::vector<std::string> const& profileTypesUsed);

    MCVAPI void fireEventPersonaCategoryInformation(std::string const& categoryInformation);

    MCVAPI void fireEventPersonaCreationFailed(
        std::string const& errorName,
        std::string const& pieceId,
        bool               missingTop,
        bool               missingBottom,
        std::string const& repositoryPieceType,
        std::string const& appearancePieceType
    );

    MCVAPI void fireEventPersonaEmotePlayed(std::string const& emoteProductId, bool isEmoteEndedEarly, int emoteSlotId);

    MCVAPI void fireEventPersonaGeneralError(std::string const& personaErrorName, uint duplicateErrorsFired);

    MCVAPI void
    fireEventPersonaInitalizationEvent(uint secondsToCompletion, std::string const& status, std::string const& user);

    MCVAPI void fireEventPersonaItemPreviewed(
        std::string const&                  personaProfile,
        std::string const&                  itemOfferId,
        std::string const&                  productId,
        uint                                row,
        uint                                column,
        ::IMinecraftEventing::PromotionType promotionType,
        bool                                isOwned,
        std::string const&                  creatorId,
        std::string const&                  creatorName,
        double                              secondsToLoadContent,
        ::IMinecraftEventing::StoreType     storeType
    );

    MCVAPI void fireEventPersonaLoadingPieces(uint piecesLoaded, double timeToLoadInSeconds);

    MCVAPI void fireEventPersonaOfferClicked(class Social::eventData::PersonaOfferClickedData const&);

    MCVAPI void fireEventPersonaSkinChanged(
        std::string const& personaProfile,
        std::string const& classicSkinId,
        bool               isClassicSkinUsed
    );

    MCVAPI void fireEventPersonaStillLoading(
        bool                            isSignedIn,
        bool                            selectedSkinInitialized,
        bool                            isStillSyncingWithService,
        bool                            isRepoStillBuildingAppearances,
        bool                            isPendingSkinStillLoading,
        bool                            isRefreshingEntitlements,
        bool                            isUserUpdateInProgress,
        bool                            isSelectedSkinLoaded,
        std::vector<std::string> const& failingPersonaProfiles,
        int                             unknownPersonasCount,
        double                          timeElapsed
    );

    MCVAPI void fireEventPersonaUserLoadedActive(
        std::string const& personaProfileName,
        std::string const& classicSkinId,
        bool               personaUsesClassicSkin
    );

    MCVAPI void
    fireEventPlayIntegrityCheck(std::string const&, std::string const&, std::string const&, std::string const&);

    MCVAPI void fireEventPlayerActionComparisonFailed(std::string const&);

    MCVAPI void fireEventPlayerAttemptingExploit(class Player* player, ::IMinecraftEventing::ExploitType exploitType);

    MCVAPI void fireEventPlayerBanned(std::string const& bannedPlayer);

    MCVAPI void fireEventPlayerBounced(class Player* player, class Block const& block, int bounceHeight);

    MCVAPI void fireEventPlayerDamaged(class Player* player, ::ActorDamageCause damageCause);

    MCVAPI void fireEventPlayerJoinWorld(
        uint const&,
        ::SubClientId,
        bool,
        std::optional<bool>,
        ::IConnectionEventing::PlayerJoinWorldAttemptState,
        int,
        ::Connection::DisconnectFailReason,
        ::TransportLayer,
        ::IMinecraftEventing::NetworkType,
        ::Social::MultiplayerState,
        bool,
        ::Social::MultiplayerServiceIdentifier
    );

    MCVAPI void fireEventPlayerKicked(std::string const& sessionType, std::string const& kickedPlayer);

    MCVAPI void fireEventPlayerMessageChat(std::string const& fromName, std::string const& message);

    MCVAPI void fireEventPlayerMessageMe(std::string const& fromName, std::string const& message);

    MCVAPI void fireEventPlayerMessageSay(std::string const& fromName, std::string const& message);

    MCVAPI void
    fireEventPlayerMessageTell(std::string const& fromName, std::string const& toName, std::string const& message);

    MCVAPI void
    fireEventPlayerMessageTitle(std::string const& fromName, std::string const& toName, std::string const& message);

    MCVAPI void fireEventPlayerReportSent(bool, std::string const&, std::string const&, std::string const&);

    MCVAPI void fireEventPlayerTravelled(class Player* player, float metersTravelledSinceLastEvent);

    MCVAPI void fireEventPopupClosed(std::string const& popupName) const;

    MCVAPI void fireEventPopupFiredEdu(
        std::string const&      mutsUserId,
        std::string const&      dialogType,
        std::string const&      experienceId,
        std::string const&      title,
        ::ActiveDirectoryAction postAction
    );

    MCVAPI void fireEventPortfolioExported(int imageCount, int captionedCount);

    MCVAPI void fireEventProfanityFilter(bool, bool, bool);

    MCVAPI void fireEventProgressionsSet(std::vector<std::string> const& progressions);

    MCVAPI void fireEventPromotionNotificationClicked(std::string const& productId);

    MCVAPI void fireEventPurchaseAttempt(
        std::string const&              correlationId,
        std::string const&              productId,
        std::string const&              price,
        ::IMinecraftEventing::StoreType storeType,
        ::PurchasePath                  path
    );

    MCVAPI void fireEventPurchaseFailureDetails(
        int                httpCode,
        std::string const& errorMessage,
        std::string const& productId,
        std::string const& transactionId
    );

    MCVAPI void fireEventPurchaseGameAttempt(
        std::string const& storeId,
        std::string const& activeTab,
        std::string const& productId
    );

    MCVAPI void fireEventPurchaseResolved(
        std::string const&                   correlationId,
        std::string const&                   productId,
        std::string const&                   price,
        ::IMinecraftEventing::StoreType      storeType,
        ::IMinecraftEventing::PurchaseResult purchaseRes,
        ::PurchasePath                       path
    );

    MCVAPI void fireEventPushNotificationOpened(std::string const& threadId, std::string const& deepLink);

    MCVAPI void fireEventPushNotificationPermission(bool permission, std::string const& deviceId);

    MCVAPI void fireEventPushNotificationReceived(class PushNotificationMessage const& msg);

    MCVAPI void fireEventQueryPurchasesResult(std::string const&, int, bool);

    MCVAPI void fireEventRealmDownload(
        std::string const& correlationId,
        std::string const& downloadStage,
        int                errorCode,
        int                realmId,
        int                fileSizeKB
    );

    MCVAPI void fireEventRealmMemberlistCleared(struct Realms::RealmId const& worldId, int const& numberOfUsersRemoved);

    MCVAPI void fireEventRealmShared(
        std::string const&                     url,
        ::IMinecraftEventing::ShareMode const& mode,
        struct Realms::RealmId const&          worldId
    );

    MCVAPI void fireEventRealmUpload(
        std::string const& correlationId,
        std::string const& uploadStage,
        int                errorCode,
        int                realmId,
        int                fileSizeKB,
        bool               isPack
    );

    MCVAPI void fireEventRealmUrlGenerated(std::string const& url, struct Realms::RealmId const& worldId);

    MCVAPI void fireEventRealmsStoriesOptIn(std::string const&, std::string const&, std::string const&, bool);

    MCVAPI void fireEventRealmsSubscriptionPurchaseFailed(
        struct ProductSku const&      productSku,
        ::RealmsPurchaseIntent        intent,
        ::RealmsPurchaseFailureReason reason
    );

    MCVAPI void
    fireEventRealmsSubscriptionPurchaseStarted(struct ProductSku const& productSku, ::RealmsPurchaseIntent intent);

    MCVAPI void
    fireEventRealmsSubscriptionPurchaseSucceeded(struct ProductSku const& productSku, ::RealmsPurchaseIntent intent);

    MCVAPI void fireEventReducerBlockEntered(class ItemDescriptor const& item);

    MCVAPI void fireEventRenderingSizeChanged();

    MCVAPI void fireEventRespawn(class Player& player, int dimID);

    MCVAPI void fireEventRespondedToAcceptContent(struct PacksInfoData const& data, bool accepted);

    MCVAPI void fireEventSafetyHTTPRequest(std::string const&, std::string const&, int);

    MCVAPI void fireEventSaveDataExpansion(uint64, uint64, uint64);

    MCVAPI void fireEventScreenChanged(
        uint const&                                         userId,
        std::string const&                                  screenName,
        std::unordered_map<std::string, std::string> const& additionalProperties
    );

    MCVAPI void fireEventScreenLoaded(
        uint const&        userId,
        std::string const& screenName,
        double             routeChangedTimestamp,
        double             contentfulPaintTimestamp,
        double             meaningfulPaintTimestamp,
        double             longestFrameTimeMs
    );

    MCVAPI void fireEventScriptDebuggerConnect(bool client);

    MCVAPI void fireEventScriptDebuggerListen(bool client);

    MCVAPI void fireEventScriptPluginDiscovery(class ScriptPluginResult const& pluginResult, bool client);

    MCVAPI void fireEventScriptPluginRun(
        class ScriptPluginResult const& pluginResult,
        std::chrono::microseconds       runDuration,
        bool                            client
    );

    MCVAPI void fireEventSearchCatalogRequest(class SearchRequestTelemetry const& telem);

    MCVAPI void fireEventSearchItemSelected(
        int                correlationId,
        int                sessionId,
        std::string const& productId,
        int                row,
        int                column,
        int                currentPage
    );

    MCVAPI void fireEventServerDrivenLayoutImagesLoaded(
        class RequestTelemetry& telem,
        std::string             pageID,
        int                     imageCount,
        uint64                  totalImagesSize,
        int                     successCount,
        int                     failCount,
        int                     cachedCount,
        std::vector<ushort>&    responseCodes
    );

    MCVAPI void fireEventServerDrivenLayoutPageLoaded(
        class RequestTelemetry& telem,
        std::string             pageID,
        int                     requestSize,
        int                     responseSize,
        int                     rowCount,
        int                     itemCount,
        int                     imageCount
    );

    MCVAPI void fireEventServerPlayerJoinedGame(class NetworkIdentifier const&, ::SubClientId, std::string const&);

    MCVAPI void fireEventServerRespawnSearchTime(class Player& player, class PlayerRespawnTelemetryData const& data);

    MCVAPI void fireEventServerShutdownDueToError(std::string const& reason);

    MCVAPI void fireEventSetValidForAchievements(class Player* player, bool currentlyValidForAchievements);

    MCVAPI void fireEventSidebarNavigation(
        uint const&        userId,
        std::string const& layoutType,
        std::string const& telemetryId,
        int                depthLevel,
        bool               isSelected,
        bool               areChildrenVisible,
        bool               hasChildren
    );

    MCVAPI void fireEventSidebarVerboseToggled(
        uint const&        userId,
        std::string const& layoutType,
        std::string const& verboseNavigationType,
        bool               verboseState
    );

    MCVAPI void fireEventSignInEdu(
        std::string const&                                      mutsUserId,
        ::edu::Role                                             role,
        ::Identity::EduSignInStage                              stage,
        std::string const&                                      tenantType,
        std::string const&                                      error,
        std::vector<std::pair<std::string, std::string>> const& details
    );

    MCVAPI void
    fireEventSignInToIdentity(::IMinecraftEventing::SignInAccountType, ::Social::IdentitySignInTrigger, std::string const&, bool, ::IMinecraftEventing::SignInStage, ::Social::SignInResult, int, struct Social::PlayerIDs, std::string const&);

    MCVAPI void
    fireEventSignOutEdu(std::string const&, ::edu::Role, std::string const&, std::string const&, std::string const&);

    MCVAPI void fireEventSignOutOfIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        std::string const&                      accountId,
        std::string const&                      errorCode
    );

    MCVAPI void
    fireEventSignalServiceConnect(::IConnectionEventing::SignalServiceConnectState, bool, int, uint64, std::string const&);

    MCVAPI void fireEventSplitScreenUpdated(class IClientInstance const& client);

    MCVAPI void fireEventStackLoaded(struct StackStats const& stats);

    MCVAPI void fireEventStartClient(std::string const& ipAddress);

    MCVAPI void fireEventStartWorld(
        ::IMinecraftEventing::NetworkType      networkType,
        std::string const&                     ipAddress,
        ::Social::MultiplayerServiceIdentifier friendWorldType
    );

    MCVAPI void
    fireEventStartupPerformance(std::vector<struct SerialWorkListLogEntry> const&, std::vector<struct SerialWorkListLogEntry> const&, std::vector<struct SerialWorkListLogEntry> const&);

    MCVAPI void fireEventStorage(int state, std::string const& extra);

    MCVAPI void fireEventStorageAreaFull(
        std::string const&                                 areaPath,
        std::vector<struct Bedrock::DirectoryEntry> const& diskSizeData
    );

    MCVAPI void fireEventStorageReport(std::string const& report);

    MCVAPI void fireEventStoreDiscoveryRequestResponse(int status, int retryAttempt);

    MCVAPI void fireEventStoreErrorPage(std::string const& errorCode, std::string const& pageId);

    MCVAPI void fireEventStoreLocalizationBinaryFetchResponse(int status, uint currentFetchAttempt);

    MCVAPI void fireEventStoreOfferClicked(class Social::eventData::StoreOfferClickedData const&);

    MCVAPI void fireEventStoreOfferClicked(std::string, std::string const&);

    MCVAPI void fireEventStorePlayFabRequestResponse(ushort status);

    MCVAPI void fireEventStorePromotionNotification(std::string const& productId);

    MCVAPI void fireEventStoreSearch(struct storeSearch::TelemetryData const& telemetryData);

    MCVAPI void fireEventStoreSessionResponse(std::string const& responseType, int status, int retryCount);

    MCVAPI void fireEventStructureExport(
        struct glTFExportData const&        exportData,
        ::IMinecraftEventing::ExportOutcome outcome,
        ::IMinecraftEventing::ExportStage   stage
    ) const;

    MCVAPI void
    fireEventSwitchAccountEdu(std::string const& mutsUserId, ::edu::Role role, std::string const& tenantType);

    MCVAPI void fireEventTagButtonPressed(std::string const& tag, bool showMore) const;

    MCVAPI void fireEventTextProcessorShadowban(std::string const&, std::string const&, uint, uint);

    MCVAPI void fireEventTextProcessorStartupFailed(std::string const&, int, int);

    MCVAPI void fireEventTrackDeeplinks(std::string const&, std::string const&);

    MCVAPI void fireEventTreatmentPackApplied(class PackManifest const& manifest);

    MCVAPI void fireEventTreatmentPackDownloadFailed(
        std::string productId,
        std::string packId,
        std::string versionNumber,
        std::string requiredTreatmentTag
    );

    MCVAPI void fireEventTreatmentPackDownloaded(
        std::string productId,
        std::string packId,
        std::string versionNumber,
        std::string requiredTreatmentTag
    );

    MCVAPI void fireEventTreatmentPackRemoved(std::string packId);

    MCVAPI void fireEventTreatmentsCleared();

    MCVAPI void fireEventTreatmentsSet(std::vector<std::string> const&, std::string const&);

    MCVAPI void fireEventTrialDeviceIdCorrelation(
        int64              myTime,
        std::string const& theirId,
        int64              theirTime,
        std::string const& theirLastSessionId
    );

    MCVAPI void fireEventTrialStatusFailed(int);

    MCVAPI void fireEventUgcAcquisitionStateChanged(
        std::string const&,
        uint64,
        double,
        bool,
        int,
        bool,
        int,
        std::string const&,
        std::string const&,
        int
    );

    MCVAPI void fireEventUnfulfilledPurchaseFound(struct PlatformOfferPurchaseDetails&);

    MCVAPI void fireEventUnknownBlockReceived(struct NewBlockID const& blockId, ushort data);

    MCVAPI void fireEventUserListUpdated(
        std::string const& productId,
        std::string const& listId,
        std::string const& operation,
        bool               success
    );

    MCVAPI void fireEventUwpToGdkMigrationComplete(
        struct Bedrock::DeviceIdContext const& deviceIdContext,
        std::string const&                     gdkDeviceId
    );

    MCVAPI void fireEventVRModeChanged(bool isVRModeEnabled);

    MCVAPI void fireEventVehiclePositionComparisonFailed(class Vec3 const&, class Vec3 const&);

    MCVAPI void fireEventVideoPlayed(std::string const& productId, std::string const& videoUrl);

    MCVAPI void
    fireEventWebviewDownload(std::string const& downloadState, struct WebviewDownloadInfo const& downloadInfo) const;

    MCVAPI void fireEventWorldCorruptionCausedWorldShutdown(
        struct LevelStorageEventingContext const& context,
        std::string const&                        reason,
        std::optional<bool>                       isOutOfDiskSpace
    );

    MCVAPI void fireEventWorldExported(int64 worldSeed, uint64 worldSize);

    MCVAPI void
    fireEventWorldFilesListed(uint64 numLevels, uint64 totalSizeMB, uint64 largestLevelMB, uint64 smallestLevelMB);

    MCVAPI void
    fireEventWorldGenerated(std::string const& levelId, class LevelSettings const& levelSettings, bool fromTemplate);

    MCVAPI void fireEventWorldHistoryPackSourceMissingDuringUpgrade(
        std::string const& worldPath,
        std::string const& levelId,
        std::string const& deletionCandidate
    );

    MCVAPI void fireEventWorldImported(int64 worldSeed, uint64 worldSize);

    MCVAPI void fireEventWorldImportedResult(::FileArchiverOutcome);

    MCVAPI void fireEventWorldLoaded(
        class Player*      player,
        std::string const& personaSlot,
        std::string const& classicSkinId,
        bool               usingClassicSkin
    );

    MCVAPI void fireEventWorldLoadedClassroomCustomization(
        ::IMinecraftEventing::WorldClassroomCustomization                customization,
        class buffer_span<std::pair<std::string_view, std::string_view>> details
    );

    MCVAPI void fireExternalUriLaunched(std::string const& uri) const;

    MCVAPI void
    fireGlobalResourcePackCrashRecovery(class PackInstance& packInstance, class mce::UUID recoveryID, int order);

    MCVAPI void fireHostClientTransportSettingSync(
        ::TransportLayer   hostTransportType,
        ::TransportLayer   clientTransportType,
        std::string const& creatorName,
        std::string const& serverAddress,
        std::string const& rakNetGUID,
        uint64             webRTCNetworkId,
        bool               clientSwitchRequired
    );

    MCVAPI void fireIDESelected(std::string const& name) const;

    MCVAPI void fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType            notificationType,
        int                                                       notificationCount,
        std::set<::IMinecraftEventing::IgnoredNotificationSource> notificationSources
    );

    MCVAPI void fireInAppCodeBuilderActivated(::OpenCodeMethod method, std::string const& ideName) const;

    MCVAPI void fireInAppCodeBuilderDismissed(std::string const& ideName) const;

    MCVAPI void fireInviteStatusReceived(std::string id);

    MCVAPI void fireInviteStatusSentImpl(uint userId, std::vector<std::string> invitationIds);

    MCVAPI void fireLessonActionTaken(
        std::string const&                          lessonTitle,
        std::string const&                          lessonId,
        std::string const&                          courseId,
        ::IMinecraftEventing::EducationLessonAction buttonAction,
        int                                         score
    );

    MCVAPI void fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint entryPoint) const;

    MCVAPI void fireLessonProgressEvent(
        std::string const& lessonTitle,
        std::string const& lessonId,
        std::string const& courseId,
        std::string const& activityId,
        std::string const& action,
        int                score
    );

    MCVAPI void fireLibraryButtonPressed(
        std::string const& productId,
        std::string const& worldName,
        std::string const& buttonAction
    );

    MCVAPI void fireMinecraftVersionInviteAccepted(bool launchedLegacy, uint64 inviteGameOwner);

    MCVAPI void fireMinecraftVersionLaunched(bool launchedLegacy);

    MCVAPI void fireNetworkChangedEvent(std::string const& networkConnectionType);

    MCVAPI void firePackSettingsEvent(class PackSettings const& packSettings, class PackManifest const& manifest);

    MCVAPI void firePassthroughTextProcessEvent(std::string const&, ::TextProcessingEventOrigin, std::string const&);

    MCVAPI void firePerfTestEvent(
        std::string const&                                testArtifact,
        std::string const&                                modelName,
        std::string const&                                renderSize,
        uint                                              renderDistance,
        uint                                              simDistance,
        std::string const&                                memorySize,
        std::vector<std::pair<std::string, float>> const& testArtifactData
    );

    MCVAPI void firePermissionsSetEvent(
        ::PlayerPermissionLevel  prevPlayerPermissionLevel,
        ::CommandPermissionLevel prevCommandPermissionLevel,
        ::PlayerPermissionLevel  playerPermissionLevel,
        ::CommandPermissionLevel commandPermissionLevel
    );

    MCVAPI void firePlayerAccountMetadata(
        struct Social::PermissionCheckResult,
        struct Social::PermissionCheckResult,
        struct Social::PermissionCheckResult,
        struct Social::PermissionCheckResult,
        struct Social::PermissionCheckResult,
        struct Social::PermissionCheckResult,
        bool,
        bool
    );

    MCVAPI void firePlayerUnexpectedFallDamage(float, bool, float);

    MCVAPI void fireQueryOfferResult(std::string const& storeID, int NumberOfOffers, bool QuerySucceeded);

    MCVAPI void fireQuickPlayEvent();

    MCVAPI void fireRealmConnectionEventGenericLambdaCalled(
        ::IMinecraftEventing::RealmConnectionFlow   realmConnectionFlow,
        ::IMinecraftEventing::RealmConnectionLambda realmConnectionLambda,
        ::IMinecraftEventing::RealmConnectionResult realmConnectionResult
    );

    MCVAPI void fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow);

    MCVAPI void fireRealmConnectionEventRealmAPIResponse(
        ::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow,
        int                                       responseCode
    );

    MCVAPI void fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow);

    MCVAPI void fireSafetyServiceTextProcessEvent(
        std::string const&,
        ::TextProcessingEventOrigin,
        ushort,
        std::string const&,
        bool,
        double,
        char,
        char,
        class Json::Value const&,
        std::string const&,
        bool
    );

    MCVAPI void fireScreenLoadTimeUpdateEvent(
        uint const&              userId,
        std::string const&       screenName,
        std::chrono::nanoseconds duration,
        std::string const&       loadInstanceId
    );

    MCVAPI void
    fireServerConnectionAttemptEvent(std::string const& creatorName, bool isTransfer, std::string const& serverAddress);

    MCVAPI void
    fireServerConnectionEvent(::IConnectionEventing::ServerConnectionOutcome, uint, double, std::string const&, std::string const&);

    MCVAPI void fireServerShutdown(std::string const& serverId);

    MCVAPI void
    fireServerStarted(::IMinecraftEventing::ServerType, std::string const&, std::unordered_map<std::string, std::string> const&);

    MCVAPI void fireShareButtonPressed(
        std::string const&   location,
        ::EduShareUriType    shareType,
        ::EduShareMethodType methodType,
        bool                 includesResource
    );

    MCVAPI void fireStorageMigrationEvent(
        bool                                              isSuccessful,
        ::Bedrock::StorageMigration::StorageMigrationType migrationType,
        int                                               numFilesMigrated,
        int                                               numFilesTotal,
        std::chrono::nanoseconds                          duration,
        std::string const&                                failureReason
    );

    MCVAPI void fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        class StructureEditorData const&               structureEditorData,
        class StructureTelemetryClientData const*      telemetryClientData
    );

    MCVAPI void fireStructureBlockRedstoneActivated(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        class StructureEditorData const&               structureEditorData,
        class StructureTelemetryClientData const*      telemetryClientData
    );

    MCVAPI void fireTextToSpeechToggled(bool uiTTS, bool chatTTS);

    MCVAPI void fireUserGeneratedUriLaunchFailed(
        ::UserGeneratedUriSource              source,
        ::Util::ResourceUri::ValidationStatus reasonCode,
        std::string const&                    additionalData
    ) const;

    MCVAPI void fireUserGeneratedUriLaunched(::UserGeneratedUriSource source) const;

    MCVAPI void fireWorldConversionAttemptEvent(struct Legacy::WorldConversionReport const& report);

    MCVAPI void fireWorldConversionInitiatedEvent(std::string const& converterVersion);

    MCVAPI void fireWorldRecoveryTelemetryEvent(struct Bedrock::WorldRecoveryTelemetryEvent const& data);

    MCVAPI void fireWorldUpgradedToCnCPart2(
        bool                     willUpgrade,
        std::string const&       baseGameVersion,
        class Experiments const& experiments,
        std::string const&       lastOpenedVersion,
        class LevelSeed64        worldSeed,
        float                    worldSizeMB
    );

    MCVAPI void flagEventDeepLink();

    MCVAPI void flagEventPlayerGameTypeDefault(bool isDefault);

    MCVAPI void forceSendEvents();

    MCVAPI bool getAchievementsAlwaysEnabled();

    MCVAPI gsl::not_null<class Bedrock::CrashTelemetryProcessor*> getCrashTelemetryProcessor();

    MCVAPI class Social::Events::EventManager& getEventManager() const;

    MCVAPI std::string const& getPlayerSessionId();

    MCVAPI uint getPrimaryLocalUserId() const;

    MCVAPI std::string getSessionId();

    MCVAPI bool getShouldHaveAchievementsEnabled();

    MCVAPI void init(
        Bedrock::NotNullNonOwnerPtr<class Social::IUserManager> const& userManager,
        class Bedrock::NonOwnerPointer<class AppPlatform> const&       appPlatform
    );

    MCVAPI void initDeviceAndSessionIds();

    MCVAPI void prepEventSearchCatalogRequest(class SearchRequestTelemetry const& telem);

    MCVAPI class Json::Value propertiesAsJsonValue() const;

    MCVAPI void registerOptionsObserver(std::shared_ptr<class Options> options);

    MCVAPI void registerSecondaryUserCommonProperties(uint const&, class Social::Identity&) const;

    MCVAPI void removeTestBuildIdTag();

    MCVAPI void removeTestTelemetryTag();

    MCVAPI std::shared_ptr<void*> requestEventDeferment();

    MCVAPI void sendBatchedCrashTelemetry();

    MCVAPI void sendCrashStatusTelemetry(struct Bedrock::CrashUploadStatus const& status);

    MCVAPI void sendCrashTelemetryNow(std::shared_ptr<class Bedrock::SessionInfo> session);

    MCVAPI void
    setServerIdsforClient(std::string const&, std::string const&, std::string const&, std::string, std::string);

    MCVAPI void setShouldHaveAchievementsEnabled(bool value);

    MCVAPI void setTestBuildIdTag(char const* id);

    MCVAPI void setTestTelemetryTag(char const* name);

    MCVAPI void shutdown();

    MCVAPI void stopDebugEventLoggingForAllListeners();

    MCVAPI void tick();

    MCVAPI void tryFireEventProgressLoadTimes(
        std::string const&                         calledFromScreen,
        std::vector<std::pair<std::string, float>> progressHandlerLoadTimes
    );

    MCVAPI void unregisterSecondaryUserCommonProperties(uint const&) const;

    MCVAPI void updateEditionType();

    MCVAPI void updateIsLegacyPlayer(bool isLegacyPlayer);

    MCVAPI void updateIsTrial(bool isTrial) const;

    MCVAPI void updatePlayerUndergroundStatus(class Player* player, bool isUnderground);

    MCVAPI void updatePrimaryLocalUserId(uint const& userId);

    MCVAPI ~MinecraftEventing();

    MCAPI explicit MinecraftEventing(class Core::Path const& logFileDir);

    MCAPI void init(class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform);

    MCAPI void initForDedicatedServer(class Bedrock::NonOwnerPointer<class AppPlatform> const&, bool);

    MCAPI static void
    fireEventAwardAchievement(class Player* player, ::MinecraftEventing::AchievementIds achievementId);

    MCAPI static void fireEventBehaviorErrored(class Player* player, std::string const& errorMessage);

    MCAPI static void fireEventBehaviorFailed(class Player* player, std::string const& failureMessage);

    MCAPI static void fireEventBellBlockUsed(class Player* player, std::string const& itemUsed);

    MCAPI static void fireEventBlockBroken(
        class Player*                             player,
        class Block const&                        destroyedBlock,
        ::MinecraftEventing::BlockPlacementMethod method,
        int                                       variantData
    );

    MCAPI static void fireEventBlockFound(class Player* player, class BlockPos const& blockPos);

    MCAPI static void fireEventCampfireBlockUsed(
        class Player*                                player,
        std::string const&                           itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

    MCAPI static void fireEventCaravanChanged(class Mob& mob, int caravanSize);

    MCAPI static void
    fireEventItemUsed(class Player* player, class ItemDescriptor const& item, ::ItemUseMethod useMethod);

    MCAPI static void
    fireEventJukeboxUsed(class Player* player, class ItemDescriptor const& disc, std::string const& biome);

    MCAPI static void fireEventMobDied(class Mob&, int);

    MCAPI static void fireEventMobEffectChanged(
        class Mob&                      mob,
        class MobEffectInstance const&  effectInstance,
        ::MinecraftEventing::ChangeType change
    );

    MCAPI static void fireEventMobTeleportedToOwner(class Mob&);

    MCAPI static void fireEventPlayerTeleported(
        class Player*                           player,
        float                                   metersTravelled,
        ::MinecraftEventing::TeleportationCause cause,
        int                                     sourceType
    );

    MCAPI static void fireEventPlayerTransform(class Player& player);

    MCAPI static void fireEventSlashCommandExecuted(
        class Player*      player,
        std::string const& commandName,
        int                successCount,
        int                errorCount,
        std::string const& errorList
    );

    MCAPI static void fireEventWolfArmorDamageValueChanged(class Actor&, class ItemDescriptor const&, int, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        class StructureEditorData const&               structureEditorData,
        bool                                           redstoneActivated,
        class StructureTelemetryClientData const*      telemetryClientData
    );

    MCAPI void _generateWorldSessionId();

    MCAPI void _sendTelemetryHeartbeat(char const* trigger);

    MCAPI void fireEventPlayerMessage(
        std::string const& fromName,
        std::string const& toName,
        std::string const& message,
        std::string const& messageType
    );

    MCAPI void firePlayerTelemetryEvent(class Social::Events::PlayerTelemetry const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::unique_ptr<class Social::Events::AchievementEventing> mAchievementEventing;

    MCAPI static std::map<std::string, int> mCachedUUIDs;

    MCAPI static std::unordered_map<uint, class Social::Events::PlayerTelemetry> mPlayerTelemetry;

    MCAPI static class Social::Events::RealtimeRoute mRealtimeRoute;

    MCAPI static class Social::Events::ScreenFlow mScreenFlow;

    MCAPI static class Bedrock::Threading::Mutex sHeartbeatMutex;

    MCAPI static class Bedrock::Threading::Mutex sMutex;

    MCAPI static class Bedrock::Threading::Mutex sPlayerTelemetryMutex;

    // NOLINTEND
};
