/**
 * @file  MinecraftEventing.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"
#include "IMinecraftEventing.hpp"
#include "Social.hpp"

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
     * @symbol  ?addCrashTelemetryToBatch\@MinecraftEventing\@\@UEAAXV?$shared_ptr\@VSessionInfo\@Bedrock\@\@\@std\@\@\@Z
     */
    MCVAPI void addCrashTelemetryToBatch(class std::shared_ptr<class Bedrock::SessionInfo>);
    /**
     * @symbol  ?addListener\@MinecraftEventing\@\@UEAAXV?$unique_ptr\@VIEventListener\@Events\@Social\@\@U?$default_delete\@VIEventListener\@Events\@Social\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void addListener(std::unique_ptr<class Social::Events::IEventListener>);
    /**
     * @symbol  ?fileEventCloudWorldPullFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCVAPI void fileEventCloudWorldPullFailed(std::string const &, std::string const &, bool);
    /**
     * @symbol  ?fireChatUsedEvent\@MinecraftEventing\@\@UEAAXI_N\@Z
     */
    MCVAPI void fireChatUsedEvent(unsigned int, bool);
    /**
     * @symbol  ?fireChunkRecyclerTelemetryData\@MinecraftEventing\@\@UEAAXAEBUChunkRecyclerTelemetryOutput\@\@\@Z
     */
    MCVAPI void fireChunkRecyclerTelemetryData(struct ChunkRecyclerTelemetryOutput const &);
    /**
     * @symbol  ?fireClassroomSettingUpdated\@MinecraftEventing\@\@UEAAXW4ClassroomSetting\@\@W4SettingsScreenMode\@\@\@Z
     */
    MCVAPI void fireClassroomSettingUpdated(enum class ClassroomSetting, enum class SettingsScreenMode);
    /**
     * @symbol  ?fireClubsEngagementEvent\@MinecraftEventing\@\@UEAAXW4ClubsEngagementAction\@IMinecraftEventing\@\@W4ClubsEngagementTargetType\@3\@PEBDURealmId\@Realms\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireClubsEngagementEvent(enum class IMinecraftEventing::ClubsEngagementAction, enum class IMinecraftEventing::ClubsEngagementTargetType, char const *, struct Realms::RealmId, std::string const &);
    /**
     * @symbol  ?fireClubsOpenFeedScreenEvent\@MinecraftEventing\@\@UEAAXW4ClubsFeedScreenSource\@IMinecraftEventing\@\@URealmId\@Realms\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireClubsOpenFeedScreenEvent(enum class IMinecraftEventing::ClubsFeedScreenSource, struct Realms::RealmId, std::string const &);
    /**
     * @symbol  ?fireCodeCommandButtonPressed\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireCodeCommandButtonPressed();
    /**
     * @symbol  ?fireCommunitySIFTProcessEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4TextProcessingEventOrigin\@\@G0_NNDDAEBVValue\@Json\@\@\@Z
     */
    MCVAPI void fireCommunitySIFTProcessEvent(std::string const &, enum class TextProcessingEventOrigin, unsigned short, std::string const &, bool, double, char, char, class Json::Value const &);
    /**
     * @symbol  ?fireCourseButtonPressed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireCourseButtonPressed(std::string const &, std::string const &);
    /**
     * @symbol  ?fireCurrentInputUpdated\@MinecraftEventing\@\@UEAAXAEBV?$not_null\@V?$NonOwnerPointer\@VIClientInstance\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCVAPI void fireCurrentInputUpdated(class gsl::not_null<class Bedrock::NonOwnerPointer<class IClientInstance>> const &);
    /**
     * @symbol  ?fireDBStorageError\@MinecraftEventing\@\@UEAAXAEBULevelStorageEventingContext\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireDBStorageError(struct LevelStorageEventingContext const &, std::string const &);
    /**
     * @symbol  ?fireDayOneExperienceStateChanged\@MinecraftEventing\@\@UEAAXW4DayOneExperienceState\@IMinecraftEventing\@\@V?$optional\@I\@std\@\@V?$optional\@_K\@5\@\@Z
     */
    MCVAPI void fireDayOneExperienceStateChanged(enum class IMinecraftEventing::DayOneExperienceState, class std::optional<unsigned int>, class std::optional<unsigned __int64>);
    /**
     * @symbol  ?fireEduServiceRequestFailed\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00V?$buffer_span\@U?$pair\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@V12\@\@std\@\@\@\@\@Z
     */
    MCVAPI void fireEduServiceRequestFailed(std::string const &, std::string const &, std::string const &, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>) const;
    /**
     * @symbol  ?fireEventAchievementReceived\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventAchievementReceived(std::string const &, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventActorValueValidationFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBD\@Z
     */
    MCVAPI void fireEventActorValueValidationFailed(std::string const &, char const *);
    /**
     * @symbol  ?fireEventAndroidHelpRequest\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventAndroidHelpRequest();
    /**
     * @symbol  ?fireEventAndroidScopedStorageDebug\@MinecraftEventing\@\@UEAAX_K\@Z
     */
    MCVAPI void fireEventAndroidScopedStorageDebug(unsigned __int64);
    /**
     * @symbol  ?fireEventAppInitFileOpenStats\@MinecraftEventing\@\@UEAAXAEBUFileCounters\@Profile\@Core\@\@0\@Z
     */
    MCVAPI void fireEventAppInitFileOpenStats(struct Core::Profile::FileCounters const &, struct Core::Profile::FileCounters const &);
    /**
     * @symbol  ?fireEventAppPaused\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventAppPaused();
    /**
     * @symbol  ?fireEventAppUnpaused\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventAppUnpaused();
    /**
     * @symbol  ?fireEventArmorStandItemEquipped\@MinecraftEventing\@\@UEAAXAEBVArmorStand\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCVAPI void fireEventArmorStandItemEquipped(class ArmorStand const &, class ItemDescriptor const &);
    /**
     * @symbol  ?fireEventAssertFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventAssertFailed(std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventBlockPlacedByCommand\@MinecraftEventing\@\@UEAAXAEBVBlock\@\@H\@Z
     */
    MCVAPI void fireEventBlockPlacedByCommand(class Block const &, int);
    /**
     * @symbol  ?fireEventBlockTypeRegistryChecksumMismatch\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEB_K10\@Z
     */
    MCVAPI void fireEventBlockTypeRegistryChecksumMismatch(std::string const &, unsigned __int64 const &, unsigned __int64 const &, std::string const &);
    /**
     * @symbol  ?fireEventBoardTextUpdated\@MinecraftEventing\@\@UEAAXAEAVChalkboardBlockActor\@\@\@Z
     */
    MCVAPI void fireEventBoardTextUpdated(class ChalkboardBlockActor &);
    /**
     * @symbol  ?fireEventBundleSubOfferClicked\@MinecraftEventing\@\@UEAAXHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N0\@Z
     */
    MCVAPI void fireEventBundleSubOfferClicked(int, int, std::string const &, std::string const &, bool, std::string const &);
    /**
     * @symbol  ?fireEventButtonPressed\@MinecraftEventing\@\@UEBAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@V?$buffer_span\@U?$pair\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@V12\@\@std\@\@\@\@\@Z
     */
    MCVAPI void fireEventButtonPressed(class gsl::basic_string_span<char const, -1>, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>) const;
    /**
     * @symbol  ?fireEventCameraUsed\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventCameraUsed(bool);
    /**
     * @symbol  ?fireEventChatSettingsUpdated\@MinecraftEventing\@\@UEBAXPEBVPlayer\@\@AEBV?$vector\@VProperty\@Events\@Social\@\@V?$allocator\@VProperty\@Events\@Social\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void fireEventChatSettingsUpdated(class Player const *, std::vector<class Social::Events::Property> const &) const;
    /**
     * @symbol  ?fireEventChildAccountSignIn\@MinecraftEventing\@\@UEAAX_N0\@Z
     */
    MCVAPI void fireEventChildAccountSignIn(bool, bool);
    /**
     * @symbol  ?fireEventChunkChanged\@MinecraftEventing\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fireEventChunkChanged(class LevelChunk &);
    /**
     * @symbol  ?fireEventChunkLoaded\@MinecraftEventing\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fireEventChunkLoaded(class LevelChunk &);
    /**
     * @symbol  ?fireEventChunkUnloaded\@MinecraftEventing\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fireEventChunkUnloaded(class LevelChunk &);
    /**
     * @symbol  ?fireEventClientLeftGameDueToUnrecoverableError\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void fireEventClientLeftGameDueToUnrecoverableError(std::string const &, bool);
    /**
     * @symbol  ?fireEventCodeBuilderClosed\@MinecraftEventing\@\@UEBAXXZ
     */
    MCVAPI void fireEventCodeBuilderClosed() const;
    /**
     * @symbol  ?fireEventCodeBuilderLog\@MinecraftEventing\@\@UEBAXAEBUTelemetryCommonProperties\@Webview\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV45\@\@Z
     */
    MCVAPI void fireEventCodeBuilderLog(struct Webview::TelemetryCommonProperties const &, std::string const &, std::string &) const;
    /**
     * @symbol  ?fireEventCodeBuilderRuntimeAction\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventCodeBuilderRuntimeAction(std::string const &) const;
    /**
     * @symbol  ?fireEventCodeBuilderScoreChanged\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCVAPI void fireEventCodeBuilderScoreChanged(std::string const &, int) const;
    /**
     * @symbol  ?fireEventCompoundCreatorCreated\@MinecraftEventing\@\@UEAAXHH\@Z
     */
    MCVAPI void fireEventCompoundCreatorCreated(int, int);
    /**
     * @symbol  ?fireEventConnectedStorageError\@MinecraftEventing\@\@UEAAXPEBDAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_J\@Z
     */
    MCVAPI void fireEventConnectedStorageError(char const *, std::string const &, __int64);
    /**
     * @symbol  ?fireEventConnectedStorageResult\@MinecraftEventing\@\@UEAAXW4ConnectedStorageEventType\@\@_NIV?$optional\@I\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@3_J222\@Z
     */
    MCVAPI void fireEventConnectedStorageResult(enum class ConnectedStorageEventType, bool, unsigned int, class std::optional<unsigned int>, std::string const &, std::string const &, __int64, class std::optional<unsigned int>, class std::optional<unsigned int>, class std::optional<unsigned int>);
    /**
     * @symbol  ?fireEventConnectionFailed\@MinecraftEventing\@\@UEAAXW4ConnectionFailureReason\@IConnectionEventing\@\@\@Z
     */
    MCVAPI void fireEventConnectionFailed(enum class IConnectionEventing::ConnectionFailureReason);
    /**
     * @symbol  ?fireEventContentLogsInWorldSession\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@II\@Z
     */
    MCVAPI void fireEventContentLogsInWorldSession(std::string const &, unsigned int, unsigned int);
    /**
     * @symbol  ?fireEventContentShared\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEBW4ShareMode\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void fireEventContentShared(std::string const &, std::string const &, enum class IMinecraftEventing::ShareMode const &);
    /**
     * @symbol  ?fireEventControlRemappedByPlayer\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4RawInputType\@\@H\@Z
     */
    MCVAPI void fireEventControlRemappedByPlayer(std::string const &, enum class RawInputType, int) const;
    /**
     * @symbol  ?fireEventControlTipsPanelUpdated\@MinecraftEventing\@\@UEBAXW4EduControlPanelUpdateType\@\@N\@Z
     */
    MCVAPI void fireEventControlTipsPanelUpdated(enum class EduControlPanelUpdateType, double) const;
    /**
     * @symbol  ?fireEventCopyWorldEducationEnabled\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventCopyWorldEducationEnabled();
    /**
     * @symbol  ?fireEventCrashSystemFailedToInit\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventCrashSystemFailedToInit();
    /**
     * @symbol  ?fireEventDefaultCastSelected\@MinecraftEventing\@\@UEAAXHVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventDefaultCastSelected(int, class mce::UUID, std::string const &);
    /**
     * @symbol  ?fireEventDefaultGameTypeChanged\@MinecraftEventing\@\@UEAAXW4GameType\@\@0\@Z
     */
    MCVAPI void fireEventDefaultGameTypeChanged(enum class GameType, enum class GameType);
    /**
     * @symbol  ?fireEventDevSlashCommandExecuted\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventDevSlashCommandExecuted(std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventDeviceAccountFailure\@MinecraftEventing\@\@UEAAXW4SignInStage\@IMinecraftEventing\@\@W4DeviceAccountFailurePhase\@3\@IAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventDeviceAccountFailure(enum class IMinecraftEventing::SignInStage, enum class IMinecraftEventing::DeviceAccountFailurePhase, unsigned int, std::string const &);
    /**
     * @symbol  ?fireEventDeviceAccountSuccess\@MinecraftEventing\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventDeviceAccountSuccess(bool, std::string const &);
    /**
     * @symbol  ?fireEventDeviceIdManagerFailOnIdentityGained\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventDeviceIdManagerFailOnIdentityGained();
    /**
     * @symbol  ?fireEventDeviceLost\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventDeviceLost();
    /**
     * @symbol  ?fireEventDifficultySet\@MinecraftEventing\@\@UEAAXW4Difficulty\@\@0\@Z
     */
    MCVAPI void fireEventDifficultySet(enum class Difficulty, enum class Difficulty);
    /**
     * @symbol  ?fireEventDiskStatus\@MinecraftEventing\@\@UEAAXW4DiskStatus\@\@W4LevelStorageState\@Core\@\@_K\@Z
     */
    MCVAPI void fireEventDiskStatus(enum class DiskStatus, enum class Core::LevelStorageState, unsigned __int64);
    /**
     * @symbol  ?fireEventEduContentVerificationFailed\@MinecraftEventing\@\@UEBAXXZ
     */
    MCVAPI void fireEventEduContentVerificationFailed() const;
    /**
     * @symbol  ?fireEventEduDemoConversion\@MinecraftEventing\@\@UEAAXW4ADRole\@\@W4LastClickedSource\@\@\@Z
     */
    MCVAPI void fireEventEduDemoConversion(enum class ADRole, enum class LastClickedSource);
    /**
     * @symbol  ?fireEventEduResources\@MinecraftEventing\@\@UEBAXXZ
     */
    MCVAPI void fireEventEduResources() const;
    /**
     * @symbol  ?fireEventEduServiceStatus\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0HV?$buffer_span\@U?$pair\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@V12\@\@std\@\@\@\@\@Z
     */
    MCVAPI void fireEventEduServiceStatus(std::string const &, std::string const &, int, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>) const;
    /**
     * @symbol  ?fireEventEduiOSPurchaseTransaction\@MinecraftEventing\@\@UEBAXAEBW4TransactionStatus\@\@\@Z
     */
    MCVAPI void fireEventEduiOSPurchaseTransaction(enum class TransactionStatus const &) const;
    /**
     * @symbol  ?fireEventElementConstructorUsed\@MinecraftEventing\@\@UEAAXHHW4ElementConstructorUseType\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void fireEventElementConstructorUsed(int, int, enum class IMinecraftEventing::ElementConstructorUseType);
    /**
     * @symbol  ?fireEventEmptyLibraryCategoryError\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventEmptyLibraryCategoryError(std::string const &) const;
    /**
     * @symbol  ?fireEventEntitlementListInfo\@MinecraftEventing\@\@UEAAXAEAV?$vector\@VContentIdentity\@\@V?$allocator\@VContentIdentity\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCVAPI void fireEventEntitlementListInfo(std::vector<class ContentIdentity> &, bool);
    /**
     * @symbol  ?fireEventEntitySpawned\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@HI\@Z
     */
    MCVAPI void fireEventEntitySpawned(class Player *, int, unsigned int);
    /**
     * @symbol  ?fireEventGameRulesUpdated\@MinecraftEventing\@\@UEAAXHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventGameRulesUpdated(int, int, std::string const &);
    /**
     * @symbol  ?fireEventGameRulesUpdated\@MinecraftEventing\@\@UEAAX_N0AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventGameRulesUpdated(bool, bool, std::string const &);
    /**
     * @symbol  ?fireEventGameRulesUpdated\@MinecraftEventing\@\@UEAAXMMAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventGameRulesUpdated(float, float, std::string const &);
    /**
     * @symbol  ?fireEventGoogleAccountHoldWarning\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventGoogleAccountHoldWarning(bool);
    /**
     * @symbol  ?fireEventHardwareInfo\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventHardwareInfo();
    /**
     * @symbol  ?fireEventHowToPlayTopicChanged\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4InputMode\@\@\@Z
     */
    MCVAPI void fireEventHowToPlayTopicChanged(std::string const &, enum class InputMode);
    /**
     * @symbol  ?fireEventIAPPurchaseAttempt\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEAVOffer\@\@W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventIAPPurchaseAttempt(std::string const &, std::string const &, class Offer &, enum class PurchasePath);
    /**
     * @symbol  ?fireEventIAPPurchaseResolved\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEAVOffer\@\@W4PurchaseResult\@IMinecraftEventing\@\@W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventIAPPurchaseResolved(std::string const &, std::string const &, class Offer &, enum class IMinecraftEventing::PurchaseResult, enum class PurchasePath);
    /**
     * @symbol  ?fireEventIAPRedeemAttempt\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventIAPRedeemAttempt(std::string const &, std::string const &, std::string const &, enum class PurchasePath);
    /**
     * @symbol  ?fireEventIAPRedeemResolved\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4PurchaseResult\@IMinecraftEventing\@\@W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventIAPRedeemResolved(std::string const &, std::string const &, std::string const &, enum class IMinecraftEventing::PurchaseResult, enum class PurchasePath);
    /**
     * @symbol  ?fireEventImGuiScreenChanged\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void fireEventImGuiScreenChanged(std::string const &, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const &);
    /**
     * @symbol  ?fireEventJoinByCode\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventJoinByCode(std::string const &);
    /**
     * @symbol  ?fireEventJoinCanceled\@MinecraftEventing\@\@UEAAXW4LoadingState\@\@\@Z
     */
    MCVAPI void fireEventJoinCanceled(enum class LoadingState);
    /**
     * @symbol  ?fireEventLabTableCreated\@MinecraftEventing\@\@UEAAXHHH\@Z
     */
    MCVAPI void fireEventLabTableCreated(int, int, int);
    /**
     * @symbol  ?fireEventLevelChunkPerformanceData\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventLevelChunkPerformanceData(bool);
    /**
     * @symbol  ?fireEventLevelDatLoadFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCVAPI void fireEventLevelDatLoadFailed(std::string const &, std::string const &, bool);
    /**
     * @symbol  ?fireEventLevelDataOverride\@MinecraftEventing\@\@UEBAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCVAPI void fireEventLevelDataOverride(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?fireEventLevelDestruct\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventLevelDestruct();
    /**
     * @symbol  ?fireEventLibrarySearch\@MinecraftEventing\@\@UEBAXAEBUTelemetryData\@librarySearch\@\@\@Z
     */
    MCVAPI void fireEventLibrarySearch(struct librarySearch::TelemetryData const &) const;
    /**
     * @symbol  ?fireEventLibrarySearchItemSelected\@MinecraftEventing\@\@UEBAXHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HH\@Z
     */
    MCVAPI void fireEventLibrarySearchItemSelected(int, int, std::string const &, int, int) const;
    /**
     * @symbol  ?fireEventLicenseCheck\@MinecraftEventing\@\@UEAAX_NAEAUExtraLicenseData\@\@\@Z
     */
    MCVAPI void fireEventLicenseCheck(bool, struct ExtraLicenseData &);
    /**
     * @symbol  ?fireEventLockedItemGiven\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventLockedItemGiven();
    /**
     * @symbol  ?fireEventMessageServiceImpression\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCVAPI void fireEventMessageServiceImpression(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventMultiplayerConnectionStateChanged\@MinecraftEventing\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1III1\@Z
     */
    MCVAPI void fireEventMultiplayerConnectionStateChanged(bool, std::string const &, std::string const &, unsigned int, unsigned int, unsigned int, std::string const &);
    /**
     * @symbol  ?fireEventMultiplayerSessionUpdate\@MinecraftEventing\@\@UEAAXV?$not_null\@PEBVLevel\@\@\@gsl\@\@PEBVPlayer\@\@\@Z
     */
    MCVAPI void fireEventMultiplayerSessionUpdate(class gsl::not_null<class Level const *>, class Player const *);
    /**
     * @symbol  ?fireEventNewContentCheckCompleted\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void fireEventNewContentCheckCompleted(std::string const &, bool);
    /**
     * @symbol  ?fireEventNpcPropertiesUpdated\@MinecraftEventing\@\@UEAAXAEAVActor\@\@_N\@Z
     */
    MCVAPI void fireEventNpcPropertiesUpdated(class Actor &, bool);
    /**
     * @symbol  ?fireEventOSKTextTruncation\@MinecraftEventing\@\@UEAAXI\@Z
     */
    MCVAPI void fireEventOSKTextTruncation(unsigned int);
    /**
     * @symbol  ?fireEventOfferRated\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HHHN\@Z
     */
    MCVAPI void fireEventOfferRated(std::string const &, int, int, int, double);
    /**
     * @symbol  ?fireEventOnAppResume\@MinecraftEventing\@\@UEAAXV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventOnAppResume(std::vector<struct std::pair<std::string, float>>);
    /**
     * @symbol  ?fireEventOnAppStart\@MinecraftEventing\@\@UEAAXV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventOnAppStart(std::vector<struct std::pair<std::string, float>>);
    /**
     * @symbol  ?fireEventOnAppSuspend\@MinecraftEventing\@\@UEAAXV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void fireEventOnAppSuspend(std::vector<struct std::pair<std::string, float>>, bool);
    /**
     * @symbol  ?fireEventOnDeviceLost\@MinecraftEventing\@\@UEAAXV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventOnDeviceLost(std::vector<struct std::pair<std::string, float>>);
    /**
     * @symbol  ?fireEventOnSuccessfulClientLogin\@MinecraftEventing\@\@UEAAXPEBVLevel\@\@\@Z
     */
    MCVAPI void fireEventOnSuccessfulClientLogin(class Level const *);
    /**
     * @symbol  ?fireEventOneDSPlayerReportPayload\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventOneDSPlayerReportPayload(std::string const &);
    /**
     * @symbol  ?fireEventOptionsUpdated\@MinecraftEventing\@\@UEAAXAEAVOptions\@\@W4InputMode\@\@_N\@Z
     */
    MCVAPI void fireEventOptionsUpdated(class Options &, enum class InputMode, bool);
    /**
     * @symbol  ?fireEventOreUIError\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventOreUIError(unsigned int const &, std::string const &);
    /**
     * @symbol  ?fireEventPackHashChanged\@MinecraftEventing\@\@UEAAXAEBVPackManifest\@\@\@Z
     */
    MCVAPI void fireEventPackHashChanged(class PackManifest const &);
    /**
     * @symbol  ?fireEventPackPlayed\@MinecraftEventing\@\@UEAAXAEBVPackInstance\@\@I\@Z
     */
    MCVAPI void fireEventPackPlayed(class PackInstance const &, unsigned int);
    /**
     * @symbol  ?fireEventPackUpgradeAttempt\@MinecraftEventing\@\@UEAAXAEBVPackManifest\@\@AEBVPackReport\@\@\@Z
     */
    MCVAPI void fireEventPackUpgradeAttempt(class PackManifest const &, class PackReport const &);
    /**
     * @symbol  ?fireEventPacketViolationDetected\@MinecraftEventing\@\@UEAAXAEBUExtendedStreamReadResult\@\@W4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI void fireEventPacketViolationDetected(struct ExtendedStreamReadResult const &, enum class PacketViolationResponse, enum class MinecraftPacketIds, class NetworkIdentifier const &);
    /**
     * @symbol  ?fireEventPerformanceContext\@MinecraftEventing\@\@UEAAXAEBVPerfContextTrackerReport\@\@\@Z
     */
    MCVAPI void fireEventPerformanceContext(class PerfContextTrackerReport const &);
    /**
     * @symbol  ?fireEventPerformanceMetrics\@MinecraftEventing\@\@UEAAXAEBUProfilerLiteTelemetry\@\@_N\@Z
     */
    MCVAPI void fireEventPerformanceMetrics(struct ProfilerLiteTelemetry const &, bool);
    /**
     * @symbol  ?fireEventPersonaAvatarUpdated\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@AEBV?$vector\@_NV?$allocator\@_N\@std\@\@\@3\@2_N3000311\@Z
     */
    MCVAPI void fireEventPersonaAvatarUpdated(std::string const &, std::vector<std::string> const &, std::vector<bool> const &, std::vector<bool> const &, bool, bool, std::string const &, std::string const &, std::string const &, bool, std::vector<std::string> const &, std::vector<std::string> const &);
    /**
     * @symbol  ?fireEventPersonaAvatarsListed\@MinecraftEventing\@\@UEAAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPersonaAvatarsListed(std::vector<std::string> const &);
    /**
     * @symbol  ?fireEventPersonaCategoryInformation\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPersonaCategoryInformation(std::string const &);
    /**
     * @symbol  ?fireEventPersonaCreationFailed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N100\@Z
     */
    MCVAPI void fireEventPersonaCreationFailed(std::string const &, std::string const &, bool, bool, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventPersonaEmotePlayed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NH\@Z
     */
    MCVAPI void fireEventPersonaEmotePlayed(std::string const &, bool, int);
    /**
     * @symbol  ?fireEventPersonaGeneralError\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPersonaGeneralError(std::string const &);
    /**
     * @symbol  ?fireEventPersonaInitalizationEvent\@MinecraftEventing\@\@UEAAXIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPersonaInitalizationEvent(unsigned int, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventPersonaItemPreviewed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00IIW4PromotionType\@IMinecraftEventing\@\@_N00NW4StoreType\@5\@\@Z
     */
    MCVAPI void fireEventPersonaItemPreviewed(std::string const &, std::string const &, std::string const &, unsigned int, unsigned int, enum class IMinecraftEventing::PromotionType, bool, std::string const &, std::string const &, double, enum class IMinecraftEventing::StoreType);
    /**
     * @symbol  ?fireEventPersonaLoadingPieces\@MinecraftEventing\@\@UEAAXIN\@Z
     */
    MCVAPI void fireEventPersonaLoadingPieces(unsigned int, double);
    /**
     * @symbol  ?fireEventPersonaSkinChanged\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCVAPI void fireEventPersonaSkinChanged(std::string const &, std::string const &, bool);
    /**
     * @symbol  ?fireEventPersonaStillLoading\@MinecraftEventing\@\@UEAAX_N0000000AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@HN\@Z
     */
    MCVAPI void fireEventPersonaStillLoading(bool, bool, bool, bool, bool, bool, bool, bool, std::vector<std::string> const &, int, double);
    /**
     * @symbol  ?fireEventPersonaUserLoadedActive\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCVAPI void fireEventPersonaUserLoadedActive(std::string const &, std::string const &, bool);
    /**
     * @symbol  ?fireEventPlayIntegrityCheck\@MinecraftEventing\@\@UEAAXHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCVAPI void fireEventPlayIntegrityCheck(int, std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventPlayerBanned\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPlayerBanned(std::string const &);
    /**
     * @symbol  ?fireEventPlayerBounced\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@AEBVBlock\@\@H\@Z
     */
    MCVAPI void fireEventPlayerBounced(class Player *, class Block const &, int);
    /**
     * @symbol  ?fireEventPlayerDamaged\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@W4ActorDamageCause\@\@\@Z
     */
    MCVAPI void fireEventPlayerDamaged(class Player *, enum class ActorDamageCause);
    /**
     * @symbol  ?fireEventPlayerJoinWorld\@MinecraftEventing\@\@UEAAXAEBIW4SubClientId\@\@W4PlayerJoinWorldAttemptState\@IConnectionEventing\@\@HW4DisconnectFailReason\@Connection\@\@W4TransportLayer\@\@\@Z
     */
    MCVAPI void fireEventPlayerJoinWorld(unsigned int const &, enum class SubClientId, enum class IConnectionEventing::PlayerJoinWorldAttemptState, int, enum class Connection::DisconnectFailReason, enum class TransportLayer);
    /**
     * @symbol  ?fireEventPlayerJoinWorld\@MinecraftEventing\@\@UEAAXAEBIW4SubClientId\@\@W4PlayerJoinWorldAttemptState\@IConnectionEventing\@\@HW4TransportLayer\@\@\@Z
     */
    MCVAPI void fireEventPlayerJoinWorld(unsigned int const &, enum class SubClientId, enum class IConnectionEventing::PlayerJoinWorldAttemptState, int, enum class TransportLayer);
    /**
     * @symbol  ?fireEventPlayerKicked\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPlayerKicked(std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventPlayerMessageChat\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPlayerMessageChat(std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventPlayerMessageMe\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPlayerMessageMe(std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventPlayerMessageSay\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPlayerMessageSay(std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventPlayerMessageTell\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventPlayerMessageTell(std::string const &, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventPlayerMessageTitle\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventPlayerMessageTitle(std::string const &, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventPlayerReportSent\@MinecraftEventing\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCVAPI void fireEventPlayerReportSent(bool, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventPlayerTravelled\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@M\@Z
     */
    MCVAPI void fireEventPlayerTravelled(class Player *, float);
    /**
     * @symbol  ?fireEventPopupClosed\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPopupClosed(std::string const &) const;
    /**
     * @symbol  ?fireEventPopupFiredEdu\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000W4ActiveDirectoryAction\@\@\@Z
     */
    MCVAPI void fireEventPopupFiredEdu(std::string const &, std::string const &, std::string const &, std::string const &, enum class ActiveDirectoryAction);
    /**
     * @symbol  ?fireEventPortfolioExported\@MinecraftEventing\@\@UEAAXHH\@Z
     */
    MCVAPI void fireEventPortfolioExported(int, int);
    /**
     * @symbol  ?fireEventProgressionsSet\@MinecraftEventing\@\@UEAAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventProgressionsSet(std::vector<std::string> const &);
    /**
     * @symbol  ?fireEventPromotionNotificationClicked\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPromotionNotificationClicked(std::string const &);
    /**
     * @symbol  ?fireEventPurchaseAttempt\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4StoreType\@IMinecraftEventing\@\@W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventPurchaseAttempt(std::string const &, std::string const &, std::string const &, enum class IMinecraftEventing::StoreType, enum class PurchasePath);
    /**
     * @symbol  ?fireEventPurchaseFailureDetails\@MinecraftEventing\@\@UEAAXHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventPurchaseFailureDetails(int, std::string const &, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventPurchaseGameAttempt\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventPurchaseGameAttempt(std::string const &, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventPurchaseResolved\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4StoreType\@IMinecraftEventing\@\@W4PurchaseResult\@5\@W4PurchasePath\@\@\@Z
     */
    MCVAPI void fireEventPurchaseResolved(std::string const &, std::string const &, std::string const &, enum class IMinecraftEventing::StoreType, enum class IMinecraftEventing::PurchaseResult, enum class PurchasePath);
    /**
     * @symbol  ?fireEventPushNotificationOpened\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventPushNotificationOpened(std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventPushNotificationPermission\@MinecraftEventing\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventPushNotificationPermission(bool, std::string const &);
    /**
     * @symbol  ?fireEventPushNotificationReceived\@MinecraftEventing\@\@UEAAXAEBVPushNotificationMessage\@\@\@Z
     */
    MCVAPI void fireEventPushNotificationReceived(class PushNotificationMessage const &);
    /**
     * @symbol  ?fireEventRealmDownload\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0HHH\@Z
     */
    MCVAPI void fireEventRealmDownload(std::string const &, std::string const &, int, int, int);
    /**
     * @symbol  ?fireEventRealmMemberlistCleared\@MinecraftEventing\@\@UEAAXAEBURealmId\@Realms\@\@AEBH\@Z
     */
    MCVAPI void fireEventRealmMemberlistCleared(struct Realms::RealmId const &, int const &);
    /**
     * @symbol  ?fireEventRealmShared\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBW4ShareMode\@IMinecraftEventing\@\@AEBURealmId\@Realms\@\@\@Z
     */
    MCVAPI void fireEventRealmShared(std::string const &, enum class IMinecraftEventing::ShareMode const &, struct Realms::RealmId const &);
    /**
     * @symbol  ?fireEventRealmUpload\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0HHH_N\@Z
     */
    MCVAPI void fireEventRealmUpload(std::string const &, std::string const &, int, int, int, bool);
    /**
     * @symbol  ?fireEventRealmUrlGenerated\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBURealmId\@Realms\@\@\@Z
     */
    MCVAPI void fireEventRealmUrlGenerated(std::string const &, struct Realms::RealmId const &);
    /**
     * @symbol  ?fireEventRealmsSubscriptionPurchaseFailed\@MinecraftEventing\@\@UEAAXAEBUProductSku\@\@W4RealmsPurchaseIntent\@\@W4RealmsPurchaseFailureReason\@\@\@Z
     */
    MCVAPI void fireEventRealmsSubscriptionPurchaseFailed(struct ProductSku const &, enum class RealmsPurchaseIntent, enum class RealmsPurchaseFailureReason);
    /**
     * @symbol  ?fireEventRealmsSubscriptionPurchaseStarted\@MinecraftEventing\@\@UEAAXAEBUProductSku\@\@W4RealmsPurchaseIntent\@\@\@Z
     */
    MCVAPI void fireEventRealmsSubscriptionPurchaseStarted(struct ProductSku const &, enum class RealmsPurchaseIntent);
    /**
     * @symbol  ?fireEventRealmsSubscriptionPurchaseSucceeded\@MinecraftEventing\@\@UEAAXAEBUProductSku\@\@W4RealmsPurchaseIntent\@\@\@Z
     */
    MCVAPI void fireEventRealmsSubscriptionPurchaseSucceeded(struct ProductSku const &, enum class RealmsPurchaseIntent);
    /**
     * @symbol  ?fireEventReducerBlockEntered\@MinecraftEventing\@\@UEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCVAPI void fireEventReducerBlockEntered(class ItemDescriptor const &);
    /**
     * @symbol  ?fireEventRenderingSizeChanged\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventRenderingSizeChanged();
    /**
     * @symbol  ?fireEventRespawn\@MinecraftEventing\@\@UEAAXAEAVPlayer\@\@H\@Z
     */
    MCVAPI void fireEventRespawn(class Player &, int);
    /**
     * @symbol  ?fireEventRespondedToAcceptContent\@MinecraftEventing\@\@UEAAXAEBUPacksInfoData\@\@_N\@Z
     */
    MCVAPI void fireEventRespondedToAcceptContent(struct PacksInfoData const &, bool);
    /**
     * @symbol  ?fireEventScreenChanged\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void fireEventScreenChanged(unsigned int const &, std::string const &, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const &);
    /**
     * @symbol  ?fireEventScreenLoaded\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@NNN\@Z
     */
    MCVAPI void fireEventScreenLoaded(unsigned int const &, std::string const &, double, double, double);
    /**
     * @symbol  ?fireEventScriptDebuggerConnect\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventScriptDebuggerConnect(bool);
    /**
     * @symbol  ?fireEventScriptDebuggerListen\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventScriptDebuggerListen(bool);
    /**
     * @symbol  ?fireEventScriptPluginDiscovery\@MinecraftEventing\@\@UEAAXAEBVScriptPluginResult\@\@_N\@Z
     */
    MCVAPI void fireEventScriptPluginDiscovery(class ScriptPluginResult const &, bool);
    /**
     * @symbol  ?fireEventScriptPluginRun\@MinecraftEventing\@\@UEAAXAEBVScriptPluginResult\@\@V?$duration\@_JU?$ratio\@$00$0PECEA\@\@std\@\@\@chrono\@std\@\@_N\@Z
     */
    MCVAPI void fireEventScriptPluginRun(class ScriptPluginResult const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000000>>, bool);
    /**
     * @symbol  ?fireEventScriptWatchdog\@MinecraftEventing\@\@UEAAXW4WatchdogEventType\@Scripting\@\@_N_KMH2PEBUModuleDescriptor\@3\@1\@Z
     */
    MCVAPI void fireEventScriptWatchdog(enum class Scripting::WatchdogEventType, bool, unsigned __int64, float, int, unsigned __int64, struct Scripting::ModuleDescriptor const *, bool);
    /**
     * @symbol  ?fireEventSearchCatalogRequest\@MinecraftEventing\@\@UEAAXAEBVSearchRequestTelemetry\@\@\@Z
     */
    MCVAPI void fireEventSearchCatalogRequest(class SearchRequestTelemetry const &);
    /**
     * @symbol  ?fireEventSearchItemSelected\@MinecraftEventing\@\@UEAAXHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HHH\@Z
     */
    MCVAPI void fireEventSearchItemSelected(int, int, std::string const &, int, int, int);
    /**
     * @symbol  ?fireEventServerDrivenLayoutImagesLoaded\@MinecraftEventing\@\@UEAAXAEAVRequestTelemetry\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H_KHHHAEAV?$vector\@GV?$allocator\@G\@std\@\@\@4\@\@Z
     */
    MCVAPI void fireEventServerDrivenLayoutImagesLoaded(class RequestTelemetry &, std::string, int, unsigned __int64, int, int, int, std::vector<unsigned short> &);
    /**
     * @symbol  ?fireEventServerDrivenLayoutPageLoaded\@MinecraftEventing\@\@UEAAXAEAVRequestTelemetry\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HHHHH\@Z
     */
    MCVAPI void fireEventServerDrivenLayoutPageLoaded(class RequestTelemetry &, std::string, int, int, int, int, int);
    /**
     * @symbol  ?fireEventServerRespawnSearchTime\@MinecraftEventing\@\@UEAAXAEAVPlayer\@\@AEBVPlayerRespawnTelemetryData\@\@\@Z
     */
    MCVAPI void fireEventServerRespawnSearchTime(class Player &, class PlayerRespawnTelemetryData const &);
    /**
     * @symbol  ?fireEventServerShutdownDueToError\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventServerShutdownDueToError(std::string const &);
    /**
     * @symbol  ?fireEventSetMultiplayerCorrelationId\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCVAPI void fireEventSetMultiplayerCorrelationId(class Player *, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventSetValidForAchievements\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@_N\@Z
     */
    MCVAPI void fireEventSetValidForAchievements(class Player *, bool);
    /**
     * @symbol  ?fireEventSideBySideValidationError\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0000_N11\@Z
     */
    MCVAPI void fireEventSideBySideValidationError(std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, bool, bool, bool);
    /**
     * @symbol  ?fireEventSidebarNavigation\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1H_N22\@Z
     */
    MCVAPI void fireEventSidebarNavigation(unsigned int const &, std::string const &, std::string const &, int, bool, bool, bool);
    /**
     * @symbol  ?fireEventSidebarVerboseToggled\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1_N\@Z
     */
    MCVAPI void fireEventSidebarVerboseToggled(unsigned int const &, std::string const &, std::string const &, bool);
    /**
     * @symbol  ?fireEventSignInEdu\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ADRole\@\@W4EduSignInStage\@IMinecraftEventing\@\@00AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void fireEventSignInEdu(std::string const &, enum class ADRole, enum class IMinecraftEventing::EduSignInStage, std::string const &, std::string const &, std::vector<struct std::pair<std::string, std::string>> const &);
    /**
     * @symbol  ?fireEventSignInToIdentity\@MinecraftEventing\@\@UEAAXW4SignInAccountType\@IMinecraftEventing\@\@W4SignInTrigger\@3\@_NW4SignInStage\@3\@W4SignInResult\@Social\@\@UPlayerIDs\@7\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventSignInToIdentity(enum class IMinecraftEventing::SignInAccountType, enum class IMinecraftEventing::SignInTrigger, bool, enum class IMinecraftEventing::SignInStage, enum class Social::SignInResult, struct Social::PlayerIDs, std::string const &);
    /**
     * @symbol  ?fireEventSignOutEdu\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ADRole\@\@00\@Z
     */
    MCVAPI void fireEventSignOutEdu(std::string const &, enum class ADRole, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventSignOutOfIdentity\@MinecraftEventing\@\@UEAAXW4SignInAccountType\@IMinecraftEventing\@\@W4SignInTrigger\@3\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@2\@Z
     */
    MCVAPI void fireEventSignOutOfIdentity(enum class IMinecraftEventing::SignInAccountType, enum class IMinecraftEventing::SignInTrigger, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventSignalServiceConnect\@MinecraftEventing\@\@UEAAXW4SignalServiceConnectState\@IConnectionEventing\@\@_NHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventSignalServiceConnect(enum class IConnectionEventing::SignalServiceConnectState, bool, int, std::string const &);
    /**
     * @symbol  ?fireEventSplitScreenUpdated\@MinecraftEventing\@\@UEAAXAEBVIClientInstance\@\@\@Z
     */
    MCVAPI void fireEventSplitScreenUpdated(class IClientInstance const &);
    /**
     * @symbol  ?fireEventStackLoaded\@MinecraftEventing\@\@UEAAXAEBUStackStats\@\@\@Z
     */
    MCVAPI void fireEventStackLoaded(struct StackStats const &);
    /**
     * @symbol  ?fireEventStartClient\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventStartClient(std::string const &);
    /**
     * @symbol  ?fireEventStartWorld\@MinecraftEventing\@\@UEAAXW4NetworkType\@IMinecraftEventing\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4MultiplayerServiceIdentifier\@Social\@\@\@Z
     */
    MCVAPI void fireEventStartWorld(enum class IMinecraftEventing::NetworkType, std::string const &, enum class Social::MultiplayerServiceIdentifier);
    /**
     * @symbol  ?fireEventStorage\@MinecraftEventing\@\@UEAAXHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventStorage(int, std::string const &);
    /**
     * @symbol  ?fireEventStorageAreaFull\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@UDirectoryEntry\@Bedrock\@\@V?$allocator\@UDirectoryEntry\@Bedrock\@\@\@std\@\@\@3\@\@Z
     */
    MCVAPI void fireEventStorageAreaFull(std::string const &, std::vector<struct Bedrock::DirectoryEntry> const &);
    /**
     * @symbol  ?fireEventStorageReport\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventStorageReport(std::string const &);
    /**
     * @symbol  ?fireEventStoreDiscoveryRequestResponse\@MinecraftEventing\@\@UEAAXHH\@Z
     */
    MCVAPI void fireEventStoreDiscoveryRequestResponse(int, int);
    /**
     * @symbol  ?fireEventStoreErrorPage\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventStoreErrorPage(std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventStoreLocalizationBinaryFetchResponse\@MinecraftEventing\@\@UEAAXHI\@Z
     */
    MCVAPI void fireEventStoreLocalizationBinaryFetchResponse(int, unsigned int);
    /**
     * @symbol  ?fireEventStoreOfferClicked\@MinecraftEventing\@\@UEAAXHHHHHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_NH0\@Z
     */
    MCVAPI void fireEventStoreOfferClicked(int, int, int, int, int, int, std::string const &, std::string const &, bool, int, std::string const &);
    /**
     * @symbol  ?fireEventStorePlayFabRequestResponse\@MinecraftEventing\@\@UEAAXG\@Z
     */
    MCVAPI void fireEventStorePlayFabRequestResponse(unsigned short);
    /**
     * @symbol  ?fireEventStorePromotionNotification\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventStorePromotionNotification(std::string const &);
    /**
     * @symbol  ?fireEventStoreSearch\@MinecraftEventing\@\@UEAAXAEBUTelemetryData\@storeSearch\@\@\@Z
     */
    MCVAPI void fireEventStoreSearch(struct storeSearch::TelemetryData const &);
    /**
     * @symbol  ?fireEventStoreSessionResponse\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HH\@Z
     */
    MCVAPI void fireEventStoreSessionResponse(std::string const &, int, int);
    /**
     * @symbol  ?fireEventStructureExport\@MinecraftEventing\@\@UEBAXAEBUglTFExportData\@\@W4ExportOutcome\@IMinecraftEventing\@\@W4ExportStage\@4\@\@Z
     */
    MCVAPI void fireEventStructureExport(struct glTFExportData const &, enum class IMinecraftEventing::ExportOutcome, enum class IMinecraftEventing::ExportStage) const;
    /**
     * @symbol  ?fireEventSwitchAccountEdu\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ADRole\@\@0\@Z
     */
    MCVAPI void fireEventSwitchAccountEdu(std::string const &, enum class ADRole, std::string const &);
    /**
     * @symbol  ?fireEventTagButtonPressed\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void fireEventTagButtonPressed(std::string const &, bool) const;
    /**
     * @symbol  ?fireEventTelemetryHttpError\@MinecraftEventing\@\@UEAAXW4TelemetrySystemType\@Events\@Social\@\@VStatus\@Http\@Bedrock\@\@\@Z
     */
    MCVAPI void fireEventTelemetryHttpError(enum class Social::Events::TelemetrySystemType, class Bedrock::Http::Status);
    /**
     * @symbol  ?fireEventTreatmentPackApplied\@MinecraftEventing\@\@UEAAXAEBVPackManifest\@\@\@Z
     */
    MCVAPI void fireEventTreatmentPackApplied(class PackManifest const &);
    /**
     * @symbol  ?fireEventTreatmentPackDownloadFailed\@MinecraftEventing\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCVAPI void fireEventTreatmentPackDownloadFailed(std::string, std::string, std::string, std::string);
    /**
     * @symbol  ?fireEventTreatmentPackDownloaded\@MinecraftEventing\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCVAPI void fireEventTreatmentPackDownloaded(std::string, std::string, std::string, std::string);
    /**
     * @symbol  ?fireEventTreatmentPackRemoved\@MinecraftEventing\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventTreatmentPackRemoved(std::string);
    /**
     * @symbol  ?fireEventTreatmentsCleared\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireEventTreatmentsCleared();
    /**
     * @symbol  ?fireEventTreatmentsSet\@MinecraftEventing\@\@UEAAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventTreatmentsSet(std::vector<std::string> const &);
    /**
     * @symbol  ?fireEventTrialDeviceIdCorrelation\@MinecraftEventing\@\@UEAAX_JAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@01\@Z
     */
    MCVAPI void fireEventTrialDeviceIdCorrelation(__int64, std::string const &, __int64, std::string const &);
    /**
     * @symbol  ?fireEventUgcAcquisitionStateChanged\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_KN_NH2H00\@Z
     */
    MCVAPI void fireEventUgcAcquisitionStateChanged(std::string const &, unsigned __int64, double, bool, int, bool, int, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventUnknownBlockReceived\@MinecraftEventing\@\@UEAAXAEBUNewBlockID\@\@G\@Z
     */
    MCVAPI void fireEventUnknownBlockReceived(struct NewBlockID const &, unsigned short);
    /**
     * @symbol  ?fireEventUserListUpdated\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00_N\@Z
     */
    MCVAPI void fireEventUserListUpdated(std::string const &, std::string const &, std::string const &, bool);
    /**
     * @symbol  ?fireEventUwpToGdkMigrationComplete\@MinecraftEventing\@\@UEAAXAEBUDeviceIdContext\@Bedrock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireEventUwpToGdkMigrationComplete(struct Bedrock::DeviceIdContext const &, std::string const &);
    /**
     * @symbol  ?fireEventVRModeChanged\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventVRModeChanged(bool);
    /**
     * @symbol  ?fireEventVideoPlayed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void fireEventVideoPlayed(std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventWebviewDownload\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUWebviewDownloadInfo\@\@\@Z
     */
    MCVAPI void fireEventWebviewDownload(std::string const &, struct WebviewDownloadInfo const &) const;
    /**
     * @symbol  ?fireEventWorldCorruptionCausedWorldShutdown\@MinecraftEventing\@\@UEAAXAEBULevelStorageEventingContext\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@_N\@4\@\@Z
     */
    MCVAPI void fireEventWorldCorruptionCausedWorldShutdown(struct LevelStorageEventingContext const &, std::string const &, class std::optional<bool>);
    /**
     * @symbol  ?fireEventWorldExported\@MinecraftEventing\@\@UEAAX_J_K\@Z
     */
    MCVAPI void fireEventWorldExported(__int64, unsigned __int64);
    /**
     * @symbol  ?fireEventWorldFilesListed\@MinecraftEventing\@\@UEAAX_K000\@Z
     */
    MCVAPI void fireEventWorldFilesListed(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64);
    /**
     * @symbol  ?fireEventWorldGenerated\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelSettings\@\@_N\@Z
     */
    MCVAPI void fireEventWorldGenerated(std::string const &, class LevelSettings const &, bool);
    /**
     * @symbol  ?fireEventWorldHistoryPackSourceMissingDuringUpgrade\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireEventWorldHistoryPackSourceMissingDuringUpgrade(std::string const &, std::string const &, std::string const &);
    /**
     * @symbol  ?fireEventWorldImported\@MinecraftEventing\@\@UEAAX_J_K\@Z
     */
    MCVAPI void fireEventWorldImported(__int64, unsigned __int64);
    /**
     * @symbol  ?fireEventWorldLoaded\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1_N\@Z
     */
    MCVAPI void fireEventWorldLoaded(class Player *, std::string const &, std::string const &, bool);
    /**
     * @symbol  ?fireEventWorldLoadedClassroomCustomization\@MinecraftEventing\@\@UEAAXW4WorldClassroomCustomization\@IMinecraftEventing\@\@V?$buffer_span\@U?$pair\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@V12\@\@std\@\@\@\@\@Z
     */
    MCVAPI void fireEventWorldLoadedClassroomCustomization(enum class IMinecraftEventing::WorldClassroomCustomization, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>);
    /**
     * @symbol  ?fireExternalUriLaunched\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireExternalUriLaunched(std::string const &) const;
    /**
     * @symbol  ?fireGlobalResourcePackCrashRecovery\@MinecraftEventing\@\@UEAAXAEAVPackInstance\@\@VUUID\@mce\@\@H\@Z
     */
    MCVAPI void fireGlobalResourcePackCrashRecovery(class PackInstance &, class mce::UUID, int);
    /**
     * @symbol  ?fireHostClientTransportSettingSync\@MinecraftEventing\@\@UEAAXW4TransportLayer\@\@0AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@11_K_N\@Z
     */
    MCVAPI void fireHostClientTransportSettingSync(enum class TransportLayer, enum class TransportLayer, std::string const &, std::string const &, std::string const &, unsigned __int64, bool);
    /**
     * @symbol  ?fireIDESelected\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireIDESelected(std::string const &) const;
    /**
     * @symbol  ?fireInAppCodeBuilderActivated\@MinecraftEventing\@\@UEBAXW4OpenCodeMethod\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireInAppCodeBuilderActivated(enum class OpenCodeMethod, std::string const &) const;
    /**
     * @symbol  ?fireInAppCodeBuilderDismissed\@MinecraftEventing\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireInAppCodeBuilderDismissed(std::string const &) const;
    /**
     * @symbol  ?fireInviteStatusReceived\@MinecraftEventing\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireInviteStatusReceived(std::string);
    /**
     * @symbol  ?fireInviteStatusSentImpl\@MinecraftEventing\@\@UEAAXIV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireInviteStatusSentImpl(unsigned int, std::vector<std::string>);
    /**
     * @symbol  ?fireLessonActionTaken\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4EducationLessonAction\@IMinecraftEventing\@\@H\@Z
     */
    MCVAPI void fireLessonActionTaken(std::string const &, std::string const &, std::string const &, enum class IMinecraftEventing::EducationLessonAction, int);
    /**
     * @symbol  ?fireLessonCompleteDialogOpened\@MinecraftEventing\@\@UEBAXW4LessonCompleteDialogEntryPoint\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void fireLessonCompleteDialogOpened(enum class IMinecraftEventing::LessonCompleteDialogEntryPoint) const;
    /**
     * @symbol  ?fireLessonProgressEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0000H\@Z
     */
    MCVAPI void fireLessonProgressEvent(std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, int);
    /**
     * @symbol  ?fireLibraryButtonPressed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void fireLibraryButtonPressed(std::string const &, std::string const &, std::string const &);
    /**
     * @symbol  ?fireMinecraftVersionInviteAccepted\@MinecraftEventing\@\@UEAAX_N_K\@Z
     */
    MCVAPI void fireMinecraftVersionInviteAccepted(bool, unsigned __int64);
    /**
     * @symbol  ?fireMinecraftVersionLaunched\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void fireMinecraftVersionLaunched(bool);
    /**
     * @symbol  ?fireNetworkChangedEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireNetworkChangedEvent(std::string const &);
    /**
     * @symbol  ?firePackSettingsEvent\@MinecraftEventing\@\@UEAAXAEBVPackSettings\@\@AEBVPackManifest\@\@\@Z
     */
    MCVAPI void firePackSettingsEvent(class PackSettings const &, class PackManifest const &);
    /**
     * @symbol  ?firePerfTestEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00II0AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void firePerfTestEvent(std::string const &, std::string const &, std::string const &, unsigned int, unsigned int, std::string const &, std::vector<struct std::pair<std::string, float>> const &);
    /**
     * @symbol  ?firePermissionsSetEvent\@MinecraftEventing\@\@UEAAXW4PlayerPermissionLevel\@\@W4CommandPermissionLevel\@\@01\@Z
     */
    MCVAPI void firePermissionsSetEvent(enum class PlayerPermissionLevel, enum class CommandPermissionLevel, enum class PlayerPermissionLevel, enum class CommandPermissionLevel);
    /**
     * @symbol  ?fireQueryOfferResult\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H_N\@Z
     */
    MCVAPI void fireQueryOfferResult(std::string const &, int, bool);
    /**
     * @symbol  ?fireQuickPlayEvent\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void fireQuickPlayEvent();
    /**
     * @symbol  ?fireRealmConnectionEventGenericLambdaCalled\@MinecraftEventing\@\@UEAAXW4RealmConnectionFlow\@IMinecraftEventing\@\@W4RealmConnectionLambda\@3\@W4RealmConnectionResult\@3\@\@Z
     */
    MCVAPI void fireRealmConnectionEventGenericLambdaCalled(enum class IMinecraftEventing::RealmConnectionFlow, enum class IMinecraftEventing::RealmConnectionLambda, enum class IMinecraftEventing::RealmConnectionResult);
    /**
     * @symbol  ?fireRealmConnectionEventRealmAPIRequest\@MinecraftEventing\@\@UEAAXW4RealmConnectionFlow\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void fireRealmConnectionEventRealmAPIRequest(enum class IMinecraftEventing::RealmConnectionFlow);
    /**
     * @symbol  ?fireRealmConnectionEventRealmAPIResponse\@MinecraftEventing\@\@UEAAXW4RealmConnectionFlow\@IMinecraftEventing\@\@H\@Z
     */
    MCVAPI void fireRealmConnectionEventRealmAPIResponse(enum class IMinecraftEventing::RealmConnectionFlow, int);
    /**
     * @symbol  ?fireRealmConnectionEventStart\@MinecraftEventing\@\@UEAAXW4RealmConnectionFlow\@IMinecraftEventing\@\@\@Z
     */
    MCVAPI void fireRealmConnectionEventStart(enum class IMinecraftEventing::RealmConnectionFlow);
    /**
     * @symbol  ?fireScreenLoadTimeUpdateEvent\@MinecraftEventing\@\@UEAAXAEBIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@3\@1\@Z
     */
    MCVAPI void fireScreenLoadTimeUpdateEvent(unsigned int const &, std::string const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>, std::string const &);
    /**
     * @symbol  ?fireServerConnectionAttemptEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N0\@Z
     */
    MCVAPI void fireServerConnectionAttemptEvent(std::string const &, bool, std::string const &);
    /**
     * @symbol  ?fireServerConnectionEvent\@MinecraftEventing\@\@UEAAXW4ServerConnectionOutcome\@IConnectionEventing\@\@INAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireServerConnectionEvent(enum class IConnectionEventing::ServerConnectionOutcome, unsigned int, double, std::string const &);
    /**
     * @symbol  ?fireServerShutdown\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireServerShutdown(std::string const &);
    /**
     * @symbol  ?fireServerStarted\@MinecraftEventing\@\@UEAAXW4ServerType\@IMinecraftEventing\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireServerStarted(enum class IMinecraftEventing::ServerType, std::string const &);
    /**
     * @symbol  ?fireShareButtonPressed\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4EduShareUriType\@\@W4EduShareMethodType\@\@_N\@Z
     */
    MCVAPI void fireShareButtonPressed(std::string const &, enum class EduShareUriType, enum class EduShareMethodType, bool);
    /**
     * @symbol  ?fireStorageMigrationEvent\@MinecraftEventing\@\@UEAAX_NW4StorageMigrationType\@StorageMigration\@Bedrock\@\@HHV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@7\@\@Z
     */
    MCVAPI void fireStorageMigrationEvent(bool, enum class Bedrock::StorageMigration::StorageMigrationType, int, int, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>, std::string const &);
    /**
     * @symbol  ?fireStructureBlockAction\@MinecraftEventing\@\@UEAAXW4StructureBlockActionType\@IMinecraftEventing\@\@AEBVStructureEditorData\@\@PEBVStructureTelemetryClientData\@\@\@Z
     */
    MCVAPI void fireStructureBlockAction(enum class IMinecraftEventing::StructureBlockActionType, class StructureEditorData const &, class StructureTelemetryClientData const *);
    /**
     * @symbol  ?fireStructureBlockRedstoneActivated\@MinecraftEventing\@\@UEAAXW4StructureBlockActionType\@IMinecraftEventing\@\@AEBVStructureEditorData\@\@PEBVStructureTelemetryClientData\@\@\@Z
     */
    MCVAPI void fireStructureBlockRedstoneActivated(enum class IMinecraftEventing::StructureBlockActionType, class StructureEditorData const &, class StructureTelemetryClientData const *);
    /**
     * @symbol  ?fireTextToSpeechToggled\@MinecraftEventing\@\@UEAAX_N0\@Z
     */
    MCVAPI void fireTextToSpeechToggled(bool, bool);
    /**
     * @symbol  ?fireUserGeneratedUriLaunchFailed\@MinecraftEventing\@\@UEBAXW4UserGeneratedUriSource\@\@W4ValidationStatus\@ResourceUri\@Util\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireUserGeneratedUriLaunchFailed(enum class UserGeneratedUriSource, enum class Util::ResourceUri::ValidationStatus, std::string const &) const;
    /**
     * @symbol  ?fireUserGeneratedUriLaunched\@MinecraftEventing\@\@UEBAXW4UserGeneratedUriSource\@\@\@Z
     */
    MCVAPI void fireUserGeneratedUriLaunched(enum class UserGeneratedUriSource) const;
    /**
     * @symbol  ?fireWorldConversionAttemptEvent\@MinecraftEventing\@\@UEAAXAEBUWorldConversionReport\@Legacy\@\@\@Z
     */
    MCVAPI void fireWorldConversionAttemptEvent(struct Legacy::WorldConversionReport const &);
    /**
     * @symbol  ?fireWorldConversionInitiatedEvent\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void fireWorldConversionInitiatedEvent(std::string const &);
    /**
     * @symbol  ?fireWorldRecoveryTelemetryEvent\@MinecraftEventing\@\@UEAAXAEBUWorldRecoveryTelemetryEvent\@Bedrock\@\@\@Z
     */
    MCVAPI void fireWorldRecoveryTelemetryEvent(struct Bedrock::WorldRecoveryTelemetryEvent const &);
    /**
     * @symbol  ?fireWorldUpgradedToCnCPart2\@MinecraftEventing\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVExperiments\@\@1VLevelSeed64\@\@M\@Z
     */
    MCVAPI void fireWorldUpgradedToCnCPart2(bool, std::string const &, class Experiments const &, std::string const &, class LevelSeed64, float);
    /**
     * @symbol  ?flagEventDeepLink\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void flagEventDeepLink();
    /**
     * @symbol  ?flagEventPlayerGameTypeDefault\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void flagEventPlayerGameTypeDefault(bool);
    /**
     * @symbol  ?forceSendEvents\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void forceSendEvents();
    /**
     * @symbol  ?getAchievementsAlwaysEnabled\@MinecraftEventing\@\@EEAA_NXZ
     */
    MCVAPI bool getAchievementsAlwaysEnabled();
    /**
     * @symbol  ?getCrashTelemetryProcessor\@MinecraftEventing\@\@UEAA?AV?$not_null\@PEAVCrashTelemetryProcessor\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::CrashTelemetryProcessor *> getCrashTelemetryProcessor();
    /**
     * @symbol  ?getEventManager\@MinecraftEventing\@\@EEBAAEAVEventManager\@Events\@Social\@\@XZ
     */
    MCVAPI class Social::Events::EventManager & getEventManager() const;
    /**
     * @symbol  ?getPlayerSessionId\@MinecraftEventing\@\@UEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string const & getPlayerSessionId();
    /**
     * @symbol  ?getPrimaryLocalUserId\@MinecraftEventing\@\@EEBAIXZ
     */
    MCVAPI unsigned int getPrimaryLocalUserId() const;
    /**
     * @symbol  ?getSessionId\@MinecraftEventing\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getSessionId();
    /**
     * @symbol  ?getShouldHaveAchievementsEnabled\@MinecraftEventing\@\@EEAA_NXZ
     */
    MCVAPI bool getShouldHaveAchievementsEnabled();
    /**
     * @symbol  ?init\@MinecraftEventing\@\@UEAAXAEBV?$not_null\@V?$NonOwnerPointer\@VIUserManager\@Social\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCVAPI void init(class gsl::not_null<class Bedrock::NonOwnerPointer<class Social::IUserManager>> const &, class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    /**
     * @symbol  ?initDeviceAndSessionIds\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void initDeviceAndSessionIds();
    /**
     * @symbol  ?prepEventSearchCatalogRequest\@MinecraftEventing\@\@UEAAXAEBVSearchRequestTelemetry\@\@\@Z
     */
    MCVAPI void prepEventSearchCatalogRequest(class SearchRequestTelemetry const &);
    /**
     * @symbol  ?propertiesAsJsonValue\@MinecraftEventing\@\@UEBA?AVValue\@Json\@\@XZ
     */
    MCVAPI class Json::Value propertiesAsJsonValue() const;
    /**
     * @symbol  ?registerOptionsObserver\@MinecraftEventing\@\@UEAAXV?$shared_ptr\@VOptions\@\@\@std\@\@\@Z
     */
    MCVAPI void registerOptionsObserver(class std::shared_ptr<class Options>);
    /**
     * @symbol  ?removeTestBuildIdTag\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void removeTestBuildIdTag();
    /**
     * @symbol  ?removeTestTelemetryTag\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void removeTestTelemetryTag();
    /**
     * @symbol  ?requestEventDeferment\@MinecraftEventing\@\@UEAA?AV?$shared_ptr\@PEAX\@std\@\@XZ
     */
    MCVAPI class std::shared_ptr<void *> requestEventDeferment();
    /**
     * @symbol  ?sendBatchedCrashTelemetry\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void sendBatchedCrashTelemetry();
    /**
     * @symbol  ?sendCrashStatusTelemetry\@MinecraftEventing\@\@UEAAXAEBUCrashUploadStatus\@Bedrock\@\@\@Z
     */
    MCVAPI void sendCrashStatusTelemetry(struct Bedrock::CrashUploadStatus const &);
    /**
     * @symbol  ?sendCrashTelemetryNow\@MinecraftEventing\@\@UEAAXV?$shared_ptr\@VSessionInfo\@Bedrock\@\@\@std\@\@\@Z
     */
    MCVAPI void sendCrashTelemetryNow(class std::shared_ptr<class Bedrock::SessionInfo>);
    /**
     * @symbol  ?setShouldHaveAchievementsEnabled\@MinecraftEventing\@\@EEAAX_N\@Z
     */
    MCVAPI void setShouldHaveAchievementsEnabled(bool);
    /**
     * @symbol  ?setTestBuildIdTag\@MinecraftEventing\@\@UEAAXPEBD\@Z
     */
    MCVAPI void setTestBuildIdTag(char const *);
    /**
     * @symbol  ?setTestTelemetryTag\@MinecraftEventing\@\@UEAAXPEBD\@Z
     */
    MCVAPI void setTestTelemetryTag(char const *);
    /**
     * @symbol  ?shutdown\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void shutdown();
    /**
     * @symbol  ?stopDebugEventLoggingForAllListeners\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void stopDebugEventLoggingForAllListeners();
    /**
     * @symbol  ?tick\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @symbol  ?tryFireEventProgressLoadTimes\@MinecraftEventing\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@std\@\@\@2\@\@3\@\@Z
     */
    MCVAPI void tryFireEventProgressLoadTimes(std::string const &, std::vector<struct std::pair<std::string, float>>);
    /**
     * @symbol  ?updateEditionType\@MinecraftEventing\@\@UEAAXXZ
     */
    MCVAPI void updateEditionType();
    /**
     * @symbol  ?updateIsLegacyPlayer\@MinecraftEventing\@\@UEAAX_N\@Z
     */
    MCVAPI void updateIsLegacyPlayer(bool);
    /**
     * @symbol  ?updateIsTrial\@MinecraftEventing\@\@UEBAX_N\@Z
     */
    MCVAPI void updateIsTrial(bool) const;
    /**
     * @symbol  ?updatePlayerUndergroundStatus\@MinecraftEventing\@\@UEAAXPEAVPlayer\@\@_N\@Z
     */
    MCVAPI void updatePlayerUndergroundStatus(class Player *, bool);
    /**
     * @symbol  ?updatePrimaryLocalUserId\@MinecraftEventing\@\@UEAAXAEBI\@Z
     */
    MCVAPI void updatePrimaryLocalUserId(unsigned int const &);
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~MinecraftEventing();
#endif
    /**
     * @symbol  ??0MinecraftEventing\@\@QEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI MinecraftEventing(class Core::Path const &);
    /**
     * @symbol  ?init\@MinecraftEventing\@\@QEAAXAEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void init(class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    /**
     * @symbol  ?initForDedicatedServer\@MinecraftEventing\@\@QEAAXAEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@_N1\@Z
     */
    MCAPI void initForDedicatedServer(class Bedrock::NonOwnerPointer<class AppPlatform> const &, bool, bool);
    /**
     * @symbol  ?fireEventAwardAchievement\@MinecraftEventing\@\@SAXPEAVPlayer\@\@W4AchievementIds\@1\@\@Z
     */
    MCAPI static void fireEventAwardAchievement(class Player *, enum class MinecraftEventing::AchievementIds);
    /**
     * @symbol  ?fireEventBehaviorErrored\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void fireEventBehaviorErrored(class Player *, std::string const &);
    /**
     * @symbol  ?fireEventBehaviorFailed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void fireEventBehaviorFailed(class Player *, std::string const &);
    /**
     * @symbol  ?fireEventBellBlockUsed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void fireEventBellBlockUsed(class Player *, std::string const &);
    /**
     * @symbol  ?fireEventBlockBroken\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBVBlock\@\@W4BlockPlacementMethod\@1\@H\@Z
     */
    MCAPI static void fireEventBlockBroken(class Player *, class Block const &, enum class MinecraftEventing::BlockPlacementMethod, int);
    /**
     * @symbol  ?fireEventBlockFound\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void fireEventBlockFound(class Player *, class BlockPos const &);
    /**
     * @symbol  ?fireEventCampfireBlockUsed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4POIBlockInteractionType\@1\@\@Z
     */
    MCAPI static void fireEventCampfireBlockUsed(class Player *, std::string const &, enum class MinecraftEventing::POIBlockInteractionType);
    /**
     * @symbol  ?fireEventCaravanChanged\@MinecraftEventing\@\@SAXAEAVMob\@\@H\@Z
     */
    MCAPI static void fireEventCaravanChanged(class Mob &, int);
    /**
     * @symbol  ?fireEventItemUsed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBVItemDescriptor\@\@W4ItemUseMethod\@\@\@Z
     */
    MCAPI static void fireEventItemUsed(class Player *, class ItemDescriptor const &, enum class ItemUseMethod);
    /**
     * @symbol  ?fireEventJukeboxUsed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBVItemDescriptor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void fireEventJukeboxUsed(class Player *, class ItemDescriptor const &, std::string const &);
    /**
     * @symbol  ?fireEventLecternBlockUsed\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4POIBlockInteractionType\@1\@\@Z
     */
    MCAPI static void fireEventLecternBlockUsed(class Player *, std::string const &, enum class MinecraftEventing::POIBlockInteractionType);
    /**
     * @symbol  ?fireEventMobEffectChanged\@MinecraftEventing\@\@SAXAEAVMob\@\@AEBVMobEffectInstance\@\@W4ChangeType\@1\@\@Z
     */
    MCAPI static void fireEventMobEffectChanged(class Mob &, class MobEffectInstance const &, enum class MinecraftEventing::ChangeType);
    /**
     * @symbol  ?fireEventPlayerTeleported\@MinecraftEventing\@\@SAXPEAVPlayer\@\@MW4TeleportationCause\@1\@H\@Z
     */
    MCAPI static void fireEventPlayerTeleported(class Player *, float, enum class MinecraftEventing::TeleportationCause, int);
    /**
     * @symbol  ?fireEventPlayerTransform\@MinecraftEventing\@\@SAXAEAVPlayer\@\@\@Z
     */
    MCAPI static void fireEventPlayerTransform(class Player &);
    /**
     * @symbol  ?fireEventSlashCommandExecuted\@MinecraftEventing\@\@SAXPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HH1\@Z
     */
    MCAPI static void fireEventSlashCommandExecuted(class Player *, std::string const &, int, int, std::string const &);

//private:
    /**
     * @symbol  ?_fireStructureBlockAction\@MinecraftEventing\@\@AEAAXW4StructureBlockActionType\@IMinecraftEventing\@\@AEBVStructureEditorData\@\@_NPEBVStructureTelemetryClientData\@\@\@Z
     */
    MCAPI void _fireStructureBlockAction(enum class IMinecraftEventing::StructureBlockActionType, class StructureEditorData const &, bool, class StructureTelemetryClientData const *);
    /**
     * @symbol  ?_generateWorldSessionId\@MinecraftEventing\@\@AEAAXXZ
     */
    MCAPI void _generateWorldSessionId();
    /**
     * @symbol  ?fireEventPlayerMessage\@MinecraftEventing\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCAPI void fireEventPlayerMessage(std::string const &, std::string const &, std::string const &, std::string const &);

private:
    /**
     * @symbol  ?mAchievementEventing\@MinecraftEventing\@\@0V?$unique_ptr\@VAchievementEventing\@Events\@Social\@\@U?$default_delete\@VAchievementEventing\@Events\@Social\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class Social::Events::AchievementEventing> mAchievementEventing;
    /**
     * @symbol  ?mAcquisitionMethodMap\@MinecraftEventing\@\@0V?$unordered_map\@W4ItemAcquisitionMethod\@\@W4AcquisitionMethod\@MinecraftEventing\@\@U?$hash\@W4ItemAcquisitionMethod\@\@\@std\@\@U?$equal_to\@W4ItemAcquisitionMethod\@\@\@5\@V?$allocator\@U?$pair\@$$CBW4ItemAcquisitionMethod\@\@W4AcquisitionMethod\@MinecraftEventing\@\@\@std\@\@\@5\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<enum class ItemAcquisitionMethod, enum class MinecraftEventing::AcquisitionMethod, struct std::hash<enum class ItemAcquisitionMethod>, struct std::equal_to<enum class ItemAcquisitionMethod>, class std::allocator<struct std::pair<enum class ItemAcquisitionMethod const, enum class MinecraftEventing::AcquisitionMethod>>> const mAcquisitionMethodMap;
    /**
     * @symbol  ?mUseMethodMap\@MinecraftEventing\@\@0V?$unordered_map\@W4ItemUseMethod\@\@W4UseMethod\@MinecraftEventing\@\@U?$hash\@W4ItemUseMethod\@\@\@std\@\@U?$equal_to\@W4ItemUseMethod\@\@\@5\@V?$allocator\@U?$pair\@$$CBW4ItemUseMethod\@\@W4UseMethod\@MinecraftEventing\@\@\@std\@\@\@5\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<enum class ItemUseMethod, enum class MinecraftEventing::UseMethod, struct std::hash<enum class ItemUseMethod>, struct std::equal_to<enum class ItemUseMethod>, class std::allocator<struct std::pair<enum class ItemUseMethod const, enum class MinecraftEventing::UseMethod>>> const mUseMethodMap;
    /**
     * @symbol  ?sMutex\@MinecraftEventing\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex sMutex;

};