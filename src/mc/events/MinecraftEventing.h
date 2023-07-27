#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/events/IConnectionEventing.h"
#include "mc/events/IMinecraftEventing.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class CrashTelemetryProcessor; }
namespace Bedrock { class SessionInfo; }
namespace Bedrock { struct CrashUploadStatus; }
namespace Bedrock { struct DeviceIdContext; }
namespace Bedrock { struct DirectoryEntry; }
namespace Bedrock { struct WorldRecoveryTelemetryEvent; }
namespace Bedrock::Http { class Status; }// NOLINT
namespace Bedrock::StorageMigration { enum class StorageMigrationType; }
namespace Connection { enum class DisconnectFailReason; }
namespace Core { class Path; }
namespace Core { enum class LevelStorageState; }
namespace Core::Profile { struct FileCounters; }
namespace Json { class Value; }
namespace Legacy { struct WorldConversionReport; }
namespace Realms { struct RealmId; }
namespace Scripting { enum class WatchdogEventType; }
namespace Scripting { struct ModuleDescriptor; }
namespace Social { class IUserManager; }
namespace Social { enum class MultiplayerServiceIdentifier; }
namespace Social { enum class SignInResult; }
namespace Social { struct PlayerIDs; }
namespace Social::Events { class AchievementEventing; }
namespace Social::Events { class EventManager; }
namespace Social::Events { class IEventListener; }
namespace Social::Events { class PlayerTelemetry; }
namespace Social::Events { class Property; }
namespace Social::Events { enum class TelemetrySystemType; }
namespace Util::ResourceUri { enum class ValidationStatus; }
namespace Webview { struct TelemetryCommonProperties; }
namespace edu { enum class Role; }
namespace librarySearch { struct TelemetryData; }// NOLINT
namespace mce { class UUID; }
namespace storeSearch { struct TelemetryData; }// NOLINT
// clang-format on

class MinecraftEventing {
public:
    // MinecraftEventing inner types declare
    // clang-format off

