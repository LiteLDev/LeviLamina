/**
 * @file  AppPlatform.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AppPlatform.
 *
 */
class AppPlatform {

#define AFTER_EXTRA
// Add Member There
public:
struct AndroidScopedStorageInfo {
    AndroidScopedStorageInfo() = delete;
    AndroidScopedStorageInfo(AndroidScopedStorageInfo const&) = delete;
    AndroidScopedStorageInfo(AndroidScopedStorageInfo const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPPLATFORM
public:
    class AppPlatform& operator=(class AppPlatform const &) = delete;
    AppPlatform(class AppPlatform const &) = delete;
    AppPlatform() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPPLATFORM
    /**
     * @hash   550472157
     * @symbol ?_createProxyResolver@AppPlatform@@EEAA?AV?$unique_ptr@VIProxyResolver@Http@Bedrock@@U?$default_delete@VIProxyResolver@Http@Bedrock@@@std@@@std@@XZ
     */
    MCVAPI std::unique_ptr<class Bedrock::Http::IProxyResolver> _createProxyResolver();
    /**
     * @hash   383981120
     * @symbol ?_disableCPUBoost@AppPlatform@@MEAAXXZ
     */
    MCVAPI void _disableCPUBoost();
    /**
     * @hash   1876405714
     * @symbol ?_initializeFileStorageAreas@AppPlatform@@MEAAXXZ
     */
    MCVAPI void _initializeFileStorageAreas();
    /**
     * @hash   -1903985453
     * @symbol ?_onInitialize@AppPlatform@@EEAAXXZ
     */
    MCVAPI void _onInitialize();
    /**
     * @hash   98039367
     * @symbol ?_onTeardown@AppPlatform@@EEAAXXZ
     */
    MCVAPI void _onTeardown();
    /**
     * @hash   2109204358
     * @symbol ?_teardownFileStorageAreas@AppPlatform@@MEAAXXZ
     */
    MCVAPI void _teardownFileStorageAreas();
    /**
     * @hash   -1280197064
     * @symbol ?_tryEnableCPUBoost@AppPlatform@@MEAA_NXZ
     */
    MCVAPI bool _tryEnableCPUBoost();
    /**
     * @hash   -218579494
     * @symbol ?addListener@AppPlatform@@UEAAXPEAVAppPlatformListener@@M@Z
     */
    MCVAPI void addListener(class AppPlatformListener *, float);
    /**
     * @hash   -768028561
     * @symbol ?allowBetaXblSignIn@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool allowBetaXblSignIn() const;
    /**
     * @hash   567730568
     * @symbol ?allowContentLogWriteToDisk@AppPlatform@@UEAA_NXZ
     */
    MCVAPI bool allowContentLogWriteToDisk();
    /**
     * @hash   -207072626
     * @symbol ?allowsResourcePackDevelopment@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool allowsResourcePackDevelopment() const;
    /**
     * @hash   -1697034870
     * @symbol ?alwaysUseZippedPacksForDlc@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool alwaysUseZippedPacksForDlc() const;
    /**
     * @hash   306846601
     * @symbol ?areThreadsFrozen@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool areThreadsFrozen() const;
    /**
     * @hash   -100847253
     * @symbol ?buyGame@AppPlatform@@UEAAXXZ
     */
    MCVAPI void buyGame();
    /**
     * @hash   -436445189
     * @symbol ?calculateIfLowMemoryDevice@AppPlatform@@UEAAXXZ
     */
    MCVAPI void calculateIfLowMemoryDevice();
    /**
     * @hash   1432894
     * @symbol ?canLaunchUri@AppPlatform@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI bool canLaunchUri(std::string const &);
    /**
     * @hash   1018969900
     * @symbol ?canManageLegacyData@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool canManageLegacyData() const;
    /**
     * @hash   -1746192012
     * @symbol ?canSwapVRMode@AppPlatform@@UEBA_N_N@Z
     */
    MCVAPI bool canSwapVRMode(bool) const;
    /**
     * @hash   1873275905
     * @symbol ?checkLicense@AppPlatform@@UEAAHXZ
     */
    MCVAPI int checkLicense();
    /**
     * @hash   69033064
     * @symbol ?collectGraphicsHardwareDetails@AppPlatform@@UEAAXXZ
     */
    MCVAPI void collectGraphicsHardwareDetails();
    /**
     * @hash   -1918067677
     * @symbol ?compareAppReceiptToLocalReceipt@AppPlatform@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI bool compareAppReceiptToLocalReceipt(std::string const &);
    /**
     * @hash   -774235220
     * @symbol ?copyAssetFile@AppPlatform@@UEAA_NAEBVPath@Core@@0@Z
     */
    MCVAPI bool copyAssetFile(class Core::Path const &, class Core::Path const &);
    /**
     * @hash   1446506087
     * @symbol ?copyImportFileToTempFolder@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
     */
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const &);
    /**
     * @hash   13722005
     * @symbol ?createLoggingStorageArea@AppPlatform@@UEAA?AV?$shared_ptr@VFileStorageArea@Core@@@std@@W4FileAccessType@Core@@AEBVPath@5@@Z
     */
    MCVAPI class std::shared_ptr<class Core::FileStorageArea> createLoggingStorageArea(enum Core::FileAccessType, class Core::Path const &);
    /**
     * @hash   -1899510519
     * @symbol ?createUserInput@AppPlatform@@UEAAXH@Z
     */
    MCVAPI void createUserInput(int);
    /**
     * @hash   -834047978
     * @symbol ?createUserInput@AppPlatform@@UEAAXXZ
     */
    MCVAPI void createUserInput();
    /**
     * @hash   -1624633709
     * @symbol ?createWebview@AppPlatform@@UEBA?AV?$shared_ptr@VWebviewInterface@@@std@@$$QEAVPlatformArguments@Webview@@@Z
     */
    MCVAPI class std::shared_ptr<class WebviewInterface> createWebview(class Webview::PlatformArguments &&) const;
    /**
     * @hash   -1671444640
     * @symbol ?doesLANRequireMultiplayerRestrictions@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool doesLANRequireMultiplayerRestrictions() const;
    /**
     * @hash   -404561915
     * @symbol ?exitVRMode@AppPlatform@@UEAAXV?$function@$$A6AXXZ@std@@@Z
     */
    MCVAPI void exitVRMode(class std::function<void (void)>);
    /**
     * @hash   1557466566
     * @symbol ?finish@AppPlatform@@UEAAXXZ
     */
    MCVAPI void finish();
    /**
     * @hash   -1644203070
     * @symbol ?getARVRPlatform@AppPlatform@@UEBA?AW4ARVRPlatform@@XZ
     */
    MCVAPI enum ARVRPlatform getARVRPlatform() const;
    /**
     * @hash   1596324086
     * @symbol ?getAndroidScopedStorageInfo@AppPlatform@@UEBAAEBUAndroidScopedStorageInfo@1@XZ
     */
    MCVAPI struct AppPlatform::AndroidScopedStorageInfo const & getAndroidScopedStorageInfo() const;
    /**
     * @hash   -126960625
     * @symbol ?getAppLifecycleContext@AppPlatform@@UEAAAEAVAppLifecycleContext@@XZ
     */
    MCVAPI class AppLifecycleContext & getAppLifecycleContext();
    /**
     * @hash   1239206224
     * @symbol ?getAssetFileFullPath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
     */
    MCVAPI class Core::PathBuffer<std::string> getAssetFileFullPath(class Core::Path const &);
    /**
     * @hash   -781737495
     * @symbol ?getBroadcastAddresses@AppPlatform@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCVAPI std::vector<std::string> getBroadcastAddresses();
    /**
     * @hash   -1498822937
     * @symbol ?getBroadcastingMultiplayerServiceIds@AppPlatform@@UEBA?AV?$vector@W4MultiplayerServiceIdentifier@Social@@V?$allocator@W4MultiplayerServiceIdentifier@Social@@@std@@@std@@_N0@Z
     */
    MCVAPI std::vector<enum Social::MultiplayerServiceIdentifier> getBroadcastingMultiplayerServiceIds(bool, bool) const;
    /**
     * @hash   1373250412
     * @symbol ?getBuildPlatform@AppPlatform@@UEBA?AW4BuildPlatform@@XZ
     */
    MCVAPI enum BuildPlatform getBuildPlatform() const;
    /**
     * @hash   -1037309585
     * @symbol ?getCacheStoragePath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getCacheStoragePath();
    /**
     * @hash   -725706897
     * @symbol ?getCatalogSearchScratchPath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getCatalogSearchScratchPath();
    /**
     * @hash   -749630293
     * @symbol ?getClientUpdateUrl@AppPlatform@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getClientUpdateUrl() const;
    /**
     * @hash   2130474183
     * @symbol ?getDefaultInputMode@AppPlatform@@UEBA?AW4InputMode@@XZ
     */
    MCVAPI enum InputMode getDefaultInputMode() const;
    /**
     * @hash   899272072
     * @symbol ?getDefaultNetworkMaxPlayers@AppPlatform@@UEBAHXZ
     */
    MCVAPI int getDefaultNetworkMaxPlayers() const;
    /**
     * @hash   1222122188
     * @symbol ?getDefaultSafeZoneScaleX@AppPlatform@@UEBAMXZ
     */
    MCVAPI float getDefaultSafeZoneScaleX() const;
    /**
     * @hash   429753901
     * @symbol ?getDefaultSafeZoneScaleY@AppPlatform@@UEBAMXZ
     */
    MCVAPI float getDefaultSafeZoneScaleY() const;
    /**
     * @hash   -1210326510
     * @symbol ?getDefaultScreenPositionX@AppPlatform@@UEBAMXZ
     */
    MCVAPI float getDefaultScreenPositionX() const;
    /**
     * @hash   -2002694797
     * @symbol ?getDefaultScreenPositionY@AppPlatform@@UEBAMXZ
     */
    MCVAPI float getDefaultScreenPositionY() const;
    /**
     * @hash   -759005886
     * @symbol ?getDeviceSunsetTier@AppPlatform@@UEBA?AW4DeviceSunsetTier@@XZ
     */
    MCVAPI enum DeviceSunsetTier getDeviceSunsetTier() const;
    /**
     * @hash   1961780171
     * @symbol ?getDisplayHeight@AppPlatform@@UEAAHXZ
     */
    MCVAPI int getDisplayHeight();
    /**
     * @hash   -1726246142
     * @symbol ?getDisplayWidth@AppPlatform@@UEAAHXZ
     */
    MCVAPI int getDisplayWidth();
    /**
     * @hash   1929314622
     * @symbol ?getDpi@AppPlatform@@UEBAHXZ
     */
    MCVAPI int getDpi() const;
    /**
     * @hash   -607138706
     * @symbol ?getEdition@AppPlatform@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getEdition() const;
    /**
     * @hash   475053991
     * @symbol ?getExtraLevelSaveDataIconParams@AppPlatform@@UEBA?AV?$optional@UScreenshotOptions@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCVAPI class std::optional<struct ScreenshotOptions> getExtraLevelSaveDataIconParams(std::string const &) const;
    /**
     * @hash   -1257673718
     * @symbol ?getFeedbackBugsLink@AppPlatform@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getFeedbackBugsLink() const;
    /**
     * @hash   956567884
     * @symbol ?getFeedbackHelpLink@AppPlatform@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getFeedbackHelpLink() const;
    /**
     * @hash   1692158432
     * @symbol ?getFileAccess@AppPlatform@@UEAA?AV?$not_null@V?$NonOwnerPointer@VIFileAccess@@@Bedrock@@@gsl@@W4ResourceFileSystem@@@Z
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class IFileAccess>> getFileAccess(enum ResourceFileSystem);
    /**
     * @hash   -1910026104
     * @symbol ?getFocusState@AppPlatform@@UEAA?AW4AppFocusState@@XZ
     */
    MCVAPI enum AppFocusState getFocusState();
    /**
     * @hash   -818657382
     * @symbol ?getHighPerformanceThreadsCount@AppPlatform@@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getHighPerformanceThreadsCount() const;
    /**
     * @hash   -1925898313
     * @symbol ?getIPAddresses@AppPlatform@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCVAPI std::vector<std::string> getIPAddresses();
    /**
     * @hash   -536489010
     * @symbol ?getInternalPackStoragePath@AppPlatform@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getInternalPackStoragePath() const;
    /**
     * @hash   -493943003
     * @symbol ?getLevelInfoCachePath@AppPlatform@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getLevelInfoCachePath() const;
    /**
     * @hash   -1038841545
     * @symbol ?getLevelSaveInterval@AppPlatform@@UEBA?AV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@XZ
     */
    MCVAPI class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> getLevelSaveInterval() const;
    /**
     * @hash   2048132664
     * @symbol ?getLoggingPath@AppPlatform@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getLoggingPath() const;
    /**
     * @hash   1373479537
     * @symbol ?getLowPhysicalMemoryThreshold@AppPlatform@@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getLowPhysicalMemoryThreshold() const;
    /**
     * @hash   -916943011
     * @symbol ?getMaxSimRadiusInChunks@AppPlatform@@UEBAHXZ
     */
    MCVAPI int getMaxSimRadiusInChunks() const;
    /**
     * @hash   -915711527
     * @symbol ?getMaxSimultaneousDownloads@AppPlatform@@UEBAHXZ
     */
    MCVAPI int getMaxSimultaneousDownloads() const;
    /**
     * @hash   -1079121822
     * @symbol ?getMaxSimultaneousServiceRequests@AppPlatform@@UEBAIXZ
     */
    MCVAPI unsigned int getMaxSimultaneousServiceRequests() const;
    /**
     * @hash   728141813
     * @symbol ?getMaximumUsedMemory@AppPlatform@@UEAA_KXZ
     */
    MCVAPI unsigned __int64 getMaximumUsedMemory();
    /**
     * @hash   1622619027
     * @symbol ?getModalErrorMessageProc@AppPlatform@@UEAAP6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@ZXZ
     */
    MCVAPI void ( *)(std::string const &, std::string const &) getModalErrorMessageProc();
    /**
     * @hash   208800277
     * @symbol ?getModelName@AppPlatform@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getModelName();
    /**
     * @hash   588731756
     * @symbol ?getMultiplayerServiceListToRegister@AppPlatform@@UEBA?AV?$vector@V?$shared_ptr@VMultiplayerService@Social@@@std@@V?$allocator@V?$shared_ptr@VMultiplayerService@Social@@@std@@@2@@std@@XZ
     */
    MCVAPI std::vector<class std::shared_ptr<class Social::MultiplayerService>> getMultiplayerServiceListToRegister() const;
    /**
     * @hash   -1594597301
     * @symbol ?getNumberOfParticleFramesToInterpolate@AppPlatform@@UEBAHXZ
     */
    MCVAPI int getNumberOfParticleFramesToInterpolate() const;
    /**
     * @hash   -242378420
     * @symbol ?getOSVersion@AppPlatform@@UEBA?AW4OsVersion@@XZ
     */
    MCVAPI enum OsVersion getOSVersion() const;
    /**
     * @hash   58065391
     * @symbol ?getOnDiskPackScratchPath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getOnDiskPackScratchPath();
    /**
     * @hash   -229101048
     * @symbol ?getOnDiskScratchPath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getOnDiskScratchPath();
    /**
     * @hash   1941516693
     * @symbol ?getOperationMode@AppPlatform@@UEBA?AV?$optional@W4OperationMode@@@std@@XZ
     */
    MCVAPI class std::optional<enum OperationMode> getOperationMode() const;
    /**
     * @hash   -2429444
     * @symbol ?getOptimalLDBSize@AppPlatform@@UEAA_KXZ
     */
    MCVAPI unsigned __int64 getOptimalLDBSize();
    /**
     * @hash   1035292513
     * @symbol ?getOptionsSaveInterval@AppPlatform@@UEBA?AV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@XZ
     */
    MCVAPI class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> getOptionsSaveInterval() const;
    /**
     * @hash   1937207429
     * @symbol ?getPackageFamilyName@AppPlatform@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getPackageFamilyName() const;
    /**
     * @hash   -1355250199
     * @symbol ?getPackagedShaderCachePath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath();
    /**
     * @hash   -1420900159
     * @symbol ?getPixelsPerMillimeter@AppPlatform@@UEAAMXZ
     */
    MCVAPI float getPixelsPerMillimeter();
    /**
     * @hash   1439600717
     * @symbol ?getPlatformDpi@AppPlatform@@EEBAHXZ
     */
    MCVAPI int getPlatformDpi() const;
    /**
     * @hash   -682526101
     * @symbol ?getPlatformStringVar@AppPlatform@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCVAPI std::string getPlatformStringVar(int);
    /**
     * @hash   -1354434437
     * @symbol ?getPlatformTTSEnabled@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSEnabled() const;
    /**
     * @hash   -1478207062
     * @symbol ?getPlatformTTSExists@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSExists() const;
    /**
     * @hash   -494136398
     * @symbol ?getPlatformType@AppPlatform@@UEBA?AW4PlatformType@@XZ
     */
    MCVAPI enum PlatformType getPlatformType() const;
    /**
     * @hash   -446249881
     * @symbol ?getPlatformUIScalingRules@AppPlatform@@EEBA?AW4UIScalingRules@@XZ
     */
    MCVAPI enum UIScalingRules getPlatformUIScalingRules() const;
    /**
     * @hash   -2043346410
     * @symbol ?getRenderSurfaceParameters@AppPlatform@@UEBA?AV?$variant@PEAUHWND__@@Umonostate@std@@@std@@XZ
     */
    MCVAPI class std::variant<struct HWND__*, struct std::monostate> getRenderSurfaceParameters() const;
    /**
     * @hash   1918818800
     * @symbol ?getScreenHeight@AppPlatform@@UEBAHXZ
     */
    MCVAPI int getScreenHeight() const;
    /**
     * @hash   104328635
     * @symbol ?getScreenWidth@AppPlatform@@UEBAHXZ
     */
    MCVAPI int getScreenWidth() const;
    /**
     * @hash   -1530347894
     * @symbol ?getSecureStorage@AppPlatform@@UEAA?AV?$unique_ptr@VSecureStorage@@U?$default_delete@VSecureStorage@@@std@@@std@@XZ
     */
    MCVAPI std::unique_ptr<class SecureStorage> getSecureStorage();
    /**
     * @hash   137887482
     * @symbol ?getSecureStorageKey@AppPlatform@@UEAA?AVSecureStorageKey@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI class SecureStorageKey getSecureStorageKey(std::string const &);
    /**
     * @hash   -47181687
     * @symbol ?getSettingsPath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getSettingsPath();
    /**
     * @hash   -974323369
     * @symbol ?getShaderCachePath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getShaderCachePath();
    /**
     * @hash   1399070308
     * @symbol ?getStoreNetworkFailureTimeout@AppPlatform@@UEBAMXZ
     */
    MCVAPI float getStoreNetworkFailureTimeout() const;
    /**
     * @hash   1459902312
     * @symbol ?getThirdPartyPackUUID@AppPlatform@@UEBAAEBVUUID@mce@@XZ
     */
    MCVAPI class mce::UUID const & getThirdPartyPackUUID() const;
    /**
     * @hash   -1482027480
     * @symbol ?getTotalHardwareThreadsCount@AppPlatform@@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getTotalHardwareThreadsCount() const;
    /**
     * @hash   2091142498
     * @symbol ?getUIScalingRules@AppPlatform@@UEBA?AW4UIScalingRules@@XZ
     */
    MCVAPI enum UIScalingRules getUIScalingRules() const;
    /**
     * @hash   -1454356197
     * @symbol ?getUserInput@AppPlatform@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCVAPI std::vector<std::string> getUserInput();
    /**
     * @hash   -1509160445
     * @symbol ?getUserInputStatus@AppPlatform@@UEAAHXZ
     */
    MCVAPI int getUserInputStatus();
    /**
     * @hash   -704217125
     * @symbol ?getUserStorageRootPath@AppPlatform@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getUserStorageRootPath() const;
    /**
     * @hash   -696672686
     * @symbol ?getUserdataPathForLevels@AppPlatform@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getUserdataPathForLevels() const;
    /**
     * @hash   -826138750
     * @symbol ?getVRControllerType@AppPlatform@@UEBA?AW4VRControllerType@@XZ
     */
    MCVAPI enum VRControllerType getVRControllerType() const;
    /**
     * @hash   2127256791
     * @symbol ?goToExternalConsumablesStoreListing@AppPlatform@@UEBAXXZ
     */
    MCVAPI void goToExternalConsumablesStoreListing() const;
    /**
     * @hash   1927959879
     * @symbol ?handlePlatformSpecificCommerceError@AppPlatform@@UEAAXI@Z
     */
    MCVAPI void handlePlatformSpecificCommerceError(unsigned int);
    /**
     * @hash   315912478
     * @symbol ?hasAssetFile@AppPlatform@@UEAA_NAEBVPath@Core@@@Z
     */
    MCVAPI bool hasAssetFile(class Core::Path const &);
    /**
     * @hash   1435564871
     * @symbol ?hasBuyButtonWhenInvalidLicense@AppPlatform@@UEAA_NXZ
     */
    MCVAPI bool hasBuyButtonWhenInvalidLicense();
    /**
     * @hash   -522141826
     * @symbol ?hasFastAlphaTest@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool hasFastAlphaTest() const;
    /**
     * @hash   1025928126
     * @symbol ?hasIDEProfiler@AppPlatform@@UEAA_NXZ
     */
    MCVAPI bool hasIDEProfiler();
    /**
     * @hash   1455761908
     * @symbol ?hasJournalingFilesystem@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool hasJournalingFilesystem() const;
    /**
     * @hash   -1308126321
     * @symbol ?hasPlatformSpecificInvites@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool hasPlatformSpecificInvites() const;
    /**
     * @hash   -284322993
     * @symbol ?hasSeparatedStorageAreasForContentAcquisition@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool hasSeparatedStorageAreasForContentAcquisition() const;
    /**
     * @hash   -344486904
     * @symbol ?hideSplashScreen@AppPlatform@@UEAAXXZ
     */
    MCVAPI void hideSplashScreen();
    /**
     * @hash   -226166896
     * @symbol ?importAsFlatFile@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool importAsFlatFile() const;
    /**
     * @hash   118508928
     * @symbol ?initAppPlatformNetworkSettings@AppPlatform@@UEAAXXZ
     */
    MCVAPI void initAppPlatformNetworkSettings();
    /**
     * @hash   1141318259
     * @symbol ?initialize@AppPlatform@@UEAAXXZ
     */
    MCVAPI void initialize();
    /**
     * @hash   548774835
     * @symbol ?initializeGameStreaming@AppPlatform@@UEAAXXZ
     */
    MCVAPI void initializeGameStreaming();
    /**
     * @hash   -2020702475
     * @symbol ?initializeScreenDependentResources@AppPlatform@@UEAAXXZ
     */
    MCVAPI void initializeScreenDependentResources();
    /**
     * @hash   293330759
     * @symbol ?isAutoCompactionEnabled@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isAutoCompactionEnabled() const;
    /**
     * @hash   1320046341
     * @symbol ?isCentennial@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isCentennial() const;
    /**
     * @hash   -1048420635
     * @symbol ?isContentAutoUpdateAllowed@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isContentAutoUpdateAllowed() const;
    /**
     * @hash   -1899873031
     * @symbol ?isCrossPlatformToggleVisible@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isCrossPlatformToggleVisible() const;
    /**
     * @hash   -1904783040
     * @symbol ?isDisplayInitialized@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isDisplayInitialized() const;
    /**
     * @hash   -1296094397
     * @symbol ?isDownloadAndImportBlocking@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isDownloadAndImportBlocking() const;
    /**
     * @hash   -557226987
     * @symbol ?isDownloadBuffered@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isDownloadBuffered() const;
    /**
     * @hash   1555100646
     * @symbol ?isFireTV@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isFireTV() const;
    /**
     * @hash   358639913
     * @symbol ?isJoinableViaExternalServers@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isJoinableViaExternalServers() const;
    /**
     * @hash   -1115957891
     * @symbol ?isLANAllowed@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isLANAllowed() const;
    /**
     * @hash   2099316357
     * @symbol ?isLowMemoryDevice@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isLowMemoryDevice() const;
    /**
     * @hash   -865020308
     * @symbol ?isLowPhysicalMemoryDevice@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isLowPhysicalMemoryDevice() const;
    /**
     * @hash   1724532264
     * @symbol ?isNetworkAllowed@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isNetworkAllowed() const;
    /**
     * @hash   1873815753
     * @symbol ?isNetworkAvailable@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isNetworkAvailable() const;
    /**
     * @hash   894555865
     * @symbol ?isNetworkEnabled@AppPlatform@@UEBA_N_N@Z
     */
    MCVAPI bool isNetworkEnabled(bool) const;
    /**
     * @hash   -1129049558
     * @symbol ?isNetworkThrottled@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isNetworkThrottled() const;
    /**
     * @hash   738842413
     * @symbol ?isOnWifiConnectionTelemetryValue@AppPlatform@@UEAA?AV?$optional@_N@std@@XZ
     */
    MCVAPI class std::optional<bool> isOnWifiConnectionTelemetryValue();
    /**
     * @hash   742692311
     * @symbol ?isQuitCapable@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isQuitCapable() const;
    /**
     * @hash   -1759866750
     * @symbol ?isRatingsPromptSupported@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isRatingsPromptSupported() const;
    /**
     * @hash   -30339977
     * @symbol ?isRealmsEnabled@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isRealmsEnabled() const;
    /**
     * @hash   1041995678
     * @symbol ?isTelemetryAllowed@AppPlatform@@UEAA_NXZ
     */
    MCVAPI bool isTelemetryAllowed();
    /**
     * @hash   830380280
     * @symbol ?isTrialWorldsTransferToFullGameAllowed@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isTrialWorldsTransferToFullGameAllowed() const;
    /**
     * @hash   322248195
     * @symbol ?isWebviewSupported@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isWebviewSupported() const;
    /**
     * @hash   -681748433
     * @symbol ?isWin10Arm@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool isWin10Arm() const;
    /**
     * @hash   1094442799
     * @symbol ?launchLegacyVersion@AppPlatform@@UEAAXXZ
     */
    MCVAPI void launchLegacyVersion();
    /**
     * @hash   -1375513862
     * @symbol ?launchRatingsPrompt@AppPlatform@@UEAAXXZ
     */
    MCVAPI void launchRatingsPrompt();
    /**
     * @hash   696141897
     * @symbol ?launchSettings@AppPlatform@@UEAAXXZ
     */
    MCVAPI void launchSettings();
    /**
     * @hash   -152054944
     * @symbol ?launchUri@AppPlatform@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void launchUri(std::string const &);
    /**
     * @hash   -1404778721
     * @symbol ?listAssetFilesIn@AppPlatform@@UEBA?AV?$set@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@U?$less@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@4@@std@@AEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCVAPI class std::set<class Core::PathBuffer<std::string>, struct std::less<class Core::PathBuffer<std::string>>, class std::allocator<class Core::PathBuffer<std::string>>> listAssetFilesIn(class Core::Path const &, std::string const &) const;
    /**
     * @hash   1812568832
     * @symbol ?maxFileDataRequestConcurrency@AppPlatform@@UEBAIXZ
     */
    MCVAPI unsigned int maxFileDataRequestConcurrency() const;
    /**
     * @hash   -897699805
     * @symbol ?minimizeBackgroundDownloads@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool minimizeBackgroundDownloads() const;
    /**
     * @hash   1863926999
     * @symbol ?multiplayerRequiresPremiumAccess@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool multiplayerRequiresPremiumAccess() const;
    /**
     * @hash   -39064036
     * @symbol ?multiplayerRequiresUGCEnabled@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool multiplayerRequiresUGCEnabled() const;
    /**
     * @hash   -394422174
     * @symbol ?notifyControllerConnectionStateChange@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool notifyControllerConnectionStateChange() const;
    /**
     * @hash   554936246
     * @symbol ?onPrimaryUserNetworkReady@AppPlatform@@UEAAXXZ
     */
    MCVAPI void onPrimaryUserNetworkReady();
    /**
     * @hash   -889399941
     * @symbol ?platformRequiresControllerApplet@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool platformRequiresControllerApplet() const;
    /**
     * @hash   -1469325368
     * @symbol ?readAssetFile@AppPlatform@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@@Z
     */
    MCVAPI std::string readAssetFile(class Core::Path const &);
    /**
     * @hash   -1702169807
     * @symbol ?registerExperimentsActiveCrashDump@AppPlatform@@UEBAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCVAPI void registerExperimentsActiveCrashDump(std::vector<std::string> const &) const;
    /**
     * @hash   1848198229
     * @symbol ?registerFileForCollectionWithCrashDump@AppPlatform@@UEAAXAEBVPath@Core@@@Z
     */
    MCVAPI void registerFileForCollectionWithCrashDump(class Core::Path const &);
    /**
     * @hash   1777549094
     * @symbol ?reloadRenderResourcesOnResume@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool reloadRenderResourcesOnResume() const;
    /**
     * @hash   -23170843
     * @symbol ?removeListener@AppPlatform@@UEAAXPEAVAppPlatformListener@@@Z
     */
    MCVAPI void removeListener(class AppPlatformListener *);
    /**
     * @hash   -1358607059
     * @symbol ?requireControllerAtStartup@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool requireControllerAtStartup() const;
    /**
     * @hash   -372665654
     * @symbol ?requiresAutoSaveIconExplanationPopup@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool requiresAutoSaveIconExplanationPopup() const;
    /**
     * @hash   1546105903
     * @symbol ?requiresLiveGoldForMultiplayer@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool requiresLiveGoldForMultiplayer() const;
    /**
     * @hash   -1645937410
     * @symbol ?requiresPatchNoticePopup@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool requiresPatchNoticePopup() const;
    /**
     * @hash   343658306
     * @symbol ?requiresXboxLiveSigninToPlay@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool requiresXboxLiveSigninToPlay() const;
    /**
     * @hash   1798169127
     * @symbol ?restartApp@AppPlatform@@UEAAX_N@Z
     */
    MCVAPI void restartApp(bool);
    /**
     * @hash   425056756
     * @symbol ?restartRequested@AppPlatform@@UEAA_NXZ
     */
    MCVAPI bool restartRequested();
    /**
     * @hash   2024857423
     * @symbol ?setARVRPlatform@AppPlatform@@UEAAXW4ARVRPlatform@@@Z
     */
    MCVAPI void setARVRPlatform(enum ARVRPlatform);
    /**
     * @hash   -570687983
     * @symbol ?setDpi@AppPlatform@@UEAAXH@Z
     */
    MCVAPI void setDpi(int);
    /**
     * @hash   1849554675
     * @symbol ?setFullscreenMode@AppPlatform@@UEAAXW4FullscreenMode@@@Z
     */
    MCVAPI void setFullscreenMode(enum FullscreenMode);
    /**
     * @hash   1485659293
     * @symbol ?setNetworkAllowed@AppPlatform@@UEAAX_N@Z
     */
    MCVAPI void setNetworkAllowed(bool);
    /**
     * @hash   -1308263326
     * @symbol ?setScreenSize@AppPlatform@@UEAAXHH@Z
     */
    MCVAPI void setScreenSize(int, int);
    /**
     * @hash   -1078329718
     * @symbol ?setSecureStorageKey@AppPlatform@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSecureStorageKey@@@Z
     */
    MCVAPI void setSecureStorageKey(std::string const &, class SecureStorageKey const &);
    /**
     * @hash   1099927373
     * @symbol ?setSleepEnabled@AppPlatform@@UEAAX_N@Z
     */
    MCVAPI void setSleepEnabled(bool);
    /**
     * @hash   1074911362
     * @symbol ?setThreadsFrozen@AppPlatform@@UEAAX_N@Z
     */
    MCVAPI void setThreadsFrozen(bool);
    /**
     * @hash   -1430613529
     * @symbol ?setUIScalingRules@AppPlatform@@UEAAXW4UIScalingRules@@@Z
     */
    MCVAPI void setUIScalingRules(enum UIScalingRules);
    /**
     * @hash   -594207781
     * @symbol ?setVRControllerType@AppPlatform@@UEAAXW4VRControllerType@@@Z
     */
    MCVAPI void setVRControllerType(enum VRControllerType);
    /**
     * @hash   2072789606
     * @symbol ?setWindowSize@AppPlatform@@UEAAXHH@Z
     */
    MCVAPI void setWindowSize(int, int);
    /**
     * @hash   -2020332198
     * @symbol ?setWindowText@AppPlatform@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void setWindowText(std::string const &);
    /**
     * @hash   -1227104660
     * @symbol ?shouldPauseDownloadsWhenEnterGame@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool shouldPauseDownloadsWhenEnterGame() const;
    /**
     * @hash   378174622
     * @symbol ?shouldRemoveGraphicsDeviceOnAppTermination@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool shouldRemoveGraphicsDeviceOnAppTermination() const;
    /**
     * @hash   540226839
     * @symbol ?showDialog@AppPlatform@@UEAAXH@Z
     */
    MCVAPI void showDialog(int);
    /**
     * @hash   85567215
     * @symbol ?showPlatformEmptyStoreDialog@AppPlatform@@UEAAX$$QEAV?$function@$$A6AX_N@Z@std@@@Z
     */
    MCVAPI void showPlatformEmptyStoreDialog(class std::function<void (bool)> &&);
    /**
     * @hash   593815535
     * @symbol ?showPlatformStoreIcon@AppPlatform@@UEAAX_N@Z
     */
    MCVAPI void showPlatformStoreIcon(bool);
    /**
     * @hash   981683190
     * @symbol ?supportsAutoSaveOnDBCompaction@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool supportsAutoSaveOnDBCompaction() const;
    /**
     * @hash   -847472548
     * @symbol ?supportsClientUpdate@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool supportsClientUpdate() const;
    /**
     * @hash   106283900
     * @symbol ?supportsDayOneExperience@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool supportsDayOneExperience() const;
    /**
     * @hash   492432487
     * @symbol ?supportsFliteTTS@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool supportsFliteTTS() const;
    /**
     * @hash   1964024073
     * @symbol ?supportsInPackageRecursion@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool supportsInPackageRecursion() const;
    /**
     * @hash   607487880
     * @symbol ?supportsLaunchingLegacyVersion@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool supportsLaunchingLegacyVersion() const;
    /**
     * @hash   -53894191
     * @symbol ?supportsLegacySinglePremiumCacheDirectory@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool supportsLegacySinglePremiumCacheDirectory() const;
    /**
     * @hash   462895514
     * @symbol ?supportsVRModeSwap@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool supportsVRModeSwap() const;
    /**
     * @hash   -268815438
     * @symbol ?supportsVibration@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool supportsVibration() const;
    /**
     * @hash   1517439573
     * @symbol ?supportsWorldShare@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool supportsWorldShare() const;
    /**
     * @hash   799838443
     * @symbol ?supportsXboxLiveAchievements@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool supportsXboxLiveAchievements() const;
    /**
     * @hash   1157553399
     * @symbol ?teardown@AppPlatform@@UEAAXXZ
     */
    MCVAPI void teardown();
    /**
     * @hash   939093249
     * @symbol ?trackPurchaseEvent@AppPlatform@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0000000@Z
     */
    MCVAPI void trackPurchaseEvent(std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   78378530
     * @symbol ?tryEnterVRMode@AppPlatform@@UEAAX_NV?$function@$$A6AX_N@Z@std@@@Z
     */
    MCVAPI void tryEnterVRMode(bool, class std::function<void (bool)>);
    /**
     * @hash   -1170100073
     * @symbol ?updateLocalization@AppPlatform@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void updateLocalization(std::string const &);
    /**
     * @hash   1565389751
     * @symbol ?updateTextBoxText@AppPlatform@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void updateTextBoxText(std::string const &);
    /**
     * @hash   -1505871915
     * @symbol ?useAppPlatformForTelemetryIPAddress@AppPlatform@@UEAA_NXZ
     */
    MCVAPI bool useAppPlatformForTelemetryIPAddress();
    /**
     * @hash   1274639728
     * @symbol ?useNativeStoreForRealmsPurchase@AppPlatform@@UEAA_NXZ
     */
    MCVAPI bool useNativeStoreForRealmsPurchase();
    /**
     * @hash   526295284
     * @symbol ?usePlatformProfilePicturesOnly@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool usePlatformProfilePicturesOnly() const;
    /**
     * @hash   -1593003866
     * @symbol ?useXboxControlHelpers@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool useXboxControlHelpers() const;
    /**
     * @hash   1510523459
     * @symbol ?usesAsyncOptionSaving@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool usesAsyncOptionSaving() const;
    /**
     * @hash   -1751051969
     * @symbol ?usesHDRBrightness@AppPlatform@@UEBA_NXZ
     */
    MCVAPI bool usesHDRBrightness() const;
    /**
     * @hash   -886594035
     * @symbol ?vibrate@AppPlatform@@UEAAXH@Z
     */
    MCVAPI void vibrate(int);
    /**
     * @hash   -1915518696
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AppPlatform();
#endif
    /**
     * @hash   -1695688055
     * @symbol ??0AppPlatform@@QEAA@_N@Z
     */
    MCAPI AppPlatform(bool);
    /**
     * @hash   -744190479
     * @symbol ?_fireAppTerminated@AppPlatform@@QEAAXXZ
     */
    MCAPI void _fireAppTerminated();
    /**
     * @hash   -1332850260
     * @symbol ?accessPlatformRuntimeInformation_Shim@AppPlatform@@QEAAAEAV?$unique_ptr@UPlatformRuntimeInfo@Bedrock@@U?$default_delete@UPlatformRuntimeInfo@Bedrock@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo> & accessPlatformRuntimeInformation_Shim();
    /**
     * @hash   -725279583
     * @symbol ?getCurrentStoragePath@AppPlatform@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getCurrentStoragePath() const;
    /**
     * @hash   1556303743
     * @symbol ?getInternalStoragePath@AppPlatform@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getInternalStoragePath() const;
    /**
     * @hash   1348463942
     * @symbol ?getPlatformRuntimeInformation@AppPlatform@@QEBAAEBV?$unique_ptr@UPlatformRuntimeInfo@Bedrock@@U?$default_delete@UPlatformRuntimeInfo@Bedrock@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo> const & getPlatformRuntimeInformation() const;
    /**
     * @hash   153235574
     * @symbol ?getProxyResolver@AppPlatform@@QEAA?AV?$not_null@V?$NonOwnerPointer@VIProxyResolver@Http@Bedrock@@@Bedrock@@@gsl@@XZ
     */
    MCAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class Bedrock::Http::IProxyResolver>> getProxyResolver();
    /**
     * @hash   1752797673
     * @symbol ?getScratchPath@AppPlatform@@QEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getScratchPath();
    /**
     * @hash   66741591
     * @symbol ?getUserdataPath@AppPlatform@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getUserdataPath() const;
    /**
     * @hash   1698260358
     * @symbol ?isEduMode@AppPlatform@@QEBA_NXZ
     */
    MCAPI bool isEduMode() const;
    /**
     * @hash   1768091606
     * @symbol ?isTerminating@AppPlatform@@QEBA_NXZ
     */
    MCAPI bool isTerminating() const;
    /**
     * @hash   1662620285
     * @symbol ?notifyUserStorageInitialized@AppPlatform@@QEAAXXZ
     */
    MCAPI void notifyUserStorageInitialized();
    /**
     * @hash   -1277722957
     * @symbol ?HOME_PATH@AppPlatform@@2V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const HOME_PATH;
    /**
     * @hash   1018234901
     * @symbol ?LOG_PATH@AppPlatform@@2V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const LOG_PATH;
    /**
     * @hash   -1088614461
     * @symbol ?SETTINGS_PATH@AppPlatform@@2V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const SETTINGS_PATH;

//protected:

//private:
    /**
     * @hash   28953414
     * @symbol ?_initializeLoadProfiler@AppPlatform@@AEAAXXZ
     */
    MCAPI void _initializeLoadProfiler();

protected:
    /**
     * @hash   144736006
     * @symbol ?SHADERCACHE_PATH@AppPlatform@@1V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const SHADERCACHE_PATH;

private:
    /**
     * @hash   -2031994747
     * @symbol ?mIsInitialized@AppPlatform@@0_NA
     */
    MCAPI static bool mIsInitialized;

};