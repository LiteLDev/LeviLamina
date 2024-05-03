#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/RealmsPurchaseFailureReason.h"
#include "mc/client/network/realms/RealmsPurchaseIntent.h"
#include "mc/client/social/IdentitySignInTrigger.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/SignInResult.h"
#include "mc/deps/core/LevelStorageState.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/common/bedrock/StorageMigrationType.h"
#include "mc/deps/core/utility/ValidationStatus.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/entity/utilities/ActorDamageCause.h"
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
#include "mc/world/item/components/ItemAcquisitionMethod.h"
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
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct WatchdogSettings; }
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
    // symbol: ?addCrashTelemetryToBatch@MinecraftEventing@@UEAAXV?$shared_ptr@VSessionInfo@Bedrock@@@std@@@Z
    MCVAPI void addCrashTelemetryToBatch(std::shared_ptr<class Bedrock::SessionInfo> session);

    // symbol:
    // ?addListener@MinecraftEventing@@UEAAXV?$unique_ptr@VIEventListener@Events@Social@@U?$default_delete@VIEventListener@Events@Social@@@std@@@std@@@Z
    MCVAPI void addListener(std::unique_ptr<class Social::Events::IEventListener> listener);

    // symbol:
    // ?fileEventCloudWorldPullFailed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
    MCVAPI void
    fileEventCloudWorldPullFailed(std::string const& reason, std::string const& worldID, bool localLevelDatUsed);

    // symbol:
    // ?fireBannedSkinVerificationEvent@MinecraftEventing@@UEAAXAEBIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NH1@Z
    MCVAPI void
    fireBannedSkinVerificationEvent(uint const&, std::string const&, std::string const&, bool, int, std::string const&);

    // symbol:
    // ?fireCDNDownloadEvent@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00AEBW4CDNDownloadResult@IMinecraftEventing@@AEBW4CDNDownloadEventOrigin@5@AEBM@Z
    MCVAPI void
    fireCDNDownloadEvent(std::string const&, std::string const&, std::string const&, ::IMinecraftEventing::CDNDownloadResult const&, ::IMinecraftEventing::CDNDownloadEventOrigin const&, float const&);

    // symbol: ?fireChatUsedEvent@MinecraftEventing@@UEAAXI_N@Z
    MCVAPI void fireChatUsedEvent(uint chatLength, bool isSlashCommand);

    // symbol: ?fireChunkRecyclerTelemetryData@MinecraftEventing@@UEAAXAEBUChunkRecyclerTelemetryOutput@@@Z
    MCVAPI void fireChunkRecyclerTelemetryData(struct ChunkRecyclerTelemetryOutput const& output);

    // symbol: ?fireClassroomSettingUpdated@MinecraftEventing@@UEAAXW4ClassroomSetting@@W4SettingsScreenMode@@@Z
    MCVAPI void fireClassroomSettingUpdated(::ClassroomSetting classroomSetting, ::SettingsScreenMode settingMode);

    // symbol:
    // ?fireClubsEngagementEvent@MinecraftEventing@@UEAAXW4ClubsEngagementAction@IMinecraftEventing@@W4ClubsEngagementTargetType@3@PEBDURealmId@Realms@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireClubsEngagementEvent(
        ::IMinecraftEventing::ClubsEngagementAction     action,
        ::IMinecraftEventing::ClubsEngagementTargetType engagementTargetType,
        char const*                                     target,
        struct Realms::RealmId                          realmId,
        std::string const&                              clubId
    );

    // symbol:
    // ?fireClubsOpenFeedScreenEvent@MinecraftEventing@@UEAAXW4ClubsFeedScreenSource@IMinecraftEventing@@URealmId@Realms@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCVAPI void fireClubsOpenFeedScreenEvent(
        ::IMinecraftEventing::ClubsFeedScreenSource source,
        struct Realms::RealmId                      realmId,
        std::string const&                          clubId,
        int                                         unreadPosts
    );

    // symbol: ?fireCodeCommandButtonPressed@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireCodeCommandButtonPressed();

    // symbol:
    // ?fireCommandParseTableTelemetry@MinecraftEventing@@UEBAX_NAEBV?$vector@UCommandParseTableEntry@IMinecraftEventing@@V?$allocator@UCommandParseTableEntry@IMinecraftEventing@@@std@@@std@@@Z
    MCVAPI void fireCommandParseTableTelemetry(
        bool                                                                  isServer,
        std::vector<struct IMinecraftEventing::CommandParseTableEntry> const& parseTableDetails
    ) const;

    // symbol:
    // ?fireCourseButtonPressed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void fireCourseButtonPressed(std::string const& courseTitle, std::string const& courseId);

    // symbol:
    // ?fireCurrentInputUpdated@MinecraftEventing@@UEAAXAEBV?$not_null@V?$NonOwnerPointer@VIClientInstance@@@Bedrock@@@gsl@@@Z
    MCVAPI void fireCurrentInputUpdated(Bedrock::NotNullNonOwnerPtr<class IClientInstance> const& client);

    // symbol:
    // ?fireDBStorageError@MinecraftEventing@@UEAAXAEBULevelStorageEventingContext@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireDBStorageError(struct LevelStorageEventingContext const& context, std::string const& errorType);

    // symbol:
    // ?fireDayOneExperienceStateChanged@MinecraftEventing@@UEAAXW4DayOneExperienceState@IMinecraftEventing@@V?$optional@I@std@@V?$optional@_K@5@@Z
    MCVAPI void fireDayOneExperienceStateChanged(
        ::IMinecraftEventing::DayOneExperienceState newState,
        std::optional<uint>                         importedWorldIndex,
        std::optional<uint64>                       importedWorldTimestamp
    );

    // symbol:
    // ?fireDelayedEventReportOfflineAction@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireDelayedEventReportOfflineAction(std::string const& offlineAction);

    // symbol:
    // ?fireEduServiceRequestFailed@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00V?$buffer_span@U?$pair@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V12@@std@@@@@Z
    MCVAPI void fireEduServiceRequestFailed(
        std::string const&                                               serviceName,
        std::string const&                                               requestName,
        std::string const&                                               error,
        class buffer_span<std::pair<std::string_view, std::string_view>> details
    ) const;

    // symbol:
    // ?fireEventAchievementReceived@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    MCVAPI void fireEventAchievementReceived(
        std::string const& title,
        std::string const& description,
        std::string const& achievementId
    );

    // symbol:
    // ?fireEventActorValueValidationFailed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD@Z
    MCVAPI void fireEventActorValueValidationFailed(std::string const& invalidValue, char const* caller);

    // symbol:
    // ?fireEventAddedFriend@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4AddedFriendLocation@IMinecraftEventing@@_N@Z
    MCVAPI void fireEventAddedFriend(std::string const&, ::IMinecraftEventing::AddedFriendLocation, bool);

    // symbol: ?fireEventAndroidHelpRequest@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireEventAndroidHelpRequest();

    // symbol: ?fireEventAndroidScopedStorageDebug@MinecraftEventing@@UEAAX_K@Z
    MCVAPI void fireEventAndroidScopedStorageDebug(uint64 numLevels);

    // symbol: ?fireEventAppInitFileOpenStats@MinecraftEventing@@UEAAXAEBUFileCounters@Profile@Core@@0@Z
    MCVAPI void fireEventAppInitFileOpenStats(
        struct Core::Profile::FileCounters const& openForRead,
        struct Core::Profile::FileCounters const& openForWrite
    );

    // symbol: ?fireEventAppPaused@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireEventAppPaused();

    // symbol: ?fireEventAppSurfaceCreated@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireEventAppSurfaceCreated();

    // symbol: ?fireEventAppSurfaceDestroyed@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireEventAppSurfaceDestroyed();

    // symbol: ?fireEventAppUnpaused@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireEventAppUnpaused();

    // symbol: ?fireEventArmorStandItemEquipped@MinecraftEventing@@UEAAXAEBVArmorStand@@AEBVItemDescriptor@@@Z
    MCVAPI void fireEventArmorStandItemEquipped(class ArmorStand const& armorStand, class ItemDescriptor const& item);

    // symbol:
    // ?fireEventAssertFailed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void fireEventAssertFailed(std::string const& assertBucket, std::string const& message);

    // symbol: ?fireEventBlockPlacedByCommand@MinecraftEventing@@UEAAXAEBVBlock@@H@Z
    MCVAPI void fireEventBlockPlacedByCommand(class Block const& placedBlock, int numberOfBlocksPlaced);

    // symbol:
    // ?fireEventBlockTypeRegistryChecksumMismatch@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEB_K10@Z
    MCVAPI void fireEventBlockTypeRegistryChecksumMismatch(
        std::string const& reason,
        uint64 const&      serverBlockChecksum,
        uint64 const&      clientBlockChecksum,
        std::string const& serverVersion
    );

    // symbol: ?fireEventBoardTextUpdated@MinecraftEventing@@UEAAXAEAVChalkboardBlockActor@@@Z
    MCVAPI void fireEventBoardTextUpdated(class ChalkboardBlockActor& board);

    // symbol:
    // ?fireEventBundleSubOfferClicked@MinecraftEventing@@UEAAXHHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N0@Z
    MCVAPI void fireEventBundleSubOfferClicked(
        int                offerIndex,
        int                bundleSubOfferCount,
        std::string const& telemetryId,
        std::string const& productId,
        bool               isOnSale,
        std::string const& timeRemainingOnSale
    );

    // symbol:
    // ?fireEventButtonPressed@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@3@@Z
    MCVAPI void fireEventButtonPressed(
        std::string const&                                  buttonName,
        std::unordered_map<std::string, std::string> const& details
    ) const;

    // symbol: ?fireEventCameraUsed@MinecraftEventing@@UEAAX_N@Z
    MCVAPI void fireEventCameraUsed(bool isSelfie);

    // symbol:
    // ?fireEventChatFloodingActionTaken@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ChatFloodingAction@Safety@@0@Z
    MCVAPI void fireEventChatFloodingActionTaken(std::string const&, ::Safety::ChatFloodingAction, std::string const&);

    // symbol:
    // ?fireEventChatSettingsUpdated@MinecraftEventing@@UEBAXPEBVPlayer@@AEBV?$vector@VProperty@Events@Social@@V?$allocator@VProperty@Events@Social@@@std@@@std@@@Z
    MCVAPI void fireEventChatSettingsUpdated(
        class Player const*                                player,
        std::vector<class Social::Events::Property> const& properties
    ) const;

    // symbol: ?fireEventChunkChanged@MinecraftEventing@@UEAAXAEAVLevelChunk@@@Z
    MCVAPI void fireEventChunkChanged(class LevelChunk& chunk);

    // symbol: ?fireEventChunkLoaded@MinecraftEventing@@UEAAXAEAVLevelChunk@@@Z
    MCVAPI void fireEventChunkLoaded(class LevelChunk& chunk);

    // symbol: ?fireEventChunkUnloaded@MinecraftEventing@@UEAAXAEAVLevelChunk@@@Z
    MCVAPI void fireEventChunkUnloaded(class LevelChunk& chunk);

    // symbol:
    // ?fireEventClientLeftGameDueToUnrecoverableError@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCVAPI void fireEventClientLeftGameDueToUnrecoverableError(std::string const& reason, bool isServer);

    // symbol: ?fireEventCloudMyWorldsSummary@MinecraftEventing@@UEAAXHHHHH@Z
    MCVAPI void fireEventCloudMyWorldsSummary(int, int, int, int, int);

    // symbol:
    // ?fireEventCloudOperationEndedEdu@MinecraftEventing@@UEAAXW4Operation@EduCloud@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@5@I_KAEBV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@5@444@Z
    MCVAPI void
    fireEventCloudOperationEndedEdu(::EduCloud::Operation, std::string const&, std::chrono::milliseconds, uint, uint64, std::optional<std::string> const&, std::optional<std::string> const&, std::optional<std::string> const&, std::optional<std::string> const&);

    // symbol:
    // ?fireEventCloudOperationStartedEdu@MinecraftEventing@@UEAAXW4Operation@EduCloud@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KAEBV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@5@@Z
    MCVAPI void
    fireEventCloudOperationStartedEdu(::EduCloud::Operation, std::string const&, uint64, std::optional<std::string> const&);

    // symbol: ?fireEventCodeBuilderClosed@MinecraftEventing@@UEBAXXZ
    MCVAPI void fireEventCodeBuilderClosed() const;

    // symbol:
    // ?fireEventCodeBuilderLog@MinecraftEventing@@UEBAXAEBUTelemetryCommonProperties@Webview@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV45@@Z
    MCVAPI void fireEventCodeBuilderLog(
        struct Webview::TelemetryCommonProperties const& properties,
        std::string const&                               message,
        std::string&                                     level
    ) const;

    // symbol:
    // ?fireEventCodeBuilderRuntimeAction@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventCodeBuilderRuntimeAction(std::string const& action) const;

    // symbol:
    // ?fireEventCodeBuilderScoreChanged@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCVAPI void fireEventCodeBuilderScoreChanged(std::string const& objective, int score) const;

    // symbol: ?fireEventCompoundCreatorCreated@MinecraftEventing@@UEAAXHH@Z
    MCVAPI void fireEventCompoundCreatorCreated(int compoundId, int count);

    // symbol:
    // ?fireEventConnectedStorageError@MinecraftEventing@@UEAAXPEBDAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_J@Z
    MCVAPI void fireEventConnectedStorageError(char const* message, std::string const& levelId, int64 quotaRemaining);

    // symbol:
    // ?fireEventConnectedStorageResult@MinecraftEventing@@UEAAXW4ConnectedStorageEventType@@_NIV?$optional@I@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@3_J222@Z
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

    // symbol: ?fireEventConnectionFailed@MinecraftEventing@@UEAAXW4ConnectionFailureReason@IConnectionEventing@@@Z
    MCVAPI void fireEventConnectionFailed(::IConnectionEventing::ConnectionFailureReason failure);

    // symbol:
    // ?fireEventContentLogsInWorldSession@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@II@Z
    MCVAPI void fireEventContentLogsInWorldSession(std::string const& logArea, uint errorCount, uint warningCount);

    // symbol:
    // ?fireEventContentShared@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBW4ShareMode@IMinecraftEventing@@@Z
    MCVAPI void fireEventContentShared(
        std::string const&                     productId,
        std::string const&                     url,
        ::IMinecraftEventing::ShareMode const& mode
    );

    // symbol:
    // ?fireEventControlRemappedByPlayer@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4RawInputType@@H@Z
    MCVAPI void
    fireEventControlRemappedByPlayer(std::string const& actionName, ::RawInputType inputType, int keyCode) const;

    // symbol: ?fireEventControlTipsPanelUpdated@MinecraftEventing@@UEBAXW4EduControlPanelUpdateType@@N@Z
    MCVAPI void fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType updateType, double elapsedTimeSec) const;

    // symbol: ?fireEventCopyWorldEducationEnabled@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireEventCopyWorldEducationEnabled();

    // symbol: ?fireEventCrashSystemFailedToInit@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireEventCrashSystemFailedToInit();

    // symbol: ?fireEventDedicatedServerDiscoveryResponse@MinecraftEventing@@UEAAXHH@Z
    MCVAPI void fireEventDedicatedServerDiscoveryResponse(int, int);

    // symbol:
    // ?fireEventDefaultCastSelected@MinecraftEventing@@UEAAXHVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void
    fireEventDefaultCastSelected(int previewIndex, class mce::UUID appearanceId, std::string const& appearanceName);

    // symbol: ?fireEventDefaultGameTypeChanged@MinecraftEventing@@UEAAXW4GameType@@0@Z
    MCVAPI void fireEventDefaultGameTypeChanged(::GameType oldGameType, ::GameType newGameType);

    // symbol:
    // ?fireEventDevSlashCommandExecuted@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void fireEventDevSlashCommandExecuted(std::string const& commandName, std::string const& command);

    // symbol:
    // ?fireEventDeviceAccountFailure@MinecraftEventing@@UEAAXW4SignInStage@IMinecraftEventing@@W4DeviceAccountFailurePhase@3@IAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventDeviceAccountFailure(
        ::IMinecraftEventing::SignInStage               stage,
        ::IMinecraftEventing::DeviceAccountFailurePhase phase,
        uint                                            resultStatus,
        std::string const&                              accountID
    );

    // symbol:
    // ?fireEventDeviceAccountSuccess@MinecraftEventing@@UEAAX_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventDeviceAccountSuccess(bool isNewAccount, std::string const& accountID);

    // symbol: ?fireEventDeviceIdManagerFailOnIdentityGained@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireEventDeviceIdManagerFailOnIdentityGained();

    // symbol: ?fireEventDeviceLost@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireEventDeviceLost();

    // symbol: ?fireEventDifficultySet@MinecraftEventing@@UEAAXW4Difficulty@@0@Z
    MCVAPI void fireEventDifficultySet(::Difficulty oldDifficulty, ::Difficulty newDifficulty);

    // symbol: ?fireEventDiskStatus@MinecraftEventing@@UEAAXW4DiskStatus@@W4LevelStorageState@Core@@_K@Z
    MCVAPI void fireEventDiskStatus(::DiskStatus status, ::Core::LevelStorageState errorCode, uint64 freeSpace);

    // symbol:
    // ?fireEventDlcStorageFull@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K111@Z
    MCVAPI void fireEventDlcStorageFull(std::string const&, uint64, uint64, uint64, uint64);

    // symbol: ?fireEventEduContentVerificationFailed@MinecraftEventing@@UEBAXXZ
    MCVAPI void fireEventEduContentVerificationFailed() const;

    // symbol: ?fireEventEduDemoConversion@MinecraftEventing@@UEAAXW4Role@edu@@W4LastClickedSource@@@Z
    MCVAPI void fireEventEduDemoConversion(::edu::Role role, ::LastClickedSource lastClickedSource);

    // symbol: ?fireEventEduResources@MinecraftEventing@@UEBAXXZ
    MCVAPI void fireEventEduResources() const;

    // symbol:
    // ?fireEventEduServiceStatus@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HV?$buffer_span@U?$pair@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V12@@std@@@@@Z
    MCVAPI void fireEventEduServiceStatus(
        std::string const&                                               serviceName,
        std::string const&                                               requestName,
        int                                                              durationMS,
        class buffer_span<std::pair<std::string_view, std::string_view>> details
    ) const;

    // symbol: ?fireEventEduiOSPurchaseTransaction@MinecraftEventing@@UEBAXAEBW4TransactionStatus@@@Z
    MCVAPI void fireEventEduiOSPurchaseTransaction(::TransactionStatus const& status) const;

    // symbol:
    // ?fireEventElementConstructorUsed@MinecraftEventing@@UEAAXHHW4ElementConstructorUseType@IMinecraftEventing@@@Z
    MCVAPI void fireEventElementConstructorUsed(
        int                                             atomicNumber,
        int                                             count,
        ::IMinecraftEventing::ElementConstructorUseType useType
    );

    // symbol:
    // ?fireEventEmptyLibraryCategoryError@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventEmptyLibraryCategoryError(std::string const& categoryTitle) const;

    // symbol:
    // ?fireEventEncyclopediaTopicChanged@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4InputMode@@@Z
    MCVAPI void fireEventEncyclopediaTopicChanged(std::string const&, ::InputMode);

    // symbol: ?fireEventEntitlementCacheLoadTimeout@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireEventEntitlementCacheLoadTimeout();

    // symbol:
    // ?fireEventEntitlementListInfo@MinecraftEventing@@UEAAXAEAV?$vector@VContentIdentity@@V?$allocator@VContentIdentity@@@std@@@std@@_N@Z
    MCVAPI void
    fireEventEntitlementListInfo(std::vector<class ContentIdentity>& entitlementContentIds, bool isLegacyList);

    // symbol: ?fireEventEntitySpawned@MinecraftEventing@@UEAAXPEAVPlayer@@HI@Z
    MCVAPI void fireEventEntitySpawned(class Player* player, int mobType, uint spawnMethod);

    // symbol:
    // ?fireEventFeedbackSubmitted@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N1@Z
    MCVAPI void fireEventFeedbackSubmitted(std::string const& productId, bool safetyCheckSuccessful, bool isValidText);

    // symbol:
    // ?fireEventGameRulesUpdated@MinecraftEventing@@UEAAXHHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventGameRulesUpdated(int oldValue, int newValue, std::string const& gameRuleName);

    // symbol:
    // ?fireEventGameRulesUpdated@MinecraftEventing@@UEAAXMMAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventGameRulesUpdated(float oldValue, float newValue, std::string const& gameRuleName);

    // symbol:
    // ?fireEventGameRulesUpdated@MinecraftEventing@@UEAAX_N0AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventGameRulesUpdated(bool oldValue, bool newValue, std::string const& gameRuleName);

    // symbol: ?fireEventGameTip@MinecraftEventing@@UEAAXHHHW4InputMode@@@Z
    MCVAPI void fireEventGameTip(int, int, int, ::InputMode);

    // symbol: ?fireEventGoogleAccountHoldWarning@MinecraftEventing@@UEAAX_N@Z
    MCVAPI void fireEventGoogleAccountHoldWarning(bool navigatedToSubscription);

    // symbol: ?fireEventHardwareInfo@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireEventHardwareInfo();

    // symbol:
    // ?fireEventHowToPlayTopicChanged@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4InputMode@@@Z
    MCVAPI void fireEventHowToPlayTopicChanged(std::string const& topicName, ::InputMode inputMode);

    // symbol:
    // ?fireEventHttpClientError@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventHttpClientError(std::string const& error);

    // symbol:
    // ?fireEventIAPPurchaseAttempt@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAVOffer@@W4PurchasePath@@@Z
    MCVAPI void fireEventIAPPurchaseAttempt(
        std::string const& correlationId,
        std::string const& storeId,
        class Offer&       offer,
        ::PurchasePath     path
    );

    // symbol:
    // ?fireEventIAPPurchaseResolved@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAVOffer@@W4PurchaseResult@IMinecraftEventing@@W4PurchasePath@@@Z
    MCVAPI void fireEventIAPPurchaseResolved(
        std::string const&                   correlationId,
        std::string const&                   storeId,
        class Offer&                         offer,
        ::IMinecraftEventing::PurchaseResult purchaseRes,
        ::PurchasePath                       path
    );

    // symbol:
    // ?fireEventIAPRedeemAttempt@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00W4PurchasePath@@@Z
    MCVAPI void fireEventIAPRedeemAttempt(
        std::string const& correlationId,
        std::string const& storeId,
        std::string const& productId,
        ::PurchasePath     path
    );

    // symbol:
    // ?fireEventIAPRedeemResolved@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00W4PurchaseResult@IMinecraftEventing@@W4PurchasePath@@@Z
    MCVAPI void fireEventIAPRedeemResolved(
        std::string const&                   correlationId,
        std::string const&                   storeId,
        std::string const&                   productId,
        ::IMinecraftEventing::PurchaseResult purchaseRes,
        ::PurchasePath                       path
    );

    // symbol:
    // ?fireEventImGuiScreenChanged@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@3@@Z
    MCVAPI void fireEventImGuiScreenChanged(
        std::string const&                                  screenName,
        std::unordered_map<std::string, std::string> const& additionalProperties
    );

    // symbol: ?fireEventInboxSummary@MinecraftEventing@@UEAAXAEBUInboxSummaryData@Events@Social@@@Z
    MCVAPI void fireEventInboxSummary(struct Social::Events::InboxSummaryData const&);

    // symbol:
    // ?fireEventJoinByCode@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventJoinByCode(std::string const&);

    // symbol: ?fireEventJoinCanceled@MinecraftEventing@@UEAAXW4LoadingState@@@Z
    MCVAPI void fireEventJoinCanceled(::LoadingState currentState);

    // symbol: ?fireEventLabTableCreated@MinecraftEventing@@UEAAXHHH@Z
    MCVAPI void fireEventLabTableCreated(int reactionId, int productId, int productAux);

    // symbol: ?fireEventLevelChunkPerformanceData@MinecraftEventing@@UEAAX_N@Z
    MCVAPI void fireEventLevelChunkPerformanceData(bool isClientSide);

    // symbol:
    // ?fireEventLevelDatLoadFailed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
    MCVAPI void fireEventLevelDatLoadFailed(std::string const& reason, std::string const& worldID, bool isFatal);

    // symbol: ?fireEventLevelDataOverride@MinecraftEventing@@UEBAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI void fireEventLevelDataOverride(std::string_view valueName) const;

    // symbol: ?fireEventLevelDestruct@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireEventLevelDestruct();

    // symbol: ?fireEventLibrarySearch@MinecraftEventing@@UEBAXAEBUTelemetryData@librarySearch@@@Z
    MCVAPI void fireEventLibrarySearch(struct librarySearch::TelemetryData const& telemetryData) const;

    // symbol:
    // ?fireEventLibrarySearchItemSelected@MinecraftEventing@@UEBAXHHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z
    MCVAPI void fireEventLibrarySearchItemSelected(
        int                sessionId,
        int                correlationId,
        std::string const& productId,
        int                row,
        int                column
    ) const;

    // symbol: ?fireEventLicenseCheck@MinecraftEventing@@UEAAX_NAEAUExtraLicenseData@@@Z
    MCVAPI void fireEventLicenseCheck(bool isLicensed, struct ExtraLicenseData& data);

    // symbol: ?fireEventLockedItemGiven@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireEventLockedItemGiven();

    // symbol:
    // ?fireEventMessageReceived@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000_N@Z
    MCVAPI void
    fireEventMessageReceived(std::string const&, std::string const&, std::string const&, std::string const&, bool);

    // symbol:
    // ?fireEventMessageServiceImpression@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000_N@Z
    MCVAPI void fireEventMessageServiceImpression(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        bool
    );

    // symbol:
    // ?fireEventModalShown@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@3@@Z
    MCVAPI void fireEventModalShown(std::string const&, std::unordered_map<std::string, std::string> const&) const;

    // symbol:
    // ?fireEventMultiplayerSessionUpdate@MinecraftEventing@@UEAAXV?$NonOwnerPointer@VMultiPlayerLevel@@@Bedrock@@@Z
    MCVAPI void fireEventMultiplayerSessionUpdate(class Bedrock::NonOwnerPointer<class MultiPlayerLevel>);

    // symbol:
    // ?fireEventNewContentCheckCompleted@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCVAPI void fireEventNewContentCheckCompleted(std::string const& newContentPrefix, bool hasNewStoreContent);

    // symbol: ?fireEventNpcPropertiesUpdated@MinecraftEventing@@UEAAXAEAVActor@@_N@Z
    MCVAPI void fireEventNpcPropertiesUpdated(class Actor& npcOwner, bool isEditorWorldbuilder);

    // symbol:
    // ?fireEventOfferRated@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHHN@Z
    MCVAPI void
    fireEventOfferRated(std::string const& productId, int rating, int previous_rating, int count, double timeElapsed);

    // symbol:
    // ?fireEventOnAppResume@MinecraftEventing@@UEAAXAEBV?$vector@USerialWorkListLogEntry@@V?$allocator@USerialWorkListLogEntry@@@std@@@std@@@Z
    MCVAPI void fireEventOnAppResume(std::vector<struct SerialWorkListLogEntry> const&);

    // symbol:
    // ?fireEventOnAppStart@MinecraftEventing@@UEAAXAEBV?$vector@USerialWorkListLogEntry@@V?$allocator@USerialWorkListLogEntry@@@std@@@std@@@Z
    MCVAPI void fireEventOnAppStart(std::vector<struct SerialWorkListLogEntry> const&);

    // symbol:
    // ?fireEventOnAppSuspend@MinecraftEventing@@UEAAXAEBV?$vector@USerialWorkListLogEntry@@V?$allocator@USerialWorkListLogEntry@@@std@@@std@@_N@Z
    MCVAPI void fireEventOnAppSuspend(std::vector<struct SerialWorkListLogEntry> const&, bool);

    // symbol:
    // ?fireEventOnClientDisconnect@MinecraftEventing@@UEAAXW4SubClientId@@_NW4DisconnectFailReason@Connection@@@Z
    MCVAPI void fireEventOnClientDisconnect(::SubClientId, bool, ::Connection::DisconnectFailReason);

    // symbol:
    // ?fireEventOnDeviceLost@MinecraftEventing@@UEAAXAEBV?$vector@USerialWorkListLogEntry@@V?$allocator@USerialWorkListLogEntry@@@std@@@std@@@Z
    MCVAPI void fireEventOnDeviceLost(std::vector<struct SerialWorkListLogEntry> const&);

    // symbol:
    // ?fireEventOnServerDisconnect@MinecraftEventing@@UEAAXW4DisconnectFailReason@Connection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SubClientId@@1_K1@Z
    MCVAPI void
    fireEventOnServerDisconnect(::Connection::DisconnectFailReason, std::string const&, ::SubClientId, std::string const&, uint64, std::string const&);

    // symbol: ?fireEventOnSuccessfulClientLogin@MinecraftEventing@@UEAAXPEBVMultiPlayerLevel@@@Z
    MCVAPI void fireEventOnSuccessfulClientLogin(class MultiPlayerLevel const*);

    // symbol: ?fireEventOnboardingWorldCreationUsage@MinecraftEventing@@UEAAX_N00@Z
    MCVAPI void fireEventOnboardingWorldCreationUsage(bool, bool, bool);

    // symbol:
    // ?fireEventOneDSPlayerReportPayload@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void fireEventOneDSPlayerReportPayload(std::string const&, std::string const&);

    // symbol:
    // ?fireEventOptionsChanged@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@3@@Z
    MCVAPI void fireEventOptionsChanged(std::string const&, std::unordered_map<std::string, int> const&) const;

    // symbol: ?fireEventOptionsUpdated@MinecraftEventing@@UEAAXAEAVOptions@@W4InputMode@@_N@Z
    MCVAPI void fireEventOptionsUpdated(class Options& options, ::InputMode inputMode, bool onStartup);

    // symbol:
    // ?fireEventOreUIError@MinecraftEventing@@UEAAXAEBIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventOreUIError(uint const& userId, std::string const& errorType);

    // symbol: ?fireEventPackHashChanged@MinecraftEventing@@UEAAXAEBVPackManifest@@@Z
    MCVAPI void fireEventPackHashChanged(class PackManifest const& manifest);

    // symbol:
    // ?fireEventPackImportTimeout@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventPackImportTimeout(std::string const& productId);

    // symbol: ?fireEventPackPlayed@MinecraftEventing@@UEAAXAEBVPackInstance@@I@Z
    MCVAPI void fireEventPackPlayed(class PackInstance const& packInstance, uint priority);

    // symbol: ?fireEventPackUpgradeAttempt@MinecraftEventing@@UEAAXAEBVPackManifest@@AEBVPackReport@@@Z
    MCVAPI void fireEventPackUpgradeAttempt(class PackManifest const& manifest, class PackReport const& report);

    // symbol:
    // ?fireEventPacketViolationDetected@MinecraftEventing@@UEAAX_KV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PacketViolationResponse@@W4MinecraftPacketIds@@AEBVNetworkIdentifier@@IW4SubClientId@@5I@Z
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

    // symbol: ?fireEventPerformanceContext@MinecraftEventing@@UEAAXAEBVPerfContextTrackerReport@@@Z
    MCVAPI void fireEventPerformanceContext(class PerfContextTrackerReport const& perfContextReport);

    // symbol: ?fireEventPerformanceMetrics@MinecraftEventing@@UEAAXAEBUProfilerLiteTelemetry@@_N@Z
    MCVAPI void
    fireEventPerformanceMetrics(struct ProfilerLiteTelemetry const& profileTelemetry, bool rayTracingEnabled);

    // symbol:
    // ?fireEventPersonaAvatarUpdated@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@AEBV?$vector@_NV?$allocator@_N@std@@@3@2_N3000311@Z
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

    // symbol:
    // ?fireEventPersonaAvatarsListed@MinecraftEventing@@UEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI void fireEventPersonaAvatarsListed(std::vector<std::string> const& profileTypesUsed);

    // symbol:
    // ?fireEventPersonaCategoryInformation@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventPersonaCategoryInformation(std::string const& categoryInformation);

    // symbol:
    // ?fireEventPersonaCreationFailed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N100@Z
    MCVAPI void fireEventPersonaCreationFailed(
        std::string const& errorName,
        std::string const& pieceId,
        bool               missingTop,
        bool               missingBottom,
        std::string const& repositoryPieceType,
        std::string const& appearancePieceType
    );

    // symbol:
    // ?fireEventPersonaEmotePlayed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NH@Z
    MCVAPI void fireEventPersonaEmotePlayed(std::string const& emoteProductId, bool isEmoteEndedEarly, int emoteSlotId);

    // symbol:
    // ?fireEventPersonaGeneralError@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z
    MCVAPI void fireEventPersonaGeneralError(std::string const& personaErrorName, uint duplicateErrorsFired);

    // symbol:
    // ?fireEventPersonaInitalizationEvent@MinecraftEventing@@UEAAXIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void
    fireEventPersonaInitalizationEvent(uint secondsToCompletion, std::string const& status, std::string const& user);

    // symbol:
    // ?fireEventPersonaItemPreviewed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00IIW4PromotionType@IMinecraftEventing@@_N00NW4StoreType@5@@Z
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

    // symbol: ?fireEventPersonaLoadingPieces@MinecraftEventing@@UEAAXIN@Z
    MCVAPI void fireEventPersonaLoadingPieces(uint piecesLoaded, double timeToLoadInSeconds);

    // symbol: ?fireEventPersonaOfferClicked@MinecraftEventing@@UEAAXAEBVPersonaOfferClickedData@eventData@Social@@@Z
    MCVAPI void fireEventPersonaOfferClicked(class Social::eventData::PersonaOfferClickedData const&);

    // symbol:
    // ?fireEventPersonaSkinChanged@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
    MCVAPI void fireEventPersonaSkinChanged(
        std::string const& personaProfile,
        std::string const& classicSkinId,
        bool               isClassicSkinUsed
    );

    // symbol:
    // ?fireEventPersonaStillLoading@MinecraftEventing@@UEAAX_N0000000AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@HN@Z
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

    // symbol:
    // ?fireEventPersonaUserLoadedActive@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
    MCVAPI void fireEventPersonaUserLoadedActive(
        std::string const& personaProfileName,
        std::string const& classicSkinId,
        bool               personaUsesClassicSkin
    );

    // symbol:
    // ?fireEventPlayIntegrityCheck@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    MCVAPI void
    fireEventPlayIntegrityCheck(std::string const&, std::string const&, std::string const&, std::string const&);

    // symbol:
    // ?fireEventPlayerActionComparisonFailed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventPlayerActionComparisonFailed(std::string const&);

    // symbol:
    // ?fireEventPlayerAttemptingExploit@MinecraftEventing@@UEAAXPEAVPlayer@@W4ExploitType@IMinecraftEventing@@@Z
    MCVAPI void fireEventPlayerAttemptingExploit(class Player* player, ::IMinecraftEventing::ExploitType exploitType);

    // symbol:
    // ?fireEventPlayerBanned@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventPlayerBanned(std::string const& bannedPlayer);

    // symbol: ?fireEventPlayerBounced@MinecraftEventing@@UEAAXPEAVPlayer@@AEBVBlock@@H@Z
    MCVAPI void fireEventPlayerBounced(class Player* player, class Block const& block, int bounceHeight);

    // symbol: ?fireEventPlayerDamaged@MinecraftEventing@@UEAAXPEAVPlayer@@W4ActorDamageCause@@@Z
    MCVAPI void fireEventPlayerDamaged(class Player* player, ::ActorDamageCause damageCause);

    // symbol:
    // ?fireEventPlayerJoinWorld@MinecraftEventing@@UEAAXAEBIW4SubClientId@@_NV?$optional@_N@std@@W4PlayerJoinWorldAttemptState@IConnectionEventing@@HW4DisconnectFailReason@Connection@@W4TransportLayer@@W4NetworkType@IMinecraftEventing@@2@Z
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
        bool
    );

    // symbol:
    // ?fireEventPlayerKicked@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void fireEventPlayerKicked(std::string const& sessionType, std::string const& kickedPlayer);

    // symbol:
    // ?fireEventPlayerMessageChat@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void fireEventPlayerMessageChat(std::string const& fromName, std::string const& message);

    // symbol:
    // ?fireEventPlayerMessageMe@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void fireEventPlayerMessageMe(std::string const& fromName, std::string const& message);

    // symbol:
    // ?fireEventPlayerMessageSay@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void fireEventPlayerMessageSay(std::string const& fromName, std::string const& message);

    // symbol:
    // ?fireEventPlayerMessageTell@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    MCVAPI void
    fireEventPlayerMessageTell(std::string const& fromName, std::string const& toName, std::string const& message);

    // symbol:
    // ?fireEventPlayerMessageTitle@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    MCVAPI void
    fireEventPlayerMessageTitle(std::string const& fromName, std::string const& toName, std::string const& message);

    // symbol:
    // ?fireEventPlayerReportSent@MinecraftEventing@@UEAAX_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@11@Z
    MCVAPI void fireEventPlayerReportSent(bool, std::string const&, std::string const&, std::string const&);

    // symbol: ?fireEventPlayerTravelled@MinecraftEventing@@UEAAXPEAVPlayer@@M@Z
    MCVAPI void fireEventPlayerTravelled(class Player* player, float metersTravelledSinceLastEvent);

    // symbol:
    // ?fireEventPopupClosed@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventPopupClosed(std::string const& popupName) const;

    // symbol:
    // ?fireEventPopupFiredEdu@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000W4ActiveDirectoryAction@@@Z
    MCVAPI void fireEventPopupFiredEdu(
        std::string const&      mutsUserId,
        std::string const&      dialogType,
        std::string const&      experienceId,
        std::string const&      title,
        ::ActiveDirectoryAction postAction
    );

    // symbol: ?fireEventPortfolioExported@MinecraftEventing@@UEAAXHH@Z
    MCVAPI void fireEventPortfolioExported(int imageCount, int captionedCount);

    // symbol: ?fireEventProfanityFilter@MinecraftEventing@@UEAAX_N00@Z
    MCVAPI void fireEventProfanityFilter(bool, bool, bool);

    // symbol:
    // ?fireEventProgressionsSet@MinecraftEventing@@UEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI void fireEventProgressionsSet(std::vector<std::string> const& progressions);

    // symbol:
    // ?fireEventPromotionNotificationClicked@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventPromotionNotificationClicked(std::string const& productId);

    // symbol:
    // ?fireEventPurchaseAttempt@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00W4StoreType@IMinecraftEventing@@W4PurchasePath@@@Z
    MCVAPI void fireEventPurchaseAttempt(
        std::string const&              correlationId,
        std::string const&              productId,
        std::string const&              price,
        ::IMinecraftEventing::StoreType storeType,
        ::PurchasePath                  path
    );

    // symbol:
    // ?fireEventPurchaseFailureDetails@MinecraftEventing@@UEAAXHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    MCVAPI void fireEventPurchaseFailureDetails(
        int                httpCode,
        std::string const& errorMessage,
        std::string const& productId,
        std::string const& transactionId
    );

    // symbol:
    // ?fireEventPurchaseGameAttempt@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    MCVAPI void fireEventPurchaseGameAttempt(
        std::string const& storeId,
        std::string const& activeTab,
        std::string const& productId
    );

    // symbol:
    // ?fireEventPurchaseResolved@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00W4StoreType@IMinecraftEventing@@W4PurchaseResult@5@W4PurchasePath@@@Z
    MCVAPI void fireEventPurchaseResolved(
        std::string const&                   correlationId,
        std::string const&                   productId,
        std::string const&                   price,
        ::IMinecraftEventing::StoreType      storeType,
        ::IMinecraftEventing::PurchaseResult purchaseRes,
        ::PurchasePath                       path
    );

    // symbol:
    // ?fireEventPushNotificationOpened@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void fireEventPushNotificationOpened(std::string const& threadId, std::string const& deepLink);

    // symbol:
    // ?fireEventPushNotificationPermission@MinecraftEventing@@UEAAX_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventPushNotificationPermission(bool permission, std::string const& deviceId);

    // symbol: ?fireEventPushNotificationReceived@MinecraftEventing@@UEAAXAEBVPushNotificationMessage@@@Z
    MCVAPI void fireEventPushNotificationReceived(class PushNotificationMessage const& msg);

    // symbol:
    // ?fireEventQueryPurchasesResult@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCVAPI void fireEventQueryPurchasesResult(std::string const&, int, bool);

    // symbol:
    // ?fireEventRealmDownload@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HHH@Z
    MCVAPI void fireEventRealmDownload(
        std::string const& correlationId,
        std::string const& downloadStage,
        int                errorCode,
        int                realmId,
        int                fileSizeKB
    );

    // symbol: ?fireEventRealmMemberlistCleared@MinecraftEventing@@UEAAXAEBURealmId@Realms@@AEBH@Z
    MCVAPI void fireEventRealmMemberlistCleared(struct Realms::RealmId const& worldId, int const& numberOfUsersRemoved);

    // symbol:
    // ?fireEventRealmShared@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBW4ShareMode@IMinecraftEventing@@AEBURealmId@Realms@@@Z
    MCVAPI void fireEventRealmShared(
        std::string const&                     url,
        ::IMinecraftEventing::ShareMode const& mode,
        struct Realms::RealmId const&          worldId
    );

    // symbol:
    // ?fireEventRealmUpload@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HHH_N@Z
    MCVAPI void fireEventRealmUpload(
        std::string const& correlationId,
        std::string const& uploadStage,
        int                errorCode,
        int                realmId,
        int                fileSizeKB,
        bool               isPack
    );

    // symbol:
    // ?fireEventRealmUrlGenerated@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBURealmId@Realms@@@Z
    MCVAPI void fireEventRealmUrlGenerated(std::string const& url, struct Realms::RealmId const& worldId);

    // symbol:
    // ?fireEventRealmsStoriesOptIn@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00_N@Z
    MCVAPI void fireEventRealmsStoriesOptIn(std::string const&, std::string const&, std::string const&, bool);

    // symbol:
    // ?fireEventRealmsSubscriptionPurchaseFailed@MinecraftEventing@@UEAAXAEBUProductSku@@W4RealmsPurchaseIntent@@W4RealmsPurchaseFailureReason@@@Z
    MCVAPI void fireEventRealmsSubscriptionPurchaseFailed(
        struct ProductSku const&      productSku,
        ::RealmsPurchaseIntent        intent,
        ::RealmsPurchaseFailureReason reason
    );

    // symbol:
    // ?fireEventRealmsSubscriptionPurchaseStarted@MinecraftEventing@@UEAAXAEBUProductSku@@W4RealmsPurchaseIntent@@@Z
    MCVAPI void
    fireEventRealmsSubscriptionPurchaseStarted(struct ProductSku const& productSku, ::RealmsPurchaseIntent intent);

    // symbol:
    // ?fireEventRealmsSubscriptionPurchaseSucceeded@MinecraftEventing@@UEAAXAEBUProductSku@@W4RealmsPurchaseIntent@@@Z
    MCVAPI void
    fireEventRealmsSubscriptionPurchaseSucceeded(struct ProductSku const& productSku, ::RealmsPurchaseIntent intent);

    // symbol: ?fireEventReducerBlockEntered@MinecraftEventing@@UEAAXAEBVItemDescriptor@@@Z
    MCVAPI void fireEventReducerBlockEntered(class ItemDescriptor const& item);

    // symbol: ?fireEventRenderingSizeChanged@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireEventRenderingSizeChanged();

    // symbol: ?fireEventRespawn@MinecraftEventing@@UEAAXAEAVPlayer@@H@Z
    MCVAPI void fireEventRespawn(class Player& player, int dimID);

    // symbol: ?fireEventRespondedToAcceptContent@MinecraftEventing@@UEAAXAEBUPacksInfoData@@_N@Z
    MCVAPI void fireEventRespondedToAcceptContent(struct PacksInfoData const& data, bool accepted);

    // symbol:
    // ?fireEventSafetyHTTPRequest@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0H@Z
    MCVAPI void fireEventSafetyHTTPRequest(std::string const&, std::string const&, int);

    // symbol:
    // ?fireEventScreenChanged@MinecraftEventing@@UEAAXAEBIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@3@@Z
    MCVAPI void fireEventScreenChanged(
        uint const&                                         userId,
        std::string const&                                  screenName,
        std::unordered_map<std::string, std::string> const& additionalProperties
    );

    // symbol:
    // ?fireEventScreenLoaded@MinecraftEventing@@UEAAXAEBIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NNNN@Z
    MCVAPI void fireEventScreenLoaded(
        uint const&        userId,
        std::string const& screenName,
        double             routeChangedTimestamp,
        double             contentfulPaintTimestamp,
        double             meaningfulPaintTimestamp,
        double             longestFrameTimeMs
    );

    // symbol: ?fireEventScriptDebuggerConnect@MinecraftEventing@@UEAAX_N@Z
    MCVAPI void fireEventScriptDebuggerConnect(bool client);

    // symbol: ?fireEventScriptDebuggerListen@MinecraftEventing@@UEAAX_N@Z
    MCVAPI void fireEventScriptDebuggerListen(bool client);

    // symbol: ?fireEventScriptPluginDiscovery@MinecraftEventing@@UEAAXAEBVScriptPluginResult@@_N@Z
    MCVAPI void fireEventScriptPluginDiscovery(class ScriptPluginResult const& pluginResult, bool client);

    // symbol:
    // ?fireEventScriptPluginRun@MinecraftEventing@@UEAAXAEBVScriptPluginResult@@V?$duration@_JU?$ratio@$00$0PECEA@@std@@@chrono@std@@_N@Z
    MCVAPI void fireEventScriptPluginRun(
        class ScriptPluginResult const& pluginResult,
        std::chrono::microseconds       runDuration,
        bool                            client
    );

    // symbol:
    // ?fireEventScriptWatchdog@MinecraftEventing@@UEAAXAEBUScriptWatchdogTelemetry@@AEBUWatchdogSettings@Scripting@@AEBUModuleDescriptor@4@@Z
    MCVAPI void
    fireEventScriptWatchdog(struct ScriptWatchdogTelemetry const&, struct Scripting::WatchdogSettings const&, struct Scripting::ModuleDescriptor const&);

    // symbol: ?fireEventSearchCatalogRequest@MinecraftEventing@@UEAAXAEBVSearchRequestTelemetry@@@Z
    MCVAPI void fireEventSearchCatalogRequest(class SearchRequestTelemetry const& telem);

    // symbol:
    // ?fireEventSearchItemSelected@MinecraftEventing@@UEAAXHHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHH@Z
    MCVAPI void fireEventSearchItemSelected(
        int                correlationId,
        int                sessionId,
        std::string const& productId,
        int                row,
        int                column,
        int                currentPage
    );

    // symbol:
    // ?fireEventServerDrivenLayoutImagesLoaded@MinecraftEventing@@UEAAXAEAVRequestTelemetry@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_KHHHAEAV?$vector@GV?$allocator@G@std@@@4@@Z
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

    // symbol:
    // ?fireEventServerDrivenLayoutPageLoaded@MinecraftEventing@@UEAAXAEAVRequestTelemetry@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHHHH@Z
    MCVAPI void fireEventServerDrivenLayoutPageLoaded(
        class RequestTelemetry& telem,
        std::string             pageID,
        int                     requestSize,
        int                     responseSize,
        int                     rowCount,
        int                     itemCount,
        int                     imageCount
    );

    // symbol:
    // ?fireEventServerPlayerJoinedGame@MinecraftEventing@@UEAAXAEBVNetworkIdentifier@@W4SubClientId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventServerPlayerJoinedGame(class NetworkIdentifier const&, ::SubClientId, std::string const&);

    // symbol: ?fireEventServerRespawnSearchTime@MinecraftEventing@@UEAAXAEAVPlayer@@AEBVPlayerRespawnTelemetryData@@@Z
    MCVAPI void fireEventServerRespawnSearchTime(class Player& player, class PlayerRespawnTelemetryData const& data);

    // symbol:
    // ?fireEventServerShutdownDueToError@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventServerShutdownDueToError(std::string const& reason);

    // symbol:
    // ?fireEventSetMultiplayerCorrelationId@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void fireEventSetMultiplayerCorrelationId(std::string const&, std::string const&);

    // symbol: ?fireEventSetValidForAchievements@MinecraftEventing@@UEAAXPEAVPlayer@@_N@Z
    MCVAPI void fireEventSetValidForAchievements(class Player* player, bool currentlyValidForAchievements);

    // symbol:
    // ?fireEventSidebarNavigation@MinecraftEventing@@UEAAXAEBIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1H_N22@Z
    MCVAPI void fireEventSidebarNavigation(
        uint const&        userId,
        std::string const& layoutType,
        std::string const& telemetryId,
        int                depthLevel,
        bool               isSelected,
        bool               areChildrenVisible,
        bool               hasChildren
    );

    // symbol:
    // ?fireEventSidebarVerboseToggled@MinecraftEventing@@UEAAXAEBIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_N@Z
    MCVAPI void fireEventSidebarVerboseToggled(
        uint const&        userId,
        std::string const& layoutType,
        std::string const& verboseNavigationType,
        bool               verboseState
    );

    // symbol:
    // ?fireEventSignInEdu@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Role@edu@@W4EduSignInStage@Identity@@00AEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@3@@Z
    MCVAPI void fireEventSignInEdu(
        std::string const&                                      mutsUserId,
        ::edu::Role                                             role,
        ::Identity::EduSignInStage                              stage,
        std::string const&                                      tenantType,
        std::string const&                                      error,
        std::vector<std::pair<std::string, std::string>> const& details
    );

    // symbol:
    // ?fireEventSignInToIdentity@MinecraftEventing@@UEAAXW4SignInAccountType@IMinecraftEventing@@W4IdentitySignInTrigger@Social@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NW4SignInStage@3@W4SignInResult@5@HUPlayerIDs@5@2@Z
    MCVAPI void
    fireEventSignInToIdentity(::IMinecraftEventing::SignInAccountType, ::Social::IdentitySignInTrigger, std::string const&, bool, ::IMinecraftEventing::SignInStage, ::Social::SignInResult, int, struct Social::PlayerIDs, std::string const&);

    // symbol:
    // ?fireEventSignOutEdu@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Role@edu@@000@Z
    MCVAPI void
    fireEventSignOutEdu(std::string const&, ::edu::Role, std::string const&, std::string const&, std::string const&);

    // symbol:
    // ?fireEventSignOutOfIdentity@MinecraftEventing@@UEAAXW4SignInAccountType@IMinecraftEventing@@W4IdentitySignInTrigger@Social@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@2@Z
    MCVAPI void fireEventSignOutOfIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        std::string const&                      accountId,
        std::string const&                      errorCode
    );

    // symbol:
    // ?fireEventSignalServiceConnect@MinecraftEventing@@UEAAXW4SignalServiceConnectState@IConnectionEventing@@_NH_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void
    fireEventSignalServiceConnect(::IConnectionEventing::SignalServiceConnectState, bool, int, uint64, std::string const&);

    // symbol: ?fireEventSplitScreenUpdated@MinecraftEventing@@UEAAXAEBVIClientInstance@@@Z
    MCVAPI void fireEventSplitScreenUpdated(class IClientInstance const& client);

    // symbol: ?fireEventStackLoaded@MinecraftEventing@@UEAAXAEBUStackStats@@@Z
    MCVAPI void fireEventStackLoaded(struct StackStats const& stats);

    // symbol:
    // ?fireEventStartClient@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventStartClient(std::string const& ipAddress);

    // symbol:
    // ?fireEventStartWorld@MinecraftEventing@@UEAAXW4NetworkType@IMinecraftEventing@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MultiplayerServiceIdentifier@Social@@@Z
    MCVAPI void fireEventStartWorld(
        ::IMinecraftEventing::NetworkType      networkType,
        std::string const&                     ipAddress,
        ::Social::MultiplayerServiceIdentifier friendWorldType
    );

    // symbol:
    // ?fireEventStartupPerformance@MinecraftEventing@@UEAAXAEBV?$vector@USerialWorkListLogEntry@@V?$allocator@USerialWorkListLogEntry@@@std@@@std@@00@Z
    MCVAPI void
    fireEventStartupPerformance(std::vector<struct SerialWorkListLogEntry> const&, std::vector<struct SerialWorkListLogEntry> const&, std::vector<struct SerialWorkListLogEntry> const&);

    // symbol:
    // ?fireEventStorage@MinecraftEventing@@UEAAXHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventStorage(int state, std::string const& extra);

    // symbol:
    // ?fireEventStorageAreaFull@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@UDirectoryEntry@Bedrock@@V?$allocator@UDirectoryEntry@Bedrock@@@std@@@3@@Z
    MCVAPI void fireEventStorageAreaFull(
        std::string const&                                 areaPath,
        std::vector<struct Bedrock::DirectoryEntry> const& diskSizeData
    );

    // symbol:
    // ?fireEventStorageReport@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventStorageReport(std::string const& report);

    // symbol: ?fireEventStoreDiscoveryRequestResponse@MinecraftEventing@@UEAAXHH@Z
    MCVAPI void fireEventStoreDiscoveryRequestResponse(int status, int retryAttempt);

    // symbol:
    // ?fireEventStoreErrorPage@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void fireEventStoreErrorPage(std::string const& errorCode, std::string const& pageId);

    // symbol: ?fireEventStoreLocalizationBinaryFetchResponse@MinecraftEventing@@UEAAXHI@Z
    MCVAPI void fireEventStoreLocalizationBinaryFetchResponse(int status, uint currentFetchAttempt);

    // symbol: ?fireEventStoreOfferClicked@MinecraftEventing@@UEAAXAEBVStoreOfferClickedData@eventData@Social@@@Z
    MCVAPI void fireEventStoreOfferClicked(class Social::eventData::StoreOfferClickedData const&);

    // symbol:
    // ?fireEventStoreOfferClicked@MinecraftEventing@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    MCVAPI void fireEventStoreOfferClicked(std::string, std::string const&);

    // symbol: ?fireEventStorePlayFabRequestResponse@MinecraftEventing@@UEAAXG@Z
    MCVAPI void fireEventStorePlayFabRequestResponse(ushort status);

    // symbol:
    // ?fireEventStorePromotionNotification@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventStorePromotionNotification(std::string const& productId);

    // symbol: ?fireEventStoreSearch@MinecraftEventing@@UEAAXAEBUTelemetryData@storeSearch@@@Z
    MCVAPI void fireEventStoreSearch(struct storeSearch::TelemetryData const& telemetryData);

    // symbol:
    // ?fireEventStoreSessionResponse@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z
    MCVAPI void fireEventStoreSessionResponse(std::string const& responseType, int status, int retryCount);

    // symbol:
    // ?fireEventStructureExport@MinecraftEventing@@UEBAXAEBUglTFExportData@@W4ExportOutcome@IMinecraftEventing@@W4ExportStage@4@@Z
    MCVAPI void fireEventStructureExport(
        struct glTFExportData const&        exportData,
        ::IMinecraftEventing::ExportOutcome outcome,
        ::IMinecraftEventing::ExportStage   stage
    ) const;

    // symbol:
    // ?fireEventSwitchAccountEdu@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Role@edu@@0@Z
    MCVAPI void
    fireEventSwitchAccountEdu(std::string const& mutsUserId, ::edu::Role role, std::string const& tenantType);

    // symbol:
    // ?fireEventTagButtonPressed@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCVAPI void fireEventTagButtonPressed(std::string const& tag, bool showMore) const;

    // symbol:
    // ?fireEventTextProcessorStartupFailed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z
    MCVAPI void fireEventTextProcessorStartupFailed(std::string const&, int, int);

    // symbol:
    // ?fireEventTrackDeeplinks@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void fireEventTrackDeeplinks(std::string const&, std::string const&);

    // symbol: ?fireEventTreatmentPackApplied@MinecraftEventing@@UEAAXAEBVPackManifest@@@Z
    MCVAPI void fireEventTreatmentPackApplied(class PackManifest const& manifest);

    // symbol:
    // ?fireEventTreatmentPackDownloadFailed@MinecraftEventing@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    MCVAPI void fireEventTreatmentPackDownloadFailed(
        std::string productId,
        std::string packId,
        std::string versionNumber,
        std::string requiredTreatmentTag
    );

    // symbol:
    // ?fireEventTreatmentPackDownloaded@MinecraftEventing@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    MCVAPI void fireEventTreatmentPackDownloaded(
        std::string productId,
        std::string packId,
        std::string versionNumber,
        std::string requiredTreatmentTag
    );

    // symbol:
    // ?fireEventTreatmentPackRemoved@MinecraftEventing@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventTreatmentPackRemoved(std::string packId);

    // symbol: ?fireEventTreatmentsCleared@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireEventTreatmentsCleared();

    // symbol:
    // ?fireEventTreatmentsSet@MinecraftEventing@@UEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI void fireEventTreatmentsSet(std::vector<std::string> const& treatments);

    // symbol:
    // ?fireEventTrialDeviceIdCorrelation@MinecraftEventing@@UEAAX_JAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@01@Z
    MCVAPI void fireEventTrialDeviceIdCorrelation(
        int64              myTime,
        std::string const& theirId,
        int64              theirTime,
        std::string const& theirLastSessionId
    );

    // symbol:
    // ?fireEventUgcAcquisitionStateChanged@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KN_NH2H00H@Z
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

    // symbol: ?fireEventUnfulfilledPurchaseFound@MinecraftEventing@@UEAAXAEAUPlatformOfferPurchaseDetails@@@Z
    MCVAPI void fireEventUnfulfilledPurchaseFound(struct PlatformOfferPurchaseDetails&);

    // symbol: ?fireEventUnknownBlockReceived@MinecraftEventing@@UEAAXAEBUNewBlockID@@G@Z
    MCVAPI void fireEventUnknownBlockReceived(struct NewBlockID const& blockId, ushort data);

    // symbol:
    // ?fireEventUserListUpdated@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00_N@Z
    MCVAPI void fireEventUserListUpdated(
        std::string const& productId,
        std::string const& listId,
        std::string const& operation,
        bool               success
    );

    // symbol:
    // ?fireEventUwpToGdkMigrationComplete@MinecraftEventing@@UEAAXAEBUDeviceIdContext@Bedrock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireEventUwpToGdkMigrationComplete(
        struct Bedrock::DeviceIdContext const& deviceIdContext,
        std::string const&                     gdkDeviceId
    );

    // symbol: ?fireEventVRModeChanged@MinecraftEventing@@UEAAX_N@Z
    MCVAPI void fireEventVRModeChanged(bool isVRModeEnabled);

    // symbol: ?fireEventVehiclePositionComparisonFailed@MinecraftEventing@@UEAAXAEBVVec3@@0@Z
    MCVAPI void fireEventVehiclePositionComparisonFailed(class Vec3 const&, class Vec3 const&);

    // symbol:
    // ?fireEventVideoPlayed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void fireEventVideoPlayed(std::string const& productId, std::string const& videoUrl);

    // symbol:
    // ?fireEventWebviewDownload@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUWebviewDownloadInfo@@@Z
    MCVAPI void
    fireEventWebviewDownload(std::string const& downloadState, struct WebviewDownloadInfo const& downloadInfo) const;

    // symbol:
    // ?fireEventWorldCorruptionCausedWorldShutdown@MinecraftEventing@@UEAAXAEBULevelStorageEventingContext@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@_N@4@@Z
    MCVAPI void fireEventWorldCorruptionCausedWorldShutdown(
        struct LevelStorageEventingContext const& context,
        std::string const&                        reason,
        std::optional<bool>                       isOutOfDiskSpace
    );

    // symbol: ?fireEventWorldExported@MinecraftEventing@@UEAAX_J_K@Z
    MCVAPI void fireEventWorldExported(int64 worldSeed, uint64 worldSize);

    // symbol: ?fireEventWorldFilesListed@MinecraftEventing@@UEAAX_K000@Z
    MCVAPI void
    fireEventWorldFilesListed(uint64 numLevels, uint64 totalSizeMB, uint64 largestLevelMB, uint64 smallestLevelMB);

    // symbol:
    // ?fireEventWorldGenerated@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelSettings@@_N@Z
    MCVAPI void
    fireEventWorldGenerated(std::string const& levelId, class LevelSettings const& levelSettings, bool fromTemplate);

    // symbol:
    // ?fireEventWorldHistoryPackSourceMissingDuringUpgrade@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    MCVAPI void fireEventWorldHistoryPackSourceMissingDuringUpgrade(
        std::string const& worldPath,
        std::string const& levelId,
        std::string const& deletionCandidate
    );

    // symbol: ?fireEventWorldImported@MinecraftEventing@@UEAAX_J_K@Z
    MCVAPI void fireEventWorldImported(int64 worldSeed, uint64 worldSize);

    // symbol: ?fireEventWorldImportedResult@MinecraftEventing@@UEAAXW4FileArchiverOutcome@@@Z
    MCVAPI void fireEventWorldImportedResult(::FileArchiverOutcome);

    // symbol:
    // ?fireEventWorldLoaded@MinecraftEventing@@UEAAXPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_N@Z
    MCVAPI void fireEventWorldLoaded(
        class Player*      player,
        std::string const& personaSlot,
        std::string const& classicSkinId,
        bool               usingClassicSkin
    );

    // symbol:
    // ?fireEventWorldLoadedClassroomCustomization@MinecraftEventing@@UEAAXW4WorldClassroomCustomization@IMinecraftEventing@@V?$buffer_span@U?$pair@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V12@@std@@@@@Z
    MCVAPI void fireEventWorldLoadedClassroomCustomization(
        ::IMinecraftEventing::WorldClassroomCustomization                customization,
        class buffer_span<std::pair<std::string_view, std::string_view>> details
    );

    // symbol:
    // ?fireExternalUriLaunched@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireExternalUriLaunched(std::string const& uri) const;

    // symbol: ?fireGlobalResourcePackCrashRecovery@MinecraftEventing@@UEAAXAEAVPackInstance@@VUUID@mce@@H@Z
    MCVAPI void
    fireGlobalResourcePackCrashRecovery(class PackInstance& packInstance, class mce::UUID recoveryID, int order);

    // symbol:
    // ?fireHostClientTransportSettingSync@MinecraftEventing@@UEAAXW4TransportLayer@@0AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@11_K_N@Z
    MCVAPI void fireHostClientTransportSettingSync(
        ::TransportLayer   hostTransportType,
        ::TransportLayer   clientTransportType,
        std::string const& creatorName,
        std::string const& serverAddress,
        std::string const& rakNetGUID,
        uint64             webRTCNetworkId,
        bool               clientSwitchRequired
    );

    // symbol:
    // ?fireIDESelected@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireIDESelected(std::string const& name) const;

    // symbol:
    // ?fireIgnoredNotificationsEvent@MinecraftEventing@@UEAAXW4IgnoredNotificationsType@IMinecraftEventing@@HV?$set@W4IgnoredNotificationSource@IMinecraftEventing@@U?$less@W4IgnoredNotificationSource@IMinecraftEventing@@@std@@V?$allocator@W4IgnoredNotificationSource@IMinecraftEventing@@@4@@std@@@Z
    MCVAPI void fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType            notificationType,
        int                                                       notificationCount,
        std::set<::IMinecraftEventing::IgnoredNotificationSource> notificationSources
    );

    // symbol:
    // ?fireInAppCodeBuilderActivated@MinecraftEventing@@UEBAXW4OpenCodeMethod@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireInAppCodeBuilderActivated(::OpenCodeMethod method, std::string const& ideName) const;

    // symbol:
    // ?fireInAppCodeBuilderDismissed@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireInAppCodeBuilderDismissed(std::string const& ideName) const;

    // symbol:
    // ?fireInviteStatusReceived@MinecraftEventing@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireInviteStatusReceived(std::string id);

    // symbol:
    // ?fireInviteStatusSentImpl@MinecraftEventing@@UEAAXIV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI void fireInviteStatusSentImpl(uint userId, std::vector<std::string> invitationIds);

    // symbol:
    // ?fireLessonActionTaken@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00W4EducationLessonAction@IMinecraftEventing@@H@Z
    MCVAPI void fireLessonActionTaken(
        std::string const&                          lessonTitle,
        std::string const&                          lessonId,
        std::string const&                          courseId,
        ::IMinecraftEventing::EducationLessonAction buttonAction,
        int                                         score
    );

    // symbol:
    // ?fireLessonCompleteDialogOpened@MinecraftEventing@@UEBAXW4LessonCompleteDialogEntryPoint@IMinecraftEventing@@@Z
    MCVAPI void fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint entryPoint) const;

    // symbol:
    // ?fireLessonProgressEvent@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0000H@Z
    MCVAPI void fireLessonProgressEvent(
        std::string const& lessonTitle,
        std::string const& lessonId,
        std::string const& courseId,
        std::string const& activityId,
        std::string const& action,
        int                score
    );

    // symbol:
    // ?fireLibraryButtonPressed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    MCVAPI void fireLibraryButtonPressed(
        std::string const& productId,
        std::string const& worldName,
        std::string const& buttonAction
    );

    // symbol: ?fireMinecraftVersionInviteAccepted@MinecraftEventing@@UEAAX_N_K@Z
    MCVAPI void fireMinecraftVersionInviteAccepted(bool launchedLegacy, uint64 inviteGameOwner);

    // symbol: ?fireMinecraftVersionLaunched@MinecraftEventing@@UEAAX_N@Z
    MCVAPI void fireMinecraftVersionLaunched(bool launchedLegacy);

    // symbol:
    // ?fireNetworkChangedEvent@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireNetworkChangedEvent(std::string const& networkConnectionType);

    // symbol: ?firePackSettingsEvent@MinecraftEventing@@UEAAXAEBVPackSettings@@AEBVPackManifest@@@Z
    MCVAPI void firePackSettingsEvent(class PackSettings const& packSettings, class PackManifest const& manifest);

    // symbol:
    // ?firePassthroughTextProcessEvent@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4TextProcessingEventOrigin@@0@Z
    MCVAPI void firePassthroughTextProcessEvent(std::string const&, ::TextProcessingEventOrigin, std::string const&);

    // symbol:
    // ?firePerfTestEvent@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00II0AEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@2@@3@@Z
    MCVAPI void firePerfTestEvent(
        std::string const&                                testArtifact,
        std::string const&                                modelName,
        std::string const&                                renderSize,
        uint                                              renderDistance,
        uint                                              simDistance,
        std::string const&                                memorySize,
        std::vector<std::pair<std::string, float>> const& testArtifactData
    );

    // symbol: ?firePermissionsSetEvent@MinecraftEventing@@UEAAXW4PlayerPermissionLevel@@W4CommandPermissionLevel@@01@Z
    MCVAPI void firePermissionsSetEvent(
        ::PlayerPermissionLevel  prevPlayerPermissionLevel,
        ::CommandPermissionLevel prevCommandPermissionLevel,
        ::PlayerPermissionLevel  playerPermissionLevel,
        ::CommandPermissionLevel commandPermissionLevel
    );

    // symbol: ?firePlayerAccountMetadata@MinecraftEventing@@UEAAXUPermissionCheckResult@Social@@00000_N1@Z
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

    // symbol: ?firePlayerUnexpectedFallDamage@MinecraftEventing@@UEAAXM_NM@Z
    MCVAPI void firePlayerUnexpectedFallDamage(float, bool, float);

    // symbol:
    // ?fireQueryOfferResult@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCVAPI void fireQueryOfferResult(std::string const& storeID, int NumberOfOffers, bool QuerySucceeded);

    // symbol: ?fireQuickPlayEvent@MinecraftEventing@@UEAAXXZ
    MCVAPI void fireQuickPlayEvent();

    // symbol:
    // ?fireRealmConnectionEventGenericLambdaCalled@MinecraftEventing@@UEAAXW4RealmConnectionFlow@IMinecraftEventing@@W4RealmConnectionLambda@3@W4RealmConnectionResult@3@@Z
    MCVAPI void fireRealmConnectionEventGenericLambdaCalled(
        ::IMinecraftEventing::RealmConnectionFlow   realmConnectionFlow,
        ::IMinecraftEventing::RealmConnectionLambda realmConnectionLambda,
        ::IMinecraftEventing::RealmConnectionResult realmConnectionResult
    );

    // symbol:
    // ?fireRealmConnectionEventRealmAPIRequest@MinecraftEventing@@UEAAXW4RealmConnectionFlow@IMinecraftEventing@@@Z
    MCVAPI void fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow);

    // symbol:
    // ?fireRealmConnectionEventRealmAPIResponse@MinecraftEventing@@UEAAXW4RealmConnectionFlow@IMinecraftEventing@@H@Z
    MCVAPI void fireRealmConnectionEventRealmAPIResponse(
        ::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow,
        int                                       responseCode
    );

    // symbol: ?fireRealmConnectionEventStart@MinecraftEventing@@UEAAXW4RealmConnectionFlow@IMinecraftEventing@@@Z
    MCVAPI void fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow);

    // symbol:
    // ?fireSafetyServiceTextProcessEvent@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4TextProcessingEventOrigin@@G0_NNDDAEBVValue@Json@@02@Z
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

    // symbol:
    // ?fireScreenLoadTimeUpdateEvent@MinecraftEventing@@UEAAXAEBIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@3@1@Z
    MCVAPI void fireScreenLoadTimeUpdateEvent(
        uint const&              userId,
        std::string const&       screenName,
        std::chrono::nanoseconds duration,
        std::string const&       loadInstanceId
    );

    // symbol:
    // ?fireServerConnectionAttemptEvent@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N0@Z
    MCVAPI void
    fireServerConnectionAttemptEvent(std::string const& creatorName, bool isTransfer, std::string const& serverAddress);

    // symbol:
    // ?fireServerConnectionEvent@MinecraftEventing@@UEAAXW4ServerConnectionOutcome@IConnectionEventing@@INAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCVAPI void
    fireServerConnectionEvent(::IConnectionEventing::ServerConnectionOutcome, uint, double, std::string const&, std::string const&);

    // symbol:
    // ?fireServerShutdown@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireServerShutdown(std::string const& serverId);

    // symbol:
    // ?fireServerStarted@MinecraftEventing@@UEAAXW4ServerType@IMinecraftEventing@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@5@@Z
    MCVAPI void
    fireServerStarted(::IMinecraftEventing::ServerType, std::string const&, std::unordered_map<std::string, std::string> const&);

    // symbol:
    // ?fireShareButtonPressed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4EduShareUriType@@W4EduShareMethodType@@_N@Z
    MCVAPI void fireShareButtonPressed(
        std::string const&   location,
        ::EduShareUriType    shareType,
        ::EduShareMethodType methodType,
        bool                 includesResource
    );

    // symbol:
    // ?fireStorageMigrationEvent@MinecraftEventing@@UEAAX_NW4StorageMigrationType@StorageMigration@Bedrock@@HHV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@7@@Z
    MCVAPI void fireStorageMigrationEvent(
        bool                                              isSuccessful,
        ::Bedrock::StorageMigration::StorageMigrationType migrationType,
        int                                               numFilesMigrated,
        int                                               numFilesTotal,
        std::chrono::nanoseconds                          duration,
        std::string const&                                failureReason
    );

    // symbol:
    // ?fireStructureBlockAction@MinecraftEventing@@UEAAXW4StructureBlockActionType@IMinecraftEventing@@AEBVStructureEditorData@@PEBVStructureTelemetryClientData@@@Z
    MCVAPI void fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        class StructureEditorData const&               structureEditorData,
        class StructureTelemetryClientData const*      telemetryClientData
    );

    // symbol:
    // ?fireStructureBlockRedstoneActivated@MinecraftEventing@@UEAAXW4StructureBlockActionType@IMinecraftEventing@@AEBVStructureEditorData@@PEBVStructureTelemetryClientData@@@Z
    MCVAPI void fireStructureBlockRedstoneActivated(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        class StructureEditorData const&               structureEditorData,
        class StructureTelemetryClientData const*      telemetryClientData
    );

    // symbol: ?fireTextToSpeechToggled@MinecraftEventing@@UEAAX_N0@Z
    MCVAPI void fireTextToSpeechToggled(bool uiTTS, bool chatTTS);

    // symbol:
    // ?fireUserGeneratedUriLaunchFailed@MinecraftEventing@@UEBAXW4UserGeneratedUriSource@@W4ValidationStatus@ResourceUri@Util@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireUserGeneratedUriLaunchFailed(
        ::UserGeneratedUriSource              source,
        ::Util::ResourceUri::ValidationStatus reasonCode,
        std::string const&                    additionalData
    ) const;

    // symbol: ?fireUserGeneratedUriLaunched@MinecraftEventing@@UEBAXW4UserGeneratedUriSource@@@Z
    MCVAPI void fireUserGeneratedUriLaunched(::UserGeneratedUriSource source) const;

    // symbol: ?fireWorldConversionAttemptEvent@MinecraftEventing@@UEAAXAEBUWorldConversionReport@Legacy@@@Z
    MCVAPI void fireWorldConversionAttemptEvent(struct Legacy::WorldConversionReport const& report);

    // symbol:
    // ?fireWorldConversionInitiatedEvent@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void fireWorldConversionInitiatedEvent(std::string const& converterVersion);

    // symbol: ?fireWorldRecoveryTelemetryEvent@MinecraftEventing@@UEAAXAEBUWorldRecoveryTelemetryEvent@Bedrock@@@Z
    MCVAPI void fireWorldRecoveryTelemetryEvent(struct Bedrock::WorldRecoveryTelemetryEvent const& data);

    // symbol:
    // ?fireWorldUpgradedToCnCPart2@MinecraftEventing@@UEAAX_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVExperiments@@1VLevelSeed64@@M@Z
    MCVAPI void fireWorldUpgradedToCnCPart2(
        bool                     willUpgrade,
        std::string const&       baseGameVersion,
        class Experiments const& experiments,
        std::string const&       lastOpenedVersion,
        class LevelSeed64        worldSeed,
        float                    worldSizeMB
    );

    // symbol: ?flagEventDeepLink@MinecraftEventing@@UEAAXXZ
    MCVAPI void flagEventDeepLink();

    // symbol: ?flagEventPlayerGameTypeDefault@MinecraftEventing@@UEAAX_N@Z
    MCVAPI void flagEventPlayerGameTypeDefault(bool isDefault);

    // symbol: ?forceSendEvents@MinecraftEventing@@UEAAXXZ
    MCVAPI void forceSendEvents();

    // symbol: ?getAchievementsAlwaysEnabled@MinecraftEventing@@EEAA_NXZ
    MCVAPI bool getAchievementsAlwaysEnabled();

    // symbol:
    // ?getCrashTelemetryProcessor@MinecraftEventing@@UEAA?AV?$not_null@PEAVCrashTelemetryProcessor@Bedrock@@@gsl@@XZ
    MCVAPI gsl::not_null<class Bedrock::CrashTelemetryProcessor*> getCrashTelemetryProcessor();

    // symbol: ?getEventManager@MinecraftEventing@@EEBAAEAVEventManager@Events@Social@@XZ
    MCVAPI class Social::Events::EventManager& getEventManager() const;

    // symbol:
    // ?getPlayerSessionId@MinecraftEventing@@UEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string const& getPlayerSessionId();

    // symbol: ?getPrimaryLocalUserId@MinecraftEventing@@EEBAIXZ
    MCVAPI uint getPrimaryLocalUserId() const;

    // symbol: ?getSessionId@MinecraftEventing@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getSessionId();

    // symbol: ?getShouldHaveAchievementsEnabled@MinecraftEventing@@EEAA_NXZ
    MCVAPI bool getShouldHaveAchievementsEnabled();

    // symbol:
    // ?init@MinecraftEventing@@UEAAXAEBV?$not_null@V?$NonOwnerPointer@VIUserManager@Social@@@Bedrock@@@gsl@@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
    MCVAPI void init(
        Bedrock::NotNullNonOwnerPtr<class Social::IUserManager> const& userManager,
        class Bedrock::NonOwnerPointer<class AppPlatform> const&       appPlatform
    );

    // symbol: ?initDeviceAndSessionIds@MinecraftEventing@@UEAAXXZ
    MCVAPI void initDeviceAndSessionIds();

    // symbol: ?prepEventSearchCatalogRequest@MinecraftEventing@@UEAAXAEBVSearchRequestTelemetry@@@Z
    MCVAPI void prepEventSearchCatalogRequest(class SearchRequestTelemetry const& telem);

    // symbol: ?propertiesAsJsonValue@MinecraftEventing@@UEBA?AVValue@Json@@XZ
    MCVAPI class Json::Value propertiesAsJsonValue() const;

    // symbol: ?registerOptionsObserver@MinecraftEventing@@UEAAXV?$shared_ptr@VOptions@@@std@@@Z
    MCVAPI void registerOptionsObserver(std::shared_ptr<class Options> options);

    // symbol: ?registerSecondaryUserCommonProperties@MinecraftEventing@@UEBAXAEBIAEAVIdentity@Social@@@Z
    MCVAPI void registerSecondaryUserCommonProperties(uint const&, class Social::Identity&) const;

    // symbol: ?removeTestBuildIdTag@MinecraftEventing@@UEAAXXZ
    MCVAPI void removeTestBuildIdTag();

    // symbol: ?removeTestTelemetryTag@MinecraftEventing@@UEAAXXZ
    MCVAPI void removeTestTelemetryTag();

    // symbol: ?requestEventDeferment@MinecraftEventing@@UEAA?AV?$shared_ptr@PEAX@std@@XZ
    MCVAPI std::shared_ptr<void*> requestEventDeferment();

    // symbol: ?sendBatchedCrashTelemetry@MinecraftEventing@@UEAAXXZ
    MCVAPI void sendBatchedCrashTelemetry();

    // symbol: ?sendCrashStatusTelemetry@MinecraftEventing@@UEAAXAEBUCrashUploadStatus@Bedrock@@@Z
    MCVAPI void sendCrashStatusTelemetry(struct Bedrock::CrashUploadStatus const& status);

    // symbol: ?sendCrashTelemetryNow@MinecraftEventing@@UEAAXV?$shared_ptr@VSessionInfo@Bedrock@@@std@@@Z
    MCVAPI void sendCrashTelemetryNow(std::shared_ptr<class Bedrock::SessionInfo> session);

    // symbol: ?setShouldHaveAchievementsEnabled@MinecraftEventing@@EEAAX_N@Z
    MCVAPI void setShouldHaveAchievementsEnabled(bool value);

    // symbol: ?setTestBuildIdTag@MinecraftEventing@@UEAAXPEBD@Z
    MCVAPI void setTestBuildIdTag(char const* id);

    // symbol: ?setTestTelemetryTag@MinecraftEventing@@UEAAXPEBD@Z
    MCVAPI void setTestTelemetryTag(char const* name);

    // symbol: ?shutdown@MinecraftEventing@@UEAAXXZ
    MCVAPI void shutdown();

    // symbol: ?stopDebugEventLoggingForAllListeners@MinecraftEventing@@UEAAXXZ
    MCVAPI void stopDebugEventLoggingForAllListeners();

    // symbol: ?tick@MinecraftEventing@@UEAAXXZ
    MCVAPI void tick();

    // symbol:
    // ?tryFireEventProgressLoadTimes@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@2@@3@@Z
    MCVAPI void tryFireEventProgressLoadTimes(
        std::string const&                         calledFromScreen,
        std::vector<std::pair<std::string, float>> progressHandlerLoadTimes
    );

    // symbol: ?unregisterSecondaryUserCommonProperties@MinecraftEventing@@UEBAXAEBI@Z
    MCVAPI void unregisterSecondaryUserCommonProperties(uint const&) const;

    // symbol: ?updateEditionType@MinecraftEventing@@UEAAXXZ
    MCVAPI void updateEditionType();

    // symbol: ?updateIsLegacyPlayer@MinecraftEventing@@UEAAX_N@Z
    MCVAPI void updateIsLegacyPlayer(bool isLegacyPlayer);

    // symbol: ?updateIsTrial@MinecraftEventing@@UEBAX_N@Z
    MCVAPI void updateIsTrial(bool isTrial) const;

    // symbol: ?updatePlayerUndergroundStatus@MinecraftEventing@@UEAAXPEAVPlayer@@_N@Z
    MCVAPI void updatePlayerUndergroundStatus(class Player* player, bool isUnderground);

    // symbol: ?updatePrimaryLocalUserId@MinecraftEventing@@UEAAXAEBI@Z
    MCVAPI void updatePrimaryLocalUserId(uint const& userId);

    // symbol: ??1MinecraftEventing@@UEAA@XZ
    MCVAPI ~MinecraftEventing();

    // symbol: ??0MinecraftEventing@@QEAA@AEBVPath@Core@@@Z
    MCAPI explicit MinecraftEventing(class Core::Path const& logFileDir);

    // symbol: ?init@MinecraftEventing@@QEAAXAEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
    MCAPI void init(class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform);

    // symbol: ?initForDedicatedServer@MinecraftEventing@@QEAAXAEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@_N@Z
    MCAPI void initForDedicatedServer(class Bedrock::NonOwnerPointer<class AppPlatform> const&, bool);

    // symbol: ?fireEventAwardAchievement@MinecraftEventing@@SAXPEAVPlayer@@W4AchievementIds@1@@Z
    MCAPI static void
    fireEventAwardAchievement(class Player* player, ::MinecraftEventing::AchievementIds achievementId);

    // symbol:
    // ?fireEventBehaviorErrored@MinecraftEventing@@SAXPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static void fireEventBehaviorErrored(class Player* player, std::string const& errorMessage);

    // symbol:
    // ?fireEventBehaviorFailed@MinecraftEventing@@SAXPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static void fireEventBehaviorFailed(class Player* player, std::string const& failureMessage);

    // symbol:
    // ?fireEventBellBlockUsed@MinecraftEventing@@SAXPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static void fireEventBellBlockUsed(class Player* player, std::string const& itemUsed);

    // symbol: ?fireEventBlockBroken@MinecraftEventing@@SAXPEAVPlayer@@AEBVBlock@@W4BlockPlacementMethod@1@H@Z
    MCAPI static void fireEventBlockBroken(
        class Player*                             player,
        class Block const&                        destroyedBlock,
        ::MinecraftEventing::BlockPlacementMethod method,
        int                                       variantData
    );

    // symbol: ?fireEventBlockFound@MinecraftEventing@@SAXPEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI static void fireEventBlockFound(class Player* player, class BlockPos const& blockPos);

    // symbol:
    // ?fireEventCampfireBlockUsed@MinecraftEventing@@SAXPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4POIBlockInteractionType@1@@Z
    MCAPI static void fireEventCampfireBlockUsed(
        class Player*                                player,
        std::string const&                           itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

    // symbol: ?fireEventCaravanChanged@MinecraftEventing@@SAXAEAVMob@@H@Z
    MCAPI static void fireEventCaravanChanged(class Mob& mob, int caravanSize);

    // symbol: ?fireEventItemUsed@MinecraftEventing@@SAXPEAVPlayer@@AEBVItemDescriptor@@W4ItemUseMethod@@@Z
    MCAPI static void
    fireEventItemUsed(class Player* player, class ItemDescriptor const& item, ::ItemUseMethod useMethod);

    // symbol:
    // ?fireEventJukeboxUsed@MinecraftEventing@@SAXPEAVPlayer@@AEBVItemDescriptor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static void
    fireEventJukeboxUsed(class Player* player, class ItemDescriptor const& disc, std::string const& biome);

    // symbol: ?fireEventMobDied@MinecraftEventing@@SAXAEAVMob@@H@Z
    MCAPI static void fireEventMobDied(class Mob&, int);

    // symbol: ?fireEventMobEffectChanged@MinecraftEventing@@SAXAEAVMob@@AEBVMobEffectInstance@@W4ChangeType@1@@Z
    MCAPI static void fireEventMobEffectChanged(
        class Mob&                      mob,
        class MobEffectInstance const&  effectInstance,
        ::MinecraftEventing::ChangeType change
    );

    // symbol: ?fireEventMobTeleportedToOwner@MinecraftEventing@@SAXAEAVMob@@@Z
    MCAPI static void fireEventMobTeleportedToOwner(class Mob&);

    // symbol: ?fireEventPlayerTeleported@MinecraftEventing@@SAXPEAVPlayer@@MW4TeleportationCause@1@H@Z
    MCAPI static void fireEventPlayerTeleported(
        class Player*                           player,
        float                                   metersTravelled,
        ::MinecraftEventing::TeleportationCause cause,
        int                                     sourceType
    );

    // symbol: ?fireEventPlayerTransform@MinecraftEventing@@SAXAEAVPlayer@@@Z
    MCAPI static void fireEventPlayerTransform(class Player& player);

    // symbol:
    // ?fireEventSlashCommandExecuted@MinecraftEventing@@SAXPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH1@Z
    MCAPI static void fireEventSlashCommandExecuted(
        class Player*      player,
        std::string const& commandName,
        int                successCount,
        int                errorCount,
        std::string const& errorList
    );

    // symbol: ?fireEventWolfArmorDamageValueChanged@MinecraftEventing@@SAXAEAVActor@@AEBVItemDescriptor@@HH@Z
    MCAPI static void fireEventWolfArmorDamageValueChanged(class Actor&, class ItemDescriptor const&, int, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_fireStructureBlockAction@MinecraftEventing@@AEAAXW4StructureBlockActionType@IMinecraftEventing@@AEBVStructureEditorData@@_NPEBVStructureTelemetryClientData@@@Z
    MCAPI void _fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        class StructureEditorData const&               structureEditorData,
        bool                                           redstoneActivated,
        class StructureTelemetryClientData const*      telemetryClientData
    );

    // symbol: ?_generateWorldSessionId@MinecraftEventing@@AEAAXXZ
    MCAPI void _generateWorldSessionId();

    // symbol: ?_sendTelemetryHeartbeat@MinecraftEventing@@AEAAXPEBD@Z
    MCAPI void _sendTelemetryHeartbeat(char const* trigger);

    // symbol:
    // ?fireEventPlayerMessage@MinecraftEventing@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    MCAPI void fireEventPlayerMessage(
        std::string const& fromName,
        std::string const& toName,
        std::string const& message,
        std::string const& messageType
    );

    // symbol: ?firePlayerTelemetryEvent@MinecraftEventing@@AEAAXAEBVPlayerTelemetry@Events@Social@@@Z
    MCAPI void firePlayerTelemetryEvent(class Social::Events::PlayerTelemetry const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mAchievementEventing@MinecraftEventing@@0V?$unique_ptr@VAchievementEventing@Events@Social@@U?$default_delete@VAchievementEventing@Events@Social@@@std@@@std@@A
    MCAPI static std::unique_ptr<class Social::Events::AchievementEventing> mAchievementEventing;

    // symbol:
    // ?mAcquisitionMethodMap@MinecraftEventing@@0V?$unordered_map@W4ItemAcquisitionMethod@@W4AcquisitionMethod@MinecraftEventing@@U?$hash@W4ItemAcquisitionMethod@@@std@@U?$equal_to@W4ItemAcquisitionMethod@@@5@V?$allocator@U?$pair@$$CBW4ItemAcquisitionMethod@@W4AcquisitionMethod@MinecraftEventing@@@std@@@5@@std@@B
    MCAPI static std::unordered_map<::ItemAcquisitionMethod, ::MinecraftEventing::AcquisitionMethod> const
        mAcquisitionMethodMap;

    // symbol:
    // ?mCachedUUIDs@MinecraftEventing@@0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@std@@A
    MCAPI static std::map<std::string, int> mCachedUUIDs;

    // symbol:
    // ?mPlayerTelemetry@MinecraftEventing@@0V?$unordered_map@IVPlayerTelemetry@Events@Social@@U?$hash@I@std@@U?$equal_to@I@5@V?$allocator@U?$pair@$$CBIVPlayerTelemetry@Events@Social@@@std@@@5@@std@@A
    MCAPI static std::unordered_map<uint, class Social::Events::PlayerTelemetry> mPlayerTelemetry;

    // symbol: ?mRealtimeRoute@MinecraftEventing@@0VRealtimeRoute@Events@Social@@A
    MCAPI static class Social::Events::RealtimeRoute mRealtimeRoute;

    // symbol: ?mScreenFlow@MinecraftEventing@@0VScreenFlow@Events@Social@@A
    MCAPI static class Social::Events::ScreenFlow mScreenFlow;

    // symbol:
    // ?mUseMethodMap@MinecraftEventing@@0V?$unordered_map@W4ItemUseMethod@@W4UseMethod@MinecraftEventing@@U?$hash@W4ItemUseMethod@@@std@@U?$equal_to@W4ItemUseMethod@@@5@V?$allocator@U?$pair@$$CBW4ItemUseMethod@@W4UseMethod@MinecraftEventing@@@std@@@5@@std@@B
    MCAPI static std::unordered_map<::ItemUseMethod, ::MinecraftEventing::UseMethod> const mUseMethodMap;

    // symbol: ?sHeartbeatMutex@MinecraftEventing@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex sHeartbeatMutex;

    // symbol: ?sMutex@MinecraftEventing@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex sMutex;

    // symbol: ?sPlayerTelemetryMutex@MinecraftEventing@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex sPlayerTelemetryMutex;

    // NOLINTEND
};