    // clang-format on

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
    MinecraftEventing& operator=(MinecraftEventing const&) = delete;
    MinecraftEventing(MinecraftEventing const&)            = delete;
    MinecraftEventing()                                    = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECRAFTEVENTING
    /**
     * @symbol ?addCrashTelemetryToBatch\@MinecraftEventing\@\@UEAAXV?$shared_ptr\@VSessionInfo\@Bedrock\@\@\@std\@\@\@Z
     */
    MCVAPI void addCrashTelemetryToBatch(class std::shared_ptr<class Bedrock::SessionInfo>); // NOLINT
    /**
     * @symbol
     * ?addListener\@MinecraftEventing\@\@UEAAXV?$unique_ptr\@VIEventListener\@Events\@Social\@\@U?$default_delete\@VIEventListener\@Events\@Social\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void addListener(std::unique_ptr<class Social::Events::IEventListener>); // NOLINT
    /**
     * @symbol
     * ?fileEventCloudWorldPullFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCVAPI void fileEventCloudWorldPullFailed(std::string const&, std::string const&, bool); // NOLINT
    /**
     * @symbol
     * ?fireBannedSkinVerificationEvent\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCVAPI void fireBannedSkinVerificationEvent(unsigned int const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ?fireChatUsedEvent\@MinecraftEventing\@\@UEAAXI_N\@Z
     */
    MCVAPI void fireChatUsedEvent(unsigned int, bool); // NOLINT
    /**
     * @symbol ?fireChunkRecyclerTelemetryData\@MinecraftEventing\@\@UEAAXAEBUChunkRecyclerTelemetryOutput\@\@\@Z
     */
    MCVAPI void fireChunkRecyclerTelemetryData(struct ChunkRecyclerTelemetryOutput const&); // NOLINT
    /**
     * @symbol ?fireClassroomSettingUpdated\@MinecraftEventing\@\@UEAAXW4ClassroomSetting\@\@W4SettingsScreenMode\@\@\@Z
     */
    MCVAPI void fireClassroomSettingUpdated(enum class ClassroomSetting, enum class SettingsScreenMode); // NOLINT
    /**
     * @symbol
     * ?fireClubsEngagementEvent\@MinecraftEventing\@\@UEAAXW4ClubsEngagementAction\@IMinecraftEventing\@\@W4ClubsEngagementTargetType\@3\@PEBDURealmId\@Realms\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void
    fireClubsEngagementEvent(enum class IMinecraftEventing::ClubsEngagementAction, enum class IMinecraftEventing::ClubsEngagementTargetType, char const*, struct Realms::RealmId, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireClubsOpenFeedScreenEvent\@MinecraftEventing\@\@UEAAXW4ClubsFeedScreenSource\@IMinecraftEventing\@\@URealmId\@Realms\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCVAPI void fireClubsOpenFeedScreenEvent(
        enum class IMinecraftEventing::ClubsFeedScreenSource,
        struct Realms::RealmId,
        std::string const&,
        int
    ); // NOLINT
    /**
     * @symbol ?fireCodeCommandButtonPressed\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireCodeCommandButtonPressed(); // NOLINT
    /**
     * @symbol
     * ?fireCommandParseTableTelemetry\@MinecraftEventing\@\@UEBAX_NAEBV?$vector\@UCommandParseTableEntry\@IMinecraftEventing\@\@V?$allocator\@UCommandParseTableEntry\@IMinecraftEventing\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void
    fireCommandParseTableTelemetry(bool, std::vector<struct IMinecraftEventing::CommandParseTableEntry> const&)
        const; // NOLINT
    /**
     * @symbol
     * ?fireCommunitySIFTProcessEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4TextProcessingEventOrigin\@\@G0_NNDDAEBVValue\@Json\@\@\@Z
     */
    MCVAPI void
    fireCommunitySIFTProcessEvent(std::string const&, enum class TextProcessingEventOrigin, unsigned short, std::string const&, bool, double, char, char, class Json::Value const&); // NOLINT
    /**
     * @symbol
     * ?fireCourseButtonPressed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireCourseButtonPressed(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireCurrentInputUpdated\@MinecraftEventing\@\@UEAAXAEBV?$not_null\@V?$NonOwnerPointer\@VIClientInstance\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCVAPI void fireCurrentInputUpdated(class gsl::not_null<
                                        class Bedrock::NonOwnerPointer<class IClientInstance>> const&); // NOLINT
    /**
     * @symbol
     * ?fireDBStorageError\@MinecraftEventing\@\@UEAAXAEBULevelStorageEventingContext\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireDBStorageError(struct LevelStorageEventingContext const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireDayOneExperienceStateChanged\@MinecraftEventing\@\@UEAAXW4DayOneExperienceState\@IMinecraftEventing\@\@V?$optional\@I\@std\@\@V?$optional\@_K\@5\@\@Z
     */
    MCVAPI void
        fireDayOneExperienceStateChanged(enum class IMinecraftEventing::DayOneExperienceState, class std::optional<unsigned int>, class std::optional<unsigned __int64>); // NOLINT
    /**
     * @symbol
     * ?fireDelayedEventReportOfflineAction\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireDelayedEventReportOfflineAction(std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEduServiceRequestFailed\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00V?$buffer_span\@U?$pair\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@V12\@\@std\@\@\@\@\@Z
     */
    MCVAPI void
    fireEduServiceRequestFailed(std::string const&, std::string const&, std::string const&, class buffer_span<struct std::pair<class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>>>)
        const; // NOLINT
    /**
     * @symbol
     * ?fireEventAchievementReceived\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventAchievementReceived(std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventActorValueValidationFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBD\@Z
     */
    MCVAPI void fireEventActorValueValidationFailed(std::string const&, char const*); // NOLINT
    /**
     * @symbol ?fireEventAndroidHelpRequest\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventAndroidHelpRequest(); // NOLINT
    /**
     * @symbol ?fireEventAndroidScopedStorageDebug\@MinecraftEventing\@\@UEAAX_K\@Z
     */
    MCVAPI void fireEventAndroidScopedStorageDebug(unsigned __int64); // NOLINT
    /**
     * @symbol ?fireEventAppInitFileOpenStats\@MinecraftEventing\@\@UEAAXAEBUFileCounters\@Profile\@Core\@\@0\@Z
     */
    MCVAPI void
    fireEventAppInitFileOpenStats(struct Core::Profile::FileCounters const&, struct Core::Profile::FileCounters const&); // NOLINT
    /**
     * @symbol ?fireEventAppPaused\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventAppPaused(); // NOLINT
    /**
     * @symbol ?fireEventAppSurfaceCreated\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventAppSurfaceCreated(); // NOLINT
    /**
     * @symbol ?fireEventAppSurfaceDestroyed\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventAppSurfaceDestroyed(); // NOLINT
    /**
     * @symbol ?fireEventAppUnpaused\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventAppUnpaused(); // NOLINT
    /**
     * @symbol ?fireEventArmorStandItemEquipped\@MinecraftEventing\@\@UEAAXAEBVArmorStand\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCVAPI void fireEventArmorStandItemEquipped(class ArmorStand const&, class ItemDescriptor const&); // NOLINT
    /**
     * @symbol
     * ?fireEventAssertFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventAssertFailed(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventBlockPlacedByCommand\@MinecraftEventing\@\@UEAAXAEBVBlock\@\@H\@Z
     */
    MCVAPI void fireEventBlockPlacedByCommand(class Block const&, int); // NOLINT
    /**
     * @symbol
     * ?fireEventBlockTypeRegistryChecksumMismatch\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEB_K10\@Z
     */
    MCVAPI void
    fireEventBlockTypeRegistryChecksumMismatch(std::string const&, unsigned __int64 const&, unsigned __int64 const&, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventBoardTextUpdated\@MinecraftEventing\@\@UEAAXAEAVChalkboardBlockActor\@\@\@Z
     */
    MCVAPI void fireEventBoardTextUpdated(class ChalkboardBlockActor&); // NOLINT
    /**
     * @symbol
     * ?fireEventBundleSubOfferClicked\@MinecraftEventing\@\@UEAAXHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N0\@Z
     */
    MCVAPI void
    fireEventBundleSubOfferClicked(int, int, std::string const&, std::string const&, bool, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventButtonPressed\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void
    fireEventButtonPressed(std::string const&, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const&)
        const; // NOLINT
    /**
     * @symbol ?fireEventCameraUsed\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventCameraUsed(bool); // NOLINT
    /**
     * @symbol
     * ?fireEventChatSettingsUpdated\@MinecraftEventing\@\@UEBAXPEBVPlayer\@\@AEBV?$vector\@VProperty\@Events\@Social\@\@V?$allocator\@VProperty\@Events\@Social\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void fireEventChatSettingsUpdated(class Player const*, std::vector<class Social::Events::Property> const&)
        const; // NOLINT
    /**
     * @symbol ?fireEventChildAccountSignIn\@MinecraftEventing\@\@UEAAX_N0\@Z
     */
    MCVAPI void fireEventChildAccountSignIn(bool, bool); // NOLINT
    /**
     * @symbol ?fireEventChunkChanged\@MinecraftEventing\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fireEventChunkChanged(class LevelChunk&); // NOLINT
    /**
     * @symbol ?fireEventChunkLoaded\@MinecraftEventing\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fireEventChunkLoaded(class LevelChunk&); // NOLINT
    /**
     * @symbol ?fireEventChunkUnloaded\@MinecraftEventing\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fireEventChunkUnloaded(class LevelChunk&); // NOLINT
    /**
     * @symbol
     * ?fireEventClientLeftGameDueToUnrecoverableError\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void fireEventClientLeftGameDueToUnrecoverableError(std::string const&, bool); // NOLINT
    /**
     * @symbol ?fireEventCodeBuilderClosed\@MinecraftEventing\@\@UEBAXXZ
     */
    MCVAPI void fireEventCodeBuilderClosed() const; // NOLINT
    /**
     * @symbol
     * ?fireEventCodeBuilderLog\@MinecraftEventing\@\@UEBAXAEBUTelemetryCommonProperties\@Webview\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV45\@\@Z
     */
    MCVAPI void
    fireEventCodeBuilderLog(struct Webview::TelemetryCommonProperties const&, std::string const&, std::string&)
        const; // NOLINT
    /**
     * @symbol
     * ?fireEventCodeBuilderRuntimeAction\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventCodeBuilderRuntimeAction(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?fireEventCodeBuilderScoreChanged\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCVAPI void fireEventCodeBuilderScoreChanged(std::string const&, int) const; // NOLINT
    /**
     * @symbol ?fireEventCompoundCreatorCreated\@MinecraftEventing\@\@UEAAXHH\@Z
     */
    MCVAPI void fireEventCompoundCreatorCreated(int, int); // NOLINT
    /**
     * @symbol
     * ?fireEventConnectedStorageError\@MinecraftEventing\@\@UEAAXPEBDAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_J\@Z
     */
    MCVAPI void fireEventConnectedStorageError(char const*, std::string const&, __int64); // NOLINT
    /**
     * @symbol
     * ?fireEventConnectedStorageResult\@MinecraftEventing\@\@UEAAXW4ConnectedStorageEventType\@\@_NIV?$optional\@I\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@3_J222\@Z
     */
    MCVAPI void
    fireEventConnectedStorageResult(enum class ConnectedStorageEventType, bool, unsigned int, class std::optional<unsigned int>, std::string const&, std::string const&, __int64, class std::optional<unsigned int>, class std::optional<unsigned int>, class std::optional<unsigned int>); // NOLINT
    /**
     * @symbol
     * ?fireEventConnectionFailed\@MinecraftEventing\@\@UEAAXW4ConnectionFailureReason\@IConnectionEventing\@\@\@Z
     */
    MCVAPI void fireEventConnectionFailed(enum class IConnectionEventing::ConnectionFailureReason); // NOLINT
    /**
     * @symbol
     * ?fireEventContentLogsInWorldSession\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@II\@Z
     */
    MCVAPI void fireEventContentLogsInWorldSession(std::string const&, unsigned int, unsigned int); // NOLINT
    /**
     * @symbol
     * ?fireEventContentShared\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEBW4ShareMode\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void
    fireEventContentShared(std::string const&, std::string const&, enum class IMinecraftEventing::ShareMode const&); // NOLINT
    /**
     * @symbol
     * ?fireEventControlRemappedByPlayer\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4RawInputType\@\@H\@Z
     */
    MCVAPI void fireEventControlRemappedByPlayer(std::string const&, enum class RawInputType, int) const; // NOLINT
    /**
     * @symbol ?fireEventControlTipsPanelUpdated\@MinecraftEventing\@\@UEBAXW4EduControlPanelUpdateType\@\@N\@Z
     */
    MCVAPI void fireEventControlTipsPanelUpdated(enum class EduControlPanelUpdateType, double) const; // NOLINT
    /**
     * @symbol ?fireEventCopyWorldEducationEnabled\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventCopyWorldEducationEnabled(); // NOLINT
    /**
     * @symbol ?fireEventCrashSystemFailedToInit\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventCrashSystemFailedToInit(); // NOLINT
    /**
     * @symbol
     * ?fireEventDefaultCastSelected\@MinecraftEventing\@\@UEAAXHVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventDefaultCastSelected(int, class mce::UUID, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventDefaultGameTypeChanged\@MinecraftEventing\@\@UEAAXW4GameType\@\@0\@Z
     */
    MCVAPI void fireEventDefaultGameTypeChanged(enum class GameType, enum class GameType); // NOLINT
    /**
     * @symbol
     * ?fireEventDevSlashCommandExecuted\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventDevSlashCommandExecuted(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventDeviceAccountFailure\@MinecraftEventing\@\@UEAAXW4SignInStage\@IMinecraftEventing\@\@W4DeviceAccountFailurePhase\@3\@IAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void
    fireEventDeviceAccountFailure(enum class IMinecraftEventing::SignInStage, enum class IMinecraftEventing::DeviceAccountFailurePhase, unsigned int, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventDeviceAccountSuccess\@MinecraftEventing\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventDeviceAccountSuccess(bool, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventDeviceIdManagerFailOnIdentityGained\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventDeviceIdManagerFailOnIdentityGained(); // NOLINT
    /**
     * @symbol ?fireEventDeviceLost\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventDeviceLost(); // NOLINT
    /**
     * @symbol ?fireEventDifficultySet\@MinecraftEventing\@\@UEAAXW4Difficulty\@\@0\@Z
     */
    MCVAPI void fireEventDifficultySet(enum class Difficulty, enum class Difficulty); // NOLINT
    /**
     * @symbol ?fireEventDiskStatus\@MinecraftEventing\@\@UEAAXW4DiskStatus\@\@W4LevelStorageState\@Core\@\@_K\@Z
     */
    MCVAPI void
    fireEventDiskStatus(enum class DiskStatus, enum class Core::LevelStorageState, unsigned __int64); // NOLINT
    /**
     * @symbol ?fireEventEduContentVerificationFailed\@MinecraftEventing\@\@UEBAXXZ
     */
    MCVAPI void fireEventEduContentVerificationFailed() const; // NOLINT
    /**
     * @symbol ?fireEventEduDemoConversion\@MinecraftEventing\@\@UEAAXW4Role\@edu\@\@W4LastClickedSource\@\@\@Z
     */
    MCVAPI void fireEventEduDemoConversion(enum class edu::Role, enum class LastClickedSource); // NOLINT
    /**
     * @symbol ?fireEventEduResources\@MinecraftEventing\@\@UEBAXXZ
     */
    MCVAPI void fireEventEduResources() const; // NOLINT
    /**
     * @symbol
     * ?fireEventEduServiceStatus\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0HV?$buffer_span\@U?$pair\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@V12\@\@std\@\@\@\@\@Z
     */
    MCVAPI void
    fireEventEduServiceStatus(std::string const&, std::string const&, int, class buffer_span<struct std::pair<class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>>>)
        const; // NOLINT
    /**
     * @symbol ?fireEventEduiOSPurchaseTransaction\@MinecraftEventing\@\@UEBAXAEBW4TransactionStatus\@\@\@Z
     */
    MCVAPI void fireEventEduiOSPurchaseTransaction(enum class TransactionStatus const&) const; // NOLINT
    /**
     * @symbol
     * ?fireEventElementConstructorUsed\@MinecraftEventing\@\@UEAAXHHW4ElementConstructorUseType\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void
    fireEventElementConstructorUsed(int, int, enum class IMinecraftEventing::ElementConstructorUseType); // NOLINT
    /**
     * @symbol
     * ?fireEventEmptyLibraryCategoryError\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventEmptyLibraryCategoryError(std::string const&) const; // NOLINT
    /**
     * @symbol ?fireEventEntitlementCacheLoadTimeout\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventEntitlementCacheLoadTimeout(); // NOLINT
    /**
     * @symbol
     * ?fireEventEntitlementListInfo\@MinecraftEventing\@\@UEAAXAEAV?$vector\@VContentIdentity\@\@V?$allocator\@VContentIdentity\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCVAPI void fireEventEntitlementListInfo(std::vector<class ContentIdentity>&, bool); // NOLINT
    /**
     * @symbol ?fireEventEntitySpawned\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@HI\@Z
     */
    MCVAPI void fireEventEntitySpawned(class Player*, int, unsigned int); // NOLINT
    /**
     * @symbol
     * ?fireEventFeedbackSubmitted\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N1\@Z
     */
    MCVAPI void fireEventFeedbackSubmitted(std::string const&, bool, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventGameRulesUpdated\@MinecraftEventing\@\@UEAAXMMAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventGameRulesUpdated(float, float, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventGameRulesUpdated\@MinecraftEventing\@\@UEAAX_N0AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventGameRulesUpdated(bool, bool, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventGameRulesUpdated\@MinecraftEventing\@\@UEAAXHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventGameRulesUpdated(int, int, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventGoogleAccountHoldWarning\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventGoogleAccountHoldWarning(bool); // NOLINT
    /**
     * @symbol ?fireEventHardwareInfo\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventHardwareInfo(); // NOLINT
    /**
     * @symbol
     * ?fireEventHowToPlayTopicChanged\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4InputMode\@\@\@Z
     */
    MCVAPI void fireEventHowToPlayTopicChanged(std::string const&, enum class InputMode); // NOLINT
    /**
     * @symbol
     * ?fireEventHttpClientError\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventHttpClientError(std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventIAPPurchaseAttempt\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEAVOffer\@\@W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventIAPPurchaseAttempt(
        std::string const&,
        std::string const&,
        class Offer&,
        enum class PurchasePath
    ); // NOLINT
    /**
     * @symbol
     * ?fireEventIAPPurchaseResolved\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEAVOffer\@\@W4PurchaseResult\@IMinecraftEventing\@\@W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventIAPPurchaseResolved(
        std::string const&,
        std::string const&,
        class Offer&,
        enum class IMinecraftEventing::PurchaseResult,
        enum class PurchasePath
    ); // NOLINT
    /**
     * @symbol
     * ?fireEventIAPRedeemAttempt\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventIAPRedeemAttempt(
        std::string const&,
        std::string const&,
        std::string const&,
        enum class PurchasePath
    ); // NOLINT
    /**
     * @symbol
     * ?fireEventIAPRedeemResolved\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4PurchaseResult\@IMinecraftEventing\@\@W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventIAPRedeemResolved(
        std::string const&,
        std::string const&,
        std::string const&,
        enum class IMinecraftEventing::PurchaseResult,
        enum class PurchasePath
    ); // NOLINT
    /**
     * @symbol
     * ?fireEventImGuiScreenChanged\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void
    fireEventImGuiScreenChanged(std::string const&, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const&); // NOLINT
    /**
     * @symbol
     * ?fireEventJoinByCode\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventJoinByCode(std::string const&); // NOLINT
    /**
     * @symbol ?fireEventJoinCanceled\@MinecraftEventing\@\@UEAAXW4LoadingState\@\@\@Z
     */
    MCVAPI void fireEventJoinCanceled(enum class LoadingState); // NOLINT
    /**
     * @symbol ?fireEventLabTableCreated\@MinecraftEventing\@\@UEAAXHHH\@Z
     */
    MCVAPI void fireEventLabTableCreated(int, int, int); // NOLINT
    /**
     * @symbol ?fireEventLevelChunkPerformanceData\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventLevelChunkPerformanceData(bool); // NOLINT
    /**
     * @symbol
     * ?fireEventLevelDatLoadFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCVAPI void fireEventLevelDatLoadFailed(std::string const&, std::string const&, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventLevelDataOverride\@MinecraftEventing\@\@UEBAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void
        fireEventLevelDataOverride(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol ?fireEventLevelDestruct\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventLevelDestruct(); // NOLINT
    /**
     * @symbol ?fireEventLibrarySearch\@MinecraftEventing\@\@UEBAXAEBUTelemetryData\@librarySearch\@\@\@Z
     */
    MCVAPI void fireEventLibrarySearch(struct librarySearch::TelemetryData const&) const; // NOLINT
    /**
     * @symbol
     * ?fireEventLibrarySearchItemSelected\@MinecraftEventing\@\@UEBAXHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HH\@Z
     */
    MCVAPI void fireEventLibrarySearchItemSelected(int, int, std::string const&, int, int) const; // NOLINT
    /**
     * @symbol ?fireEventLicenseCheck\@MinecraftEventing\@\@UEAAX_NAEAUExtraLicenseData\@\@\@Z
     */
    MCVAPI void fireEventLicenseCheck(bool, struct ExtraLicenseData&); // NOLINT
    /**
     * @symbol ?fireEventLockedItemGiven\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventLockedItemGiven(); // NOLINT
    /**
     * @symbol
     * ?fireEventMessageServiceImpression\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCVAPI void
    fireEventMessageServiceImpression(std::string const&, std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventMultiplayerConnectionStateChanged\@MinecraftEventing\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1III1\@Z
     */
    MCVAPI void
    fireEventMultiplayerConnectionStateChanged(bool, std::string const&, std::string const&, unsigned int, unsigned int, unsigned int, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventMultiplayerSessionUpdate\@MinecraftEventing\@\@UEAAXV?$not_null\@PEBVLevel\@\@\@gsl\@\@PEBVPlayer\@\@\@Z
     */
    MCVAPI void
    fireEventMultiplayerSessionUpdate(class gsl::not_null<class Level const*>, class Player const*); // NOLINT
    /**
     * @symbol
     * ?fireEventNewContentCheckCompleted\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void fireEventNewContentCheckCompleted(std::string const&, bool); // NOLINT
    /**
     * @symbol ?fireEventNpcPropertiesUpdated\@MinecraftEventing\@\@UEAAXAEAVActor\@\@_N\@Z
     */
    MCVAPI void fireEventNpcPropertiesUpdated(class Actor&, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventOfferRated\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HHHN\@Z
     */
    MCVAPI void fireEventOfferRated(std::string const&, int, int, int, double); // NOLINT
    /**
     * @symbol
     * ?fireEventOnAppResume\@MinecraftEventing\@\@UEAAXV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventOnAppResume(std::vector<struct std::pair<std::string, float>>); // NOLINT
    /**
     * @symbol
     * ?fireEventOnAppStart\@MinecraftEventing\@\@UEAAXV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventOnAppStart(std::vector<struct std::pair<std::string, float>>); // NOLINT
    /**
     * @symbol
     * ?fireEventOnAppSuspend\@MinecraftEventing\@\@UEAAXV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void fireEventOnAppSuspend(std::vector<struct std::pair<std::string, float>>, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventOnClientDisconnect\@MinecraftEventing\@\@UEAAXW4SubClientId\@\@_NW4DisconnectFailReason\@Connection\@\@\@Z
     */
    MCVAPI void
    fireEventOnClientDisconnect(enum class SubClientId, bool, enum class Connection::DisconnectFailReason); // NOLINT
    /**
     * @symbol
     * ?fireEventOnDeviceLost\@MinecraftEventing\@\@UEAAXV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventOnDeviceLost(std::vector<struct std::pair<std::string, float>>); // NOLINT
    /**
     * @symbol ?fireEventOnSuccessfulClientLogin\@MinecraftEventing\@\@UEAAXPEBVLevel\@\@\@Z
     */
    MCVAPI void fireEventOnSuccessfulClientLogin(class Level const*); // NOLINT
    /**
     * @symbol
     * ?fireEventOneDSPlayerReportPayload\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventOneDSPlayerReportPayload(std::string const&); // NOLINT
    /**
     * @symbol ?fireEventOptionsUpdated\@MinecraftEventing\@\@UEAAXAEAVOptions\@\@W4InputMode\@\@_N\@Z
     */
    MCVAPI void fireEventOptionsUpdated(class Options&, enum class InputMode, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventOreUIError\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventOreUIError(unsigned int const&, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventPackHashChanged\@MinecraftEventing\@\@UEAAXAEBVPackManifest\@\@\@Z
     */
    MCVAPI void fireEventPackHashChanged(class PackManifest const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPackImportTimeout\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPackImportTimeout(std::string const&); // NOLINT
    /**
     * @symbol ?fireEventPackPlayed\@MinecraftEventing\@\@UEAAXAEBVPackInstance\@\@I\@Z
     */
    MCVAPI void fireEventPackPlayed(class PackInstance const&, unsigned int); // NOLINT
    /**
     * @symbol ?fireEventPackUpgradeAttempt\@MinecraftEventing\@\@UEAAXAEBVPackManifest\@\@AEBVPackReport\@\@\@Z
     */
    MCVAPI void fireEventPackUpgradeAttempt(class PackManifest const&, class PackReport const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPacketViolationDetected\@MinecraftEventing\@\@UEAAX_KV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI void
    fireEventPacketViolationDetected(unsigned __int64, std::string, enum class PacketViolationResponse, enum class MinecraftPacketIds, class NetworkIdentifier const&); // NOLINT
    /**
     * @symbol ?fireEventPerformanceContext\@MinecraftEventing\@\@UEAAXAEBVPerfContextTrackerReport\@\@\@Z
     */
    MCVAPI void fireEventPerformanceContext(class PerfContextTrackerReport const&); // NOLINT
    /**
     * @symbol ?fireEventPerformanceMetrics\@MinecraftEventing\@\@UEAAXAEBUProfilerLiteTelemetry\@\@_N\@Z
     */
    MCVAPI void fireEventPerformanceMetrics(struct ProfilerLiteTelemetry const&, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventPersonaAvatarUpdated\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@AEBV?$vector\@_NV?$allocator\@_N\@std\@\@\@3\@2_N3000311\@Z
     */
    MCVAPI void fireEventPersonaAvatarUpdated(std::string const&, std::vector<std::string> const&, std::vector<bool> const&, std::vector<bool> const&, bool, bool, std::string const&, std::string const&, std::string const&, bool, std::vector<std::string> const&, std::vector<std::string> const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPersonaAvatarsListed\@MinecraftEventing\@\@UEAAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPersonaAvatarsListed(std::vector<std::string> const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPersonaCategoryInformation\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPersonaCategoryInformation(std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPersonaCreationFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N100\@Z
     */
    MCVAPI void
    fireEventPersonaCreationFailed(std::string const&, std::string const&, bool, bool, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPersonaEmotePlayed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NH\@Z
     */
    MCVAPI void fireEventPersonaEmotePlayed(std::string const&, bool, int); // NOLINT
    /**
     * @symbol
     * ?fireEventPersonaGeneralError\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@I\@Z
     */
    MCVAPI void fireEventPersonaGeneralError(std::string const&, unsigned int); // NOLINT
    /**
     * @symbol
     * ?fireEventPersonaInitalizationEvent\@MinecraftEventing\@\@UEAAXIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPersonaInitalizationEvent(unsigned int, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPersonaItemPreviewed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00IIW4PromotionType\@IMinecraftEventing\@\@_N00NW4StoreType\@5\@\@Z
     */
    MCVAPI void fireEventPersonaItemPreviewed(
        std::string const&,
        std::string const&,
        std::string const&,
        unsigned int,
        unsigned int,
        enum class IMinecraftEventing::PromotionType,
        bool,
        std::string const&,
        std::string const&,
        double,
        enum class IMinecraftEventing::StoreType
    ); // NOLINT
    /**
     * @symbol ?fireEventPersonaLoadingPieces\@MinecraftEventing\@\@UEAAXIN\@Z
     */
    MCVAPI void fireEventPersonaLoadingPieces(unsigned int, double); // NOLINT
    /**
     * @symbol
     * ?fireEventPersonaSkinChanged\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCVAPI void fireEventPersonaSkinChanged(std::string const&, std::string const&, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventPersonaStillLoading\@MinecraftEventing\@\@UEAAX_N0000000AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@HN\@Z
     */
    MCVAPI void fireEventPersonaStillLoading(
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        std::vector<std::string> const&,
        int,
        double
    ); // NOLINT
    /**
     * @symbol
     * ?fireEventPersonaUserLoadedActive\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCVAPI void fireEventPersonaUserLoadedActive(std::string const&, std::string const&, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventPlayIntegrityCheck\@MinecraftEventing\@\@UEAAXHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCVAPI void
    fireEventPlayIntegrityCheck(int, std::string const&, std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPlayerActionComparisonFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPlayerActionComparisonFailed(std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPlayerAttemptingExploit\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@W4ExploitType\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void fireEventPlayerAttemptingExploit(class Player*, enum class IMinecraftEventing::ExploitType); // NOLINT
    /**
     * @symbol
     * ?fireEventPlayerBanned\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPlayerBanned(std::string const&); // NOLINT
    /**
     * @symbol ?fireEventPlayerBounced\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@AEBVBlock\@\@H\@Z
     */
    MCVAPI void fireEventPlayerBounced(class Player*, class Block const&, int); // NOLINT
    /**
     * @symbol ?fireEventPlayerDamaged\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@W4ActorDamageCause\@\@\@Z
     */
    MCVAPI void fireEventPlayerDamaged(class Player*, enum class ActorDamageCause); // NOLINT
    /**
     * @symbol
     * ?fireEventPlayerJoinWorld\@MinecraftEventing\@\@UEAAXAEBIW4SubClientId\@\@_NV?$optional\@_N\@std\@\@W4PlayerJoinWorldAttemptState\@IConnectionEventing\@\@HW4DisconnectFailReason\@Connection\@\@W4TransportLayer\@\@\@Z
     */
    MCVAPI void fireEventPlayerJoinWorld(
        unsigned int const&,
        enum class SubClientId,
        bool,
        class std::optional<bool>,
        enum class IConnectionEventing::PlayerJoinWorldAttemptState,
        int,
        enum class Connection::DisconnectFailReason,
        enum class TransportLayer
    ); // NOLINT
    /**
     * @symbol
     * ?fireEventPlayerKicked\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPlayerKicked(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPlayerMessageChat\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPlayerMessageChat(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPlayerMessageMe\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPlayerMessageMe(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPlayerMessageSay\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPlayerMessageSay(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPlayerMessageTell\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventPlayerMessageTell(std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPlayerMessageTitle\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventPlayerMessageTitle(std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPlayerReportSent\@MinecraftEventing\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCVAPI void fireEventPlayerReportSent(bool, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventPlayerTravelled\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@M\@Z
     */
    MCVAPI void fireEventPlayerTravelled(class Player*, float); // NOLINT
    /**
     * @symbol
     * ?fireEventPopupClosed\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPopupClosed(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?fireEventPopupFiredEdu\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000W4ActiveDirectoryAction\@\@\@Z
     */
    MCVAPI void fireEventPopupFiredEdu(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        enum class ActiveDirectoryAction
    ); // NOLINT
    /**
     * @symbol ?fireEventPortfolioExported\@MinecraftEventing\@\@UEAAXHH\@Z
     */
    MCVAPI void fireEventPortfolioExported(int, int); // NOLINT
    /**
     * @symbol
     * ?fireEventProgressionsSet\@MinecraftEventing\@\@UEAAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventProgressionsSet(std::vector<std::string> const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPromotionNotificationClicked\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPromotionNotificationClicked(std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPurchaseAttempt\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4StoreType\@IMinecraftEventing\@\@W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventPurchaseAttempt(
        std::string const&,
        std::string const&,
        std::string const&,
        enum class IMinecraftEventing::StoreType,
        enum class PurchasePath
    ); // NOLINT
    /**
     * @symbol
     * ?fireEventPurchaseFailureDetails\@MinecraftEventing\@\@UEAAXHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void
    fireEventPurchaseFailureDetails(int, std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPurchaseGameAttempt\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventPurchaseGameAttempt(std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPurchaseResolved\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4StoreType\@IMinecraftEventing\@\@W4PurchaseResult\@5\@W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventPurchaseResolved(
        std::string const&,
        std::string const&,
        std::string const&,
        enum class IMinecraftEventing::StoreType,
        enum class IMinecraftEventing::PurchaseResult,
        enum class PurchasePath
    ); // NOLINT
    /**
     * @symbol
     * ?fireEventPushNotificationOpened\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPushNotificationOpened(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventPushNotificationPermission\@MinecraftEventing\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPushNotificationPermission(bool, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventPushNotificationReceived\@MinecraftEventing\@\@UEAAXAEBVPushNotificationMessage\@\@\@Z
     */
    MCVAPI void fireEventPushNotificationReceived(class PushNotificationMessage const&); // NOLINT
    /**
     * @symbol
     * ?fireEventRealmDownload\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0HHH\@Z
     */
    MCVAPI void fireEventRealmDownload(std::string const&, std::string const&, int, int, int); // NOLINT
    /**
     * @symbol ?fireEventRealmMemberlistCleared\@MinecraftEventing\@\@UEAAXAEBURealmId\@Realms\@\@AEBH\@Z
     */
    MCVAPI void fireEventRealmMemberlistCleared(struct Realms::RealmId const&, int const&); // NOLINT
    /**
     * @symbol
     * ?fireEventRealmShared\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBW4ShareMode\@IMinecraftEventing\@\@AEBURealmId\@Realms\@\@\@Z
     */
    MCVAPI void
    fireEventRealmShared(std::string const&, enum class IMinecraftEventing::ShareMode const&, struct Realms::RealmId const&); // NOLINT
    /**
     * @symbol
     * ?fireEventRealmUpload\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0HHH_N\@Z
     */
    MCVAPI void fireEventRealmUpload(std::string const&, std::string const&, int, int, int, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventRealmUrlGenerated\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBURealmId\@Realms\@\@\@Z
     */
    MCVAPI void fireEventRealmUrlGenerated(std::string const&, struct Realms::RealmId const&); // NOLINT
    /**
     * @symbol
     * ?fireEventRealmsSubscriptionPurchaseFailed\@MinecraftEventing\@\@UEAAXAEBUProductSku\@\@W4RealmsPurchaseIntent\@\@W4RealmsPurchaseFailureReason\@\@\@Z
     */
    MCVAPI void fireEventRealmsSubscriptionPurchaseFailed(
        struct ProductSku const&,
        enum class RealmsPurchaseIntent,
        enum class RealmsPurchaseFailureReason
    ); // NOLINT
    /**
     * @symbol
     * ?fireEventRealmsSubscriptionPurchaseStarted\@MinecraftEventing\@\@UEAAXAEBUProductSku\@\@W4RealmsPurchaseIntent\@\@\@Z
     */
    MCVAPI void
    fireEventRealmsSubscriptionPurchaseStarted(struct ProductSku const&, enum class RealmsPurchaseIntent); // NOLINT
    /**
     * @symbol
     * ?fireEventRealmsSubscriptionPurchaseSucceeded\@MinecraftEventing\@\@UEAAXAEBUProductSku\@\@W4RealmsPurchaseIntent\@\@\@Z
     */
    MCVAPI void
    fireEventRealmsSubscriptionPurchaseSucceeded(struct ProductSku const&, enum class RealmsPurchaseIntent); // NOLINT
    /**
     * @symbol ?fireEventReducerBlockEntered\@MinecraftEventing\@\@UEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCVAPI void fireEventReducerBlockEntered(class ItemDescriptor const&); // NOLINT
    /**
     * @symbol ?fireEventRenderingSizeChanged\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventRenderingSizeChanged(); // NOLINT
    /**
     * @symbol ?fireEventRespawn\@MinecraftEventing\@\@UEAAXAEAVPlayer\@\@H\@Z
     */
    MCVAPI void fireEventRespawn(class Player&, int); // NOLINT
    /**
     * @symbol ?fireEventRespondedToAcceptContent\@MinecraftEventing\@\@UEAAXAEBUPacksInfoData\@\@_N\@Z
     */
    MCVAPI void fireEventRespondedToAcceptContent(struct PacksInfoData const&, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventScreenChanged\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void
    fireEventScreenChanged(unsigned int const&, std::string const&, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const&); // NOLINT
    /**
     * @symbol
     * ?fireEventScreenLoaded\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@NNNN\@Z
     */
    MCVAPI void
    fireEventScreenLoaded(unsigned int const&, std::string const&, double, double, double, double); // NOLINT
    /**
     * @symbol ?fireEventScriptDebuggerConnect\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventScriptDebuggerConnect(bool); // NOLINT
    /**
     * @symbol ?fireEventScriptDebuggerListen\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventScriptDebuggerListen(bool); // NOLINT
    /**
     * @symbol ?fireEventScriptPluginDiscovery\@MinecraftEventing\@\@UEAAXAEBVScriptPluginResult\@\@_N\@Z
     */
    MCVAPI void fireEventScriptPluginDiscovery(class ScriptPluginResult const&, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventScriptPluginRun\@MinecraftEventing\@\@UEAAXAEBVScriptPluginResult\@\@V?$duration\@_JU?$ratio\@$00$0PECEA\@\@std\@\@\@chrono\@std\@\@_N\@Z
     */
    MCVAPI void fireEventScriptPluginRun(
        class ScriptPluginResult const&,
        class std::chrono::duration<__int64, struct std::ratio<1, 1000000>>,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?fireEventScriptWatchdog\@MinecraftEventing\@\@UEAAXW4WatchdogEventType\@Scripting\@\@_N_KMH2PEBUModuleDescriptor\@3\@1\@Z
     */
    MCVAPI void fireEventScriptWatchdog(
        enum class Scripting::WatchdogEventType,
        bool,
        unsigned __int64,
        float,
        int,
        unsigned __int64,
        struct Scripting::ModuleDescriptor const*,
        bool
    ); // NOLINT
    /**
     * @symbol ?fireEventSearchCatalogRequest\@MinecraftEventing\@\@UEAAXAEBVSearchRequestTelemetry\@\@\@Z
     */
    MCVAPI void fireEventSearchCatalogRequest(class SearchRequestTelemetry const&); // NOLINT
    /**
     * @symbol
     * ?fireEventSearchItemSelected\@MinecraftEventing\@\@UEAAXHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HHH\@Z
     */
    MCVAPI void fireEventSearchItemSelected(int, int, std::string const&, int, int, int); // NOLINT
    /**
     * @symbol
     * ?fireEventServerDrivenLayoutImagesLoaded\@MinecraftEventing\@\@UEAAXAEAVRequestTelemetry\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H_KHHHAEAV?$vector\@GV?$allocator\@G\@std\@\@\@4\@\@Z
     */
    MCVAPI void
    fireEventServerDrivenLayoutImagesLoaded(class RequestTelemetry&, std::string, int, unsigned __int64, int, int, int, std::vector<unsigned short>&); // NOLINT
    /**
     * @symbol
     * ?fireEventServerDrivenLayoutPageLoaded\@MinecraftEventing\@\@UEAAXAEAVRequestTelemetry\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HHHHH\@Z
     */
    MCVAPI void
    fireEventServerDrivenLayoutPageLoaded(class RequestTelemetry&, std::string, int, int, int, int, int); // NOLINT
    /**
     * @symbol
     * ?fireEventServerRespawnSearchTime\@MinecraftEventing\@\@UEAAXAEAVPlayer\@\@AEBVPlayerRespawnTelemetryData\@\@\@Z
     */
    MCVAPI void fireEventServerRespawnSearchTime(class Player&, class PlayerRespawnTelemetryData const&); // NOLINT
    /**
     * @symbol
     * ?fireEventServerShutdownDueToError\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventServerShutdownDueToError(std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventSetMultiplayerCorrelationId\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCVAPI void fireEventSetMultiplayerCorrelationId(class Player*, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventSetValidForAchievements\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@_N\@Z
     */
    MCVAPI void fireEventSetValidForAchievements(class Player*, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventSidebarNavigation\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1H_N22\@Z
     */
    MCVAPI void fireEventSidebarNavigation(
        unsigned int const&,
        std::string const&,
        std::string const&,
        int,
        bool,
        bool,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?fireEventSidebarVerboseToggled\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1_N\@Z
     */
    MCVAPI void
    fireEventSidebarVerboseToggled(unsigned int const&, std::string const&, std::string const&, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventSignInEdu\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Role\@edu\@\@W4EduSignInStage\@IMinecraftEventing\@\@00AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void
    fireEventSignInEdu(std::string const&, enum class edu::Role, enum class IMinecraftEventing::EduSignInStage, std::string const&, std::string const&, std::vector<struct std::pair<std::string, std::string>> const&); // NOLINT
    /**
     * @symbol
     * ?fireEventSignInToIdentity\@MinecraftEventing\@\@UEAAXW4SignInAccountType\@IMinecraftEventing\@\@W4SignInTrigger\@3\@_NW4SignInStage\@3\@W4SignInResult\@Social\@\@HUPlayerIDs\@7\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void
    fireEventSignInToIdentity(enum class IMinecraftEventing::SignInAccountType, enum class IMinecraftEventing::SignInTrigger, bool, enum class IMinecraftEventing::SignInStage, enum class Social::SignInResult, int, struct Social::PlayerIDs, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventSignOutEdu\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Role\@edu\@\@00\@Z
     */
    MCVAPI void
    fireEventSignOutEdu(std::string const&, enum class edu::Role, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventSignOutOfIdentity\@MinecraftEventing\@\@UEAAXW4SignInAccountType\@IMinecraftEventing\@\@W4SignInTrigger\@3\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@2\@Z
     */
    MCVAPI void
    fireEventSignOutOfIdentity(enum class IMinecraftEventing::SignInAccountType, enum class IMinecraftEventing::SignInTrigger, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventSignalServiceConnect\@MinecraftEventing\@\@UEAAXW4SignalServiceConnectState\@IConnectionEventing\@\@_NHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void
    fireEventSignalServiceConnect(enum class IConnectionEventing::SignalServiceConnectState, bool, int, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventSplitScreenUpdated\@MinecraftEventing\@\@UEAAXAEBVIClientInstance\@\@\@Z
     */
    MCVAPI void fireEventSplitScreenUpdated(class IClientInstance const&); // NOLINT
    /**
     * @symbol ?fireEventStackLoaded\@MinecraftEventing\@\@UEAAXAEBUStackStats\@\@\@Z
     */
    MCVAPI void fireEventStackLoaded(struct StackStats const&); // NOLINT
    /**
     * @symbol
     * ?fireEventStartClient\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventStartClient(std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventStartWorld\@MinecraftEventing\@\@UEAAXW4NetworkType\@IMinecraftEventing\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4MultiplayerServiceIdentifier\@Social\@\@\@Z
     */
    MCVAPI void fireEventStartWorld(
        enum class IMinecraftEventing::NetworkType,
        std::string const&,
        enum class Social::MultiplayerServiceIdentifier
    ); // NOLINT
    /**
     * @symbol
     * ?fireEventStorage\@MinecraftEventing\@\@UEAAXHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventStorage(int, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventStorageAreaFull\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@UDirectoryEntry\@Bedrock\@\@V?$allocator\@UDirectoryEntry\@Bedrock\@\@\@std\@\@\@3\@\@Z
     */
    MCVAPI void
    fireEventStorageAreaFull(std::string const&, std::vector<struct Bedrock::DirectoryEntry> const&); // NOLINT
    /**
     * @symbol
     * ?fireEventStorageReport\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventStorageReport(std::string const&); // NOLINT
    /**
     * @symbol ?fireEventStoreDiscoveryRequestResponse\@MinecraftEventing\@\@UEAAXHH\@Z
     */
    MCVAPI void fireEventStoreDiscoveryRequestResponse(int, int); // NOLINT
    /**
     * @symbol
     * ?fireEventStoreErrorPage\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventStoreErrorPage(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventStoreLocalizationBinaryFetchResponse\@MinecraftEventing\@\@UEAAXHI\@Z
     */
    MCVAPI void fireEventStoreLocalizationBinaryFetchResponse(int, unsigned int); // NOLINT
    /**
     * @symbol
     * ?fireEventStoreOfferClicked\@MinecraftEventing\@\@UEAAXHHHHHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_NH0\@Z
     */
    MCVAPI void
    fireEventStoreOfferClicked(int, int, int, int, int, int, std::string const&, std::string const&, bool, int, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventStorePlayFabRequestResponse\@MinecraftEventing\@\@UEAAXG\@Z
     */
    MCVAPI void fireEventStorePlayFabRequestResponse(unsigned short); // NOLINT
    /**
     * @symbol
     * ?fireEventStorePromotionNotification\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventStorePromotionNotification(std::string const&); // NOLINT
    /**
     * @symbol ?fireEventStoreSearch\@MinecraftEventing\@\@UEAAXAEBUTelemetryData\@storeSearch\@\@\@Z
     */
    MCVAPI void fireEventStoreSearch(struct storeSearch::TelemetryData const&); // NOLINT
    /**
     * @symbol
     * ?fireEventStoreSessionResponse\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HH\@Z
     */
    MCVAPI void fireEventStoreSessionResponse(std::string const&, int, int); // NOLINT
    /**
     * @symbol
     * ?fireEventStructureExport\@MinecraftEventing\@\@UEBAXAEBUglTFExportData\@\@W4ExportOutcome\@IMinecraftEventing\@\@W4ExportStage\@4\@\@Z
     */
    MCVAPI void fireEventStructureExport(
        struct glTFExportData const&,
        enum class IMinecraftEventing::ExportOutcome,
        enum class IMinecraftEventing::ExportStage
    ) const; // NOLINT
    /**
     * @symbol
     * ?fireEventSwitchAccountEdu\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Role\@edu\@\@0\@Z
     */
    MCVAPI void fireEventSwitchAccountEdu(std::string const&, enum class edu::Role, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventTagButtonPressed\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void fireEventTagButtonPressed(std::string const&, bool) const; // NOLINT
    /**
     * @symbol
     * ?fireEventTelemetryHttpError\@MinecraftEventing\@\@UEAAXW4TelemetrySystemType\@Events\@Social\@\@VStatus\@Http\@Bedrock\@\@\@Z
     */
    MCVAPI void fireEventTelemetryHttpError(
        enum class Social::Events::TelemetrySystemType,
        class Bedrock::Http::Status
    ); // NOLINT
    /**
     * @symbol ?fireEventTreatmentPackApplied\@MinecraftEventing\@\@UEAAXAEBVPackManifest\@\@\@Z
     */
    MCVAPI void fireEventTreatmentPackApplied(class PackManifest const&); // NOLINT
    /**
     * @symbol
     * ?fireEventTreatmentPackDownloadFailed\@MinecraftEventing\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCVAPI void fireEventTreatmentPackDownloadFailed(std::string, std::string, std::string, std::string); // NOLINT
    /**
     * @symbol
     * ?fireEventTreatmentPackDownloaded\@MinecraftEventing\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCVAPI void fireEventTreatmentPackDownloaded(std::string, std::string, std::string, std::string); // NOLINT
    /**
     * @symbol
     * ?fireEventTreatmentPackRemoved\@MinecraftEventing\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventTreatmentPackRemoved(std::string); // NOLINT
    /**
     * @symbol ?fireEventTreatmentsCleared\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventTreatmentsCleared(); // NOLINT
    /**
     * @symbol
     * ?fireEventTreatmentsSet\@MinecraftEventing\@\@UEAAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventTreatmentsSet(std::vector<std::string> const&); // NOLINT
    /**
     * @symbol
     * ?fireEventTrialDeviceIdCorrelation\@MinecraftEventing\@\@UEAAX_JAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@01\@Z
     */
    MCVAPI void fireEventTrialDeviceIdCorrelation(__int64, std::string const&, __int64, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventUgcAcquisitionStateChanged\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_KN_NH2H00\@Z
     */
    MCVAPI void
    fireEventUgcAcquisitionStateChanged(std::string const&, unsigned __int64, double, bool, int, bool, int, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventUnknownBlockReceived\@MinecraftEventing\@\@UEAAXAEBUNewBlockID\@\@G\@Z
     */
    MCVAPI void fireEventUnknownBlockReceived(struct NewBlockID const&, unsigned short); // NOLINT
    /**
     * @symbol
     * ?fireEventUserListUpdated\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00_N\@Z
     */
    MCVAPI void fireEventUserListUpdated(std::string const&, std::string const&, std::string const&, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventUwpToGdkMigrationComplete\@MinecraftEventing\@\@UEAAXAEBUDeviceIdContext\@Bedrock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void
    fireEventUwpToGdkMigrationComplete(struct Bedrock::DeviceIdContext const&, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventVRModeChanged\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventVRModeChanged(bool); // NOLINT
    /**
     * @symbol
     * ?fireEventVideoPlayed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventVideoPlayed(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventWebviewDownload\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUWebviewDownloadInfo\@\@\@Z
     */
    MCVAPI void fireEventWebviewDownload(std::string const&, struct WebviewDownloadInfo const&) const; // NOLINT
    /**
     * @symbol
     * ?fireEventWorldCorruptionCausedWorldShutdown\@MinecraftEventing\@\@UEAAXAEBULevelStorageEventingContext\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@_N\@4\@\@Z
     */
    MCVAPI void
    fireEventWorldCorruptionCausedWorldShutdown(struct LevelStorageEventingContext const&, std::string const&, class std::optional<bool>); // NOLINT
    /**
     * @symbol ?fireEventWorldExported\@MinecraftEventing\@\@UEAAX_J_K\@Z
     */
    MCVAPI void fireEventWorldExported(__int64, unsigned __int64); // NOLINT
    /**
     * @symbol ?fireEventWorldFilesListed\@MinecraftEventing\@\@UEAAX_K000\@Z
     */
    MCVAPI void
    fireEventWorldFilesListed(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64); // NOLINT
    /**
     * @symbol
     * ?fireEventWorldGenerated\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelSettings\@\@_N\@Z
     */
    MCVAPI void fireEventWorldGenerated(std::string const&, class LevelSettings const&, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventWorldHistoryPackSourceMissingDuringUpgrade\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void
    fireEventWorldHistoryPackSourceMissingDuringUpgrade(std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventWorldImported\@MinecraftEventing\@\@UEAAX_J_K\@Z
     */
    MCVAPI void fireEventWorldImported(__int64, unsigned __int64); // NOLINT
    /**
     * @symbol
     * ?fireEventWorldLoaded\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1_N\@Z
     */
    MCVAPI void fireEventWorldLoaded(class Player*, std::string const&, std::string const&, bool); // NOLINT
    /**
     * @symbol
     * ?fireEventWorldLoadedClassroomCustomization\@MinecraftEventing\@\@UEAAXW4WorldClassroomCustomization\@IMinecraftEventing\@\@V?$buffer_span\@U?$pair\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@V12\@\@std\@\@\@\@\@Z
     */
    MCVAPI void
        fireEventWorldLoadedClassroomCustomization(enum class IMinecraftEventing::WorldClassroomCustomization, class buffer_span<struct std::pair<class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>>>); // NOLINT
    /**
     * @symbol
     * ?fireExternalUriLaunched\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireExternalUriLaunched(std::string const&) const; // NOLINT
    /**
     * @symbol ?fireGlobalResourcePackCrashRecovery\@MinecraftEventing\@\@UEAAXAEAVPackInstance\@\@VUUID\@mce\@\@H\@Z
     */
    MCVAPI void fireGlobalResourcePackCrashRecovery(class PackInstance&, class mce::UUID, int); // NOLINT
    /**
     * @symbol
     * ?fireHostClientTransportSettingSync\@MinecraftEventing\@\@UEAAXW4TransportLayer\@\@0AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@11_K_N\@Z
     */
    MCVAPI void fireHostClientTransportSettingSync(
        enum class TransportLayer,
        enum class TransportLayer,
        std::string const&,
        std::string const&,
        std::string const&,
        unsigned __int64,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?fireIDESelected\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireIDESelected(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?fireIgnoredNotificationsEvent\@MinecraftEventing\@\@UEAAXW4IgnoredNotificationsType\@IMinecraftEventing\@\@HV?$set\@W4IgnoredNotificationSource\@IMinecraftEventing\@\@U?$less\@W4IgnoredNotificationSource\@IMinecraftEventing\@\@\@std\@\@V?$allocator\@W4IgnoredNotificationSource\@IMinecraftEventing\@\@\@4\@\@std\@\@\@Z
     */
    MCVAPI void
    fireIgnoredNotificationsEvent(enum class IMinecraftEventing::IgnoredNotificationsType, int, class std::set<enum class IMinecraftEventing::IgnoredNotificationSource, struct std::less<enum class IMinecraftEventing::IgnoredNotificationSource>, class std::allocator<enum class IMinecraftEventing::IgnoredNotificationSource>>); // NOLINT
    /**
     * @symbol
     * ?fireInAppCodeBuilderActivated\@MinecraftEventing\@\@UEBAXW4OpenCodeMethod\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireInAppCodeBuilderActivated(enum class OpenCodeMethod, std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?fireInAppCodeBuilderDismissed\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireInAppCodeBuilderDismissed(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?fireInviteStatusReceived\@MinecraftEventing\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireInviteStatusReceived(std::string); // NOLINT
    /**
     * @symbol
     * ?fireInviteStatusSentImpl\@MinecraftEventing\@\@UEAAXIV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireInviteStatusSentImpl(unsigned int, std::vector<std::string>); // NOLINT
    /**
     * @symbol
     * ?fireLessonActionTaken\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4EducationLessonAction\@IMinecraftEventing\@\@H\@Z
     */
    MCVAPI void fireLessonActionTaken(
        std::string const&,
        std::string const&,
        std::string const&,
        enum class IMinecraftEventing::EducationLessonAction,
        int
    ); // NOLINT
    /**
     * @symbol
     * ?fireLessonCompleteDialogOpened\@MinecraftEventing\@\@UEBAXW4LessonCompleteDialogEntryPoint\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void fireLessonCompleteDialogOpened(enum class IMinecraftEventing::LessonCompleteDialogEntryPoint
    ) const; // NOLINT
    /**
     * @symbol
     * ?fireLessonProgressEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0000H\@Z
     */
    MCVAPI void fireLessonProgressEvent(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        int
    ); // NOLINT
    /**
     * @symbol
     * ?fireLibraryButtonPressed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireLibraryButtonPressed(std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ?fireMinecraftVersionInviteAccepted\@MinecraftEventing\@\@UEAAX_N_K\@Z
     */
    MCVAPI void fireMinecraftVersionInviteAccepted(bool, unsigned __int64); // NOLINT
    /**
     * @symbol ?fireMinecraftVersionLaunched\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireMinecraftVersionLaunched(bool); // NOLINT
    /**
     * @symbol
     * ?fireNetworkChangedEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireNetworkChangedEvent(std::string const&); // NOLINT
    /**
     * @symbol ?firePackSettingsEvent\@MinecraftEventing\@\@UEAAXAEBVPackSettings\@\@AEBVPackManifest\@\@\@Z
     */
    MCVAPI void firePackSettingsEvent(class PackSettings const&, class PackManifest const&); // NOLINT
    /**
     * @symbol
     * ?firePerfTestEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00II0AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void
    firePerfTestEvent(std::string const&, std::string const&, std::string const&, unsigned int, unsigned int, std::string const&, std::vector<struct std::pair<std::string, float>> const&); // NOLINT
    /**
     * @symbol
     * ?firePermissionsSetEvent\@MinecraftEventing\@\@UEAAXW4PlayerPermissionLevel\@\@W4CommandPermissionLevel\@\@01\@Z
     */
    MCVAPI void firePermissionsSetEvent(
        enum class PlayerPermissionLevel,
        enum class CommandPermissionLevel,
        enum class PlayerPermissionLevel,
        enum class CommandPermissionLevel
    ); // NOLINT
    /**
     * @symbol
     * ?fireQueryOfferResult\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H_N\@Z
     */
    MCVAPI void fireQueryOfferResult(std::string const&, int, bool); // NOLINT
    /**
     * @symbol ?fireQuickPlayEvent\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireQuickPlayEvent(); // NOLINT
    /**
     * @symbol
     * ?fireRealmConnectionEventGenericLambdaCalled\@MinecraftEventing\@\@UEAAXW4RealmConnectionFlow\@IMinecraftEventing\@\@W4RealmConnectionLambda\@3\@W4RealmConnectionResult\@3\@\@Z
     */
    MCVAPI void fireRealmConnectionEventGenericLambdaCalled(
        enum class IMinecraftEventing::RealmConnectionFlow,
        enum class IMinecraftEventing::RealmConnectionLambda,
        enum class IMinecraftEventing::RealmConnectionResult
    ); // NOLINT
    /**
     * @symbol
     * ?fireRealmConnectionEventRealmAPIRequest\@MinecraftEventing\@\@UEAAXW4RealmConnectionFlow\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void fireRealmConnectionEventRealmAPIRequest(enum class IMinecraftEventing::RealmConnectionFlow); // NOLINT
    /**
     * @symbol
     * ?fireRealmConnectionEventRealmAPIResponse\@MinecraftEventing\@\@UEAAXW4RealmConnectionFlow\@IMinecraftEventing\@\@H\@Z
     */
    MCVAPI void
    fireRealmConnectionEventRealmAPIResponse(enum class IMinecraftEventing::RealmConnectionFlow, int); // NOLINT
    /**
     * @symbol
     * ?fireRealmConnectionEventStart\@MinecraftEventing\@\@UEAAXW4RealmConnectionFlow\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void fireRealmConnectionEventStart(enum class IMinecraftEventing::RealmConnectionFlow); // NOLINT
    /**
     * @symbol
     * ?fireScreenLoadTimeUpdateEvent\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@3\@1\@Z
     */
    MCVAPI void
    fireScreenLoadTimeUpdateEvent(unsigned int const&, std::string const&, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireServerConnectionAttemptEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N0\@Z
     */
    MCVAPI void fireServerConnectionAttemptEvent(std::string const&, bool, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireServerConnectionEvent\@MinecraftEventing\@\@UEAAXW4ServerConnectionOutcome\@IConnectionEventing\@\@INAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void
    fireServerConnectionEvent(enum class IConnectionEventing::ServerConnectionOutcome, unsigned int, double, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireServerShutdown\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireServerShutdown(std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireServerStarted\@MinecraftEventing\@\@UEAAXW4ServerType\@IMinecraftEventing\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireServerStarted(enum class IMinecraftEventing::ServerType, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireShareButtonPressed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4EduShareUriType\@\@W4EduShareMethodType\@\@_N\@Z
     */
    MCVAPI void fireShareButtonPressed(
        std::string const&,
        enum class EduShareUriType,
        enum class EduShareMethodType,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?fireStorageMigrationEvent\@MinecraftEventing\@\@UEAAX_NW4StorageMigrationType\@StorageMigration\@Bedrock\@\@HHV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@7\@\@Z
     */
    MCVAPI void
    fireStorageMigrationEvent(bool, enum class Bedrock::StorageMigration::StorageMigrationType, int, int, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireStructureBlockAction\@MinecraftEventing\@\@UEAAXW4StructureBlockActionType\@IMinecraftEventing\@\@AEBVStructureEditorData\@\@PEBVStructureTelemetryClientData\@\@\@Z
     */
    MCVAPI void
    fireStructureBlockAction(enum class IMinecraftEventing::StructureBlockActionType, class StructureEditorData const&, class StructureTelemetryClientData const*); // NOLINT
    /**
     * @symbol
     * ?fireStructureBlockRedstoneActivated\@MinecraftEventing\@\@UEAAXW4StructureBlockActionType\@IMinecraftEventing\@\@AEBVStructureEditorData\@\@PEBVStructureTelemetryClientData\@\@\@Z
     */
    MCVAPI void
    fireStructureBlockRedstoneActivated(enum class IMinecraftEventing::StructureBlockActionType, class StructureEditorData const&, class StructureTelemetryClientData const*); // NOLINT
    /**
     * @symbol ?fireTextToSpeechToggled\@MinecraftEventing\@\@UEAAX_N0\@Z
     */
    MCVAPI void fireTextToSpeechToggled(bool, bool); // NOLINT
    /**
     * @symbol
     * ?fireUserGeneratedUriLaunchFailed\@MinecraftEventing\@\@UEBAXW4UserGeneratedUriSource\@\@W4ValidationStatus\@ResourceUri\@Util\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void
    fireUserGeneratedUriLaunchFailed(enum class UserGeneratedUriSource, enum class Util::ResourceUri::ValidationStatus, std::string const&)
        const; // NOLINT
    /**
     * @symbol ?fireUserGeneratedUriLaunched\@MinecraftEventing\@\@UEBAXW4UserGeneratedUriSource\@\@\@Z
     */
    MCVAPI void fireUserGeneratedUriLaunched(enum class UserGeneratedUriSource) const; // NOLINT
    /**
     * @symbol ?fireWorldConversionAttemptEvent\@MinecraftEventing\@\@UEAAXAEBUWorldConversionReport\@Legacy\@\@\@Z
     */
    MCVAPI void fireWorldConversionAttemptEvent(struct Legacy::WorldConversionReport const&); // NOLINT
    /**
     * @symbol
     * ?fireWorldConversionInitiatedEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireWorldConversionInitiatedEvent(std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireWorldRecoveryTelemetryEvent\@MinecraftEventing\@\@UEAAXAEBUWorldRecoveryTelemetryEvent\@Bedrock\@\@\@Z
     */
    MCVAPI void fireWorldRecoveryTelemetryEvent(struct Bedrock::WorldRecoveryTelemetryEvent const&); // NOLINT
    /**
     * @symbol
     * ?fireWorldUpgradedToCnCPart2\@MinecraftEventing\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVExperiments\@\@1VLevelSeed64\@\@M\@Z
     */
    MCVAPI void fireWorldUpgradedToCnCPart2(
        bool,
        std::string const&,
        class Experiments const&,
        std::string const&,
        class LevelSeed64,
        float
    ); // NOLINT
    /**
     * @symbol ?flagEventDeepLink\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void flagEventDeepLink(); // NOLINT
    /**
     * @symbol ?flagEventPlayerGameTypeDefault\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void flagEventPlayerGameTypeDefault(bool); // NOLINT
    /**
     * @symbol ?forceSendEvents\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void forceSendEvents(); // NOLINT
    /**
     * @symbol ?getAchievementsAlwaysEnabled\@MinecraftEventing\@\@EEAA_NXZ
     */
    MCVAPI bool getAchievementsAlwaysEnabled(); // NOLINT
    /**
     * @symbol
     * ?getCrashTelemetryProcessor\@MinecraftEventing\@\@UEAA?AV?$not_null\@PEAVCrashTelemetryProcessor\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::CrashTelemetryProcessor*> getCrashTelemetryProcessor(); // NOLINT
    /**
     * @symbol ?getEventManager\@MinecraftEventing\@\@EEBAAEAVEventManager\@Events\@Social\@\@XZ
     */
    MCVAPI class Social::Events::EventManager& getEventManager() const; // NOLINT
    /**
     * @symbol
     * ?getPlayerSessionId\@MinecraftEventing\@\@UEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string const& getPlayerSessionId(); // NOLINT
    /**
     * @symbol ?getPrimaryLocalUserId\@MinecraftEventing\@\@EEBAIXZ
     */
    MCVAPI unsigned int getPrimaryLocalUserId() const; // NOLINT
    /**
     * @symbol
     * ?getSessionId\@MinecraftEventing\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getSessionId(); // NOLINT
    /**
     * @symbol ?getShouldHaveAchievementsEnabled\@MinecraftEventing\@\@EEAA_NXZ
     */
    MCVAPI bool getShouldHaveAchievementsEnabled(); // NOLINT
    /**
     * @symbol
     * ?init\@MinecraftEventing\@\@UEAAXAEBV?$not_null\@V?$NonOwnerPointer\@VIUserManager\@Social\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCVAPI void
    init(class gsl::not_null<class Bedrock::NonOwnerPointer<class Social::IUserManager>> const&, class Bedrock::NonOwnerPointer<class AppPlatform> const&); // NOLINT
    /**
     * @symbol ?initDeviceAndSessionIds\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void initDeviceAndSessionIds(); // NOLINT
    /**
     * @symbol ?prepEventSearchCatalogRequest\@MinecraftEventing\@\@UEAAXAEBVSearchRequestTelemetry\@\@\@Z
     */
    MCVAPI void prepEventSearchCatalogRequest(class SearchRequestTelemetry const&); // NOLINT
    /**
     * @symbol ?propertiesAsJsonValue\@MinecraftEventing\@\@UEBA?AVValue\@Json\@\@XZ
     */
    MCVAPI class Json::Value propertiesAsJsonValue() const; // NOLINT
    /**
     * @symbol ?registerOptionsObserver\@MinecraftEventing\@\@UEAAXV?$shared_ptr\@VOptions\@\@\@std\@\@\@Z
     */
    MCVAPI void registerOptionsObserver(class std::shared_ptr<class Options>); // NOLINT
    /**
     * @symbol ?removeTestBuildIdTag\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void removeTestBuildIdTag(); // NOLINT
    /**
     * @symbol ?removeTestTelemetryTag\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void removeTestTelemetryTag(); // NOLINT
    /**
     * @symbol ?requestEventDeferment\@MinecraftEventing\@\@UEAA?AV?$shared_ptr\@PEAX\@std\@\@XZ
     */
    MCVAPI class std::shared_ptr<void*> requestEventDeferment(); // NOLINT
    /**
     * @symbol ?sendBatchedCrashTelemetry\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void sendBatchedCrashTelemetry(); // NOLINT
    /**
     * @symbol ?sendCrashStatusTelemetry\@MinecraftEventing\@\@UEAAXAEBUCrashUploadStatus\@Bedrock\@\@\@Z
     */
    MCVAPI void sendCrashStatusTelemetry(struct Bedrock::CrashUploadStatus const&); // NOLINT
    /**
     * @symbol ?sendCrashTelemetryNow\@MinecraftEventing\@\@UEAAXV?$shared_ptr\@VSessionInfo\@Bedrock\@\@\@std\@\@\@Z
     */
    MCVAPI void sendCrashTelemetryNow(class std::shared_ptr<class Bedrock::SessionInfo>); // NOLINT
    /**
     * @symbol ?setShouldHaveAchievementsEnabled\@MinecraftEventing\@\@EEAAX_N\@Z
     */
    MCVAPI void setShouldHaveAchievementsEnabled(bool); // NOLINT
    /**
     * @symbol ?setTestBuildIdTag\@MinecraftEventing\@\@UEAAXPEBD\@Z
     */
    MCVAPI void setTestBuildIdTag(char const*); // NOLINT
    /**
     * @symbol ?setTestTelemetryTag\@MinecraftEventing\@\@UEAAXPEBD\@Z
     */
    MCVAPI void setTestTelemetryTag(char const*); // NOLINT
    /**
     * @symbol ?shutdown\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void shutdown(); // NOLINT
    /**
     * @symbol ?stopDebugEventLoggingForAllListeners\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void stopDebugEventLoggingForAllListeners(); // NOLINT
    /**
     * @symbol ?tick\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void tick(); // NOLINT
    /**
     * @symbol
     * ?tryFireEventProgressLoadTimes\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void
    tryFireEventProgressLoadTimes(std::string const&, std::vector<struct std::pair<std::string, float>>); // NOLINT
    /**
     * @symbol ?updateEditionType\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void updateEditionType(); // NOLINT
    /**
     * @symbol ?updateIsLegacyPlayer\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void updateIsLegacyPlayer(bool); // NOLINT
    /**
     * @symbol ?updateIsTrial\@MinecraftEventing\@\@UEBAX_N\@Z
     */
    MCVAPI void updateIsTrial(bool) const; // NOLINT
    /**
     * @symbol ?updatePlayerUndergroundStatus\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@_N\@Z
     */
    MCVAPI void updatePlayerUndergroundStatus(class Player*, bool); // NOLINT
    /**
     * @symbol ?updatePrimaryLocalUserId\@MinecraftEventing\@\@UEAAXAEBI\@Z
     */
    MCVAPI void updatePrimaryLocalUserId(unsigned int const&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MinecraftEventing(); // NOLINT
#endif
    /**
     * @symbol ??0MinecraftEventing\@\@QEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI MinecraftEventing(class Core::Path const&); // NOLINT
    /**
     * @symbol ?init\@MinecraftEventing\@\@QEAAXAEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void init(class Bedrock::NonOwnerPointer<class AppPlatform> const&); // NOLINT
    /**
     * @symbol
     * ?initForDedicatedServer\@MinecraftEventing\@\@QEAAXAEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@_N\@Z
     */
    MCAPI void initForDedicatedServer(class Bedrock::NonOwnerPointer<class AppPlatform> const&, bool); // NOLINT
    /**
     * @symbol ?fireEventAwardAchievement\@MinecraftEventing\@\@SAXPEAVPlayer\@\@W4AchievementIds\@1\@\@Z
     */
    MCAPI static void fireEventAwardAchievement(class Player*, enum class MinecraftEventing::AchievementIds); // NOLINT
    /**
     * @symbol
     * ?fireEventBehaviorErrored\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void fireEventBehaviorErrored(class Player*, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventBehaviorFailed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void fireEventBehaviorFailed(class Player*, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventBellBlockUsed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void fireEventBellBlockUsed(class Player*, std::string const&); // NOLINT
    /**
     * @symbol ?fireEventBlockBroken\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBVBlock\@\@W4BlockPlacementMethod\@1\@H\@Z
     */
    MCAPI static void fireEventBlockBroken(
        class Player*,
        class Block const&,
        enum class MinecraftEventing::BlockPlacementMethod,
        int
    ); // NOLINT
    /**
     * @symbol ?fireEventBlockFound\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void fireEventBlockFound(class Player*, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?fireEventCampfireBlockUsed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4POIBlockInteractionType\@1\@\@Z
     */
    MCAPI static void fireEventCampfireBlockUsed(
        class Player*,
        std::string const&,
        enum class MinecraftEventing::POIBlockInteractionType
    ); // NOLINT
    /**
     * @symbol ?fireEventCaravanChanged\@MinecraftEventing\@\@SAXAEAVMob\@\@H\@Z
     */
    MCAPI static void fireEventCaravanChanged(class Mob&, int); // NOLINT
    /**
     * @symbol ?fireEventItemUsed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBVItemDescriptor\@\@W4ItemUseMethod\@\@\@Z
     */
    MCAPI static void fireEventItemUsed(class Player*, class ItemDescriptor const&, enum class ItemUseMethod); // NOLINT
    /**
     * @symbol
     * ?fireEventJukeboxUsed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBVItemDescriptor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void fireEventJukeboxUsed(class Player*, class ItemDescriptor const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?fireEventLecternBlockUsed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4POIBlockInteractionType\@1\@\@Z
     */
    MCAPI static void fireEventLecternBlockUsed(
        class Player*,
        std::string const&,
        enum class MinecraftEventing::POIBlockInteractionType
    ); // NOLINT
    /**
     * @symbol
     * ?fireEventMobEffectChanged\@MinecraftEventing\@\@SAXAEAVMob\@\@AEBVMobEffectInstance\@\@W4ChangeType\@1\@\@Z
     */
    MCAPI static void fireEventMobEffectChanged(
        class Mob&,
        class MobEffectInstance const&,
        enum class MinecraftEventing::ChangeType
    ); // NOLINT
    /**
     * @symbol ?fireEventPlayerTeleported\@MinecraftEventing\@\@SAXPEAVPlayer\@\@MW4TeleportationCause\@1\@H\@Z
     */
    MCAPI static void
    fireEventPlayerTeleported(class Player*, float, enum class MinecraftEventing::TeleportationCause, int); // NOLINT
    /**
     * @symbol ?fireEventPlayerTransform\@MinecraftEventing\@\@SAXAEAVPlayer\@\@\@Z
     */
    MCAPI static void fireEventPlayerTransform(class Player&); // NOLINT
    /**
     * @symbol
     * ?fireEventSlashCommandExecuted\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HH1\@Z
     */
    MCAPI static void
    fireEventSlashCommandExecuted(class Player*, std::string const&, int, int, std::string const&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_fireStructureBlockAction\@MinecraftEventing\@\@AEAAXW4StructureBlockActionType\@IMinecraftEventing\@\@AEBVStructureEditorData\@\@_NPEBVStructureTelemetryClientData\@\@\@Z
     */
    MCAPI void
    _fireStructureBlockAction(enum class IMinecraftEventing::StructureBlockActionType, class StructureEditorData const&, bool, class StructureTelemetryClientData const*); // NOLINT
    /**
     * @symbol ?_generateWorldSessionId\@MinecraftEventing\@\@AEAAXXZ
     */
    MCAPI void _generateWorldSessionId(); // NOLINT
    /**
     * @symbol ?_sendTelemetryHeartbeat\@MinecraftEventing\@\@AEAAXPEBD\@Z
     */
    MCAPI void _sendTelemetryHeartbeat(char const*); // NOLINT
    /**
     * @symbol
     * ?fireEventPlayerMessage\@MinecraftEventing\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCAPI void
    fireEventPlayerMessage(std::string const&, std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ?firePlayerTelemetryEvent\@MinecraftEventing\@\@AEAAXAEBVPlayerTelemetry\@Events\@Social\@\@\@Z
     */
    MCAPI void firePlayerTelemetryEvent(class Social::Events::PlayerTelemetry const&); // NOLINT

private:
    /**
     * @symbol
     * ?mAchievementEventing\@MinecraftEventing\@\@0V?$unique_ptr\@VAchievementEventing\@Events\@Social\@\@U?$default_delete\@VAchievementEventing\@Events\@Social\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class Social::Events::AchievementEventing> mAchievementEventing; // NOLINT
    /**
     * @symbol
     * ?mAcquisitionMethodMap\@MinecraftEventing\@\@0V?$unordered_map\@W4ItemAcquisitionMethod\@\@W4AcquisitionMethod\@MinecraftEventing\@\@U?$hash\@W4ItemAcquisitionMethod\@\@\@std\@\@U?$equal_to\@W4ItemAcquisitionMethod\@\@\@5\@V?$allocator\@U?$pair\@$$CBW4ItemAcquisitionMethod\@\@W4AcquisitionMethod\@MinecraftEventing\@\@\@std\@\@\@5\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<
        enum class ItemAcquisitionMethod,
        enum class MinecraftEventing::AcquisitionMethod,
        struct std::hash<enum class ItemAcquisitionMethod>,
        struct std::equal_to<enum class ItemAcquisitionMethod>, // NOLINT
        class std::allocator<struct std::pair<
            enum class ItemAcquisitionMethod const,
            enum class MinecraftEventing::AcquisitionMethod>>> const mAcquisitionMethodMap; // NOLINT
    /**
     * @symbol
     * ?mPlayerTelemetry\@MinecraftEventing\@\@0V?$unordered_map\@IVPlayerTelemetry\@Events\@Social\@\@U?$hash\@I\@std\@\@U?$equal_to\@I\@5\@V?$allocator\@U?$pair\@$$CBIVPlayerTelemetry\@Events\@Social\@\@\@std\@\@\@5\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        unsigned int,
        class Social::Events::PlayerTelemetry,
        struct std::hash<unsigned int>,
        struct std::equal_to<unsigned int>, // NOLINT
        class std::allocator<struct std::pair<unsigned int const, class Social::Events::PlayerTelemetry>>>
        mPlayerTelemetry; // NOLINT
    /**
     * @symbol
     * ?mUseMethodMap\@MinecraftEventing\@\@0V?$unordered_map\@W4ItemUseMethod\@\@W4UseMethod\@MinecraftEventing\@\@U?$hash\@W4ItemUseMethod\@\@\@std\@\@U?$equal_to\@W4ItemUseMethod\@\@\@5\@V?$allocator\@U?$pair\@$$CBW4ItemUseMethod\@\@W4UseMethod\@MinecraftEventing\@\@\@std\@\@\@5\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<
        enum class ItemUseMethod,
        enum class MinecraftEventing::UseMethod,
        struct std::hash<enum class ItemUseMethod>,
        struct std::equal_to<enum class ItemUseMethod>,// NOLINT
        class std::allocator<
            struct std::pair<enum class ItemUseMethod const, enum class MinecraftEventing::UseMethod>>> const
        mUseMethodMap; // NOLINT
    /**
     * @symbol ?sHeartbeatMutex\@MinecraftEventing\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex sHeartbeatMutex; // NOLINT
    /**
     * @symbol ?sMutex\@MinecraftEventing\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex sMutex; // NOLINT
    /**
     * @symbol ?sPlayerTelemetryMutex\@MinecraftEventing\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex sPlayerTelemetryMutex; // NOLINT
};
