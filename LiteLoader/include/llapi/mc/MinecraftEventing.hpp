/**
 * @file  MinecraftEventing.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   787609338
     * @symbol ?addCrashTelemetryToBatch@MinecraftEventing@@UEAAXV?$shared_ptr@VSessionInfo@Bedrock@@@std@@@Z
     */
    MCVAPI void addCrashTelemetryToBatch(class std::shared_ptr<class Bedrock::SessionInfo>);
    /**
     * @hash   -32114362
     * @symbol ?addListener@MinecraftEventing@@UEAAXV?$unique_ptr@VIEventListener@Events@Social@@U?$default_delete@VIEventListener@Events@Social@@@std@@@std@@@Z
     */
    MCVAPI void addListener(std::unique_ptr<class Social::Events::IEventListener>);
    /**
     * @hash   -861905491
     * @symbol ?fileEventCloudWorldPullFailed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
     */
    MCVAPI void fileEventCloudWorldPullFailed(std::string const &, std::string const &, bool);
    /**
     * @hash   -1292472333
     * @symbol ?fireChatUsedEvent@MinecraftEventing@@UEAAXI_N@Z
     */
    MCVAPI void fireChatUsedEvent(unsigned int, bool);
    /**
     * @hash   283766389
     * @symbol ?fireClassroomSettingUpdated@MinecraftEventing@@UEAAXW4ClassroomSetting@@W4SettingsScreenMode@@@Z
     */
    MCVAPI void fireClassroomSettingUpdated(enum ClassroomSetting, enum SettingsScreenMode);
    /**
     * @hash   -731588516
     * @symbol ?fireClubsEngagementEvent@MinecraftEventing@@UEAAXW4ClubsEngagementAction@IMinecraftEventing@@W4ClubsEngagementTargetType@3@PEBDURealmId@Realms@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireClubsEngagementEvent(enum IMinecraftEventing::ClubsEngagementAction, enum IMinecraftEventing::ClubsEngagementTargetType, char const *, struct Realms::RealmId, std::string);
    /**
     * @hash   376256089
     * @symbol ?fireClubsOpenFeedScreenEvent@MinecraftEventing@@UEAAXW4ClubsFeedScreenSource@IMinecraftEventing@@URealmId@Realms@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireClubsOpenFeedScreenEvent(enum IMinecraftEventing::ClubsFeedScreenSource, struct Realms::RealmId, std::string);
    /**
     * @hash   -639459910
     * @symbol ?fireCodeCommandButtonPressed@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void fireCodeCommandButtonPressed();
    /**
     * @hash   -1537890902
     * @symbol ?fireCommunitySIFTProcessEvent@MinecraftEventing@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4TextProcessingEventOrigin@@G_NNDDAEBVValue@Json@@@Z
     */
    MCVAPI void fireCommunitySIFTProcessEvent(std::string, enum TextProcessingEventOrigin, unsigned short, bool, double, char, char, class Json::Value const &);
    /**
     * @hash   268747249
     * @symbol ?fireCourseButtonPressed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCVAPI void fireCourseButtonPressed(std::string const &, std::string const &);
    /**
     * @hash   -975489510
     * @symbol ?fireCurrentInputUpdated@MinecraftEventing@@UEAAXAEBVIClientInstance@@@Z
     */
    MCVAPI void fireCurrentInputUpdated(class IClientInstance const &);
    /**
     * @hash   -1220180093
     * @symbol ?fireDBStorageError@MinecraftEventing@@UEAAXAEBULevelStorageEventingContext@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireDBStorageError(struct LevelStorageEventingContext const &, std::string const &);
    /**
     * @hash   -337627952
     * @symbol ?fireDayOneExperienceStateChanged@MinecraftEventing@@UEAAXW4DayOneExperienceState@IMinecraftEventing@@V?$optional@I@std@@V?$optional@_K@5@@Z
     */
    MCVAPI void fireDayOneExperienceStateChanged(enum IMinecraftEventing::DayOneExperienceState, class std::optional<unsigned int>, class std::optional<unsigned __int64>);
    /**
     * @hash   -765227372
     * @symbol ?fireEduServiceRequestFailed@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00V?$buffer_span@U?$pair@V?$basic_string_span@$$CBD$0?0@gsl@@V12@@std@@@@@Z
     */
    MCVAPI void fireEduServiceRequestFailed(std::string const &, std::string const &, std::string const &, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>) const;
    /**
     * @hash   -911035426
     * @symbol ?fireEventAchievementReceived@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     */
    MCVAPI void fireEventAchievementReceived(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   1948907675
     * @symbol ?fireEventActorValueValidationFailed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD@Z
     */
    MCVAPI void fireEventActorValueValidationFailed(std::string const &, char const *);
    /**
     * @hash   -803404523
     * @symbol ?fireEventAndroidHelpRequest@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void fireEventAndroidHelpRequest();
    /**
     * @hash   -1736182161
     * @symbol ?fireEventAndroidScopedStorageDebug@MinecraftEventing@@UEAAX_K@Z
     */
    MCVAPI void fireEventAndroidScopedStorageDebug(unsigned __int64);
    /**
     * @hash   694577758
     * @symbol ?fireEventAppInitFileOpenStats@MinecraftEventing@@UEAAXAEBUFileCounters@Profile@Core@@0@Z
     */
    MCVAPI void fireEventAppInitFileOpenStats(struct Core::Profile::FileCounters const &, struct Core::Profile::FileCounters const &);
    /**
     * @hash   -721823987
     * @symbol ?fireEventAppPaused@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void fireEventAppPaused();
    /**
     * @hash   963396134
     * @symbol ?fireEventAppUnpaused@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void fireEventAppUnpaused();
    /**
     * @hash   589767476
     * @symbol ?fireEventArmorStandItemEquipped@MinecraftEventing@@UEAAXAEBVArmorStand@@AEBVItemDescriptor@@@Z
     */
    MCVAPI void fireEventArmorStandItemEquipped(class ArmorStand const &, class ItemDescriptor const &);
    /**
     * @hash   1858142249
     * @symbol ?fireEventAssertFailed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCVAPI void fireEventAssertFailed(std::string const &, std::string const &);
    /**
     * @hash   1280231011
     * @symbol ?fireEventBlockPlacedByCommand@MinecraftEventing@@UEAAXAEBVBlock@@H@Z
     */
    MCVAPI void fireEventBlockPlacedByCommand(class Block const &, int);
    /**
     * @hash   2025194707
     * @symbol ?fireEventBlockTypeRegistryChecksumMismatch@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEB_K10@Z
     */
    MCVAPI void fireEventBlockTypeRegistryChecksumMismatch(std::string const &, unsigned __int64 const &, unsigned __int64 const &, std::string const &);
    /**
     * @hash   -566059917
     * @symbol ?fireEventBoardTextUpdated@MinecraftEventing@@UEAAXAEAVChalkboardBlockActor@@@Z
     */
    MCVAPI void fireEventBoardTextUpdated(class ChalkboardBlockActor &);
    /**
     * @hash   -1962947049
     * @symbol ?fireEventBundleSubOfferClicked@MinecraftEventing@@UEAAXHHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N0@Z
     */
    MCVAPI void fireEventBundleSubOfferClicked(int, int, std::string const &, std::string const &, bool, std::string const &);
    /**
     * @hash   -2047251886
     * @symbol ?fireEventButtonPressed@MinecraftEventing@@UEBAXV?$basic_string_span@$$CBD$0?0@gsl@@V?$buffer_span@U?$pair@V?$basic_string_span@$$CBD$0?0@gsl@@V12@@std@@@@@Z
     */
    MCVAPI void fireEventButtonPressed(class gsl::basic_string_span<char const, -1>, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>) const;
    /**
     * @hash   336524516
     * @symbol ?fireEventCameraUsed@MinecraftEventing@@UEAAX_N@Z
     */
    MCVAPI void fireEventCameraUsed(bool);
    /**
     * @hash   -1244014064
     * @symbol ?fireEventChatSettingsUpdated@MinecraftEventing@@UEBAXPEBVPlayer@@AEBV?$vector@VProperty@Events@Social@@V?$allocator@VProperty@Events@Social@@@std@@@std@@@Z
     */
    MCVAPI void fireEventChatSettingsUpdated(class Player const *, std::vector<class Social::Events::Property> const &) const;
    /**
     * @hash   1532366481
     * @symbol ?fireEventChildAccountSignIn@MinecraftEventing@@UEAAX_N0@Z
     */
    MCVAPI void fireEventChildAccountSignIn(bool, bool);
    /**
     * @hash   1012158990
     * @symbol ?fireEventChunkChanged@MinecraftEventing@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void fireEventChunkChanged(class LevelChunk &);
    /**
     * @hash   253039595
     * @symbol ?fireEventChunkLoaded@MinecraftEventing@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void fireEventChunkLoaded(class LevelChunk &);
    /**
     * @hash   -1522236558
     * @symbol ?fireEventChunkUnloaded@MinecraftEventing@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void fireEventChunkUnloaded(class LevelChunk &);
    /**
     * @hash   139609548
     * @symbol ?fireEventClientLeftGameDueToUnrecoverableError@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCVAPI void fireEventClientLeftGameDueToUnrecoverableError(std::string const &, bool);
    /**
     * @hash   -619291945
     * @symbol ?fireEventCodeBuilderClosed@MinecraftEventing@@UEBAXXZ
     */
    MCVAPI void fireEventCodeBuilderClosed() const;
    /**
     * @hash   -1830683298
     * @symbol ?fireEventCodeBuilderLog@MinecraftEventing@@UEBAXAEBUTelemetryCommonProperties@Webview@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV45@@Z
     */
    MCVAPI void fireEventCodeBuilderLog(struct Webview::TelemetryCommonProperties const &, std::string const &, std::string &) const;
    /**
     * @hash   -2077865707
     * @symbol ?fireEventCodeBuilderRuntimeAction@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventCodeBuilderRuntimeAction(std::string const &) const;
    /**
     * @hash   1414665504
     * @symbol ?fireEventCodeBuilderScoreChanged@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCVAPI void fireEventCodeBuilderScoreChanged(std::string const &, int) const;
    /**
     * @hash   790047405
     * @symbol ?fireEventCompoundCreatorCreated@MinecraftEventing@@UEAAXHH@Z
     */
    MCVAPI void fireEventCompoundCreatorCreated(int, int);
    /**
     * @hash   1407912184
     * @symbol ?fireEventConnectedStorageError@MinecraftEventing@@UEAAXPEBDAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_J@Z
     */
    MCVAPI void fireEventConnectedStorageError(char const *, std::string const &, __int64);
    /**
     * @hash   468723906
     * @symbol ?fireEventConnectedStorageResult@MinecraftEventing@@UEAAXW4ConnectedStorageEventType@@_NIV?$optional@I@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@3_J222@Z
     */
    MCVAPI void fireEventConnectedStorageResult(enum ConnectedStorageEventType, bool, unsigned int, class std::optional<unsigned int>, std::string const &, std::string const &, __int64, class std::optional<unsigned int>, class std::optional<unsigned int>, class std::optional<unsigned int>);
    /**
     * @hash   511969818
     * @symbol ?fireEventConnectionFailed@MinecraftEventing@@UEAAXW4ConnectionFailureReason@IConnectionEventing@@@Z
     */
    MCVAPI void fireEventConnectionFailed(enum IConnectionEventing::ConnectionFailureReason);
    /**
     * @hash   -2140527171
     * @symbol ?fireEventContentLogsInWorldSession@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@II@Z
     */
    MCVAPI void fireEventContentLogsInWorldSession(std::string const &, unsigned int, unsigned int);
    /**
     * @hash   584114702
     * @symbol ?fireEventContentShared@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBW4ShareMode@IMinecraftEventing@@@Z
     */
    MCVAPI void fireEventContentShared(std::string const &, std::string const &, enum IMinecraftEventing::ShareMode const &);
    /**
     * @hash   -1894808615
     * @symbol ?fireEventControlRemappedByPlayer@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4RawInputType@@H@Z
     */
    MCVAPI void fireEventControlRemappedByPlayer(std::string const &, enum RawInputType, int) const;
    /**
     * @hash   -122019964
     * @symbol ?fireEventCopyWorldEducationEnabled@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void fireEventCopyWorldEducationEnabled();
    /**
     * @hash   -1740845428
     * @symbol ?fireEventCrashSystemFailedToInit@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void fireEventCrashSystemFailedToInit();
    /**
     * @hash   -1354509643
     * @symbol ?fireEventDefaultGameTypeChanged@MinecraftEventing@@UEAAXW4GameType@@0@Z
     */
    MCVAPI void fireEventDefaultGameTypeChanged(enum GameType, enum GameType);
    /**
     * @symbol ?fireEventDevSlashCommandExecuted@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCVAPI void fireEventDevSlashCommandExecuted(std::string const &, std::string const &);
    /**
     * @hash   -558710129
     * @symbol ?fireEventDeviceAccountFailure@MinecraftEventing@@UEAAXW4SignInStage@IMinecraftEventing@@W4DeviceAccountFailurePhase@3@IAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventDeviceAccountFailure(enum IMinecraftEventing::SignInStage, enum IMinecraftEventing::DeviceAccountFailurePhase, unsigned int, std::string const &);
    /**
     * @hash   1051577538
     * @symbol ?fireEventDeviceAccountSuccess@MinecraftEventing@@UEAAX_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventDeviceAccountSuccess(bool, std::string const &);
    /**
     * @hash   -1142187293
     * @symbol ?fireEventDeviceIdManagerFailOnIdentityGained@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void fireEventDeviceIdManagerFailOnIdentityGained();
    /**
     * @hash   -798436304
     * @symbol ?fireEventDeviceLost@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void fireEventDeviceLost();
    /**
     * @hash   1117677757
     * @symbol ?fireEventDifficultySet@MinecraftEventing@@UEAAXW4Difficulty@@0@Z
     */
    MCVAPI void fireEventDifficultySet(enum Difficulty, enum Difficulty);
    /**
     * @hash   -1062924195
     * @symbol ?fireEventDiskStatus@MinecraftEventing@@UEAAXW4DiskStatus@@W4LevelStorageState@Core@@_K@Z
     */
    MCVAPI void fireEventDiskStatus(enum DiskStatus, enum Core::LevelStorageState, unsigned __int64);
    /**
     * @hash   -1018263808
     * @symbol ?fireEventEduContentVerificationFailed@MinecraftEventing@@UEBAXXZ
     */
    MCVAPI void fireEventEduContentVerificationFailed() const;
    /**
     * @hash   -1626630400
     * @symbol ?fireEventEduDemoConversion@MinecraftEventing@@UEAAXW4ADRole@@W4LastClickedSource@@@Z
     */
    MCVAPI void fireEventEduDemoConversion(enum ADRole, enum LastClickedSource);
    /**
     * @hash   -1422021842
     * @symbol ?fireEventEduOptionSet@MinecraftEventing@@UEBAXAEBVOption@@@Z
     */
    MCVAPI void fireEventEduOptionSet(class Option const &) const;
    /**
     * @hash   1913624244
     * @symbol ?fireEventEduResources@MinecraftEventing@@UEBAXXZ
     */
    MCVAPI void fireEventEduResources() const;
    /**
     * @hash   752801135
     * @symbol ?fireEventEduServiceStatus@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HV?$buffer_span@U?$pair@V?$basic_string_span@$$CBD$0?0@gsl@@V12@@std@@@@@Z
     */
    MCVAPI void fireEventEduServiceStatus(std::string const &, std::string const &, int, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>) const;
    /**
     * @hash   1954521475
     * @symbol ?fireEventEduiOSPurchaseTransaction@MinecraftEventing@@UEBAXAEBW4TransactionStatus@@@Z
     */
    MCVAPI void fireEventEduiOSPurchaseTransaction(enum TransactionStatus const &) const;
    /**
     * @hash   -979665702
     * @symbol ?fireEventElementConstructorUsed@MinecraftEventing@@UEAAXHHW4ElementConstructorUseType@IMinecraftEventing@@@Z
     */
    MCVAPI void fireEventElementConstructorUsed(int, int, enum IMinecraftEventing::ElementConstructorUseType);
    /**
     * @hash   146547647
     * @symbol ?fireEventEntitlementListInfo@MinecraftEventing@@UEAAXAEAV?$vector@VContentIdentity@@V?$allocator@VContentIdentity@@@std@@@std@@_N@Z
     */
    MCVAPI void fireEventEntitlementListInfo(std::vector<class ContentIdentity> &, bool);
    /**
     * @hash   -1928745387
     * @symbol ?fireEventEntitySpawned@MinecraftEventing@@UEAAXPEAVPlayer@@HI@Z
     */
    MCVAPI void fireEventEntitySpawned(class Player *, int, unsigned int);
    /**
     * @hash   -122182112
     * @symbol ?fireEventGameRulesUpdated@MinecraftEventing@@UEAAXMMAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventGameRulesUpdated(float, float, std::string const &);
    /**
     * @hash   2129841976
     * @symbol ?fireEventGameRulesUpdated@MinecraftEventing@@UEAAX_N0AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventGameRulesUpdated(bool, bool, std::string const &);
    /**
     * @hash   -1204312960
     * @symbol ?fireEventGameRulesUpdated@MinecraftEventing@@UEAAXHHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventGameRulesUpdated(int, int, std::string const &);
    /**
     * @hash   1792554413
     * @symbol ?fireEventGoogleAccountHoldWarning@MinecraftEventing@@UEAAX_N@Z
     */
    MCVAPI void fireEventGoogleAccountHoldWarning(bool);
    /**
     * @hash   -326013492
     * @symbol ?fireEventHardwareInfo@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void fireEventHardwareInfo();
    /**
     * @hash   788925939
     * @symbol ?fireEventHowToPlayTopicChanged@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4InputMode@@@Z
     */
    MCVAPI void fireEventHowToPlayTopicChanged(std::string const &, enum InputMode);
    /**
     * @hash   -109869336
     * @symbol ?fireEventIAPPurchaseAttempt@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAVOffer@@W4PurchasePath@@@Z
     */
    MCVAPI void fireEventIAPPurchaseAttempt(std::string const &, std::string const &, class Offer &, enum PurchasePath);
    /**
     * @hash   228404237
     * @symbol ?fireEventIAPPurchaseResolved@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAVOffer@@W4PurchaseResult@IMinecraftEventing@@W4PurchasePath@@@Z
     */
    MCVAPI void fireEventIAPPurchaseResolved(std::string const &, std::string const &, class Offer &, enum IMinecraftEventing::PurchaseResult, enum PurchasePath);
    /**
     * @hash   2131945649
     * @symbol ?fireEventIAPRedeemAttempt@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00W4PurchasePath@@@Z
     */
    MCVAPI void fireEventIAPRedeemAttempt(std::string const &, std::string const &, std::string const &, enum PurchasePath);
    /**
     * @hash   1455267022
     * @symbol ?fireEventIAPRedeemResolved@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00W4PurchaseResult@IMinecraftEventing@@W4PurchasePath@@@Z
     */
    MCVAPI void fireEventIAPRedeemResolved(std::string const &, std::string const &, std::string const &, enum IMinecraftEventing::PurchaseResult, enum PurchasePath);
    /**
     * @hash   -288329672
     * @symbol ?fireEventJoinByCode@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventJoinByCode(std::string const &);
    /**
     * @hash   608954438
     * @symbol ?fireEventJoinCanceled@MinecraftEventing@@UEAAXW4LoadingState@@@Z
     */
    MCVAPI void fireEventJoinCanceled(enum LoadingState);
    /**
     * @hash   -933581878
     * @symbol ?fireEventLabTableCreated@MinecraftEventing@@UEAAXHHH@Z
     */
    MCVAPI void fireEventLabTableCreated(int, int, int);
    /**
     * @hash   1386153437
     * @symbol ?fireEventLevelChunkPerformanceData@MinecraftEventing@@UEAAX_N@Z
     */
    MCVAPI void fireEventLevelChunkPerformanceData(bool);
    /**
     * @hash   -1933700736
     * @symbol ?fireEventLevelDatLoadFailed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
     */
    MCVAPI void fireEventLevelDatLoadFailed(std::string const &, std::string const &, bool);
    /**
     * @hash   1535064506
     * @symbol ?fireEventLevelDataOverride@MinecraftEventing@@UEBAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCVAPI void fireEventLevelDataOverride(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -512244632
     * @symbol ?fireEventLevelDestruct@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void fireEventLevelDestruct();
    /**
     * @hash   -153801177
     * @symbol ?fireEventLicenseCheck@MinecraftEventing@@UEAAX_NAEAUExtraLicenseData@@@Z
     */
    MCVAPI void fireEventLicenseCheck(bool, struct ExtraLicenseData &);
    /**
     * @hash   831583166
     * @symbol ?fireEventLockedItemGiven@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void fireEventLockedItemGiven();
    /**
     * @hash   496484797
     * @symbol ?fireEventMessageServiceImpression@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
     */
    MCVAPI void fireEventMessageServiceImpression(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -1259218763
     * @symbol ?fireEventMultiplayerConnectionStateChanged@MinecraftEventing@@UEAAX_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1III1@Z
     */
    MCVAPI void fireEventMultiplayerConnectionStateChanged(bool, std::string const &, std::string const &, unsigned int, unsigned int, unsigned int, std::string const &);
    /**
     * @hash   -1086356334
     * @symbol ?fireEventMultiplayerSessionUpdate@MinecraftEventing@@UEAAXV?$not_null@PEBVLevel@@@gsl@@PEBVPlayer@@@Z
     */
    MCVAPI void fireEventMultiplayerSessionUpdate(class gsl::not_null<class Level const *>, class Player const *);
    /**
     * @hash   952511394
     * @symbol ?fireEventNewContentCheckCompleted@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCVAPI void fireEventNewContentCheckCompleted(std::string const &, bool);
    /**
     * @hash   -1380026078
     * @symbol ?fireEventNpcPropertiesUpdated@MinecraftEventing@@UEAAXAEAVActor@@_N@Z
     */
    MCVAPI void fireEventNpcPropertiesUpdated(class Actor &, bool);
    /**
     * @hash   -1274843521
     * @symbol ?fireEventOSKTextTruncation@MinecraftEventing@@UEAAXI@Z
     */
    MCVAPI void fireEventOSKTextTruncation(unsigned int);
    /**
     * @hash   -1003915860
     * @symbol ?fireEventOfferRated@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHHN@Z
     */
    MCVAPI void fireEventOfferRated(std::string const &, int, int, int, double);
    /**
     * @hash   -2034976654
     * @symbol ?fireEventOnAppResume@MinecraftEventing@@UEAAXV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@2@@std@@@Z
     */
    MCVAPI void fireEventOnAppResume(std::vector<struct std::pair<std::string, float>>);
    /**
     * @hash   740519513
     * @symbol ?fireEventOnAppStart@MinecraftEventing@@UEAAXV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@2@@std@@@Z
     */
    MCVAPI void fireEventOnAppStart(std::vector<struct std::pair<std::string, float>>);
    /**
     * @hash   -1878340515
     * @symbol ?fireEventOnAppSuspend@MinecraftEventing@@UEAAXV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@2@@std@@_N@Z
     */
    MCVAPI void fireEventOnAppSuspend(std::vector<struct std::pair<std::string, float>>, bool);
    /**
     * @hash   129059072
     * @symbol ?fireEventOnDeviceLost@MinecraftEventing@@UEAAXV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@2@@std@@@Z
     */
    MCVAPI void fireEventOnDeviceLost(std::vector<struct std::pair<std::string, float>>);
    /**
     * @hash   -822445970
     * @symbol ?fireEventOnSuccessfulClientLogin@MinecraftEventing@@UEAAXPEBVLevel@@@Z
     */
    MCVAPI void fireEventOnSuccessfulClientLogin(class Level const *);
    /**
     * @hash   1290820034
     * @symbol ?fireEventOneDSPlayerReportPayload@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventOneDSPlayerReportPayload(std::string const &);
    /**
     * @hash   -192370486
     * @symbol ?fireEventOptionsUpdated@MinecraftEventing@@UEAAXAEAVOptions@@W4InputMode@@_N@Z
     */
    MCVAPI void fireEventOptionsUpdated(class Options &, enum InputMode, bool);
    /**
     * @hash   -2000433633
     * @symbol ?fireEventOreUIError@MinecraftEventing@@UEAAXAEBIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventOreUIError(unsigned int const &, std::string const &);
    /**
     * @hash   1599131358
     * @symbol ?fireEventPackHashChanged@MinecraftEventing@@UEAAXAEBVPackManifest@@@Z
     */
    MCVAPI void fireEventPackHashChanged(class PackManifest const &);
    /**
     * @hash   282437769
     * @symbol ?fireEventPackPlayed@MinecraftEventing@@UEAAXAEBVPackInstance@@I@Z
     */
    MCVAPI void fireEventPackPlayed(class PackInstance const &, unsigned int);
    /**
     * @hash   -2137562197
     * @symbol ?fireEventPackUpgradeAttempt@MinecraftEventing@@UEAAXAEBVPackManifest@@AEBVPackReport@@@Z
     */
    MCVAPI void fireEventPackUpgradeAttempt(class PackManifest const &, class PackReport const &);
    /**
     * @hash   -1521643496
     * @symbol ?fireEventPacketViolationDetected@MinecraftEventing@@UEAAXAEBUExtendedStreamReadResult@@W4PacketViolationResponse@@W4MinecraftPacketIds@@AEBVNetworkIdentifier@@@Z
     */
    MCVAPI void fireEventPacketViolationDetected(struct ExtendedStreamReadResult const &, enum PacketViolationResponse, enum MinecraftPacketIds, class NetworkIdentifier const &);
    /**
     * @hash   -1936274826
     * @symbol ?fireEventPerformanceContext@MinecraftEventing@@UEAAXAEBVPerfContextTrackerReport@@@Z
     */
    MCVAPI void fireEventPerformanceContext(class PerfContextTrackerReport const &);
    /**
     * @hash   -1849339557
     * @symbol ?fireEventPerformanceMetrics@MinecraftEventing@@UEAAXAEBUProfilerLiteTelemetry@@_N@Z
     */
    MCVAPI void fireEventPerformanceMetrics(struct ProfilerLiteTelemetry const &, bool);
    /**
     * @hash   837380463
     * @symbol ?fireEventPersonaAvatarUpdated@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@AEBV?$vector@_NV?$allocator@_N@std@@@3@2_N3000311@Z
     */
    MCVAPI void fireEventPersonaAvatarUpdated(std::string const &, std::vector<std::string> const &, std::vector<bool> const &, std::vector<bool> const &, bool, bool, std::string const &, std::string const &, std::string const &, bool, std::vector<std::string> const &, std::vector<std::string> const &);
    /**
     * @hash   363519862
     * @symbol ?fireEventPersonaAvatarsListed@MinecraftEventing@@UEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCVAPI void fireEventPersonaAvatarsListed(std::vector<std::string> const &);
    /**
     * @hash   2125350532
     * @symbol ?fireEventPersonaCategoryInformation@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventPersonaCategoryInformation(std::string const &);
    /**
     * @hash   1032983102
     * @symbol ?fireEventPersonaCreationFailed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N100@Z
     */
    MCVAPI void fireEventPersonaCreationFailed(std::string const &, std::string const &, bool, bool, std::string const &, std::string const &);
    /**
     * @hash   -1603601526
     * @symbol ?fireEventPersonaEmotePlayed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NH@Z
     */
    MCVAPI void fireEventPersonaEmotePlayed(std::string const &, bool, int);
    /**
     * @hash   193747730
     * @symbol ?fireEventPersonaGeneralError@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventPersonaGeneralError(std::string const &);
    /**
     * @hash   1597906015
     * @symbol ?fireEventPersonaInitalizationEvent@MinecraftEventing@@UEAAXIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCVAPI void fireEventPersonaInitalizationEvent(unsigned int, std::string const &, std::string const &);
    /**
     * @hash   -1926222753
     * @symbol ?fireEventPersonaItemPreviewed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00IIW4PromotionType@IMinecraftEventing@@_N00NW4StoreType@5@@Z
     */
    MCVAPI void fireEventPersonaItemPreviewed(std::string const &, std::string const &, std::string const &, unsigned int, unsigned int, enum IMinecraftEventing::PromotionType, bool, std::string const &, std::string const &, double, enum IMinecraftEventing::StoreType);
    /**
     * @hash   49572878
     * @symbol ?fireEventPersonaLoadingPieces@MinecraftEventing@@UEAAXIN@Z
     */
    MCVAPI void fireEventPersonaLoadingPieces(unsigned int, double);
    /**
     * @hash   -1832522469
     * @symbol ?fireEventPersonaSkinChanged@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
     */
    MCVAPI void fireEventPersonaSkinChanged(std::string const &, std::string const &, bool);
    /**
     * @hash   -1584885418
     * @symbol ?fireEventPersonaStillLoading@MinecraftEventing@@UEAAX_N0000000@Z
     */
    MCVAPI void fireEventPersonaStillLoading(bool, bool, bool, bool, bool, bool, bool, bool);
    /**
     * @hash   140209788
     * @symbol ?fireEventPersonaUserLoadedActive@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
     */
    MCVAPI void fireEventPersonaUserLoadedActive(std::string const &, std::string const &, bool);
    /**
     * @hash   -1338023611
     * @symbol ?fireEventPersonaXForgeResponses@MinecraftEventing@@UEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@H@Z
     */
    MCVAPI void fireEventPersonaXForgeResponses(std::vector<std::string> const &, int);
    /**
     * @hash   -217179142
     * @symbol ?fireEventPlayIntegrityCheck@MinecraftEventing@@UEAAXHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
     */
    MCVAPI void fireEventPlayIntegrityCheck(int, std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -240861849
     * @symbol ?fireEventPlayerBanned@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventPlayerBanned(std::string const &);
    /**
     * @hash   2135056153
     * @symbol ?fireEventPlayerBounced@MinecraftEventing@@UEAAXPEAVPlayer@@AEBVBlock@@H@Z
     */
    MCVAPI void fireEventPlayerBounced(class Player *, class Block const &, int);
    /**
     * @hash   611044802
     * @symbol ?fireEventPlayerDamaged@MinecraftEventing@@UEAAXPEAVPlayer@@W4ActorDamageCause@@@Z
     */
    MCVAPI void fireEventPlayerDamaged(class Player *, enum ActorDamageCause);
    /**
     * @hash   -301710557
     * @symbol ?fireEventPlayerJoinWorld@MinecraftEventing@@UEAAXAEBIW4SubClientId@@W4PlayerJoinWorldAttemptState@IConnectionEventing@@H@Z
     */
    MCVAPI void fireEventPlayerJoinWorld(unsigned int const &, enum SubClientId, enum IConnectionEventing::PlayerJoinWorldAttemptState, int);
    /**
     * @hash   1932317340
     * @symbol ?fireEventPlayerKicked@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCVAPI void fireEventPlayerKicked(std::string const &, std::string const &);
    /**
     * @hash   1876788012
     * @symbol ?fireEventPlayerMessageChat@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCVAPI void fireEventPlayerMessageChat(std::string const &, std::string const &);
    /**
     * @hash   -1220952276
     * @symbol ?fireEventPlayerMessageMe@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCVAPI void fireEventPlayerMessageMe(std::string const &, std::string const &);
    /**
     * @hash   -1025081893
     * @symbol ?fireEventPlayerMessageSay@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCVAPI void fireEventPlayerMessageSay(std::string const &, std::string const &);
    /**
     * @hash   88948455
     * @symbol ?fireEventPlayerMessageTell@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     */
    MCVAPI void fireEventPlayerMessageTell(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   737789620
     * @symbol ?fireEventPlayerMessageTitle@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     */
    MCVAPI void fireEventPlayerMessageTitle(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -428068759
     * @symbol ?fireEventPlayerReportSent@MinecraftEventing@@UEAAX_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     */
    MCVAPI void fireEventPlayerReportSent(bool, std::string const &, std::string const &);
    /**
     * @hash   -230798927
     * @symbol ?fireEventPlayerTravelled@MinecraftEventing@@UEAAXPEAVPlayer@@M@Z
     */
    MCVAPI void fireEventPlayerTravelled(class Player *, float);
    /**
     * @hash   -799473259
     * @symbol ?fireEventPopupClosed@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventPopupClosed(std::string const &) const;
    /**
     * @hash   -1524906101
     * @symbol ?fireEventPopupFiredEdu@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000W4ActiveDirectoryAction@@@Z
     */
    MCVAPI void fireEventPopupFiredEdu(std::string const &, std::string const &, std::string const &, std::string const &, enum ActiveDirectoryAction);
    /**
     * @hash   1617574921
     * @symbol ?fireEventPortfolioExported@MinecraftEventing@@UEAAXHH@Z
     */
    MCVAPI void fireEventPortfolioExported(int, int);
    /**
     * @hash   -642621105
     * @symbol ?fireEventProgressionsSet@MinecraftEventing@@UEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCVAPI void fireEventProgressionsSet(std::vector<std::string> const &);
    /**
     * @hash   -1987875699
     * @symbol ?fireEventPromotionNotificationClicked@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventPromotionNotificationClicked(std::string const &);
    /**
     * @hash   194184861
     * @symbol ?fireEventPurchaseAttempt@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00W4StoreType@IMinecraftEventing@@W4PurchasePath@@@Z
     */
    MCVAPI void fireEventPurchaseAttempt(std::string const &, std::string const &, std::string const &, enum IMinecraftEventing::StoreType, enum PurchasePath);
    /**
     * @hash   883640748
     * @symbol ?fireEventPurchaseFailureDetails@MinecraftEventing@@UEAAXHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     */
    MCVAPI void fireEventPurchaseFailureDetails(int, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   1689016036
     * @symbol ?fireEventPurchaseGameAttempt@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     */
    MCVAPI void fireEventPurchaseGameAttempt(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -346236542
     * @symbol ?fireEventPurchaseResolved@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00W4StoreType@IMinecraftEventing@@W4PurchaseResult@5@W4PurchasePath@@@Z
     */
    MCVAPI void fireEventPurchaseResolved(std::string const &, std::string const &, std::string const &, enum IMinecraftEventing::StoreType, enum IMinecraftEventing::PurchaseResult, enum PurchasePath);
    /**
     * @hash   -894724508
     * @symbol ?fireEventPushNotificationOpened@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCVAPI void fireEventPushNotificationOpened(std::string const &, std::string const &);
    /**
     * @hash   -184769910
     * @symbol ?fireEventPushNotificationPermission@MinecraftEventing@@UEAAX_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventPushNotificationPermission(bool, std::string const &);
    /**
     * @hash   1694112027
     * @symbol ?fireEventPushNotificationReceived@MinecraftEventing@@UEAAXAEBVPushNotificationMessage@@@Z
     */
    MCVAPI void fireEventPushNotificationReceived(class PushNotificationMessage const &);
    /**
     * @hash   1711779498
     * @symbol ?fireEventRealmDownload@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HHH@Z
     */
    MCVAPI void fireEventRealmDownload(std::string const &, std::string const &, int, int, int);
    /**
     * @hash   -380737481
     * @symbol ?fireEventRealmMemberlistCleared@MinecraftEventing@@UEAAXAEBURealmId@Realms@@AEBH@Z
     */
    MCVAPI void fireEventRealmMemberlistCleared(struct Realms::RealmId const &, int const &);
    /**
     * @hash   1417129566
     * @symbol ?fireEventRealmShared@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBW4ShareMode@IMinecraftEventing@@AEBURealmId@Realms@@@Z
     */
    MCVAPI void fireEventRealmShared(std::string const &, enum IMinecraftEventing::ShareMode const &, struct Realms::RealmId const &);
    /**
     * @hash   1897824379
     * @symbol ?fireEventRealmUpload@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HHH_N@Z
     */
    MCVAPI void fireEventRealmUpload(std::string const &, std::string const &, int, int, int, bool);
    /**
     * @hash   1438301791
     * @symbol ?fireEventRealmUrlGenerated@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBURealmId@Realms@@@Z
     */
    MCVAPI void fireEventRealmUrlGenerated(std::string const &, struct Realms::RealmId const &);
    /**
     * @hash   339880441
     * @symbol ?fireEventRealmsSubscriptionPurchaseFailed@MinecraftEventing@@UEAAXAEBUProductSku@@W4RealmsPurchaseIntent@@W4RealmsPurchaseFailureReason@@@Z
     */
    MCVAPI void fireEventRealmsSubscriptionPurchaseFailed(struct ProductSku const &, enum RealmsPurchaseIntent, enum RealmsPurchaseFailureReason);
    /**
     * @hash   100146768
     * @symbol ?fireEventRealmsSubscriptionPurchaseStarted@MinecraftEventing@@UEAAXAEBUProductSku@@W4RealmsPurchaseIntent@@@Z
     */
    MCVAPI void fireEventRealmsSubscriptionPurchaseStarted(struct ProductSku const &, enum RealmsPurchaseIntent);
    /**
     * @hash   173736960
     * @symbol ?fireEventRealmsSubscriptionPurchaseSucceeded@MinecraftEventing@@UEAAXAEBUProductSku@@W4RealmsPurchaseIntent@@@Z
     */
    MCVAPI void fireEventRealmsSubscriptionPurchaseSucceeded(struct ProductSku const &, enum RealmsPurchaseIntent);
    /**
     * @hash   813136875
     * @symbol ?fireEventReducerBlockEntered@MinecraftEventing@@UEAAXAEBVItemDescriptor@@@Z
     */
    MCVAPI void fireEventReducerBlockEntered(class ItemDescriptor const &);
    /**
     * @hash   -1468820931
     * @symbol ?fireEventRenderingSizeChanged@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void fireEventRenderingSizeChanged();
    /**
     * @hash   -1029353854
     * @symbol ?fireEventRespawn@MinecraftEventing@@UEAAXAEAVPlayer@@H@Z
     */
    MCVAPI void fireEventRespawn(class Player &, int);
    /**
     * @hash   1467551354
     * @symbol ?fireEventRespondedToAcceptContent@MinecraftEventing@@UEAAXAEBUPacksInfoData@@_N@Z
     */
    MCVAPI void fireEventRespondedToAcceptContent(struct PacksInfoData const &, bool);
    /**
     * @hash   -387174269
     * @symbol ?fireEventScreenChanged@MinecraftEventing@@UEAAXAEBIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@3@@Z
     */
    MCVAPI void fireEventScreenChanged(unsigned int const &, std::string const &, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const &);
    /**
     * @hash   1898161695
     * @symbol ?fireEventScreenLoaded@MinecraftEventing@@UEAAXAEBIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NNN@Z
     */
    MCVAPI void fireEventScreenLoaded(unsigned int const &, std::string const &, double, double, double);
    /**
     * @hash   -1341970384
     * @symbol ?fireEventScriptDebuggerConnect@MinecraftEventing@@UEAAX_N@Z
     */
    MCVAPI void fireEventScriptDebuggerConnect(bool);
    /**
     * @hash   93183779
     * @symbol ?fireEventScriptDebuggerListen@MinecraftEventing@@UEAAX_N@Z
     */
    MCVAPI void fireEventScriptDebuggerListen(bool);
    /**
     * @hash   456268966
     * @symbol ?fireEventScriptPluginDiscovery@MinecraftEventing@@UEAAXAEBVScriptPluginResult@@_N@Z
     */
    MCVAPI void fireEventScriptPluginDiscovery(class ScriptPluginResult const &, bool);
    /**
     * @hash   1476781064
     * @symbol ?fireEventScriptPluginRun@MinecraftEventing@@UEAAXAEBVScriptPluginResult@@V?$duration@_JU?$ratio@$00$0PECEA@@std@@@chrono@std@@_N@Z
     */
    MCVAPI void fireEventScriptPluginRun(class ScriptPluginResult const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000000>>, bool);
    /**
     * @hash   -1751123381
     * @symbol ?fireEventSearchCatalogRequest@MinecraftEventing@@UEAAXAEBVSearchRequestTelemetry@@@Z
     */
    MCVAPI void fireEventSearchCatalogRequest(class SearchRequestTelemetry const &);
    /**
     * @hash   313334287
     * @symbol ?fireEventSearchItemSelected@MinecraftEventing@@UEAAXHHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHH@Z
     */
    MCVAPI void fireEventSearchItemSelected(int, int, std::string const &, int, int, int);
    /**
     * @hash   1329114376
     * @symbol ?fireEventServerDrivenLayoutImagesLoaded@MinecraftEventing@@UEAAXAEAVRequestTelemetry@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_KHHHAEAV?$vector@GV?$allocator@G@std@@@4@@Z
     */
    MCVAPI void fireEventServerDrivenLayoutImagesLoaded(class RequestTelemetry &, std::string, int, unsigned __int64, int, int, int, std::vector<unsigned short> &);
    /**
     * @hash   290786720
     * @symbol ?fireEventServerDrivenLayoutPageLoaded@MinecraftEventing@@UEAAXAEAVRequestTelemetry@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHHHH@Z
     */
    MCVAPI void fireEventServerDrivenLayoutPageLoaded(class RequestTelemetry &, std::string, int, int, int, int, int);
    /**
     * @hash   1265773578
     * @symbol ?fireEventServerRespawnSearchTime@MinecraftEventing@@UEAAXAEAVPlayer@@AEBVPlayerRespawnTelemetryData@@@Z
     */
    MCVAPI void fireEventServerRespawnSearchTime(class Player &, class PlayerRespawnTelemetryData const &);
    /**
     * @hash   90189060
     * @symbol ?fireEventServerShutdownDueToError@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventServerShutdownDueToError(std::string const &);
    /**
     * @hash   -1823647476
     * @symbol ?fireEventSetMultiplayerCorrelationId@MinecraftEventing@@UEAAXPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     */
    MCVAPI void fireEventSetMultiplayerCorrelationId(class Player *, std::string const &, std::string const &);
    /**
     * @hash   19972350
     * @symbol ?fireEventSetValidForAchievements@MinecraftEventing@@UEAAXPEAVPlayer@@_N@Z
     */
    MCVAPI void fireEventSetValidForAchievements(class Player *, bool);
    /**
     * @hash   -502914684
     * @symbol ?fireEventSideBySideValidationError@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000_N11@Z
     */
    MCVAPI void fireEventSideBySideValidationError(std::string const &, std::string const &, std::string const &, std::string const &, bool, bool, bool);
    /**
     * @hash   -1870452476
     * @symbol ?fireEventSidebarNavigation@MinecraftEventing@@UEAAXAEBIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1H_N22@Z
     */
    MCVAPI void fireEventSidebarNavigation(unsigned int const &, std::string const &, std::string const &, int, bool, bool, bool);
    /**
     * @hash   1107881405
     * @symbol ?fireEventSidebarVerboseToggled@MinecraftEventing@@UEAAXAEBIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@_N@Z
     */
    MCVAPI void fireEventSidebarVerboseToggled(unsigned int const &, std::string const &, std::string, bool);
    /**
     * @hash   -375451242
     * @symbol ?fireEventSignInEdu@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ADRole@@W4EduSignInStage@IMinecraftEventing@@00AEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@3@@Z
     */
    MCVAPI void fireEventSignInEdu(std::string const &, enum ADRole, enum IMinecraftEventing::EduSignInStage, std::string const &, std::string const &, std::vector<struct std::pair<std::string, std::string>> const &);
    /**
     * @hash   325687882
     * @symbol ?fireEventSignInToIdentity@MinecraftEventing@@UEAAXW4SignInAccountType@IMinecraftEventing@@W4SignInTrigger@3@_NW4SignInStage@3@W4SignInResult@Social@@UPlayerIDs@7@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventSignInToIdentity(enum IMinecraftEventing::SignInAccountType, enum IMinecraftEventing::SignInTrigger, bool, enum IMinecraftEventing::SignInStage, enum Social::SignInResult, struct Social::PlayerIDs, std::string const &);
    /**
     * @hash   -240811885
     * @symbol ?fireEventSignOutOfIdentity@MinecraftEventing@@UEAAXW4SignInAccountType@IMinecraftEventing@@W4SignInTrigger@3@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@2@Z
     */
    MCVAPI void fireEventSignOutOfIdentity(enum IMinecraftEventing::SignInAccountType, enum IMinecraftEventing::SignInTrigger, std::string const &, std::string const &);
    /**
     * @hash   888328853
     * @symbol ?fireEventSplitScreenUpdated@MinecraftEventing@@UEAAXAEBVIClientInstance@@@Z
     */
    MCVAPI void fireEventSplitScreenUpdated(class IClientInstance const &);
    /**
     * @hash   -1829465236
     * @symbol ?fireEventStackLoaded@MinecraftEventing@@UEAAXAEBUStackStats@@@Z
     */
    MCVAPI void fireEventStackLoaded(struct StackStats const &);
    /**
     * @hash   334445361
     * @symbol ?fireEventStartClient@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventStartClient(std::string const &);
    /**
     * @hash   -694813537
     * @symbol ?fireEventStartWorld@MinecraftEventing@@UEAAXW4NetworkType@IMinecraftEventing@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MultiplayerServiceIdentifier@Social@@@Z
     */
    MCVAPI void fireEventStartWorld(enum IMinecraftEventing::NetworkType, std::string const &, enum Social::MultiplayerServiceIdentifier);
    /**
     * @hash   244602022
     * @symbol ?fireEventStorage@MinecraftEventing@@UEAAXHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventStorage(int, std::string const &);
    /**
     * @hash   -494507728
     * @symbol ?fireEventStorageAreaFull@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@UDirectoryEntry@Bedrock@@V?$allocator@UDirectoryEntry@Bedrock@@@std@@@3@@Z
     */
    MCVAPI void fireEventStorageAreaFull(std::string const &, std::vector<struct Bedrock::DirectoryEntry> const &);
    /**
     * @hash   776151791
     * @symbol ?fireEventStorageReport@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventStorageReport(std::string const &);
    /**
     * @symbol ?fireEventStoreDiscoveryRequestResponse@MinecraftEventing@@UEAAXHH@Z
     */
    MCVAPI void fireEventStoreDiscoveryRequestResponse(int, int);
    /**
     * @symbol ?fireEventStoreLocalizationBinaryFetchResponse@MinecraftEventing@@UEAAXHI@Z
     */
    MCVAPI void fireEventStoreLocalizationBinaryFetchResponse(int, unsigned int);
    /**
     * @hash   -151607729
     * @symbol ?fireEventStoreOfferClicked@MinecraftEventing@@UEAAXHHHHHHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_NH0@Z
     */
    MCVAPI void fireEventStoreOfferClicked(int, int, int, int, int, int, std::string const &, std::string const &, bool, int, std::string const &);
    /**
     * @hash   433528993
     * @symbol ?fireEventStorePlayFabRequestResponse@MinecraftEventing@@UEAAXG@Z
     */
    MCVAPI void fireEventStorePlayFabRequestResponse(unsigned short);
    /**
     * @hash   -1404740983
     * @symbol ?fireEventStorePromotionNotification@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventStorePromotionNotification(std::string const &);
    /**
     * @hash   568425637
     * @symbol ?fireEventStoreSearch@MinecraftEventing@@UEAAXAEBUTelemetryData@storeSearch@@@Z
     */
    MCVAPI void fireEventStoreSearch(struct storeSearch::TelemetryData const &);
    /**
     * @symbol ?fireEventStoreSessionResponse@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z
     */
    MCVAPI void fireEventStoreSessionResponse(std::string const &, int, int);
    /**
     * @hash   -1669169401
     * @symbol ?fireEventStructureExport@MinecraftEventing@@UEBAXAEBUglTFExportData@@W4ExportOutcome@IMinecraftEventing@@W4ExportStage@4@@Z
     */
    MCVAPI void fireEventStructureExport(struct glTFExportData const &, enum IMinecraftEventing::ExportOutcome, enum IMinecraftEventing::ExportStage) const;
    /**
     * @hash   -335091685
     * @symbol ?fireEventTagButtonPressed@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCVAPI void fireEventTagButtonPressed(std::string const &, bool) const;
    /**
     * @hash   356381386
     * @symbol ?fireEventTelemetryHttpError@MinecraftEventing@@UEAAXW4TelemetrySystemType@Events@Social@@VStatus@Http@Bedrock@@@Z
     */
    MCVAPI void fireEventTelemetryHttpError(enum Social::Events::TelemetrySystemType, class Bedrock::Http::Status);
    /**
     * @hash   -1431562009
     * @symbol ?fireEventTreatmentPackApplied@MinecraftEventing@@UEAAXAEBVPackManifest@@@Z
     */
    MCVAPI void fireEventTreatmentPackApplied(class PackManifest const &);
    /**
     * @hash   -1001432952
     * @symbol ?fireEventTreatmentPackDownloaded@MinecraftEventing@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventTreatmentPackDownloaded(std::string);
    /**
     * @hash   -846705719
     * @symbol ?fireEventTreatmentPackRemoved@MinecraftEventing@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventTreatmentPackRemoved(std::string);
    /**
     * @hash   1691765439
     * @symbol ?fireEventTreatmentsCleared@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void fireEventTreatmentsCleared();
    /**
     * @hash   -1351941918
     * @symbol ?fireEventTreatmentsSet@MinecraftEventing@@UEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCVAPI void fireEventTreatmentsSet(std::vector<std::string> const &);
    /**
     * @hash   -1458893121
     * @symbol ?fireEventTrialDeviceIdCorrelation@MinecraftEventing@@UEAAX_JAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@01@Z
     */
    MCVAPI void fireEventTrialDeviceIdCorrelation(__int64, std::string const &, __int64, std::string const &);
    /**
     * @symbol ?fireEventUgcAcquisitionStateChanged@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KN_NH2H00@Z
     */
    MCVAPI void fireEventUgcAcquisitionStateChanged(std::string const &, unsigned __int64, double, bool, int, bool, int, std::string const &, std::string const &);
    /**
     * @hash   842182593
     * @symbol ?fireEventUnknownBlockReceived@MinecraftEventing@@UEAAXAEBUNewBlockID@@G@Z
     */
    MCVAPI void fireEventUnknownBlockReceived(struct NewBlockID const &, unsigned short);
    /**
     * @hash   -859672320
     * @symbol ?fireEventUserListUpdated@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00_N@Z
     */
    MCVAPI void fireEventUserListUpdated(std::string const &, std::string const &, std::string const &, bool);
    /**
     * @hash   -983507698
     * @symbol ?fireEventUwpToGdkMigrationComplete@MinecraftEventing@@UEAAXAEBUDeviceIdContext@Bedrock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireEventUwpToGdkMigrationComplete(struct Bedrock::DeviceIdContext const &, std::string const &);
    /**
     * @hash   185224841
     * @symbol ?fireEventVRModeChanged@MinecraftEventing@@UEAAX_N@Z
     */
    MCVAPI void fireEventVRModeChanged(bool);
    /**
     * @hash   -879986020
     * @symbol ?fireEventVideoPlayed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCVAPI void fireEventVideoPlayed(std::string const &, std::string const &);
    /**
     * @hash   1767001375
     * @symbol ?fireEventWebviewDownload@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUWebviewDownloadInfo@@@Z
     */
    MCVAPI void fireEventWebviewDownload(std::string const &, struct WebviewDownloadInfo const &) const;
    /**
     * @hash   1859983508
     * @symbol ?fireEventWindowsPlatformStoreGetLicense@MinecraftEventing@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NH@Z
     */
    MCVAPI void fireEventWindowsPlatformStoreGetLicense(std::string, double, int);
    /**
     * @hash   2063926610
     * @symbol ?fireEventWorldCorruptionCausedWorldShutdown@MinecraftEventing@@UEAAXAEBULevelStorageEventingContext@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@_N@4@@Z
     */
    MCVAPI void fireEventWorldCorruptionCausedWorldShutdown(struct LevelStorageEventingContext const &, std::string const &, class std::optional<bool>);
    /**
     * @hash   1580613310
     * @symbol ?fireEventWorldExported@MinecraftEventing@@UEAAX_J_K@Z
     */
    MCVAPI void fireEventWorldExported(__int64, unsigned __int64);
    /**
     * @hash   2085164736
     * @symbol ?fireEventWorldFilesListed@MinecraftEventing@@UEAAX_K000@Z
     */
    MCVAPI void fireEventWorldFilesListed(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64);
    /**
     * @hash   -832198813
     * @symbol ?fireEventWorldGenerated@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelSettings@@_N@Z
     */
    MCVAPI void fireEventWorldGenerated(std::string const &, class LevelSettings const &, bool);
    /**
     * @hash   358530027
     * @symbol ?fireEventWorldHistoryPackSourceMissingDuringUpgrade@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     */
    MCVAPI void fireEventWorldHistoryPackSourceMissingDuringUpgrade(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   1426577871
     * @symbol ?fireEventWorldImported@MinecraftEventing@@UEAAX_J_K@Z
     */
    MCVAPI void fireEventWorldImported(__int64, unsigned __int64);
    /**
     * @hash   -1182204382
     * @symbol ?fireEventWorldLoaded@MinecraftEventing@@UEAAXPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_N@Z
     */
    MCVAPI void fireEventWorldLoaded(class Player *, std::string const &, std::string const &, bool);
    /**
     * @hash   919388177
     * @symbol ?fireEventWorldLoadedClassroomCustomization@MinecraftEventing@@UEAAXW4WorldClassroomCustomization@IMinecraftEventing@@V?$buffer_span@U?$pair@V?$basic_string_span@$$CBD$0?0@gsl@@V12@@std@@@@@Z
     */
    MCVAPI void fireEventWorldLoadedClassroomCustomization(enum IMinecraftEventing::WorldClassroomCustomization, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>);
    /**
     * @hash   -2108791316
     * @symbol ?fireExternalUriLaunched@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireExternalUriLaunched(std::string const &) const;
    /**
     * @hash   -1207187298
     * @symbol ?fireGlobalResourcePackCrashRecovery@MinecraftEventing@@UEAAXAEAVPackInstance@@VUUID@mce@@H@Z
     */
    MCVAPI void fireGlobalResourcePackCrashRecovery(class PackInstance &, class mce::UUID, int);
    /**
     * @symbol ?fireHostClientTransportSettingSync@MinecraftEventing@@UEAAXW4TransportLayer@@0AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@11_K_N@Z
     */
    MCVAPI void fireHostClientTransportSettingSync(enum TransportLayer, enum TransportLayer, std::string const &, std::string const &, std::string const &, unsigned __int64, bool);
    /**
     * @hash   1840481434
     * @symbol ?fireIDESelected@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireIDESelected(std::string const &) const;
    /**
     * @hash   514981530
     * @symbol ?fireInAppCodeBuilderActivated@MinecraftEventing@@UEBAXW4OpenCodeMethod@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireInAppCodeBuilderActivated(enum OpenCodeMethod, std::string const &) const;
    /**
     * @hash   -1439379640
     * @symbol ?fireInAppCodeBuilderDismissed@MinecraftEventing@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireInAppCodeBuilderDismissed(std::string const &) const;
    /**
     * @hash   714500938
     * @symbol ?fireInviteStatusReceived@MinecraftEventing@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireInviteStatusReceived(std::string);
    /**
     * @hash   551368506
     * @symbol ?fireInviteStatusSentImpl@MinecraftEventing@@UEAAXIV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCVAPI void fireInviteStatusSentImpl(unsigned int, std::vector<std::string>);
    /**
     * @hash   586325518
     * @symbol ?fireLessonActionTaken@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00W4EducationLessonAction@IMinecraftEventing@@H@Z
     */
    MCVAPI void fireLessonActionTaken(std::string const &, std::string const &, std::string const &, enum IMinecraftEventing::EducationLessonAction, int);
    /**
     * @hash   -1476775922
     * @symbol ?fireLessonCompleteDialogOpened@MinecraftEventing@@UEBAXW4LessonCompleteDialogEntryPoint@IMinecraftEventing@@@Z
     */
    MCVAPI void fireLessonCompleteDialogOpened(enum IMinecraftEventing::LessonCompleteDialogEntryPoint) const;
    /**
     * @hash   -746748364
     * @symbol ?fireLessonProgressEvent@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0000H@Z
     */
    MCVAPI void fireLessonProgressEvent(std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, int);
    /**
     * @hash   831698271
     * @symbol ?fireLibraryButtonPressed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     */
    MCVAPI void fireLibraryButtonPressed(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   1551126011
     * @symbol ?fireMinecraftVersionInviteAccepted@MinecraftEventing@@UEAAX_N_K@Z
     */
    MCVAPI void fireMinecraftVersionInviteAccepted(bool, unsigned __int64);
    /**
     * @hash   939318055
     * @symbol ?fireMinecraftVersionLaunched@MinecraftEventing@@UEAAX_N@Z
     */
    MCVAPI void fireMinecraftVersionLaunched(bool);
    /**
     * @hash   -1762179746
     * @symbol ?firePackSettingsEvent@MinecraftEventing@@UEAAXAEBVPackSettings@@AEBVPackManifest@@@Z
     */
    MCVAPI void firePackSettingsEvent(class PackSettings const &, class PackManifest const &);
    /**
     * @hash   -1839791510
     * @symbol ?firePerfTestEvent@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00II0AEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@2@@3@@Z
     */
    MCVAPI void firePerfTestEvent(std::string const &, std::string const &, std::string const &, unsigned int, unsigned int, std::string const &, std::vector<struct std::pair<std::string, float>> const &);
    /**
     * @hash   -1965757224
     * @symbol ?firePermissionsSetEvent@MinecraftEventing@@UEAAXW4PlayerPermissionLevel@@W4CommandPermissionLevel@@01@Z
     */
    MCVAPI void firePermissionsSetEvent(enum PlayerPermissionLevel, enum CommandPermissionLevel, enum PlayerPermissionLevel, enum CommandPermissionLevel);
    /**
     * @hash   1328892624
     * @symbol ?fireQueryOfferResult@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
     */
    MCVAPI void fireQueryOfferResult(std::string const &, int, bool);
    /**
     * @hash   2046920385
     * @symbol ?fireQuickPlayEvent@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void fireQuickPlayEvent();
    /**
     * @hash   318770643
     * @symbol ?fireRealmConnectionEventGenericLambdaCalled@MinecraftEventing@@UEAAXW4RealmConnectionFlow@IMinecraftEventing@@W4RealmConnectionLambda@3@W4RealmConnectionResult@3@@Z
     */
    MCVAPI void fireRealmConnectionEventGenericLambdaCalled(enum IMinecraftEventing::RealmConnectionFlow, enum IMinecraftEventing::RealmConnectionLambda, enum IMinecraftEventing::RealmConnectionResult);
    /**
     * @hash   456981936
     * @symbol ?fireRealmConnectionEventRealmAPIRequest@MinecraftEventing@@UEAAXW4RealmConnectionFlow@IMinecraftEventing@@@Z
     */
    MCVAPI void fireRealmConnectionEventRealmAPIRequest(enum IMinecraftEventing::RealmConnectionFlow);
    /**
     * @hash   -659580499
     * @symbol ?fireRealmConnectionEventRealmAPIResponse@MinecraftEventing@@UEAAXW4RealmConnectionFlow@IMinecraftEventing@@H@Z
     */
    MCVAPI void fireRealmConnectionEventRealmAPIResponse(enum IMinecraftEventing::RealmConnectionFlow, int);
    /**
     * @hash   -1155056734
     * @symbol ?fireRealmConnectionEventStart@MinecraftEventing@@UEAAXW4RealmConnectionFlow@IMinecraftEventing@@@Z
     */
    MCVAPI void fireRealmConnectionEventStart(enum IMinecraftEventing::RealmConnectionFlow);
    /**
     * @hash   -2056273270
     * @symbol ?fireScreenLoadTimeUpdateEvent@MinecraftEventing@@UEAAXAEBIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@3@1@Z
     */
    MCVAPI void fireScreenLoadTimeUpdateEvent(unsigned int const &, std::string const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>, std::string const &);
    /**
     * @hash   1324337398
     * @symbol ?fireServerConnectionAttemptEvent@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N0@Z
     */
    MCVAPI void fireServerConnectionAttemptEvent(std::string const &, bool, std::string const &);
    /**
     * @hash   -22701436
     * @symbol ?fireServerConnectionEvent@MinecraftEventing@@UEAAXW4ServerConnectionOutcome@IConnectionEventing@@INAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireServerConnectionEvent(enum IConnectionEventing::ServerConnectionOutcome, unsigned int, double, std::string const &);
    /**
     * @hash   1287143245
     * @symbol ?fireServerShutdown@MinecraftEventing@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireServerShutdown(std::string);
    /**
     * @hash   -892197291
     * @symbol ?fireServerStarted@MinecraftEventing@@UEAAXW4ServerType@IMinecraftEventing@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireServerStarted(enum IMinecraftEventing::ServerType, std::string);
    /**
     * @hash   134970758
     * @symbol ?fireShareButtonPressed@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4EduShareUriType@@W4EduShareMethodType@@_N@Z
     */
    MCVAPI void fireShareButtonPressed(std::string const &, enum EduShareUriType, enum EduShareMethodType, bool);
    /**
     * @hash   -1661347520
     * @symbol ?fireStorageMigrationEvent@MinecraftEventing@@UEAAX_NW4StorageMigrationType@StorageMigration@Bedrock@@HHV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@7@@Z
     */
    MCVAPI void fireStorageMigrationEvent(bool, enum Bedrock::StorageMigration::StorageMigrationType, int, int, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>, std::string const &);
    /**
     * @hash   -1137422095
     * @symbol ?fireStructureBlockAction@MinecraftEventing@@UEAAXW4StructureBlockActionType@IMinecraftEventing@@AEBVStructureEditorData@@PEBVStructureTelemetryClientData@@@Z
     */
    MCVAPI void fireStructureBlockAction(enum IMinecraftEventing::StructureBlockActionType, class StructureEditorData const &, class StructureTelemetryClientData const *);
    /**
     * @hash   -1301260758
     * @symbol ?fireStructureBlockRedstoneActivated@MinecraftEventing@@UEAAXW4StructureBlockActionType@IMinecraftEventing@@AEBVStructureEditorData@@PEBVStructureTelemetryClientData@@@Z
     */
    MCVAPI void fireStructureBlockRedstoneActivated(enum IMinecraftEventing::StructureBlockActionType, class StructureEditorData const &, class StructureTelemetryClientData const *);
    /**
     * @hash   -1149411254
     * @symbol ?fireTextToSpeechToggled@MinecraftEventing@@UEAAX_N0@Z
     */
    MCVAPI void fireTextToSpeechToggled(bool, bool);
    /**
     * @hash   1738027945
     * @symbol ?fireUserGeneratedUriLaunchFailed@MinecraftEventing@@UEBAXW4UserGeneratedUriSource@@W4ValidationStatus@ResourceUri@Util@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireUserGeneratedUriLaunchFailed(enum UserGeneratedUriSource, enum Util::ResourceUri::ValidationStatus, std::string const &) const;
    /**
     * @hash   2037996014
     * @symbol ?fireUserGeneratedUriLaunched@MinecraftEventing@@UEBAXW4UserGeneratedUriSource@@@Z
     */
    MCVAPI void fireUserGeneratedUriLaunched(enum UserGeneratedUriSource) const;
    /**
     * @hash   1502275104
     * @symbol ?fireWorldConversionAttemptEvent@MinecraftEventing@@UEAAXAEBUWorldConversionReport@Legacy@@@Z
     */
    MCVAPI void fireWorldConversionAttemptEvent(struct Legacy::WorldConversionReport const &);
    /**
     * @hash   -127699623
     * @symbol ?fireWorldConversionInitiatedEvent@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void fireWorldConversionInitiatedEvent(std::string const &);
    /**
     * @hash   49661360
     * @symbol ?fireWorldRecoveryTelemetryEvent@MinecraftEventing@@UEAAXAEBUWorldRecoveryTelemetryEvent@Bedrock@@@Z
     */
    MCVAPI void fireWorldRecoveryTelemetryEvent(struct Bedrock::WorldRecoveryTelemetryEvent const &);
    /**
     * @hash   -719060789
     * @symbol ?fireWorldUpgradedToCnCPart2@MinecraftEventing@@UEAAX_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVExperiments@@1VLevelSeed64@@M@Z
     */
    MCVAPI void fireWorldUpgradedToCnCPart2(bool, std::string const &, class Experiments const &, std::string const &, class LevelSeed64, float);
    /**
     * @hash   -1411399482
     * @symbol ?flagEventDeepLink@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void flagEventDeepLink();
    /**
     * @hash   -1073557788
     * @symbol ?flagEventPlayerGameTypeDefault@MinecraftEventing@@UEAAX_N@Z
     */
    MCVAPI void flagEventPlayerGameTypeDefault(bool);
    /**
     * @hash   1177364030
     * @symbol ?forceSendEvents@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void forceSendEvents();
    /**
     * @hash   -282755122
     * @symbol ?getAchievementsAlwaysEnabled@MinecraftEventing@@EEAA_NXZ
     */
    MCVAPI bool getAchievementsAlwaysEnabled();
    /**
     * @hash   847447404
     * @symbol ?getCrashTelemetryProcessor@MinecraftEventing@@UEAA?AV?$not_null@PEAVCrashTelemetryProcessor@Bedrock@@@gsl@@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::CrashTelemetryProcessor *> getCrashTelemetryProcessor();
    /**
     * @hash   1366008541
     * @symbol ?getEventManager@MinecraftEventing@@EEBAAEAVEventManager@Events@Social@@XZ
     */
    MCVAPI class Social::Events::EventManager & getEventManager() const;
    /**
     * @hash   1086082062
     * @symbol ?getPlayerSessionId@MinecraftEventing@@UEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string const & getPlayerSessionId();
    /**
     * @hash   557487048
     * @symbol ?getPrimaryLocalUserId@MinecraftEventing@@EEBAIXZ
     */
    MCVAPI unsigned int getPrimaryLocalUserId() const;
    /**
     * @hash   1525556385
     * @symbol ?getSessionId@MinecraftEventing@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getSessionId();
    /**
     * @hash   357376018
     * @symbol ?getShouldHaveAchievementsEnabled@MinecraftEventing@@EEAA_NXZ
     */
    MCVAPI bool getShouldHaveAchievementsEnabled();
    /**
     * @hash   -710052947
     * @symbol ?init@MinecraftEventing@@UEAAXAEBV?$not_null@V?$NonOwnerPointer@VIUserManager@Social@@@Bedrock@@@gsl@@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
     */
    MCVAPI void init(class gsl::not_null<class Bedrock::NonOwnerPointer<class Social::IUserManager>> const &, class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    /**
     * @hash   -48779227
     * @symbol ?initDeviceAndSessionIds@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void initDeviceAndSessionIds();
    /**
     * @hash   -1810539806
     * @symbol ?prepEventSearchCatalogRequest@MinecraftEventing@@UEAAXAEBVSearchRequestTelemetry@@@Z
     */
    MCVAPI void prepEventSearchCatalogRequest(class SearchRequestTelemetry const &);
    /**
     * @hash   -1819132459
     * @symbol ?propertiesAsJsonValue@MinecraftEventing@@UEBA?AVValue@Json@@XZ
     */
    MCVAPI class Json::Value propertiesAsJsonValue() const;
    /**
     * @hash   -426019157
     * @symbol ?registerOptionsObserver@MinecraftEventing@@UEAAXV?$shared_ptr@VOptions@@@std@@@Z
     */
    MCVAPI void registerOptionsObserver(class std::shared_ptr<class Options>);
    /**
     * @hash   -974516932
     * @symbol ?removeTestRunIdTag@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void removeTestRunIdTag();
    /**
     * @hash   746755865
     * @symbol ?removeTestTelemetryTag@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void removeTestTelemetryTag();
    /**
     * @hash   -911777907
     * @symbol ?requestEventDeferment@MinecraftEventing@@UEAA?AV?$shared_ptr@PEAX@std@@XZ
     */
    MCVAPI class std::shared_ptr<void *> requestEventDeferment();
    /**
     * @hash   -36852763
     * @symbol ?sendBatchedCrashTelemetry@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void sendBatchedCrashTelemetry();
    /**
     * @hash   1280677928
     * @symbol ?sendCrashStatusTelemetry@MinecraftEventing@@UEAAXAEBUCrashUploadStatus@Bedrock@@@Z
     */
    MCVAPI void sendCrashStatusTelemetry(struct Bedrock::CrashUploadStatus const &);
    /**
     * @hash   -1481284742
     * @symbol ?sendCrashTelemetryNow@MinecraftEventing@@UEAAXV?$shared_ptr@VSessionInfo@Bedrock@@@std@@@Z
     */
    MCVAPI void sendCrashTelemetryNow(class std::shared_ptr<class Bedrock::SessionInfo>);
    /**
     * @hash   833614952
     * @symbol ?setShouldHaveAchievementsEnabled@MinecraftEventing@@EEAAX_N@Z
     */
    MCVAPI void setShouldHaveAchievementsEnabled(bool);
    /**
     * @hash   330948149
     * @symbol ?setTestRunIdTag@MinecraftEventing@@UEAAXPEBD@Z
     */
    MCVAPI void setTestRunIdTag(char const *);
    /**
     * @hash   716144312
     * @symbol ?setTestTelemetryTag@MinecraftEventing@@UEAAXPEBD@Z
     */
    MCVAPI void setTestTelemetryTag(char const *);
    /**
     * @hash   -369852824
     * @symbol ?shutdown@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void shutdown();
    /**
     * @hash   -1805014845
     * @symbol ?stopDebugEventLoggingForAllListeners@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void stopDebugEventLoggingForAllListeners();
    /**
     * @hash   -826884593
     * @symbol ?tick@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @hash   487513271
     * @symbol ?tryFireEventProgressLoadTimes@MinecraftEventing@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@2@@3@@Z
     */
    MCVAPI void tryFireEventProgressLoadTimes(std::string const &, std::vector<struct std::pair<std::string, float>>);
    /**
     * @hash   1478704497
     * @symbol ?updateEditionType@MinecraftEventing@@UEAAXXZ
     */
    MCVAPI void updateEditionType();
    /**
     * @hash   -1140814195
     * @symbol ?updateIsLegacyPlayer@MinecraftEventing@@UEAAX_N@Z
     */
    MCVAPI void updateIsLegacyPlayer(bool);
    /**
     * @hash   706177910
     * @symbol ?updateIsTrial@MinecraftEventing@@UEBAX_N@Z
     */
    MCVAPI void updateIsTrial(bool) const;
    /**
     * @hash   -381140970
     * @symbol ?updatePlayerUndergroundStatus@MinecraftEventing@@UEAAXPEAVPlayer@@_N@Z
     */
    MCVAPI void updatePlayerUndergroundStatus(class Player *, bool);
    /**
     * @hash   -958523813
     * @symbol ?updatePrimaryLocalUserId@MinecraftEventing@@UEAAXAEBI@Z
     */
    MCVAPI void updatePrimaryLocalUserId(unsigned int const &);
    /**
     * @hash   2105797960
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MinecraftEventing();
#endif
    /**
     * @hash   671292454
     * @symbol ??0MinecraftEventing@@QEAA@AEBVPath@Core@@@Z
     */
    MCAPI MinecraftEventing(class Core::Path const &);
    /**
     * @hash   853913587
     * @symbol ?init@MinecraftEventing@@QEAAXAEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
     */
    MCAPI void init(class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    /**
     * @hash   -1912416340
     * @symbol ?initForDedicatedServer@MinecraftEventing@@QEAAXAEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@_N@Z
     */
    MCAPI void initForDedicatedServer(class Bedrock::NonOwnerPointer<class AppPlatform> const &, bool);
    /**
     * @hash   -2123290870
     * @symbol ?fireEventAwardAchievement@MinecraftEventing@@SAXPEAVPlayer@@W4AchievementIds@1@@Z
     */
    MCAPI static void fireEventAwardAchievement(class Player *, enum MinecraftEventing::AchievementIds);
    /**
     * @hash   -5399730
     * @symbol ?fireEventBehaviorErrored@MinecraftEventing@@SAXPEAVPlayer@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static void fireEventBehaviorErrored(class Player *, std::string);
    /**
     * @hash   -821452300
     * @symbol ?fireEventBehaviorFailed@MinecraftEventing@@SAXPEAVPlayer@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static void fireEventBehaviorFailed(class Player *, std::string);
    /**
     * @hash   1140958886
     * @symbol ?fireEventBellBlockUsed@MinecraftEventing@@SAXPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static void fireEventBellBlockUsed(class Player *, std::string const &);
    /**
     * @hash   -792118476
     * @symbol ?fireEventBlockBroken@MinecraftEventing@@SAXPEAVPlayer@@AEBVBlock@@W4BlockPlacementMethod@1@H@Z
     */
    MCAPI static void fireEventBlockBroken(class Player *, class Block const &, enum MinecraftEventing::BlockPlacementMethod, int);
    /**
     * @hash   -1860918338
     * @symbol ?fireEventBlockFound@MinecraftEventing@@SAXPEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI static void fireEventBlockFound(class Player *, class BlockPos const &);
    /**
     * @hash   -483289675
     * @symbol ?fireEventCampfireBlockUsed@MinecraftEventing@@SAXPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4POIBlockInteractionType@1@@Z
     */
    MCAPI static void fireEventCampfireBlockUsed(class Player *, std::string const &, enum MinecraftEventing::POIBlockInteractionType);
    /**
     * @hash   490630913
     * @symbol ?fireEventCaravanChanged@MinecraftEventing@@SAXAEAVMob@@H@Z
     */
    MCAPI static void fireEventCaravanChanged(class Mob &, int);
    /**
     * @hash   -1177745825
     * @symbol ?fireEventItemUsed@MinecraftEventing@@SAXPEAVPlayer@@AEBVItemDescriptor@@W4ItemUseMethod@@@Z
     */
    MCAPI static void fireEventItemUsed(class Player *, class ItemDescriptor const &, enum ItemUseMethod);
    /**
     * @hash   1764590139
     * @symbol ?fireEventJukeboxUsed@MinecraftEventing@@SAXPEAVPlayer@@AEBVItemDescriptor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static void fireEventJukeboxUsed(class Player *, class ItemDescriptor const &, std::string const &);
    /**
     * @hash   965122627
     * @symbol ?fireEventLecternBlockUsed@MinecraftEventing@@SAXPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4POIBlockInteractionType@1@@Z
     */
    MCAPI static void fireEventLecternBlockUsed(class Player *, std::string const &, enum MinecraftEventing::POIBlockInteractionType);
    /**
     * @hash   433841018
     * @symbol ?fireEventMobEffectChanged@MinecraftEventing@@SAXAEAVMob@@AEBVMobEffectInstance@@W4ChangeType@1@@Z
     */
    MCAPI static void fireEventMobEffectChanged(class Mob &, class MobEffectInstance const &, enum MinecraftEventing::ChangeType);
    /**
     * @hash   1696081600
     * @symbol ?fireEventPlayerTeleported@MinecraftEventing@@SAXPEAVPlayer@@MW4TeleportationCause@1@H@Z
     */
    MCAPI static void fireEventPlayerTeleported(class Player *, float, enum MinecraftEventing::TeleportationCause, int);
    /**
     * @hash   534141500
     * @symbol ?fireEventPlayerTransform@MinecraftEventing@@SAXAEAVPlayer@@@Z
     */
    MCAPI static void fireEventPlayerTransform(class Player &);
    /**
     * @hash   1322684743
     * @symbol ?fireEventSlashCommandExecuted@MinecraftEventing@@SAXPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH1@Z
     */
    MCAPI static void fireEventSlashCommandExecuted(class Player *, std::string const &, int, int, std::string const &);

//private:
    /**
     * @hash   632776667
     * @symbol ?_fireStructureBlockAction@MinecraftEventing@@AEAAXW4StructureBlockActionType@IMinecraftEventing@@AEBVStructureEditorData@@_NPEBVStructureTelemetryClientData@@@Z
     */
    MCAPI void _fireStructureBlockAction(enum IMinecraftEventing::StructureBlockActionType, class StructureEditorData const &, bool, class StructureTelemetryClientData const *);
    /**
     * @hash   1264442762
     * @symbol ?_generateWorldSessionId@MinecraftEventing@@AEAAXXZ
     */
    MCAPI void _generateWorldSessionId();
    /**
     * @hash   -1387651511
     * @symbol ?fireEventPlayerMessage@MinecraftEventing@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
     */
    MCAPI void fireEventPlayerMessage(std::string const &, std::string const &, std::string const &, std::string const &);

private:
    /**
     * @hash   -1544213130
     * @symbol ?mAchievementEventing@MinecraftEventing@@0V?$unique_ptr@VAchievementEventing@Events@Social@@U?$default_delete@VAchievementEventing@Events@Social@@@std@@@std@@A
     */
    MCAPI static std::unique_ptr<class Social::Events::AchievementEventing> mAchievementEventing;
    /**
     * @hash   1544829321
     * @symbol ?mAcquisitionMethodMap@MinecraftEventing@@0V?$unordered_map@W4ItemAcquisitionMethod@@W4AcquisitionMethod@MinecraftEventing@@U?$hash@W4ItemAcquisitionMethod@@@std@@U?$equal_to@W4ItemAcquisitionMethod@@@5@V?$allocator@U?$pair@$$CBW4ItemAcquisitionMethod@@W4AcquisitionMethod@MinecraftEventing@@@std@@@5@@std@@B
     */
    MCAPI static class std::unordered_map<enum ItemAcquisitionMethod, enum MinecraftEventing::AcquisitionMethod, struct std::hash<enum ItemAcquisitionMethod>, struct std::equal_to<enum ItemAcquisitionMethod>, class std::allocator<struct std::pair<enum ItemAcquisitionMethod const, enum MinecraftEventing::AcquisitionMethod>>> const mAcquisitionMethodMap;
    /**
     * @hash   188548675
     * @symbol ?mUseMethodMap@MinecraftEventing@@0V?$unordered_map@W4ItemUseMethod@@W4UseMethod@MinecraftEventing@@U?$hash@W4ItemUseMethod@@@std@@U?$equal_to@W4ItemUseMethod@@@5@V?$allocator@U?$pair@$$CBW4ItemUseMethod@@W4UseMethod@MinecraftEventing@@@std@@@5@@std@@B
     */
    MCAPI static class std::unordered_map<enum ItemUseMethod, enum MinecraftEventing::UseMethod, struct std::hash<enum ItemUseMethod>, struct std::equal_to<enum ItemUseMethod>, class std::allocator<struct std::pair<enum ItemUseMethod const, enum MinecraftEventing::UseMethod>>> const mUseMethodMap;
    /**
     * @hash   1053517870
     * @symbol ?sMutex@MinecraftEventing@@0Vmutex@std@@A
     */
    MCAPI static class std::mutex sMutex;

};