/**
 * @file  MinecraftEventing.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Core.hpp"
#include "../../Bedrock.hpp"
#include "../../IMinecraftEventing.hpp"
#include "../../Social.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftEventing.
 *
 */
class MinecraftEventing {

#define AFTER_EXTRA
// Add Member There
public:
enum class InteractionType;
enum class ChangeType;
enum class TeleportationCause;
enum class BlockPlacementMethod;
enum class AchievementIds;
enum class POIBlockInteractionType;
enum class UseMethod;
enum class AcquisitionMethod;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTEVENTING
public:
    class MinecraftEventing& operator=(class MinecraftEventing const &) = delete;
    MinecraftEventing(class MinecraftEventing const &) = delete;
    MinecraftEventing() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECRAFTEVENTING
    /**
     * @hash   1060394954
     * @symbol  ?addCrashTelemetryToBatch\@MinecraftEventing\@\@UEAAXV?$shared_ptr\@VSessionInfo\@Bedrock\@\@\@std\@\@\@Z
     */
    MCVAPI void addCrashTelemetryToBatch(class std::shared_ptr<class Bedrock::SessionInfo>);
    /**
     * @hash   240702006
     * @symbol  ?addListener\@MinecraftEventing\@\@UEAAXV?$unique_ptr\@VIEventListener\@Events\@Social\@\@U?$default_delete\@VIEventListener\@Events\@Social\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void addListener(std::unique_ptr<class Social::Events::IEventListener>);
    /**
     * @hash   -589150627
     * @symbol  ?fileEventCloudWorldPullFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCVAPI void fileEventCloudWorldPullFailed(std::string const &, std::string const &, bool);
    /**
     * @hash   -1019686717
     * @symbol  ?fireChatUsedEvent\@MinecraftEventing\@\@UEAAXI_N\@Z
     */
    MCVAPI void fireChatUsedEvent(unsigned int, bool);
    /**
     * @symbol  ?fireChunkRecyclerTelemetryData\@MinecraftEventing\@\@UEAAXAEBUChunkRecyclerTelemetryOutput\@\@\@Z
     */
    MCVAPI void fireChunkRecyclerTelemetryData(struct ChunkRecyclerTelemetryOutput const &);
    /**
     * @hash   556552005
     * @symbol  ?fireClassroomSettingUpdated\@MinecraftEventing\@\@UEAAXW4ClassroomSetting\@\@W4SettingsScreenMode\@\@\@Z
     */
    MCVAPI void fireClassroomSettingUpdated(enum class ClassroomSetting, enum class SettingsScreenMode);
    /**
     * @hash   -934954310
     * @symbol  ?fireClubsEngagementEvent\@MinecraftEventing\@\@UEAAXW4ClubsEngagementAction\@IMinecraftEventing\@\@W4ClubsEngagementTargetType\@3\@PEBDURealmId\@Realms\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireClubsEngagementEvent(enum class IMinecraftEventing::ClubsEngagementAction, enum class IMinecraftEventing::ClubsEngagementTargetType, char const *, struct Realms::RealmId, std::string const &);
    /**
     * @hash   -519202489
     * @symbol  ?fireClubsOpenFeedScreenEvent\@MinecraftEventing\@\@UEAAXW4ClubsFeedScreenSource\@IMinecraftEventing\@\@URealmId\@Realms\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireClubsOpenFeedScreenEvent(enum class IMinecraftEventing::ClubsFeedScreenSource, struct Realms::RealmId, std::string const &);
    /**
     * @hash   -366689670
     * @symbol  ?fireCodeCommandButtonPressed\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireCodeCommandButtonPressed();
    /**
     * @hash   -819474026
     * @symbol  ?fireCommunitySIFTProcessEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4TextProcessingEventOrigin\@\@G0_NNDDAEBVValue\@Json\@\@\@Z
     */
    MCVAPI void fireCommunitySIFTProcessEvent(std::string const &, enum class TextProcessingEventOrigin, unsigned short, std::string const &, bool, double, char, char, class Json::Value const &);
    /**
     * @hash   541563617
     * @symbol  ?fireCourseButtonPressed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireCourseButtonPressed(std::string const &, std::string const &);
    /**
     * @symbol  ?fireCurrentInputUpdated\@MinecraftEventing\@\@UEAAXAEBV?$not_null\@V?$NonOwnerPointer\@VIClientInstance\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCVAPI void fireCurrentInputUpdated(class gsl::not_null<class Bedrock::NonOwnerPointer<class IClientInstance>> const &);
    /**
     * @hash   -947317597
     * @symbol  ?fireDBStorageError\@MinecraftEventing\@\@UEAAXAEBULevelStorageEventingContext\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireDBStorageError(struct LevelStorageEventingContext const &, std::string const &);
    /**
     * @hash   -64750080
     * @symbol  ?fireDayOneExperienceStateChanged\@MinecraftEventing\@\@UEAAXW4DayOneExperienceState\@IMinecraftEventing\@\@V?$optional\@I\@std\@\@V?$optional\@_K\@5\@\@Z
     */
    MCVAPI void fireDayOneExperienceStateChanged(enum class IMinecraftEventing::DayOneExperienceState, class std::optional<unsigned int>, class std::optional<unsigned __int64>);
    /**
     * @hash   -492303372
     * @symbol  ?fireEduServiceRequestFailed\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00V?$buffer_span\@U?$pair\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@V12\@\@std\@\@\@\@\@Z
     */
    MCVAPI void fireEduServiceRequestFailed(std::string const &, std::string const &, std::string const &, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>) const;
    /**
     * @hash   -638065298
     * @symbol  ?fireEventAchievementReceived\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventAchievementReceived(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -2073043365
     * @symbol  ?fireEventActorValueValidationFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBD\@Z
     */
    MCVAPI void fireEventActorValueValidationFailed(std::string const &, char const *);
    /**
     * @hash   -530342139
     * @symbol  ?fireEventAndroidHelpRequest\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventAndroidHelpRequest();
    /**
     * @hash   -1644295185
     * @symbol  ?fireEventAndroidScopedStorageDebug\@MinecraftEventing\@\@UEAAX_K\@Z
     */
    MCVAPI void fireEventAndroidScopedStorageDebug(unsigned __int64);
    /**
     * @hash   967670894
     * @symbol  ?fireEventAppInitFileOpenStats\@MinecraftEventing\@\@UEAAXAEBUFileCounters\@Profile\@Core\@\@0\@Z
     */
    MCVAPI void fireEventAppInitFileOpenStats(struct Core::Profile::FileCounters const &, struct Core::Profile::FileCounters const &);
    /**
     * @hash   -448700099
     * @symbol  ?fireEventAppPaused\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventAppPaused();
    /**
     * @hash   1236520022
     * @symbol  ?fireEventAppUnpaused\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventAppUnpaused();
    /**
     * @hash   681654452
     * @symbol  ?fireEventArmorStandItemEquipped\@MinecraftEventing\@\@UEAAXAEBVArmorStand\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCVAPI void fireEventArmorStandItemEquipped(class ArmorStand const &, class ItemDescriptor const &);
    /**
     * @hash   2131281513
     * @symbol  ?fireEventAssertFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventAssertFailed(std::string const &, std::string const &);
    /**
     * @hash   1553616291
     * @symbol  ?fireEventBlockPlacedByCommand\@MinecraftEventing\@\@UEAAXAEBVBlock\@\@H\@Z
     */
    MCVAPI void fireEventBlockPlacedByCommand(class Block const &, int);
    /**
     * @hash   -1996371933
     * @symbol  ?fireEventBlockTypeRegistryChecksumMismatch\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEB_K10\@Z
     */
    MCVAPI void fireEventBlockTypeRegistryChecksumMismatch(std::string const &, unsigned __int64 const &, unsigned __int64 const &, std::string const &);
    /**
     * @hash   -292597757
     * @symbol  ?fireEventBoardTextUpdated\@MinecraftEventing\@\@UEAAXAEAVChalkboardBlockActor\@\@\@Z
     */
    MCVAPI void fireEventBoardTextUpdated(class ChalkboardBlockActor &);
    /**
     * @hash   -1871060073
     * @symbol  ?fireEventBundleSubOfferClicked\@MinecraftEventing\@\@UEAAXHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N0\@Z
     */
    MCVAPI void fireEventBundleSubOfferClicked(int, int, std::string const &, std::string const &, bool, std::string const &);
    /**
     * @hash   -1773758974
     * @symbol  ?fireEventButtonPressed\@MinecraftEventing\@\@UEBAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@V?$buffer_span\@U?$pair\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@V12\@\@std\@\@\@\@\@Z
     */
    MCVAPI void fireEventButtonPressed(class gsl::basic_string_span<char const, -1>, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>) const;
    /**
     * @hash   609971300
     * @symbol  ?fireEventCameraUsed\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventCameraUsed(bool);
    /**
     * @hash   -970490400
     * @symbol  ?fireEventChatSettingsUpdated\@MinecraftEventing\@\@UEBAXPEBVPlayer\@\@AEBV?$vector\@VProperty\@Events\@Social\@\@V?$allocator\@VProperty\@Events\@Social\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void fireEventChatSettingsUpdated(class Player const *, std::vector<class Social::Events::Property> const &) const;
    /**
     * @hash   1805967025
     * @symbol  ?fireEventChildAccountSignIn\@MinecraftEventing\@\@UEAAX_N0\@Z
     */
    MCVAPI void fireEventChildAccountSignIn(bool, bool);
    /**
     * @hash   1285805662
     * @symbol  ?fireEventChunkChanged\@MinecraftEventing\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fireEventChunkChanged(class LevelChunk &);
    /**
     * @hash   526701643
     * @symbol  ?fireEventChunkLoaded\@MinecraftEventing\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fireEventChunkLoaded(class LevelChunk &);
    /**
     * @hash   -1248559134
     * @symbol  ?fireEventChunkUnloaded\@MinecraftEventing\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fireEventChunkUnloaded(class LevelChunk &);
    /**
     * @hash   413302348
     * @symbol  ?fireEventClientLeftGameDueToUnrecoverableError\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void fireEventClientLeftGameDueToUnrecoverableError(std::string const &, bool);
    /**
     * @hash   -345537641
     * @symbol  ?fireEventCodeBuilderClosed\@MinecraftEventing\@\@UEBAXXZ
     */
    MCVAPI void fireEventCodeBuilderClosed() const;
    /**
     * @hash   -1556898242
     * @symbol  ?fireEventCodeBuilderLog\@MinecraftEventing\@\@UEBAXAEBUTelemetryCommonProperties\@Webview\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV45\@\@Z
     */
    MCVAPI void fireEventCodeBuilderLog(struct Webview::TelemetryCommonProperties const &, std::string const &, std::string &) const;
    /**
     * @hash   -1804065275
     * @symbol  ?fireEventCodeBuilderRuntimeAction\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventCodeBuilderRuntimeAction(std::string const &) const;
    /**
     * @hash   1688481312
     * @symbol  ?fireEventCodeBuilderScoreChanged\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCVAPI void fireEventCodeBuilderScoreChanged(std::string const &, int) const;
    /**
     * @hash   1063494189
     * @symbol  ?fireEventCompoundCreatorCreated\@MinecraftEventing\@\@UEAAXHH\@Z
     */
    MCVAPI void fireEventCompoundCreatorCreated(int, int);
    /**
     * @hash   1681405096
     * @symbol  ?fireEventConnectedStorageError\@MinecraftEventing\@\@UEAAXPEBDAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_J\@Z
     */
    MCVAPI void fireEventConnectedStorageError(char const *, std::string const &, __int64);
    /**
     * @hash   742247570
     * @symbol  ?fireEventConnectedStorageResult\@MinecraftEventing\@\@UEAAXW4ConnectedStorageEventType\@\@_NIV?$optional\@I\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@3_J222\@Z
     */
    MCVAPI void fireEventConnectedStorageResult(enum class ConnectedStorageEventType, bool, unsigned int, class std::optional<unsigned int>, std::string const &, std::string const &, __int64, class std::optional<unsigned int>, class std::optional<unsigned int>, class std::optional<unsigned int>);
    /**
     * @hash   785539610
     * @symbol  ?fireEventConnectionFailed\@MinecraftEventing\@\@UEAAXW4ConnectionFailureReason\@IConnectionEventing\@\@\@Z
     */
    MCVAPI void fireEventConnectionFailed(enum class IConnectionEventing::ConnectionFailureReason);
    /**
     * @hash   -1866926627
     * @symbol  ?fireEventContentLogsInWorldSession\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@II\@Z
     */
    MCVAPI void fireEventContentLogsInWorldSession(std::string const &, unsigned int, unsigned int);
    /**
     * @hash   857776750
     * @symbol  ?fireEventContentShared\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEBW4ShareMode\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void fireEventContentShared(std::string const &, std::string const &, enum class IMinecraftEventing::ShareMode const &);
    /**
     * @hash   -1621146567
     * @symbol  ?fireEventControlRemappedByPlayer\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4RawInputType\@\@H\@Z
     */
    MCVAPI void fireEventControlRemappedByPlayer(std::string const &, enum class RawInputType, int) const;
    /**
     * @symbol  ?fireEventControlTipsPanelUpdated\@MinecraftEventing\@\@UEBAXW4EduControlPanelUpdateType\@\@N\@Z
     */
    MCVAPI void fireEventControlTipsPanelUpdated(enum class EduControlPanelUpdateType, double) const;
    /**
     * @hash   151703588
     * @symbol  ?fireEventCopyWorldEducationEnabled\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventCopyWorldEducationEnabled();
    /**
     * @hash   -1467075748
     * @symbol  ?fireEventCrashSystemFailedToInit\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventCrashSystemFailedToInit();
    /**
     * @hash   -645566439
     * @symbol  ?fireEventDefaultCastSelected\@MinecraftEventing\@\@UEAAXHVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventDefaultCastSelected(int, class mce::UUID, std::string const &);
    /**
     * @hash   -1079955787
     * @symbol  ?fireEventDefaultGameTypeChanged\@MinecraftEventing\@\@UEAAXW4GameType\@\@0\@Z
     */
    MCVAPI void fireEventDefaultGameTypeChanged(enum class GameType, enum class GameType);
    /**
     * @hash   810230944
     * @symbol  ?fireEventDevSlashCommandExecuted\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventDevSlashCommandExecuted(std::string const &, std::string const &);
    /**
     * @hash   -466823153
     * @symbol  ?fireEventDeviceAccountFailure\@MinecraftEventing\@\@UEAAXW4SignInStage\@IMinecraftEventing\@\@W4DeviceAccountFailurePhase\@3\@IAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventDeviceAccountFailure(enum class IMinecraftEventing::SignInStage, enum class IMinecraftEventing::DeviceAccountFailurePhase, unsigned int, std::string const &);
    /**
     * @hash   1143464514
     * @symbol  ?fireEventDeviceAccountSuccess\@MinecraftEventing\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventDeviceAccountSuccess(bool, std::string const &);
    /**
     * @hash   -867618061
     * @symbol  ?fireEventDeviceIdManagerFailOnIdentityGained\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventDeviceIdManagerFailOnIdentityGained();
    /**
     * @hash   -706549328
     * @symbol  ?fireEventDeviceLost\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventDeviceLost();
    /**
     * @hash   1209564733
     * @symbol  ?fireEventDifficultySet\@MinecraftEventing\@\@UEAAXW4Difficulty\@\@0\@Z
     */
    MCVAPI void fireEventDifficultySet(enum class Difficulty, enum class Difficulty);
    /**
     * @hash   -788308835
     * @symbol  ?fireEventDiskStatus\@MinecraftEventing\@\@UEAAXW4DiskStatus\@\@W4LevelStorageState\@Core\@\@_K\@Z
     */
    MCVAPI void fireEventDiskStatus(enum class DiskStatus, enum class Core::LevelStorageState, unsigned __int64);
    /**
     * @hash   -743648448
     * @symbol  ?fireEventEduContentVerificationFailed\@MinecraftEventing\@\@UEBAXXZ
     */
    MCVAPI void fireEventEduContentVerificationFailed() const;
    /**
     * @hash   -1351984288
     * @symbol  ?fireEventEduDemoConversion\@MinecraftEventing\@\@UEAAXW4ADRole\@\@W4LastClickedSource\@\@\@Z
     */
    MCVAPI void fireEventEduDemoConversion(enum class ADRole, enum class LastClickedSource);
    /**
     * @hash   -2106666188
     * @symbol  ?fireEventEduResources\@MinecraftEventing\@\@UEBAXXZ
     */
    MCVAPI void fireEventEduResources() const;
    /**
     * @hash   1027524127
     * @symbol  ?fireEventEduServiceStatus\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0HV?$buffer_span\@U?$pair\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@V12\@\@std\@\@\@\@\@Z
     */
    MCVAPI void fireEventEduServiceStatus(std::string const &, std::string const &, int, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>) const;
    /**
     * @hash   -2065661325
     * @symbol  ?fireEventEduiOSPurchaseTransaction\@MinecraftEventing\@\@UEBAXAEBW4TransactionStatus\@\@\@Z
     */
    MCVAPI void fireEventEduiOSPurchaseTransaction(enum class TransactionStatus const &) const;
    /**
     * @hash   -704819702
     * @symbol  ?fireEventElementConstructorUsed\@MinecraftEventing\@\@UEAAXHHW4ElementConstructorUseType\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void fireEventElementConstructorUsed(int, int, enum class IMinecraftEventing::ElementConstructorUseType);
    /**
     * @hash   64131409
     * @symbol  ?fireEventEmptyLibraryCategoryError\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventEmptyLibraryCategoryError(std::string const &) const;
    /**
     * @hash   422039439
     * @symbol  ?fireEventEntitlementListInfo\@MinecraftEventing\@\@UEAAXAEAV?$vector\@VContentIdentity\@\@V?$allocator\@VContentIdentity\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCVAPI void fireEventEntitlementListInfo(std::vector<class ContentIdentity> &, bool);
    /**
     * @hash   -1653207467
     * @symbol  ?fireEventEntitySpawned\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@HI\@Z
     */
    MCVAPI void fireEventEntitySpawned(class Player *, int, unsigned int);
    /**
     * @hash   -1112425984
     * @symbol  ?fireEventGameRulesUpdated\@MinecraftEventing\@\@UEAAXHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventGameRulesUpdated(int, int, std::string const &);
    /**
     * @hash   -2073238344
     * @symbol  ?fireEventGameRulesUpdated\@MinecraftEventing\@\@UEAAX_N0AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventGameRulesUpdated(bool, bool, std::string const &);
    /**
     * @hash   -30295136
     * @symbol  ?fireEventGameRulesUpdated\@MinecraftEventing\@\@UEAAXMMAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventGameRulesUpdated(float, float, std::string const &);
    /**
     * @hash   2068138461
     * @symbol  ?fireEventGoogleAccountHoldWarning\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventGoogleAccountHoldWarning(bool);
    /**
     * @hash   -234126516
     * @symbol  ?fireEventHardwareInfo\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventHardwareInfo();
    /**
     * @hash   1064556115
     * @symbol  ?fireEventHowToPlayTopicChanged\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4InputMode\@\@\@Z
     */
    MCVAPI void fireEventHowToPlayTopicChanged(std::string const &, enum class InputMode);
    /**
     * @hash   -17982360
     * @symbol  ?fireEventIAPPurchaseAttempt\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEAVOffer\@\@W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventIAPPurchaseAttempt(std::string const &, std::string const &, class Offer &, enum class PurchasePath);
    /**
     * @hash   320291213
     * @symbol  ?fireEventIAPPurchaseResolved\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEAVOffer\@\@W4PurchaseResult\@IMinecraftEventing\@\@W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventIAPPurchaseResolved(std::string const &, std::string const &, class Offer &, enum class IMinecraftEventing::PurchaseResult, enum class PurchasePath);
    /**
     * @hash   -2071134671
     * @symbol  ?fireEventIAPRedeemAttempt\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventIAPRedeemAttempt(std::string const &, std::string const &, std::string const &, enum class PurchasePath);
    /**
     * @hash   1547153998
     * @symbol  ?fireEventIAPRedeemResolved\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4PurchaseResult\@IMinecraftEventing\@\@W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventIAPRedeemResolved(std::string const &, std::string const &, std::string const &, enum class IMinecraftEventing::PurchaseResult, enum class PurchasePath);
    /**
     * @hash   -1491114629
     * @symbol  ?fireEventImGuiScreenChanged\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void fireEventImGuiScreenChanged(std::string const &, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const &);
    /**
     * @hash   -12607240
     * @symbol  ?fireEventJoinByCode\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventJoinByCode(std::string const &);
    /**
     * @hash   884707622
     * @symbol  ?fireEventJoinCanceled\@MinecraftEventing\@\@UEAAXW4LoadingState\@\@\@Z
     */
    MCVAPI void fireEventJoinCanceled(enum class LoadingState);
    /**
     * @hash   -657782566
     * @symbol  ?fireEventLabTableCreated\@MinecraftEventing\@\@UEAAXHHH\@Z
     */
    MCVAPI void fireEventLabTableCreated(int, int, int);
    /**
     * @hash   1662014253
     * @symbol  ?fireEventLevelChunkPerformanceData\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventLevelChunkPerformanceData(bool);
    /**
     * @hash   -1658085936
     * @symbol  ?fireEventLevelDatLoadFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCVAPI void fireEventLevelDatLoadFailed(std::string const &, std::string const &, bool);
    /**
     * @hash   1810710058
     * @symbol  ?fireEventLevelDataOverride\@MinecraftEventing\@\@UEBAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCVAPI void fireEventLevelDataOverride(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -236568328
     * @symbol  ?fireEventLevelDestruct\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventLevelDestruct();
    /**
     * @hash   -1436267804
     * @symbol  ?fireEventLibrarySearch\@MinecraftEventing\@\@UEBAXAEBUTelemetryData\@librarySearch\@\@\@Z
     */
    MCVAPI void fireEventLibrarySearch(struct librarySearch::TelemetryData const &) const;
    /**
     * @hash   2032239500
     * @symbol  ?fireEventLibrarySearchItemSelected\@MinecraftEventing\@\@UEBAXHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HH\@Z
     */
    MCVAPI void fireEventLibrarySearchItemSelected(int, int, std::string const &, int, int) const;
    /**
     * @hash   122936071
     * @symbol  ?fireEventLicenseCheck\@MinecraftEventing\@\@UEAAX_NAEAUExtraLicenseData\@\@\@Z
     */
    MCVAPI void fireEventLicenseCheck(bool, struct ExtraLicenseData &);
    /**
     * @hash   1108320414
     * @symbol  ?fireEventLockedItemGiven\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventLockedItemGiven();
    /**
     * @hash   773252797
     * @symbol  ?fireEventMessageServiceImpression\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCVAPI void fireEventMessageServiceImpression(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -982404635
     * @symbol  ?fireEventMultiplayerConnectionStateChanged\@MinecraftEventing\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1III1\@Z
     */
    MCVAPI void fireEventMultiplayerConnectionStateChanged(bool, std::string const &, std::string const &, unsigned int, unsigned int, unsigned int, std::string const &);
    /**
     * @hash   -809496078
     * @symbol  ?fireEventMultiplayerSessionUpdate\@MinecraftEventing\@\@UEAAXV?$not_null\@PEBVLevel\@\@\@gsl\@\@PEBVPlayer\@\@\@Z
     */
    MCVAPI void fireEventMultiplayerSessionUpdate(class gsl::not_null<class Level const *>, class Player const *);
    /**
     * @hash   1229617666
     * @symbol  ?fireEventNewContentCheckCompleted\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void fireEventNewContentCheckCompleted(std::string const &, bool);
    /**
     * @hash   -1102919806
     * @symbol  ?fireEventNpcPropertiesUpdated\@MinecraftEventing\@\@UEAAXAEAVActor\@\@_N\@Z
     */
    MCVAPI void fireEventNpcPropertiesUpdated(class Actor &, bool);
    /**
     * @hash   -997721873
     * @symbol  ?fireEventOSKTextTruncation\@MinecraftEventing\@\@UEAAXI\@Z
     */
    MCVAPI void fireEventOSKTextTruncation(unsigned int);
    /**
     * @hash   -726748084
     * @symbol  ?fireEventOfferRated\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HHHN\@Z
     */
    MCVAPI void fireEventOfferRated(std::string const &, int, int, int, double);
    /**
     * @hash   -1757808878
     * @symbol  ?fireEventOnAppResume\@MinecraftEventing\@\@UEAAXV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventOnAppResume(std::vector<struct std::pair<std::string, float>>);
    /**
     * @hash   1017702665
     * @symbol  ?fireEventOnAppStart\@MinecraftEventing\@\@UEAAXV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventOnAppStart(std::vector<struct std::pair<std::string, float>>);
    /**
     * @hash   -1601141987
     * @symbol  ?fireEventOnAppSuspend\@MinecraftEventing\@\@UEAAXV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void fireEventOnAppSuspend(std::vector<struct std::pair<std::string, float>>, bool);
    /**
     * @hash   406272976
     * @symbol  ?fireEventOnDeviceLost\@MinecraftEventing\@\@UEAAXV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventOnDeviceLost(std::vector<struct std::pair<std::string, float>>);
    /**
     * @hash   -730558994
     * @symbol  ?fireEventOnSuccessfulClientLogin\@MinecraftEventing\@\@UEAAXPEBVLevel\@\@\@Z
     */
    MCVAPI void fireEventOnSuccessfulClientLogin(class Level const *);
    /**
     * @hash   1568049314
     * @symbol  ?fireEventOneDSPlayerReportPayload\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventOneDSPlayerReportPayload(std::string const &);
    /**
     * @hash   -100483510
     * @symbol  ?fireEventOptionsUpdated\@MinecraftEventing\@\@UEAAXAEAVOptions\@\@W4InputMode\@\@_N\@Z
     */
    MCVAPI void fireEventOptionsUpdated(class Options &, enum class InputMode, bool);
    /**
     * @hash   -1723188977
     * @symbol  ?fireEventOreUIError\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventOreUIError(unsigned int const &, std::string const &);
    /**
     * @hash   1876437518
     * @symbol  ?fireEventPackHashChanged\@MinecraftEventing\@\@UEAAXAEBVPackManifest\@\@\@Z
     */
    MCVAPI void fireEventPackHashChanged(class PackManifest const &);
    /**
     * @hash   559774681
     * @symbol  ?fireEventPackPlayed\@MinecraftEventing\@\@UEAAXAEBVPackInstance\@\@I\@Z
     */
    MCVAPI void fireEventPackPlayed(class PackInstance const &, unsigned int);
    /**
     * @hash   -1860225285
     * @symbol  ?fireEventPackUpgradeAttempt\@MinecraftEventing\@\@UEAAXAEBVPackManifest\@\@AEBVPackReport\@\@\@Z
     */
    MCVAPI void fireEventPackUpgradeAttempt(class PackManifest const &, class PackReport const &);
    /**
     * @hash   -1244275832
     * @symbol  ?fireEventPacketViolationDetected\@MinecraftEventing\@\@UEAAXAEBUExtendedStreamReadResult\@\@W4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI void fireEventPacketViolationDetected(struct ExtendedStreamReadResult const &, enum class PacketViolationResponse, enum class MinecraftPacketIds, class NetworkIdentifier const &);
    /**
     * @hash   -1844387850
     * @symbol  ?fireEventPerformanceContext\@MinecraftEventing\@\@UEAAXAEBVPerfContextTrackerReport\@\@\@Z
     */
    MCVAPI void fireEventPerformanceContext(class PerfContextTrackerReport const &);
    /**
     * @hash   -1757452581
     * @symbol  ?fireEventPerformanceMetrics\@MinecraftEventing\@\@UEAAXAEBUProfilerLiteTelemetry\@\@_N\@Z
     */
    MCVAPI void fireEventPerformanceMetrics(struct ProfilerLiteTelemetry const &, bool);
    /**
     * @hash   1114748127
     * @symbol  ?fireEventPersonaAvatarUpdated\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@AEBV?$vector\@_NV?$allocator\@_N\@std\@\@\@3\@2_N3000311\@Z
     */
    MCVAPI void fireEventPersonaAvatarUpdated(std::string const &, std::vector<std::string> const &, std::vector<bool> const &, std::vector<bool> const &, bool, bool, std::string const &, std::string const &, std::string const &, bool, std::vector<std::string> const &, std::vector<std::string> const &);
    /**
     * @hash   640626134
     * @symbol  ?fireEventPersonaAvatarsListed\@MinecraftEventing\@\@UEAAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPersonaAvatarsListed(std::vector<std::string> const &);
    /**
     * @hash   -1892633500
     * @symbol  ?fireEventPersonaCategoryInformation\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPersonaCategoryInformation(std::string const &);
    /**
     * @hash   1310012494
     * @symbol  ?fireEventPersonaCreationFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N100\@Z
     */
    MCVAPI void fireEventPersonaCreationFailed(std::string const &, std::string const &, bool, bool, std::string const &, std::string const &);
    /**
     * @hash   -1326526006
     * @symbol  ?fireEventPersonaEmotePlayed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NH\@Z
     */
    MCVAPI void fireEventPersonaEmotePlayed(std::string const &, bool, int);
    /**
     * @hash   470838626
     * @symbol  ?fireEventPersonaGeneralError\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPersonaGeneralError(std::string const &);
    /**
     * @hash   1875043039
     * @symbol  ?fireEventPersonaInitalizationEvent\@MinecraftEventing\@\@UEAAXIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPersonaInitalizationEvent(unsigned int, std::string const &, std::string const &);
    /**
     * @hash   -1649039601
     * @symbol  ?fireEventPersonaItemPreviewed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00IIW4PromotionType\@IMinecraftEventing\@\@_N00NW4StoreType\@5\@\@Z
     */
    MCVAPI void fireEventPersonaItemPreviewed(std::string const &, std::string const &, std::string const &, unsigned int, unsigned int, enum class IMinecraftEventing::PromotionType, bool, std::string const &, std::string const &, double, enum class IMinecraftEventing::StoreType);
    /**
     * @hash   326510014
     * @symbol  ?fireEventPersonaLoadingPieces\@MinecraftEventing\@\@UEAAXIN\@Z
     */
    MCVAPI void fireEventPersonaLoadingPieces(unsigned int, double);
    /**
     * @hash   -1555554581
     * @symbol  ?fireEventPersonaSkinChanged\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCVAPI void fireEventPersonaSkinChanged(std::string const &, std::string const &, bool);
    /**
     * @symbol  ?fireEventPersonaStillLoading\@MinecraftEventing\@\@UEAAX_N0000000AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@HN\@Z
     */
    MCVAPI void fireEventPersonaStillLoading(bool, bool, bool, bool, bool, bool, bool, bool, std::vector<std::string> const &, int, double);
    /**
     * @hash   417239180
     * @symbol  ?fireEventPersonaUserLoadedActive\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCVAPI void fireEventPersonaUserLoadedActive(std::string const &, std::string const &, bool);
    /**
     * @hash   59804122
     * @symbol  ?fireEventPlayIntegrityCheck\@MinecraftEventing\@\@UEAAXHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCVAPI void fireEventPlayIntegrityCheck(int, std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   36167543
     * @symbol  ?fireEventPlayerBanned\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPlayerBanned(std::string const &);
    /**
     * @hash   -1882881751
     * @symbol  ?fireEventPlayerBounced\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@AEBVBlock\@\@H\@Z
     */
    MCVAPI void fireEventPlayerBounced(class Player *, class Block const &, int);
    /**
     * @hash   888104946
     * @symbol  ?fireEventPlayerDamaged\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@W4ActorDamageCause\@\@\@Z
     */
    MCVAPI void fireEventPlayerDamaged(class Player *, enum class ActorDamageCause);
    /**
     * @hash   738849775
     * @symbol  ?fireEventPlayerJoinWorld\@MinecraftEventing\@\@UEAAXAEBIW4SubClientId\@\@W4PlayerJoinWorldAttemptState\@IConnectionEventing\@\@HW4DisconnectFailReason\@Connection\@\@W4TransportLayer\@\@\@Z
     */
    MCVAPI void fireEventPlayerJoinWorld(unsigned int const &, enum class SubClientId, enum class IConnectionEventing::PlayerJoinWorldAttemptState, int, enum class Connection::DisconnectFailReason, enum class TransportLayer);
    /**
     * @hash   1745989449
     * @symbol  ?fireEventPlayerJoinWorld\@MinecraftEventing\@\@UEAAXAEBIW4SubClientId\@\@W4PlayerJoinWorldAttemptState\@IConnectionEventing\@\@HW4TransportLayer\@\@\@Z
     */
    MCVAPI void fireEventPlayerJoinWorld(unsigned int const &, enum class SubClientId, enum class IConnectionEventing::PlayerJoinWorldAttemptState, int, enum class TransportLayer);
    /**
     * @hash   -2085559060
     * @symbol  ?fireEventPlayerKicked\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPlayerKicked(std::string const &, std::string const &);
    /**
     * @hash   -2141042260
     * @symbol  ?fireEventPlayerMessageChat\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPlayerMessageChat(std::string const &, std::string const &);
    /**
     * @hash   -943892132
     * @symbol  ?fireEventPlayerMessageMe\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPlayerMessageMe(std::string const &, std::string const &);
    /**
     * @hash   -748098629
     * @symbol  ?fireEventPlayerMessageSay\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPlayerMessageSay(std::string const &, std::string const &);
    /**
     * @hash   365870215
     * @symbol  ?fireEventPlayerMessageTell\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventPlayerMessageTell(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   1014680628
     * @symbol  ?fireEventPlayerMessageTitle\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventPlayerMessageTitle(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -151208503
     * @symbol  ?fireEventPlayerReportSent\@MinecraftEventing\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCVAPI void fireEventPlayerReportSent(bool, std::string const &, std::string const &);
    /**
     * @hash   46168961
     * @symbol  ?fireEventPlayerTravelled\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@M\@Z
     */
    MCVAPI void fireEventPlayerTravelled(class Player *, float);
    /**
     * @hash   -522320859
     * @symbol  ?fireEventPopupClosed\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPopupClosed(std::string const &) const;
    /**
     * @hash   -1247738325
     * @symbol  ?fireEventPopupFiredEdu\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000W4ActiveDirectoryAction\@\@\@Z
     */
    MCVAPI void fireEventPopupFiredEdu(std::string const &, std::string const &, std::string const &, std::string const &, enum class ActiveDirectoryAction);
    /**
     * @hash   1894758073
     * @symbol  ?fireEventPortfolioExported\@MinecraftEventing\@\@UEAAXHH\@Z
     */
    MCVAPI void fireEventPortfolioExported(int, int);
    /**
     * @hash   -365407201
     * @symbol  ?fireEventProgressionsSet\@MinecraftEventing\@\@UEAAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventProgressionsSet(std::vector<std::string> const &);
    /**
     * @hash   -1710646419
     * @symbol  ?fireEventPromotionNotificationClicked\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPromotionNotificationClicked(std::string const &);
    /**
     * @hash   286071837
     * @symbol  ?fireEventPurchaseAttempt\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4StoreType\@IMinecraftEventing\@\@W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventPurchaseAttempt(std::string const &, std::string const &, std::string const &, enum class IMinecraftEventing::StoreType, enum class PurchasePath);
    /**
     * @hash   975527724
     * @symbol  ?fireEventPurchaseFailureDetails\@MinecraftEventing\@\@UEAAXHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventPurchaseFailureDetails(int, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   1966306820
     * @symbol  ?fireEventPurchaseGameAttempt\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventPurchaseGameAttempt(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -254349566
     * @symbol  ?fireEventPurchaseResolved\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4StoreType\@IMinecraftEventing\@\@W4PurchaseResult\@5\@W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventPurchaseResolved(std::string const &, std::string const &, std::string const &, enum class IMinecraftEventing::StoreType, enum class IMinecraftEventing::PurchaseResult, enum class PurchasePath);
    /**
     * @hash   -617387596
     * @symbol  ?fireEventPushNotificationOpened\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPushNotificationOpened(std::string const &, std::string const &);
    /**
     * @hash   92613130
     * @symbol  ?fireEventPushNotificationPermission\@MinecraftEventing\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPushNotificationPermission(bool, std::string const &);
    /**
     * @hash   1971541195
     * @symbol  ?fireEventPushNotificationReceived\@MinecraftEventing\@\@UEAAXAEBVPushNotificationMessage\@\@\@Z
     */
    MCVAPI void fireEventPushNotificationReceived(class PushNotificationMessage const &);
    /**
     * @hash   1989254794
     * @symbol  ?fireEventRealmDownload\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0HHH\@Z
     */
    MCVAPI void fireEventRealmDownload(std::string const &, std::string const &, int, int, int);
    /**
     * @hash   -103246809
     * @symbol  ?fireEventRealmMemberlistCleared\@MinecraftEventing\@\@UEAAXAEBURealmId\@Realms\@\@AEBH\@Z
     */
    MCVAPI void fireEventRealmMemberlistCleared(struct Realms::RealmId const &, int const &);
    /**
     * @hash   1694650990
     * @symbol  ?fireEventRealmShared\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBW4ShareMode\@IMinecraftEventing\@\@AEBURealmId\@Realms\@\@\@Z
     */
    MCVAPI void fireEventRealmShared(std::string const &, enum class IMinecraftEventing::ShareMode const &, struct Realms::RealmId const &);
    /**
     * @hash   -2119606117
     * @symbol  ?fireEventRealmUpload\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0HHH_N\@Z
     */
    MCVAPI void fireEventRealmUpload(std::string const &, std::string const &, int, int, int, bool);
    /**
     * @hash   1715853967
     * @symbol  ?fireEventRealmUrlGenerated\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBURealmId\@Realms\@\@\@Z
     */
    MCVAPI void fireEventRealmUrlGenerated(std::string const &, struct Realms::RealmId const &);
    /**
     * @hash   617478745
     * @symbol  ?fireEventRealmsSubscriptionPurchaseFailed\@MinecraftEventing\@\@UEAAXAEBUProductSku\@\@W4RealmsPurchaseIntent\@\@W4RealmsPurchaseFailureReason\@\@\@Z
     */
    MCVAPI void fireEventRealmsSubscriptionPurchaseFailed(struct ProductSku const &, enum class RealmsPurchaseIntent, enum class RealmsPurchaseFailureReason);
    /**
     * @hash   377791200
     * @symbol  ?fireEventRealmsSubscriptionPurchaseStarted\@MinecraftEventing\@\@UEAAXAEBUProductSku\@\@W4RealmsPurchaseIntent\@\@\@Z
     */
    MCVAPI void fireEventRealmsSubscriptionPurchaseStarted(struct ProductSku const &, enum class RealmsPurchaseIntent);
    /**
     * @hash   451427520
     * @symbol  ?fireEventRealmsSubscriptionPurchaseSucceeded\@MinecraftEventing\@\@UEAAXAEBUProductSku\@\@W4RealmsPurchaseIntent\@\@\@Z
     */
    MCVAPI void fireEventRealmsSubscriptionPurchaseSucceeded(struct ProductSku const &, enum class RealmsPurchaseIntent);
    /**
     * @hash   1090888939
     * @symbol  ?fireEventReducerBlockEntered\@MinecraftEventing\@\@UEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCVAPI void fireEventReducerBlockEntered(class ItemDescriptor const &);
    /**
     * @hash   -1191007363
     * @symbol  ?fireEventRenderingSizeChanged\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventRenderingSizeChanged();
    /**
     * @hash   -751478782
     * @symbol  ?fireEventRespawn\@MinecraftEventing\@\@UEAAXAEAVPlayer\@\@H\@Z
     */
    MCVAPI void fireEventRespawn(class Player &, int);
    /**
     * @hash   1745441802
     * @symbol  ?fireEventRespondedToAcceptContent\@MinecraftEventing\@\@UEAAXAEBUPacksInfoData\@\@_N\@Z
     */
    MCVAPI void fireEventRespondedToAcceptContent(struct PacksInfoData const &, bool);
    /**
     * @hash   -109253069
     * @symbol  ?fireEventScreenChanged\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void fireEventScreenChanged(unsigned int const &, std::string const &, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const &);
    /**
     * @hash   -2118853649
     * @symbol  ?fireEventScreenLoaded\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@NNN\@Z
     */
    MCVAPI void fireEventScreenLoaded(unsigned int const &, std::string const &, double, double, double);
    /**
     * @hash   -1064018432
     * @symbol  ?fireEventScriptDebuggerConnect\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventScriptDebuggerConnect(bool);
    /**
     * @hash   371181859
     * @symbol  ?fireEventScriptDebuggerListen\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventScriptDebuggerListen(bool);
    /**
     * @hash   734313174
     * @symbol  ?fireEventScriptPluginDiscovery\@MinecraftEventing\@\@UEAAXAEBVScriptPluginResult\@\@_N\@Z
     */
    MCVAPI void fireEventScriptPluginDiscovery(class ScriptPluginResult const &, bool);
    /**
     * @hash   1754979032
     * @symbol  ?fireEventScriptPluginRun\@MinecraftEventing\@\@UEAAXAEBVScriptPluginResult\@\@V?$duration\@_JU?$ratio\@$00$0PECEA\@\@std\@\@\@chrono\@std\@\@_N\@Z
     */
    MCVAPI void fireEventScriptPluginRun(class ScriptPluginResult const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000000>>, bool);
    /**
     * @hash   -94893225
     * @symbol  ?fireEventScriptWatchdog\@MinecraftEventing\@\@UEAAXW4WatchdogEventType\@Scripting\@\@_N_KMH2PEBUModuleDescriptor\@3\@1\@Z
     */
    MCVAPI void fireEventScriptWatchdog(enum class Scripting::WatchdogEventType, bool, unsigned __int64, float, int, unsigned __int64, struct Scripting::ModuleDescriptor const *, bool);
    /**
     * @hash   -1659236405
     * @symbol  ?fireEventSearchCatalogRequest\@MinecraftEventing\@\@UEAAXAEBVSearchRequestTelemetry\@\@\@Z
     */
    MCVAPI void fireEventSearchCatalogRequest(class SearchRequestTelemetry const &);
    /**
     * @hash   405221263
     * @symbol  ?fireEventSearchItemSelected\@MinecraftEventing\@\@UEAAXHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HHH\@Z
     */
    MCVAPI void fireEventSearchItemSelected(int, int, std::string const &, int, int, int);
    /**
     * @hash   1608188776
     * @symbol  ?fireEventServerDrivenLayoutImagesLoaded\@MinecraftEventing\@\@UEAAXAEAVRequestTelemetry\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H_KHHHAEAV?$vector\@GV?$allocator\@G\@std\@\@\@4\@\@Z
     */
    MCVAPI void fireEventServerDrivenLayoutImagesLoaded(class RequestTelemetry &, std::string, int, unsigned __int64, int, int, int, std::vector<unsigned short> &);
    /**
     * @hash   569861120
     * @symbol  ?fireEventServerDrivenLayoutPageLoaded\@MinecraftEventing\@\@UEAAXAEAVRequestTelemetry\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HHHHH\@Z
     */
    MCVAPI void fireEventServerDrivenLayoutPageLoaded(class RequestTelemetry &, std::string, int, int, int, int, int);
    /**
     * @hash   1544847978
     * @symbol  ?fireEventServerRespawnSearchTime\@MinecraftEventing\@\@UEAAXAEAVPlayer\@\@AEBVPlayerRespawnTelemetryData\@\@\@Z
     */
    MCVAPI void fireEventServerRespawnSearchTime(class Player &, class PlayerRespawnTelemetryData const &);
    /**
     * @hash   369278836
     * @symbol  ?fireEventServerShutdownDueToError\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventServerShutdownDueToError(std::string const &);
    /**
     * @hash   -1544511572
     * @symbol  ?fireEventSetMultiplayerCorrelationId\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCVAPI void fireEventSetMultiplayerCorrelationId(class Player *, std::string const &, std::string const &);
    /**
     * @hash   299123630
     * @symbol  ?fireEventSetValidForAchievements\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@_N\@Z
     */
    MCVAPI void fireEventSetValidForAchievements(class Player *, bool);
    /**
     * @symbol  ?fireEventSideBySideValidationError\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0000_N11\@Z
     */
    MCVAPI void fireEventSideBySideValidationError(std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, bool, bool, bool);
    /**
     * @hash   -1591193564
     * @symbol  ?fireEventSidebarNavigation\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1H_N22\@Z
     */
    MCVAPI void fireEventSidebarNavigation(unsigned int const &, std::string const &, std::string const &, int, bool, bool, bool);
    /**
     * @hash   1622552111
     * @symbol  ?fireEventSidebarVerboseToggled\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1_N\@Z
     */
    MCVAPI void fireEventSidebarVerboseToggled(unsigned int const &, std::string const &, std::string const &, bool);
    /**
     * @hash   -96176954
     * @symbol  ?fireEventSignInEdu\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ADRole\@\@W4EduSignInStage\@IMinecraftEventing\@\@00AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void fireEventSignInEdu(std::string const &, enum class ADRole, enum class IMinecraftEventing::EduSignInStage, std::string const &, std::string const &, std::vector<struct std::pair<std::string, std::string>> const &);
    /**
     * @hash   605023674
     * @symbol  ?fireEventSignInToIdentity\@MinecraftEventing\@\@UEAAXW4SignInAccountType\@IMinecraftEventing\@\@W4SignInTrigger\@3\@_NW4SignInStage\@3\@W4SignInResult\@Social\@\@UPlayerIDs\@7\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventSignInToIdentity(enum class IMinecraftEventing::SignInAccountType, enum class IMinecraftEventing::SignInTrigger, bool, enum class IMinecraftEventing::SignInStage, enum class Social::SignInResult, struct Social::PlayerIDs, std::string const &);
    /**
     * @symbol  ?fireEventSignOutEdu\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ADRole\@\@00\@Z
     */
    MCVAPI void fireEventSignOutEdu(std::string const &, enum class ADRole, std::string const &, std::string const &);
    /**
     * @hash   38416275
     * @symbol  ?fireEventSignOutOfIdentity\@MinecraftEventing\@\@UEAAXW4SignInAccountType\@IMinecraftEventing\@\@W4SignInTrigger\@3\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@2\@Z
     */
    MCVAPI void fireEventSignOutOfIdentity(enum class IMinecraftEventing::SignInAccountType, enum class IMinecraftEventing::SignInTrigger, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventSignalServiceConnect\@MinecraftEventing\@\@UEAAXW4SignalServiceConnectState\@IConnectionEventing\@\@_NHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventSignalServiceConnect(enum class IConnectionEventing::SignalServiceConnectState, bool, int, std::string const &);
    /**
     * @hash   980215829
     * @symbol  ?fireEventSplitScreenUpdated\@MinecraftEventing\@\@UEAAXAEBVIClientInstance\@\@\@Z
     */
    MCVAPI void fireEventSplitScreenUpdated(class IClientInstance const &);
    /**
     * @hash   -1550144820
     * @symbol  ?fireEventStackLoaded\@MinecraftEventing\@\@UEAAXAEBUStackStats\@\@\@Z
     */
    MCVAPI void fireEventStackLoaded(struct StackStats const &);
    /**
     * @hash   426332337
     * @symbol  ?fireEventStartClient\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventStartClient(std::string const &);
    /**
     * @hash   -415462369
     * @symbol  ?fireEventStartWorld\@MinecraftEventing\@\@UEAAXW4NetworkType\@IMinecraftEventing\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4MultiplayerServiceIdentifier\@Social\@\@\@Z
     */
    MCVAPI void fireEventStartWorld(enum class IMinecraftEventing::NetworkType, std::string const &, enum class Social::MultiplayerServiceIdentifier);
    /**
     * @hash   336488998
     * @symbol  ?fireEventStorage\@MinecraftEventing\@\@UEAAXHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventStorage(int, std::string const &);
    /**
     * @hash   -215156560
     * @symbol  ?fireEventStorageAreaFull\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@UDirectoryEntry\@Bedrock\@\@V?$allocator\@UDirectoryEntry\@Bedrock\@\@\@std\@\@\@3\@\@Z
     */
    MCVAPI void fireEventStorageAreaFull(std::string const &, std::vector<struct Bedrock::DirectoryEntry> const &);
    /**
     * @hash   868038767
     * @symbol  ?fireEventStorageReport\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventStorageReport(std::string const &);
    /**
     * @hash   -1528884625
     * @symbol  ?fireEventStoreDiscoveryRequestResponse\@MinecraftEventing\@\@UEAAXHH\@Z
     */
    MCVAPI void fireEventStoreDiscoveryRequestResponse(int, int);
    /**
     * @symbol  ?fireEventStoreErrorPage\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventStoreErrorPage(std::string const &, std::string const &);
    /**
     * @hash   436465857
     * @symbol  ?fireEventStoreLocalizationBinaryFetchResponse\@MinecraftEventing\@\@UEAAXHI\@Z
     */
    MCVAPI void fireEventStoreLocalizationBinaryFetchResponse(int, unsigned int);
    /**
     * @hash   -59720753
     * @symbol  ?fireEventStoreOfferClicked\@MinecraftEventing\@\@UEAAXHHHHHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_NH0\@Z
     */
    MCVAPI void fireEventStoreOfferClicked(int, int, int, int, int, int, std::string const &, std::string const &, bool, int, std::string const &);
    /**
     * @hash   525415969
     * @symbol  ?fireEventStorePlayFabRequestResponse\@MinecraftEventing\@\@UEAAXG\@Z
     */
    MCVAPI void fireEventStorePlayFabRequestResponse(unsigned short);
    /**
     * @hash   -1125374439
     * @symbol  ?fireEventStorePromotionNotification\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventStorePromotionNotification(std::string const &);
    /**
     * @hash   660312613
     * @symbol  ?fireEventStoreSearch\@MinecraftEventing\@\@UEAAXAEBUTelemetryData\@storeSearch\@\@\@Z
     */
    MCVAPI void fireEventStoreSearch(struct storeSearch::TelemetryData const &);
    /**
     * @hash   -1098611776
     * @symbol  ?fireEventStoreSessionResponse\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HH\@Z
     */
    MCVAPI void fireEventStoreSessionResponse(std::string const &, int, int);
    /**
     * @hash   -1389756729
     * @symbol  ?fireEventStructureExport\@MinecraftEventing\@\@UEBAXAEBUglTFExportData\@\@W4ExportOutcome\@IMinecraftEventing\@\@W4ExportStage\@4\@\@Z
     */
    MCVAPI void fireEventStructureExport(struct glTFExportData const &, enum class IMinecraftEventing::ExportOutcome, enum class IMinecraftEventing::ExportStage) const;
    /**
     * @symbol  ?fireEventSwitchAccountEdu\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ADRole\@\@0\@Z
     */
    MCVAPI void fireEventSwitchAccountEdu(std::string const &, enum class ADRole, std::string const &);
    /**
     * @hash   -55679013
     * @symbol  ?fireEventTagButtonPressed\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void fireEventTagButtonPressed(std::string const &, bool) const;
    /**
     * @hash   635809434
     * @symbol  ?fireEventTelemetryHttpError\@MinecraftEventing\@\@UEAAXW4TelemetrySystemType\@Events\@Social\@\@VStatus\@Http\@Bedrock\@\@\@Z
     */
    MCVAPI void fireEventTelemetryHttpError(enum class Social::Events::TelemetrySystemType, class Bedrock::Http::Status);
    /**
     * @hash   -1152072457
     * @symbol  ?fireEventTreatmentPackApplied\@MinecraftEventing\@\@UEAAXAEBVPackManifest\@\@\@Z
     */
    MCVAPI void fireEventTreatmentPackApplied(class PackManifest const &);
    /**
     * @hash   -1053275396
     * @symbol  ?fireEventTreatmentPackDownloadFailed\@MinecraftEventing\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCVAPI void fireEventTreatmentPackDownloadFailed(std::string, std::string, std::string, std::string);
    /**
     * @hash   1770905614
     * @symbol  ?fireEventTreatmentPackDownloaded\@MinecraftEventing\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCVAPI void fireEventTreatmentPackDownloaded(std::string, std::string, std::string, std::string);
    /**
     * @hash   -565801575
     * @symbol  ?fireEventTreatmentPackRemoved\@MinecraftEventing\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventTreatmentPackRemoved(std::string);
    /**
     * @hash   1972700335
     * @symbol  ?fireEventTreatmentsCleared\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventTreatmentsCleared();
    /**
     * @hash   -1070991646
     * @symbol  ?fireEventTreatmentsSet\@MinecraftEventing\@\@UEAAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventTreatmentsSet(std::vector<std::string> const &);
    /**
     * @hash   -1177927473
     * @symbol  ?fireEventTrialDeviceIdCorrelation\@MinecraftEventing\@\@UEAAX_JAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@01\@Z
     */
    MCVAPI void fireEventTrialDeviceIdCorrelation(__int64, std::string const &, __int64, std::string const &);
    /**
     * @hash   -1380945730
     * @symbol  ?fireEventUgcAcquisitionStateChanged\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_KN_NH2H00\@Z
     */
    MCVAPI void fireEventUgcAcquisitionStateChanged(std::string const &, unsigned __int64, double, bool, int, bool, int, std::string const &, std::string const &);
    /**
     * @hash   1123348129
     * @symbol  ?fireEventUnknownBlockReceived\@MinecraftEventing\@\@UEAAXAEBUNewBlockID\@\@G\@Z
     */
    MCVAPI void fireEventUnknownBlockReceived(struct NewBlockID const &, unsigned short);
    /**
     * @hash   -578460656
     * @symbol  ?fireEventUserListUpdated\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00_N\@Z
     */
    MCVAPI void fireEventUserListUpdated(std::string const &, std::string const &, std::string const &, bool);
    /**
     * @hash   -702280658
     * @symbol  ?fireEventUwpToGdkMigrationComplete\@MinecraftEventing\@\@UEAAXAEBUDeviceIdContext\@Bedrock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventUwpToGdkMigrationComplete(struct Bedrock::DeviceIdContext const &, std::string const &);
    /**
     * @hash   466498009
     * @symbol  ?fireEventVRModeChanged\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventVRModeChanged(bool);
    /**
     * @hash   -598697476
     * @symbol  ?fireEventVideoPlayed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventVideoPlayed(std::string const &, std::string const &);
    /**
     * @hash   2048320671
     * @symbol  ?fireEventWebviewDownload\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUWebviewDownloadInfo\@\@\@Z
     */
    MCVAPI void fireEventWebviewDownload(std::string const &, struct WebviewDownloadInfo const &) const;
    /**
     * @hash   -1949798270
     * @symbol  ?fireEventWorldCorruptionCausedWorldShutdown\@MinecraftEventing\@\@UEAAXAEBULevelStorageEventingContext\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@_N\@4\@\@Z
     */
    MCVAPI void fireEventWorldCorruptionCausedWorldShutdown(struct LevelStorageEventingContext const &, std::string const &, class std::optional<bool>);
    /**
     * @hash   1861917230
     * @symbol  ?fireEventWorldExported\@MinecraftEventing\@\@UEAAX_J_K\@Z
     */
    MCVAPI void fireEventWorldExported(__int64, unsigned __int64);
    /**
     * @hash   -2117915584
     * @symbol  ?fireEventWorldFilesListed\@MinecraftEventing\@\@UEAAX_K000\@Z
     */
    MCVAPI void fireEventWorldFilesListed(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64);
    /**
     * @hash   -550879517
     * @symbol  ?fireEventWorldGenerated\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelSettings\@\@_N\@Z
     */
    MCVAPI void fireEventWorldGenerated(std::string const &, class LevelSettings const &, bool);
    /**
     * @hash   450417003
     * @symbol  ?fireEventWorldHistoryPackSourceMissingDuringUpgrade\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventWorldHistoryPackSourceMissingDuringUpgrade(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   1707897167
     * @symbol  ?fireEventWorldImported\@MinecraftEventing\@\@UEAAX_J_K\@Z
     */
    MCVAPI void fireEventWorldImported(__int64, unsigned __int64);
    /**
     * @hash   -1090317406
     * @symbol  ?fireEventWorldLoaded\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1_N\@Z
     */
    MCVAPI void fireEventWorldLoaded(class Player *, std::string const &, std::string const &, bool);
    /**
     * @hash   1200722849
     * @symbol  ?fireEventWorldLoadedClassroomCustomization\@MinecraftEventing\@\@UEAAXW4WorldClassroomCustomization\@IMinecraftEventing\@\@V?$buffer_span\@U?$pair\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@V12\@\@std\@\@\@\@\@Z
     */
    MCVAPI void fireEventWorldLoadedClassroomCustomization(enum class IMinecraftEventing::WorldClassroomCustomization, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>);
    /**
     * @hash   -1827425892
     * @symbol  ?fireExternalUriLaunched\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireExternalUriLaunched(std::string const &) const;
    /**
     * @hash   -925775746
     * @symbol  ?fireGlobalResourcePackCrashRecovery\@MinecraftEventing\@\@UEAAXAEAVPackInstance\@\@VUUID\@mce\@\@H\@Z
     */
    MCVAPI void fireGlobalResourcePackCrashRecovery(class PackInstance &, class mce::UUID, int);
    /**
     * @hash   852923423
     * @symbol  ?fireHostClientTransportSettingSync\@MinecraftEventing\@\@UEAAXW4TransportLayer\@\@0AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@11_K_N\@Z
     */
    MCVAPI void fireHostClientTransportSettingSync(enum class TransportLayer, enum class TransportLayer, std::string const &, std::string const &, std::string const &, unsigned __int64, bool);
    /**
     * @hash   2122692538
     * @symbol  ?fireIDESelected\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireIDESelected(std::string const &) const;
    /**
     * @hash   797208010
     * @symbol  ?fireInAppCodeBuilderActivated\@MinecraftEventing\@\@UEBAXW4OpenCodeMethod\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireInAppCodeBuilderActivated(enum class OpenCodeMethod, std::string const &) const;
    /**
     * @hash   -1157107032
     * @symbol  ?fireInAppCodeBuilderDismissed\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireInAppCodeBuilderDismissed(std::string const &) const;
    /**
     * @hash   996819674
     * @symbol  ?fireInviteStatusReceived\@MinecraftEventing\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireInviteStatusReceived(std::string);
    /**
     * @hash   833717994
     * @symbol  ?fireInviteStatusSentImpl\@MinecraftEventing\@\@UEAAXIV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireInviteStatusSentImpl(unsigned int, std::vector<std::string>);
    /**
     * @hash   868705758
     * @symbol  ?fireLessonActionTaken\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4EducationLessonAction\@IMinecraftEventing\@\@H\@Z
     */
    MCVAPI void fireLessonActionTaken(std::string const &, std::string const &, std::string const &, enum class IMinecraftEventing::EducationLessonAction, int);
    /**
     * @hash   -1194411058
     * @symbol  ?fireLessonCompleteDialogOpened\@MinecraftEventing\@\@UEBAXW4LessonCompleteDialogEntryPoint\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void fireLessonCompleteDialogOpened(enum class IMinecraftEventing::LessonCompleteDialogEntryPoint) const;
    /**
     * @hash   -464321996
     * @symbol  ?fireLessonProgressEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0000H\@Z
     */
    MCVAPI void fireLessonProgressEvent(std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, int);
    /**
     * @hash   1114140015
     * @symbol  ?fireLibraryButtonPressed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireLibraryButtonPressed(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   1833598507
     * @symbol  ?fireMinecraftVersionInviteAccepted\@MinecraftEventing\@\@UEAAX_N_K\@Z
     */
    MCVAPI void fireMinecraftVersionInviteAccepted(bool, unsigned __int64);
    /**
     * @hash   1221852055
     * @symbol  ?fireMinecraftVersionLaunched\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireMinecraftVersionLaunched(bool);
    /**
     * @hash   -585953924
     * @symbol  ?fireNetworkChangedEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireNetworkChangedEvent(std::string const &);
    /**
     * @hash   -1479061458
     * @symbol  ?firePackSettingsEvent\@MinecraftEventing\@\@UEAAXAEBVPackSettings\@\@AEBVPackManifest\@\@\@Z
     */
    MCVAPI void firePackSettingsEvent(class PackSettings const &, class PackManifest const &);
    /**
     * @hash   -1747904534
     * @symbol  ?firePerfTestEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00II0AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void firePerfTestEvent(std::string const &, std::string const &, std::string const &, unsigned int, unsigned int, std::string const &, std::vector<struct std::pair<std::string, float>> const &);
    /**
     * @hash   -1682623560
     * @symbol  ?firePermissionsSetEvent\@MinecraftEventing\@\@UEAAXW4PlayerPermissionLevel\@\@W4CommandPermissionLevel\@\@01\@Z
     */
    MCVAPI void firePermissionsSetEvent(enum class PlayerPermissionLevel, enum class CommandPermissionLevel, enum class PlayerPermissionLevel, enum class CommandPermissionLevel);
    /**
     * @hash   1612026288
     * @symbol  ?fireQueryOfferResult\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H_N\@Z
     */
    MCVAPI void fireQueryOfferResult(std::string const &, int, bool);
    /**
     * @hash   -1964882495
     * @symbol  ?fireQuickPlayEvent\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireQuickPlayEvent();
    /**
     * @hash   601935059
     * @symbol  ?fireRealmConnectionEventGenericLambdaCalled\@MinecraftEventing\@\@UEAAXW4RealmConnectionFlow\@IMinecraftEventing\@\@W4RealmConnectionLambda\@3\@W4RealmConnectionResult\@3\@\@Z
     */
    MCVAPI void fireRealmConnectionEventGenericLambdaCalled(enum class IMinecraftEventing::RealmConnectionFlow, enum class IMinecraftEventing::RealmConnectionLambda, enum class IMinecraftEventing::RealmConnectionResult);
    /**
     * @hash   740223232
     * @symbol  ?fireRealmConnectionEventRealmAPIRequest\@MinecraftEventing\@\@UEAAXW4RealmConnectionFlow\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void fireRealmConnectionEventRealmAPIRequest(enum class IMinecraftEventing::RealmConnectionFlow);
    /**
     * @hash   -376293075
     * @symbol  ?fireRealmConnectionEventRealmAPIResponse\@MinecraftEventing\@\@UEAAXW4RealmConnectionFlow\@IMinecraftEventing\@\@H\@Z
     */
    MCVAPI void fireRealmConnectionEventRealmAPIResponse(enum class IMinecraftEventing::RealmConnectionFlow, int);
    /**
     * @hash   -871723182
     * @symbol  ?fireRealmConnectionEventStart\@MinecraftEventing\@\@UEAAXW4RealmConnectionFlow\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void fireRealmConnectionEventStart(enum class IMinecraftEventing::RealmConnectionFlow);
    /**
     * @hash   -1772893590
     * @symbol  ?fireScreenLoadTimeUpdateEvent\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@3\@1\@Z
     */
    MCVAPI void fireScreenLoadTimeUpdateEvent(unsigned int const &, std::string const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>, std::string const &);
    /**
     * @hash   1607717078
     * @symbol  ?fireServerConnectionAttemptEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N0\@Z
     */
    MCVAPI void fireServerConnectionAttemptEvent(std::string const &, bool, std::string const &);
    /**
     * @hash   260785876
     * @symbol  ?fireServerConnectionEvent\@MinecraftEventing\@\@UEAAXW4ServerConnectionOutcome\@IConnectionEventing\@\@INAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireServerConnectionEvent(enum class IConnectionEventing::ServerConnectionOutcome, unsigned int, double, std::string const &);
    /**
     * @hash   733071787
     * @symbol  ?fireServerShutdown\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireServerShutdown(std::string const &);
    /**
     * @hash   -1558616157
     * @symbol  ?fireServerStarted\@MinecraftEventing\@\@UEAAXW4ServerType\@IMinecraftEventing\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireServerStarted(enum class IMinecraftEventing::ServerType, std::string const &);
    /**
     * @hash   418411942
     * @symbol  ?fireShareButtonPressed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4EduShareUriType\@\@W4EduShareMethodType\@\@_N\@Z
     */
    MCVAPI void fireShareButtonPressed(std::string const &, enum class EduShareUriType, enum class EduShareMethodType, bool);
    /**
     * @hash   -1377860208
     * @symbol  ?fireStorageMigrationEvent\@MinecraftEventing\@\@UEAAX_NW4StorageMigrationType\@StorageMigration\@Bedrock\@\@HHV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@7\@\@Z
     */
    MCVAPI void fireStorageMigrationEvent(bool, enum class Bedrock::StorageMigration::StorageMigrationType, int, int, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>, std::string const &);
    /**
     * @hash   -853904031
     * @symbol  ?fireStructureBlockAction\@MinecraftEventing\@\@UEAAXW4StructureBlockActionType\@IMinecraftEventing\@\@AEBVStructureEditorData\@\@PEBVStructureTelemetryClientData\@\@\@Z
     */
    MCVAPI void fireStructureBlockAction(enum class IMinecraftEventing::StructureBlockActionType, class StructureEditorData const &, class StructureTelemetryClientData const *);
    /**
     * @hash   -1017742694
     * @symbol  ?fireStructureBlockRedstoneActivated\@MinecraftEventing\@\@UEAAXW4StructureBlockActionType\@IMinecraftEventing\@\@AEBVStructureEditorData\@\@PEBVStructureTelemetryClientData\@\@\@Z
     */
    MCVAPI void fireStructureBlockRedstoneActivated(enum class IMinecraftEventing::StructureBlockActionType, class StructureEditorData const &, class StructureTelemetryClientData const *);
    /**
     * @hash   -865893190
     * @symbol  ?fireTextToSpeechToggled\@MinecraftEventing\@\@UEAAX_N0\@Z
     */
    MCVAPI void fireTextToSpeechToggled(bool, bool);
    /**
     * @hash   2021592137
     * @symbol  ?fireUserGeneratedUriLaunchFailed\@MinecraftEventing\@\@UEBAXW4UserGeneratedUriSource\@\@W4ValidationStatus\@ResourceUri\@Util\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireUserGeneratedUriLaunchFailed(enum class UserGeneratedUriSource, enum class Util::ResourceUri::ValidationStatus, std::string const &) const;
    /**
     * @hash   -1973360962
     * @symbol  ?fireUserGeneratedUriLaunched\@MinecraftEventing\@\@UEBAXW4UserGeneratedUriSource\@\@\@Z
     */
    MCVAPI void fireUserGeneratedUriLaunched(enum class UserGeneratedUriSource) const;
    /**
     * @hash   1594162080
     * @symbol  ?fireWorldConversionAttemptEvent\@MinecraftEventing\@\@UEAAXAEBUWorldConversionReport\@Legacy\@\@\@Z
     */
    MCVAPI void fireWorldConversionAttemptEvent(struct Legacy::WorldConversionReport const &);
    /**
     * @hash   -35812647
     * @symbol  ?fireWorldConversionInitiatedEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireWorldConversionInitiatedEvent(std::string const &);
    /**
     * @hash   333317808
     * @symbol  ?fireWorldRecoveryTelemetryEvent\@MinecraftEventing\@\@UEAAXAEBUWorldRecoveryTelemetryEvent\@Bedrock\@\@\@Z
     */
    MCVAPI void fireWorldRecoveryTelemetryEvent(struct Bedrock::WorldRecoveryTelemetryEvent const &);
    /**
     * @hash   -435358213
     * @symbol  ?fireWorldUpgradedToCnCPart2\@MinecraftEventing\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVExperiments\@\@1VLevelSeed64\@\@M\@Z
     */
    MCVAPI void fireWorldUpgradedToCnCPart2(bool, std::string const &, class Experiments const &, std::string const &, class LevelSeed64, float);
    /**
     * @hash   -1127635402
     * @symbol  ?flagEventDeepLink\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void flagEventDeepLink();
    /**
     * @hash   -789793708
     * @symbol  ?flagEventPlayerGameTypeDefault\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void flagEventPlayerGameTypeDefault(bool);
    /**
     * @hash   1461128110
     * @symbol  ?forceSendEvents\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void forceSendEvents();
    /**
     * @hash   1008958
     * @symbol  ?getAchievementsAlwaysEnabled\@MinecraftEventing\@\@EEAA_NXZ
     */
    MCVAPI bool getAchievementsAlwaysEnabled();
    /**
     * @hash   1131226860
     * @symbol  ?getCrashTelemetryProcessor\@MinecraftEventing\@\@UEAA?AV?$not_null\@PEAVCrashTelemetryProcessor\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::CrashTelemetryProcessor *> getCrashTelemetryProcessor();
    /**
     * @hash   1649941757
     * @symbol  ?getEventManager\@MinecraftEventing\@\@EEBAAEAVEventManager\@Events\@Social\@\@XZ
     */
    MCVAPI class Social::Events::EventManager & getEventManager() const;
    /**
     * @hash   1370015278
     * @symbol  ?getPlayerSessionId\@MinecraftEventing\@\@UEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string const & getPlayerSessionId();
    /**
     * @hash   841420264
     * @symbol  ?getPrimaryLocalUserId\@MinecraftEventing\@\@EEBAIXZ
     */
    MCVAPI unsigned int getPrimaryLocalUserId() const;
    /**
     * @hash   1809489601
     * @symbol  ?getSessionId\@MinecraftEventing\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getSessionId();
    /**
     * @hash   641309234
     * @symbol  ?getShouldHaveAchievementsEnabled\@MinecraftEventing\@\@EEAA_NXZ
     */
    MCVAPI bool getShouldHaveAchievementsEnabled();
    /**
     * @hash   -426088979
     * @symbol  ?init\@MinecraftEventing\@\@UEAAXAEBV?$not_null\@V?$NonOwnerPointer\@VIUserManager\@Social\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCVAPI void init(class gsl::not_null<class Bedrock::NonOwnerPointer<class Social::IUserManager>> const &, class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    /**
     * @hash   235123237
     * @symbol  ?initDeviceAndSessionIds\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void initDeviceAndSessionIds();
    /**
     * @hash   -1718652830
     * @symbol  ?prepEventSearchCatalogRequest\@MinecraftEventing\@\@UEAAXAEBVSearchRequestTelemetry\@\@\@Z
     */
    MCVAPI void prepEventSearchCatalogRequest(class SearchRequestTelemetry const &);
    /**
     * @hash   -1534737963
     * @symbol  ?propertiesAsJsonValue\@MinecraftEventing\@\@UEBA?AVValue\@Json\@\@XZ
     */
    MCVAPI class Json::Value propertiesAsJsonValue() const;
    /**
     * @hash   -141640037
     * @symbol  ?registerOptionsObserver\@MinecraftEventing\@\@UEAAXV?$shared_ptr\@VOptions\@\@\@std\@\@\@Z
     */
    MCVAPI void registerOptionsObserver(class std::shared_ptr<class Options>);
    /**
     * @symbol  ?removeTestBuildIdTag\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void removeTestBuildIdTag();
    /**
     * @hash   1031150361
     * @symbol  ?removeTestTelemetryTag\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void removeTestTelemetryTag();
    /**
     * @hash   -627383411
     * @symbol  ?requestEventDeferment\@MinecraftEventing\@\@UEAA?AV?$shared_ptr\@PEAX\@std\@\@XZ
     */
    MCVAPI class std::shared_ptr<void *> requestEventDeferment();
    /**
     * @hash   247541733
     * @symbol  ?sendBatchedCrashTelemetry\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void sendBatchedCrashTelemetry();
    /**
     * @hash   1565087800
     * @symbol  ?sendCrashStatusTelemetry\@MinecraftEventing\@\@UEAAXAEBUCrashUploadStatus\@Bedrock\@\@\@Z
     */
    MCVAPI void sendCrashStatusTelemetry(struct Bedrock::CrashUploadStatus const &);
    /**
     * @hash   -1196874870
     * @symbol  ?sendCrashTelemetryNow\@MinecraftEventing\@\@UEAAXV?$shared_ptr\@VSessionInfo\@Bedrock\@\@\@std\@\@\@Z
     */
    MCVAPI void sendCrashTelemetryNow(class std::shared_ptr<class Bedrock::SessionInfo>);
    /**
     * @hash   1117163768
     * @symbol  ?setShouldHaveAchievementsEnabled\@MinecraftEventing\@\@EEAAX_N\@Z
     */
    MCVAPI void setShouldHaveAchievementsEnabled(bool);
    /**
     * @symbol  ?setTestBuildIdTag\@MinecraftEventing\@\@UEAAXPEBD\@Z
     */
    MCVAPI void setTestBuildIdTag(char const *);
    /**
     * @hash   999693128
     * @symbol  ?setTestTelemetryTag\@MinecraftEventing\@\@UEAAXPEBD\@Z
     */
    MCVAPI void setTestTelemetryTag(char const *);
    /**
     * @hash   -86304008
     * @symbol  ?shutdown\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void shutdown();
    /**
     * @hash   -1521589037
     * @symbol  ?stopDebugEventLoggingForAllListeners\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void stopDebugEventLoggingForAllListeners();
    /**
     * @hash   -544043073
     * @symbol  ?tick\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @hash   770324039
     * @symbol  ?tryFireEventProgressLoadTimes\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void tryFireEventProgressLoadTimes(std::string const &, std::vector<struct std::pair<std::string, float>>);
    /**
     * @hash   1761361505
     * @symbol  ?updateEditionType\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void updateEditionType();
    /**
     * @hash   -858157187
     * @symbol  ?updateIsLegacyPlayer\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void updateIsLegacyPlayer(bool);
    /**
     * @hash   798064886
     * @symbol  ?updateIsTrial\@MinecraftEventing\@\@UEBAX_N\@Z
     */
    MCVAPI void updateIsTrial(bool) const;
    /**
     * @hash   -98483962
     * @symbol  ?updatePlayerUndergroundStatus\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@_N\@Z
     */
    MCVAPI void updatePlayerUndergroundStatus(class Player *, bool);
    /**
     * @hash   -675836053
     * @symbol  ?updatePrimaryLocalUserId\@MinecraftEventing\@\@UEAAXAEBI\@Z
     */
    MCVAPI void updatePrimaryLocalUserId(unsigned int const &);
    /**
     * @hash   -1916153080
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~MinecraftEventing();
#endif
    /**
     * @hash   944308710
     * @symbol  ??0MinecraftEventing\@\@QEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI MinecraftEventing(class Core::Path const &);
    /**
     * @hash   1137600787
     * @symbol  ?init\@MinecraftEventing\@\@QEAAXAEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void init(class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    /**
     * @symbol  ?initForDedicatedServer\@MinecraftEventing\@\@QEAAXAEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@_N1\@Z
     */
    MCAPI void initForDedicatedServer(class Bedrock::NonOwnerPointer<class AppPlatform> const &, bool, bool);
    /**
     * @hash   -1850151606
     * @symbol  ?fireEventAwardAchievement\@MinecraftEventing\@\@SAXPEAVPlayer\@\@W4AchievementIds\@1\@\@Z
     */
    MCAPI static void fireEventAwardAchievement(class Player *, enum class MinecraftEventing::AchievementIds);
    /**
     * @hash   634589558
     * @symbol  ?fireEventBehaviorErrored\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void fireEventBehaviorErrored(class Player *, std::string const &);
    /**
     * @hash   148101252
     * @symbol  ?fireEventBehaviorFailed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void fireEventBehaviorFailed(class Player *, std::string const &);
    /**
     * @hash   1414205782
     * @symbol  ?fireEventBellBlockUsed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void fireEventBellBlockUsed(class Player *, std::string const &);
    /**
     * @hash   -518840828
     * @symbol  ?fireEventBlockBroken\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBVBlock\@\@W4BlockPlacementMethod\@1\@H\@Z
     */
    MCAPI static void fireEventBlockBroken(class Player *, class Block const &, enum class MinecraftEventing::BlockPlacementMethod, int);
    /**
     * @hash   -1587579186
     * @symbol  ?fireEventBlockFound\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void fireEventBlockFound(class Player *, class BlockPos const &);
    /**
     * @hash   -209827515
     * @symbol  ?fireEventCampfireBlockUsed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4POIBlockInteractionType\@1\@\@Z
     */
    MCAPI static void fireEventCampfireBlockUsed(class Player *, std::string const &, enum class MinecraftEventing::POIBlockInteractionType);
    /**
     * @hash   764123825
     * @symbol  ?fireEventCaravanChanged\@MinecraftEventing\@\@SAXAEAVMob\@\@H\@Z
     */
    MCAPI static void fireEventCaravanChanged(class Mob &, int);
    /**
     * @hash   -902069521
     * @symbol  ?fireEventItemUsed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBVItemDescriptor\@\@W4ItemUseMethod\@\@\@Z
     */
    MCAPI static void fireEventItemUsed(class Player *, class ItemDescriptor const &, enum class ItemUseMethod);
    /**
     * @hash   2040358699
     * @symbol  ?fireEventJukeboxUsed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBVItemDescriptor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void fireEventJukeboxUsed(class Player *, class ItemDescriptor const &, std::string const &);
    /**
     * @hash   1240952691
     * @symbol  ?fireEventLecternBlockUsed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4POIBlockInteractionType\@1\@\@Z
     */
    MCAPI static void fireEventLecternBlockUsed(class Player *, std::string const &, enum class MinecraftEventing::POIBlockInteractionType);
    /**
     * @hash   710655146
     * @symbol  ?fireEventMobEffectChanged\@MinecraftEventing\@\@SAXAEAVMob\@\@AEBVMobEffectInstance\@\@W4ChangeType\@1\@\@Z
     */
    MCAPI static void fireEventMobEffectChanged(class Mob &, class MobEffectInstance const &, enum class MinecraftEventing::ChangeType);
    /**
     * @hash   1972972608
     * @symbol  ?fireEventPlayerTeleported\@MinecraftEventing\@\@SAXPEAVPlayer\@\@MW4TeleportationCause\@1\@H\@Z
     */
    MCAPI static void fireEventPlayerTeleported(class Player *, float, enum class MinecraftEventing::TeleportationCause, int);
    /**
     * @hash   811078636
     * @symbol  ?fireEventPlayerTransform\@MinecraftEventing\@\@SAXAEAVPlayer\@\@\@Z
     */
    MCAPI static void fireEventPlayerTransform(class Player &);
    /**
     * @hash   1601928279
     * @symbol  ?fireEventSlashCommandExecuted\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HH1\@Z
     */
    MCAPI static void fireEventSlashCommandExecuted(class Player *, std::string const &, int, int, std::string const &);

//private:
    /**
     * @hash   905516155
     * @symbol  ?_fireStructureBlockAction\@MinecraftEventing\@\@AEAAXW4StructureBlockActionType\@IMinecraftEventing\@\@AEBVStructureEditorData\@\@_NPEBVStructureTelemetryClientData\@\@\@Z
     */
    MCAPI void _fireStructureBlockAction(enum class IMinecraftEventing::StructureBlockActionType, class StructureEditorData const &, bool, class StructureTelemetryClientData const *);
    /**
     * @hash   1537213002
     * @symbol  ?_generateWorldSessionId\@MinecraftEventing\@\@AEAAXXZ
     */
    MCAPI void _generateWorldSessionId();
    /**
     * @hash   -1110545239
     * @symbol  ?fireEventPlayerMessage\@MinecraftEventing\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCAPI void fireEventPlayerMessage(std::string const &, std::string const &, std::string const &, std::string const &);

private:
    /**
     * @hash   -434004426
     * @symbol  ?mAchievementEventing\@MinecraftEventing\@\@0V?$unique_ptr\@VAchievementEventing\@Events\@Social\@\@U?$default_delete\@VAchievementEventing\@Events\@Social\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class Social::Events::AchievementEventing> mAchievementEventing;
    /**
     * @hash   -1639929271
     * @symbol  ?mAcquisitionMethodMap\@MinecraftEventing\@\@0V?$unordered_map\@W4ItemAcquisitionMethod\@\@W4AcquisitionMethod\@MinecraftEventing\@\@U?$hash\@W4ItemAcquisitionMethod\@\@\@std\@\@U?$equal_to\@W4ItemAcquisitionMethod\@\@\@5\@V?$allocator\@U?$pair\@$$CBW4ItemAcquisitionMethod\@\@W4AcquisitionMethod\@MinecraftEventing\@\@\@std\@\@\@5\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<enum class ItemAcquisitionMethod, enum class MinecraftEventing::AcquisitionMethod, struct std::hash<enum class ItemAcquisitionMethod>, struct std::equal_to<enum class ItemAcquisitionMethod>, class std::allocator<struct std::pair<enum class ItemAcquisitionMethod const, enum class MinecraftEventing::AcquisitionMethod>>> const mAcquisitionMethodMap;
    /**
     * @hash   1298757379
     * @symbol  ?mUseMethodMap\@MinecraftEventing\@\@0V?$unordered_map\@W4ItemUseMethod\@\@W4UseMethod\@MinecraftEventing\@\@U?$hash\@W4ItemUseMethod\@\@\@std\@\@U?$equal_to\@W4ItemUseMethod\@\@\@5\@V?$allocator\@U?$pair\@$$CBW4ItemUseMethod\@\@W4UseMethod\@MinecraftEventing\@\@\@std\@\@\@5\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<enum class ItemUseMethod, enum class MinecraftEventing::UseMethod, struct std::hash<enum class ItemUseMethod>, struct std::equal_to<enum class ItemUseMethod>, class std::allocator<struct std::pair<enum class ItemUseMethod const, enum class MinecraftEventing::UseMethod>>> const mUseMethodMap;
    /**
     * @hash   -2131240722
     * @symbol  ?sMutex\@MinecraftEventing\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex sMutex;

};