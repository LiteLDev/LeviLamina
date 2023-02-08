/**
 * @file  AppPlatform.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   821274269
     * @symbol  ?_createProxyResolver\@AppPlatform\@\@EEAA?AV?$unique_ptr\@VIProxyResolver\@Http\@Bedrock\@\@U?$default_delete\@VIProxyResolver\@Http\@Bedrock\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class Bedrock::Http::IProxyResolver> _createProxyResolver();
    /**
     * @hash   475868096
     * @symbol  ?_disableCPUBoost\@AppPlatform\@\@MEAAXXZ
     */
    MCVAPI void _disableCPUBoost();
    /**
     * @hash   1968292690
     * @symbol  ?_initializeFileStorageAreas\@AppPlatform\@\@MEAAXXZ
     */
    MCVAPI void _initializeFileStorageAreas();
    /**
     * @hash   -1812098477
     * @symbol  ?_onInitialize\@AppPlatform\@\@EEAAXXZ
     */
    MCVAPI void _onInitialize();
    /**
     * @hash   189926343
     * @symbol  ?_onTeardown\@AppPlatform\@\@EEAAXXZ
     */
    MCVAPI void _onTeardown();
    /**
     * @hash   -1914730186
     * @symbol  ?_teardownFileStorageAreas\@AppPlatform\@\@MEAAXXZ
     */
    MCVAPI void _teardownFileStorageAreas();
    /**
     * @hash   -1179576520
     * @symbol  ?_tryEnableCPUBoost\@AppPlatform\@\@MEAA_NXZ
     */
    MCVAPI bool _tryEnableCPUBoost();
    /**
     * @hash   52453258
     * @symbol  ?addListener\@AppPlatform\@\@UEAAXPEAVAppPlatformListener\@\@M\@Z
     */
    MCVAPI void addListener(class AppPlatformListener *, float);
    /**
     * @hash   -668130689
     * @symbol  ?allowBetaXblSignIn\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool allowBetaXblSignIn() const;
    /**
     * @hash   667628440
     * @symbol  ?allowContentLogWriteToDisk\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool allowContentLogWriteToDisk();
    /**
     * @hash   -107174754
     * @symbol  ?allowsResourcePackDevelopment\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool allowsResourcePackDevelopment() const;
    /**
     * @hash   -1596414326
     * @symbol  ?alwaysUseZippedPacksForDlc\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool alwaysUseZippedPacksForDlc() const;
    /**
     * @hash   577879353
     * @symbol  ?areThreadsFrozen\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool areThreadsFrozen() const;
    /**
     * @hash   -8960277
     * @symbol  ?buyGame\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void buyGame();
    /**
     * @hash   -165412437
     * @symbol  ?calculateIfLowMemoryDevice\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void calculateIfLowMemoryDevice();
    /**
     * @hash   102053438
     * @symbol  ?canLaunchUri\@AppPlatform\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool canLaunchUri(std::string const &);
    /**
     * @hash   1119590444
     * @symbol  ?canManageLegacyData\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool canManageLegacyData() const;
    /**
     * @hash   -1645571468
     * @symbol  ?canSwapVRMode\@AppPlatform\@\@UEBA_N_N\@Z
     */
    MCVAPI bool canSwapVRMode(bool) const;
    /**
     * @hash   1969898689
     * @symbol  ?checkLicense\@AppPlatform\@\@UEAAHXZ
     */
    MCVAPI int checkLicense();
    /**
     * @hash   340081192
     * @symbol  ?collectGraphicsHardwareDetails\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void collectGraphicsHardwareDetails();
    /**
     * @hash   -1817447133
     * @symbol  ?compareAppReceiptToLocalReceipt\@AppPlatform\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool compareAppReceiptToLocalReceipt(std::string const &);
    /**
     * @hash   -503187092
     * @symbol  ?copyAssetFile\@AppPlatform\@\@UEAA_NAEBVPath\@Core\@\@0\@Z
     */
    MCVAPI bool copyAssetFile(class Core::Path const &, class Core::Path const &);
    /**
     * @hash   1717569591
     * @symbol  ?copyImportFileToTempFolder\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const &);
    /**
     * @hash   284770133
     * @symbol  ?createLoggingStorageArea\@AppPlatform\@\@UEAA?AV?$shared_ptr\@VFileStorageArea\@Core\@\@\@std\@\@W4FileAccessType\@Core\@\@AEBVPath\@5\@\@Z
     */
    MCVAPI class std::shared_ptr<class Core::FileStorageArea> createLoggingStorageArea(enum class Core::FileAccessType, class Core::Path const &);
    /**
     * @hash   -1628462391
     * @symbol  ?createUserInput\@AppPlatform\@\@UEAAXH\@Z
     */
    MCVAPI void createUserInput(int);
    /**
     * @hash   -742161002
     * @symbol  ?createUserInput\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void createUserInput();
    /**
     * @hash   -1353570205
     * @symbol  ?createWebview\@AppPlatform\@\@UEBA?AV?$shared_ptr\@VWebviewInterface\@\@\@std\@\@$$QEAVPlatformArguments\@Webview\@\@\@Z
     */
    MCVAPI class std::shared_ptr<class WebviewInterface> createWebview(class Webview::PlatformArguments &&) const;
    /**
     * @hash   -1570824096
     * @symbol  ?doesLANRequireMultiplayerRestrictions\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool doesLANRequireMultiplayerRestrictions() const;
    /**
     * @hash   -133498411
     * @symbol  ?exitVRMode\@AppPlatform\@\@UEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCVAPI void exitVRMode(class std::function<void (void)>);
    /**
     * @hash   1649353542
     * @symbol  ?finish\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void finish();
    /**
     * @hash   -1373124190
     * @symbol  ?getARVRPlatform\@AppPlatform\@\@UEBA?AW4ARVRPlatform\@\@XZ
     */
    MCVAPI enum class ARVRPlatform getARVRPlatform() const;
    /**
     * @hash   1867402966
     * @symbol  ?getAndroidScopedStorageInfo\@AppPlatform\@\@UEBAAEBUAndroidScopedStorageInfo\@1\@XZ
     */
    MCVAPI struct AppPlatform::AndroidScopedStorageInfo const & getAndroidScopedStorageInfo() const;
    /**
     * @hash   144118255
     * @symbol  ?getAppLifecycleContext\@AppPlatform\@\@UEAAAEAVAppLifecycleContext\@\@XZ
     */
    MCVAPI class AppLifecycleContext & getAppLifecycleContext();
    /**
     * @hash   1510285104
     * @symbol  ?getAssetFileFullPath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCVAPI class Core::PathBuffer<std::string> getAssetFileFullPath(class Core::Path const &);
    /**
     * @hash   -578205383
     * @symbol  ?getBroadcastAddresses\@AppPlatform\@\@UEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getBroadcastAddresses();
    /**
     * @hash   -1295290825
     * @symbol  ?getBroadcastingMultiplayerServiceIds\@AppPlatform\@\@UEBA?AV?$vector\@W4MultiplayerServiceIdentifier\@Social\@\@V?$allocator\@W4MultiplayerServiceIdentifier\@Social\@\@\@std\@\@\@std\@\@_N0\@Z
     */
    MCVAPI std::vector<enum class Social::MultiplayerServiceIdentifier> getBroadcastingMultiplayerServiceIds(bool, bool) const;
    /**
     * @hash   1644313916
     * @symbol  ?getBuildPlatform\@AppPlatform\@\@UEBA?AW4BuildPlatform\@\@XZ
     */
    MCVAPI enum class BuildPlatform getBuildPlatform() const;
    /**
     * @hash   -766246081
     * @symbol  ?getCacheStoragePath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getCacheStoragePath();
    /**
     * @hash   -454643393
     * @symbol  ?getCatalogSearchScratchPath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getCatalogSearchScratchPath();
    /**
     * @hash   -478566789
     * @symbol  ?getClientUpdateUrl\@AppPlatform\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getClientUpdateUrl() const;
    /**
     * @hash   -1893414233
     * @symbol  ?getDefaultInputMode\@AppPlatform\@\@UEBA?AW4InputMode\@\@XZ
     */
    MCVAPI enum class InputMode getDefaultInputMode() const;
    /**
     * @hash   1170366328
     * @symbol  ?getDefaultNetworkMaxPlayers\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getDefaultNetworkMaxPlayers() const;
    /**
     * @hash   1493231820
     * @symbol  ?getDefaultSafeZoneScaleX\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getDefaultSafeZoneScaleX() const;
    /**
     * @hash   700863533
     * @symbol  ?getDefaultSafeZoneScaleY\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getDefaultSafeZoneScaleY() const;
    /**
     * @hash   -912601022
     * @symbol  ?getDefaultScreenPositionX\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getDefaultScreenPositionX() const;
    /**
     * @hash   -1704969309
     * @symbol  ?getDefaultScreenPositionY\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getDefaultScreenPositionY() const;
    /**
     * @hash   -487896254
     * @symbol  ?getDeviceSunsetTier\@AppPlatform\@\@UEBA?AW4DeviceSunsetTier\@\@XZ
     */
    MCVAPI enum class DeviceSunsetTier getDeviceSunsetTier() const;
    /**
     * @hash   -2062077493
     * @symbol  ?getDisplayHeight\@AppPlatform\@\@UEAAHXZ
     */
    MCVAPI int getDisplayHeight();
    /**
     * @hash   -1455121134
     * @symbol  ?getDisplayWidth\@AppPlatform\@\@UEAAHXZ
     */
    MCVAPI int getDisplayWidth();
    /**
     * @hash   -2094512290
     * @symbol  ?getDpi\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getDpi() const;
    /**
     * @hash   -335982946
     * @symbol  ?getEdition\@AppPlatform\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getEdition() const;
    /**
     * @hash   746209751
     * @symbol  ?getExtraLevelSaveDataIconParams\@AppPlatform\@\@UEBA?AV?$optional\@UScreenshotOptions\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCVAPI class std::optional<struct ScreenshotOptions> getExtraLevelSaveDataIconParams(std::string const &) const;
    /**
     * @hash   -986517958
     * @symbol  ?getFeedbackBugsLink\@AppPlatform\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getFeedbackBugsLink() const;
    /**
     * @hash   1227723644
     * @symbol  ?getFeedbackHelpLink\@AppPlatform\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getFeedbackHelpLink() const;
    /**
     * @hash   1963314192
     * @symbol  ?getFileAccess\@AppPlatform\@\@UEAA?AV?$not_null\@V?$NonOwnerPointer\@VIFileAccess\@\@\@Bedrock\@\@\@gsl\@\@W4ResourceFileSystem\@\@\@Z
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class IFileAccess>> getFileAccess(enum class ResourceFileSystem);
    /**
     * @hash   -1638870344
     * @symbol  ?getFocusState\@AppPlatform\@\@UEAA?AW4AppFocusState\@\@XZ
     */
    MCVAPI enum class AppFocusState getFocusState();
    /**
     * @hash   -547501622
     * @symbol  ?getHighPerformanceThreadsCount\@AppPlatform\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getHighPerformanceThreadsCount() const;
    /**
     * @hash   -1722366201
     * @symbol  ?getIPAddresses\@AppPlatform\@\@UEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getIPAddresses();
    /**
     * @hash   -265317874
     * @symbol  ?getInternalPackStoragePath\@AppPlatform\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getInternalPackStoragePath() const;
    /**
     * @hash   -222756491
     * @symbol  ?getLevelInfoCachePath\@AppPlatform\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getLevelInfoCachePath() const;
    /**
     * @hash   -767655033
     * @symbol  ?getLevelSaveInterval\@AppPlatform\@\@UEBA?AV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@XZ
     */
    MCVAPI class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> getLevelSaveInterval() const;
    /**
     * @hash   -1975648120
     * @symbol  ?getLoggingPath\@AppPlatform\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getLoggingPath() const;
    /**
     * @hash   1644681425
     * @symbol  ?getLowPhysicalMemoryThreshold\@AppPlatform\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getLowPhysicalMemoryThreshold() const;
    /**
     * @hash   -1893527940
     * @symbol  ?getMaxLDBFilesOpen\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getMaxLDBFilesOpen() const;
    /**
     * @hash   -645725747
     * @symbol  ?getMaxSimRadiusInChunks\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getMaxSimRadiusInChunks() const;
    /**
     * @hash   -644478887
     * @symbol  ?getMaxSimultaneousDownloads\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getMaxSimultaneousDownloads() const;
    /**
     * @hash   -808058318
     * @symbol  ?getMaxSimultaneousServiceRequests\@AppPlatform\@\@UEBAIXZ
     */
    MCVAPI unsigned int getMaxSimultaneousServiceRequests() const;
    /**
     * @hash   999389829
     * @symbol  ?getMaximumUsedMemory\@AppPlatform\@\@UEAA_KXZ
     */
    MCVAPI unsigned __int64 getMaximumUsedMemory();
    /**
     * @symbol  ?getModalErrorMessageProc\@AppPlatform\@\@UEAAP6A?AW4AssertDialogResponse\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@ZXZ
     */
    MCVAPI enum class AssertDialogResponse ( *)(std::string const &, std::string const &) getModalErrorMessageProc();
    /**
     * @hash   480048293
     * @symbol  ?getModelName\@AppPlatform\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getModelName();
    /**
     * @hash   792263868
     * @symbol  ?getMultiplayerServiceListToRegister\@AppPlatform\@\@UEBA?AV?$vector\@V?$shared_ptr\@VMultiplayerService\@Social\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VMultiplayerService\@Social\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<class std::shared_ptr<class Social::MultiplayerService>> getMultiplayerServiceListToRegister() const;
    /**
     * @hash   54338973
     * @symbol  ?getNetworkConnectionType\@AppPlatform\@\@UEAA?AW4NetworkConnectionType\@\@XZ
     */
    MCVAPI enum class NetworkConnectionType getNetworkConnectionType();
    /**
     * @hash   -1323303157
     * @symbol  ?getNumberOfParticleFramesToInterpolate\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getNumberOfParticleFramesToInterpolate() const;
    /**
     * @hash   -145755636
     * @symbol  ?getOSVersion\@AppPlatform\@\@UEBA?AW4OsVersion\@\@XZ
     */
    MCVAPI enum class OsVersion getOSVersion() const;
    /**
     * @hash   329359535
     * @symbol  ?getOnDiskPackScratchPath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getOnDiskPackScratchPath();
    /**
     * @hash   41962456
     * @symbol  ?getOnDiskScratchPath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getOnDiskScratchPath();
    /**
     * @hash   -2082141083
     * @symbol  ?getOperationMode\@AppPlatform\@\@UEBA?AV?$optional\@W4OperationMode\@\@\@std\@\@XZ
     */
    MCVAPI class std::optional<enum class OperationMode> getOperationMode() const;
    /**
     * @hash   268880076
     * @symbol  ?getOptimalLDBSize\@AppPlatform\@\@UEAA_KXZ
     */
    MCVAPI unsigned __int64 getOptimalLDBSize();
    /**
     * @hash   1306602033
     * @symbol  ?getOptionsSaveInterval\@AppPlatform\@\@UEBA?AV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@XZ
     */
    MCVAPI class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> getOptionsSaveInterval() const;
    /**
     * @hash   2140739541
     * @symbol  ?getPackageFamilyName\@AppPlatform\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getPackageFamilyName() const;
    /**
     * @hash   -1084063687
     * @symbol  ?getPackagedShaderCachePath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath();
    /**
     * @hash   -1149590639
     * @symbol  ?getPixelsPerMillimeter\@AppPlatform\@\@UEAAMXZ
     */
    MCVAPI float getPixelsPerMillimeter();
    /**
     * @hash   1536223501
     * @symbol  ?getPlatformDpi\@AppPlatform\@\@EEBAHXZ
     */
    MCVAPI int getPlatformDpi() const;
    /**
     * @hash   -411216581
     * @symbol  ?getPlatformStringVar\@AppPlatform\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCVAPI std::string getPlatformStringVar(int);
    /**
     * @hash   -1254536565
     * @symbol  ?getPlatformTTSEnabled\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSEnabled() const;
    /**
     * @hash   -1377586518
     * @symbol  ?getPlatformTTSExists\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSExists() const;
    /**
     * @hash   -388195758
     * @symbol  ?getPlatformType\@AppPlatform\@\@UEBA?AW4PlatformType\@\@XZ
     */
    MCVAPI enum class PlatformType getPlatformType() const;
    /**
     * @hash   -174940361
     * @symbol  ?getPlatformUIScalingRules\@AppPlatform\@\@EEBA?AW4UIScalingRules\@\@XZ
     */
    MCVAPI enum class UIScalingRules getPlatformUIScalingRules() const;
    /**
     * @hash   -1772021514
     * @symbol  ?getRenderSurfaceParameters\@AppPlatform\@\@UEBA?AV?$variant\@PEAUHWND__\@\@Umonostate\@std\@\@\@std\@\@XZ
     */
    MCVAPI class std::variant<struct HWND__*, struct std::monostate> getRenderSurfaceParameters() const;
    /**
     * @hash   -2104823600
     * @symbol  ?getScreenHeight\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getScreenHeight() const;
    /**
     * @hash   375653531
     * @symbol  ?getScreenWidth\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getScreenWidth() const;
    /**
     * @hash   -1259022998
     * @symbol  ?getSecureStorage\@AppPlatform\@\@UEAA?AV?$unique_ptr\@VSecureStorage\@\@U?$default_delete\@VSecureStorage\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class SecureStorage> getSecureStorage();
    /**
     * @hash   409212378
     * @symbol  ?getSecureStorageKey\@AppPlatform\@\@UEAA?AVSecureStorageKey\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class SecureStorageKey getSecureStorageKey(std::string const &);
    /**
     * @hash   224143209
     * @symbol  ?getSettingsPath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getSettingsPath();
    /**
     * @hash   -702983097
     * @symbol  ?getShaderCachePath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getShaderCachePath();
    /**
     * @hash   1670379828
     * @symbol  ?getStoreNetworkFailureTimeout\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getStoreNetworkFailureTimeout() const;
    /**
     * @hash   1731242584
     * @symbol  ?getThirdPartyPackUUID\@AppPlatform\@\@UEBAAEBVUUID\@mce\@\@XZ
     */
    MCVAPI class mce::UUID const & getThirdPartyPackUUID() const;
    /**
     * @hash   -1210687208
     * @symbol  ?getTotalHardwareThreadsCount\@AppPlatform\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getTotalHardwareThreadsCount() const;
    /**
     * @hash   -1932484526
     * @symbol  ?getUIScalingRules\@AppPlatform\@\@UEBA?AW4UIScalingRules\@\@XZ
     */
    MCVAPI enum class UIScalingRules getUIScalingRules() const;
    /**
     * @hash   -1250824085
     * @symbol  ?getUserInput\@AppPlatform\@\@UEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getUserInput();
    /**
     * @hash   -1412537661
     * @symbol  ?getUserInputStatus\@AppPlatform\@\@UEAAHXZ
     */
    MCVAPI int getUserInputStatus();
    /**
     * @hash   -433153621
     * @symbol  ?getUserStorageRootPath\@AppPlatform\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getUserStorageRootPath() const;
    /**
     * @hash   -425486174
     * @symbol  ?getUserdataPathForLevels\@AppPlatform\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getUserdataPathForLevels() const;
    /**
     * @hash   -554783102
     * @symbol  ?getVRControllerType\@AppPlatform\@\@UEBA?AW4VRControllerType\@\@XZ
     */
    MCVAPI enum class VRControllerType getVRControllerType() const;
    /**
     * @hash   -2075823529
     * @symbol  ?goToExternalConsumablesStoreListing\@AppPlatform\@\@UEBAXXZ
     */
    MCVAPI void goToExternalConsumablesStoreListing() const;
    /**
     * @hash   2019846855
     * @symbol  ?handlePlatformSpecificCommerceError\@AppPlatform\@\@UEAAXI\@Z
     */
    MCVAPI void handlePlatformSpecificCommerceError(unsigned int);
    /**
     * @hash   587268126
     * @symbol  ?hasAssetFile\@AppPlatform\@\@UEAA_NAEBVPath\@Core\@\@\@Z
     */
    MCVAPI bool hasAssetFile(class Core::Path const &);
    /**
     * @hash   1536185415
     * @symbol  ?hasBuyButtonWhenInvalidLicense\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool hasBuyButtonWhenInvalidLicense();
    /**
     * @hash   -421521282
     * @symbol  ?hasFastAlphaTest\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool hasFastAlphaTest() const;
    /**
     * @hash   1126548670
     * @symbol  ?hasIDEProfiler\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool hasIDEProfiler();
    /**
     * @hash   1556382452
     * @symbol  ?hasJournalingFilesystem\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool hasJournalingFilesystem() const;
    /**
     * @hash   -1207505777
     * @symbol  ?hasPlatformSpecificInvites\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool hasPlatformSpecificInvites() const;
    /**
     * @hash   -183702449
     * @symbol  ?hasSeparatedStorageAreasForContentAcquisition\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool hasSeparatedStorageAreasForContentAcquisition() const;
    /**
     * @hash   -252599928
     * @symbol  ?hideSplashScreen\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void hideSplashScreen();
    /**
     * @hash   -125546352
     * @symbol  ?importAsFlatFile\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool importAsFlatFile() const;
    /**
     * @hash   389879952
     * @symbol  ?initAppPlatformNetworkSettings\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void initAppPlatformNetworkSettings();
    /**
     * @hash   1412673907
     * @symbol  ?initialize\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void initialize();
    /**
     * @hash   640661811
     * @symbol  ?initializeGameStreaming\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void initializeGameStreaming();
    /**
     * @hash   -1928815499
     * @symbol  ?initializeScreenDependentResources\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void initializeScreenDependentResources();
    /**
     * @hash   393951303
     * @symbol  ?isAutoCompactionEnabled\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isAutoCompactionEnabled() const;
    /**
     * @hash   1420666885
     * @symbol  ?isCentennial\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isCentennial() const;
    /**
     * @hash   -948522763
     * @symbol  ?isContentAutoUpdateAllowed\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isContentAutoUpdateAllowed() const;
    /**
     * @hash   -1799252487
     * @symbol  ?isCrossPlatformToggleVisible\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isCrossPlatformToggleVisible() const;
    /**
     * @hash   -1804885168
     * @symbol  ?isDisplayInitialized\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isDisplayInitialized() const;
    /**
     * @hash   -1195473853
     * @symbol  ?isDownloadAndImportBlocking\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isDownloadAndImportBlocking() const;
    /**
     * @hash   -456606443
     * @symbol  ?isDownloadBuffered\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isDownloadBuffered() const;
    /**
     * @symbol  ?isEduMode\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isEduMode() const;
    /**
     * @hash   1655721190
     * @symbol  ?isFireTV\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isFireTV() const;
    /**
     * @hash   458537785
     * @symbol  ?isJoinableViaExternalServers\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isJoinableViaExternalServers() const;
    /**
     * @hash   -1016060019
     * @symbol  ?isLANAllowed\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isLANAllowed() const;
    /**
     * @hash   -1923526491
     * @symbol  ?isLowMemoryDevice\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isLowMemoryDevice() const;
    /**
     * @hash   -592895860
     * @symbol  ?isLowPhysicalMemoryDevice\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isLowPhysicalMemoryDevice() const;
    /**
     * @hash   1824430136
     * @symbol  ?isNetworkAllowed\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isNetworkAllowed() const;
    /**
     * @hash   2145940201
     * @symbol  ?isNetworkAvailable\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isNetworkAvailable() const;
    /**
     * @hash   994453737
     * @symbol  ?isNetworkEnabled\@AppPlatform\@\@UEBA_N_N\@Z
     */
    MCVAPI bool isNetworkEnabled(bool) const;
    /**
     * @hash   -856925110
     * @symbol  ?isNetworkThrottled\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isNetworkThrottled() const;
    /**
     * @hash   1010966861
     * @symbol  ?isOnWifiConnectionTelemetryValue\@AppPlatform\@\@UEAA?AV?$optional\@_N\@std\@\@XZ
     */
    MCVAPI class std::optional<bool> isOnWifiConnectionTelemetryValue();
    /**
     * @hash   1014816759
     * @symbol  ?isQuitCapable\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isQuitCapable() const;
    /**
     * @hash   241784471
     * @symbol  ?isRealmsEnabled\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isRealmsEnabled() const;
    /**
     * @hash   1141893550
     * @symbol  ?isTelemetryAllowed\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool isTelemetryAllowed();
    /**
     * @hash   931000824
     * @symbol  ?isTrialWorldsTransferToFullGameAllowed\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isTrialWorldsTransferToFullGameAllowed() const;
    /**
     * @hash   422868739
     * @symbol  ?isWebviewSupported\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isWebviewSupported() const;
    /**
     * @hash   -581127889
     * @symbol  ?isWin10Arm\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isWin10Arm() const;
    /**
     * @hash   1186329775
     * @symbol  ?launchLegacyVersion\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void launchLegacyVersion();
    /**
     * @hash   788028873
     * @symbol  ?launchSettings\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void launchSettings();
    /**
     * @hash   -60167968
     * @symbol  ?launchUri\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void launchUri(std::string const &);
    /**
     * @hash   -1132654273
     * @symbol  ?listAssetFilesIn\@AppPlatform\@\@UEBA?AV?$set\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@U?$less\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@4\@\@std\@\@AEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCVAPI class std::set<class Core::PathBuffer<std::string>, struct std::less<class Core::PathBuffer<std::string>>, class std::allocator<class Core::PathBuffer<std::string>>> listAssetFilesIn(class Core::Path const &, std::string const &) const;
    /**
     * @hash   2083632336
     * @symbol  ?maxFileDataRequestConcurrency\@AppPlatform\@\@UEBAIXZ
     */
    MCVAPI unsigned int maxFileDataRequestConcurrency() const;
    /**
     * @hash   -797079261
     * @symbol  ?minimizeBackgroundDownloads\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool minimizeBackgroundDownloads() const;
    /**
     * @hash   1964547543
     * @symbol  ?multiplayerRequiresPremiumAccess\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool multiplayerRequiresPremiumAccess() const;
    /**
     * @hash   61556508
     * @symbol  ?multiplayerRequiresUGCEnabled\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool multiplayerRequiresUGCEnabled() const;
    /**
     * @hash   -294524302
     * @symbol  ?notifyControllerConnectionStateChange\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool notifyControllerConnectionStateChange() const;
    /**
     * @hash   922671702
     * @symbol  ?notifyNetworkConfigurationChanged\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void notifyNetworkConfigurationChanged();
    /**
     * @hash   646823222
     * @symbol  ?onPrimaryUserNetworkReady\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void onPrimaryUserNetworkReady();
    /**
     * @hash   -788779397
     * @symbol  ?platformRequiresControllerApplet\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool platformRequiresControllerApplet() const;
    /**
     * @hash   -1197001032
     * @symbol  ?readAssetFile\@AppPlatform\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    MCVAPI std::string readAssetFile(class Core::Path const &);
    /**
     * @hash   -1610282831
     * @symbol  ?registerExperimentsActiveCrashDump\@AppPlatform\@\@UEBAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void registerExperimentsActiveCrashDump(std::vector<std::string> const &) const;
    /**
     * @hash   1940085205
     * @symbol  ?registerFileForCollectionWithCrashDump\@AppPlatform\@\@UEAAXAEBVPath\@Core\@\@\@Z
     */
    MCVAPI void registerFileForCollectionWithCrashDump(class Core::Path const &);
    /**
     * @hash   1877446966
     * @symbol  ?reloadRenderResourcesOnResume\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool reloadRenderResourcesOnResume() const;
    /**
     * @hash   249153493
     * @symbol  ?removeListener\@AppPlatform\@\@UEAAXPEAVAppPlatformListener\@\@\@Z
     */
    MCVAPI void removeListener(class AppPlatformListener *);
    /**
     * @hash   -1257986515
     * @symbol  ?requireControllerAtStartup\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool requireControllerAtStartup() const;
    /**
     * @hash   -272045110
     * @symbol  ?requiresAutoSaveIconExplanationPopup\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool requiresAutoSaveIconExplanationPopup() const;
    /**
     * @hash   1646726447
     * @symbol  ?requiresLiveGoldForMultiplayer\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool requiresLiveGoldForMultiplayer() const;
    /**
     * @hash   -1545316866
     * @symbol  ?requiresPatchNoticePopup\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool requiresPatchNoticePopup() const;
    /**
     * @hash   444278850
     * @symbol  ?requiresXboxLiveSigninToPlay\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool requiresXboxLiveSigninToPlay() const;
    /**
     * @hash   2070493463
     * @symbol  ?restartApp\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void restartApp(bool);
    /**
     * @hash   697381092
     * @symbol  ?restartRequested\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool restartRequested();
    /**
     * @hash   -1997785537
     * @symbol  ?setARVRPlatform\@AppPlatform\@\@UEAAXW4ARVRPlatform\@\@\@Z
     */
    MCVAPI void setARVRPlatform(enum class ARVRPlatform);
    /**
     * @hash   -298363647
     * @symbol  ?setDpi\@AppPlatform\@\@UEAAXH\@Z
     */
    MCVAPI void setDpi(int);
    /**
     * @hash   1941441651
     * @symbol  ?setFullscreenMode\@AppPlatform\@\@UEAAXW4FullscreenMode\@\@\@Z
     */
    MCVAPI void setFullscreenMode(enum class FullscreenMode);
    /**
     * @symbol  ?setKeepScreenOnFlag\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void setKeepScreenOnFlag(bool);
    /**
     * @hash   1577546269
     * @symbol  ?setNetworkAllowed\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void setNetworkAllowed(bool);
    /**
     * @hash   -1336837827
     * @symbol  ?setNetworkConnectionType\@AppPlatform\@\@UEAAXW4NetworkConnectionType\@\@\@Z
     */
    MCVAPI void setNetworkConnectionType(enum class NetworkConnectionType);
    /**
     * @hash   -1216376350
     * @symbol  ?setScreenSize\@AppPlatform\@\@UEAAXHH\@Z
     */
    MCVAPI void setScreenSize(int, int);
    /**
     * @hash   -986442742
     * @symbol  ?setSecureStorageKey\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSecureStorageKey\@\@\@Z
     */
    MCVAPI void setSecureStorageKey(std::string const &, class SecureStorageKey const &);
    /**
     * @hash   1191814349
     * @symbol  ?setSleepEnabled\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void setSleepEnabled(bool);
    /**
     * @hash   1345590466
     * @symbol  ?setThreadsFrozen\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void setThreadsFrozen(bool);
    /**
     * @hash   -1159934425
     * @symbol  ?setUIScalingRules\@AppPlatform\@\@UEAAXW4UIScalingRules\@\@\@Z
     */
    MCVAPI void setUIScalingRules(enum class UIScalingRules);
    /**
     * @hash   -323528677
     * @symbol  ?setVRControllerType\@AppPlatform\@\@UEAAXW4VRControllerType\@\@\@Z
     */
    MCVAPI void setVRControllerType(enum class VRControllerType);
    /**
     * @hash   -2130290714
     * @symbol  ?setWindowSize\@AppPlatform\@\@UEAAXHH\@Z
     */
    MCVAPI void setWindowSize(int, int);
    /**
     * @hash   -1928445222
     * @symbol  ?setWindowText\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void setWindowText(std::string const &);
    /**
     * @hash   -1126484116
     * @symbol  ?shouldPauseDownloadsWhenEnterGame\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool shouldPauseDownloadsWhenEnterGame() const;
    /**
     * @hash   -2067596294
     * @symbol  ?shouldRegisterForXboxLiveNotifications\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool shouldRegisterForXboxLiveNotifications() const;
    /**
     * @hash   478795166
     * @symbol  ?shouldRemoveGraphicsDeviceOnAppTermination\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool shouldRemoveGraphicsDeviceOnAppTermination() const;
    /**
     * @hash   632113815
     * @symbol  ?showDialog\@AppPlatform\@\@UEAAXH\@Z
     */
    MCVAPI void showDialog(int);
    /**
     * @hash   356246319
     * @symbol  ?showPlatformEmptyStoreDialog\@AppPlatform\@\@UEAAX$$QEAV?$function\@$$A6AX_N\@Z\@std\@\@\@Z
     */
    MCVAPI void showPlatformEmptyStoreDialog(class std::function<void (bool)> &&);
    /**
     * @hash   685702511
     * @symbol  ?showPlatformStoreIcon\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void showPlatformStoreIcon(bool);
    /**
     * @hash   1082303734
     * @symbol  ?supportsAutoSaveOnDBCompaction\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsAutoSaveOnDBCompaction() const;
    /**
     * @hash   -747574676
     * @symbol  ?supportsClientUpdate\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsClientUpdate() const;
    /**
     * @hash   206904444
     * @symbol  ?supportsDayOneExperience\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsDayOneExperience() const;
    /**
     * @hash   593053031
     * @symbol  ?supportsFliteTTS\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsFliteTTS() const;
    /**
     * @hash   2063921945
     * @symbol  ?supportsInPackageRecursion\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsInPackageRecursion() const;
    /**
     * @hash   708108424
     * @symbol  ?supportsLaunchingLegacyVersion\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsLaunchingLegacyVersion() const;
    /**
     * @hash   46003681
     * @symbol  ?supportsLegacySinglePremiumCacheDirectory\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsLegacySinglePremiumCacheDirectory() const;
    /**
     * @hash   563516058
     * @symbol  ?supportsVRModeSwap\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsVRModeSwap() const;
    /**
     * @hash   -168917566
     * @symbol  ?supportsVibration\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsVibration() const;
    /**
     * @hash   1618060117
     * @symbol  ?supportsWorldShare\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsWorldShare() const;
    /**
     * @hash   899736315
     * @symbol  ?supportsXboxLiveAchievements\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsXboxLiveAchievements() const;
    /**
     * @hash   1428247879
     * @symbol  ?teardown\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void teardown();
    /**
     * @hash   1030980225
     * @symbol  ?trackPurchaseEvent\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0000000\@Z
     */
    MCVAPI void trackPurchaseEvent(std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   349134514
     * @symbol  ?tryEnterVRMode\@AppPlatform\@\@UEAAX_NV?$function\@$$A6AX_N\@Z\@std\@\@\@Z
     */
    MCVAPI void tryEnterVRMode(bool, class std::function<void (bool)>);
    /**
     * @hash   -1078213097
     * @symbol  ?updateLocalization\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void updateLocalization(std::string const &);
    /**
     * @hash   1657276727
     * @symbol  ?updateTextBoxText\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void updateTextBoxText(std::string const &);
    /**
     * @hash   -1405251371
     * @symbol  ?useAppPlatformForTelemetryIPAddress\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool useAppPlatformForTelemetryIPAddress();
    /**
     * @hash   1374537600
     * @symbol  ?useNativeStoreForRealmsPurchase\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool useNativeStoreForRealmsPurchase();
    /**
     * @hash   626915828
     * @symbol  ?usePlatformProfilePicturesOnly\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool usePlatformProfilePicturesOnly() const;
    /**
     * @hash   -1492383322
     * @symbol  ?useXboxControlHelpers\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool useXboxControlHelpers() const;
    /**
     * @hash   1611144003
     * @symbol  ?usesAsyncOptionSaving\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool usesAsyncOptionSaving() const;
    /**
     * @hash   -1650431425
     * @symbol  ?usesHDRBrightness\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool usesHDRBrightness() const;
    /**
     * @hash   -794707059
     * @symbol  ?vibrate\@AppPlatform\@\@UEAAXH\@Z
     */
    MCVAPI void vibrate(int);
    /**
     * @hash   -1644608952
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~AppPlatform();
#endif
    /**
     * @hash   -1424655303
     * @symbol  ??0AppPlatform\@\@QEAA\@_N\@Z
     */
    MCAPI AppPlatform(bool);
    /**
     * @hash   -473388367
     * @symbol  ?_fireAppTerminated\@AppPlatform\@\@QEAAXXZ
     */
    MCAPI void _fireAppTerminated();
    /**
     * @hash   -1061817508
     * @symbol  ?accessPlatformRuntimeInformation_Shim\@AppPlatform\@\@QEAAAEAV?$unique_ptr\@UPlatformRuntimeInfo\@Bedrock\@\@U?$default_delete\@UPlatformRuntimeInfo\@Bedrock\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo> & accessPlatformRuntimeInformation_Shim();
    /**
     * @hash   -454216079
     * @symbol  ?getCurrentStoragePath\@AppPlatform\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getCurrentStoragePath() const;
    /**
     * @hash   1827474879
     * @symbol  ?getInternalStoragePath\@AppPlatform\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getInternalStoragePath() const;
    /**
     * @hash   1619496694
     * @symbol  ?getPlatformRuntimeInformation\@AppPlatform\@\@QEBAAEBV?$unique_ptr\@UPlatformRuntimeInfo\@Bedrock\@\@U?$default_delete\@UPlatformRuntimeInfo\@Bedrock\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo> const & getPlatformRuntimeInformation() const;
    /**
     * @hash   424545094
     * @symbol  ?getProxyResolver\@AppPlatform\@\@QEAA?AV?$not_null\@V?$NonOwnerPointer\@VIProxyResolver\@Http\@Bedrock\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class Bedrock::Http::IProxyResolver>> getProxyResolver();
    /**
     * @hash   2024122569
     * @symbol  ?getScratchPath\@AppPlatform\@\@QEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getScratchPath();
    /**
     * @hash   337928103
     * @symbol  ?getUserdataPath\@AppPlatform\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getUserdataPath() const;
    /**
     * @hash   2040216054
     * @symbol  ?isTerminating\@AppPlatform\@\@QEBA_NXZ
     */
    MCAPI bool isTerminating() const;
    /**
     * @hash   1934944621
     * @symbol  ?notifyUserStorageInitialized\@AppPlatform\@\@QEAAXXZ
     */
    MCAPI void notifyUserStorageInitialized();
    /**
     * @hash   -214549437
     * @symbol  ?HOME_PATH\@AppPlatform\@\@2V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const HOME_PATH;
    /**
     * @hash   2081408421
     * @symbol  ?LOG_PATH\@AppPlatform\@\@2V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const LOG_PATH;
    /**
     * @hash   -25440941
     * @symbol  ?SETTINGS_PATH\@AppPlatform\@\@2V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const SETTINGS_PATH;

//protected:

//private:
    /**
     * @hash   299740150
     * @symbol  ?_initializeLoadProfiler\@AppPlatform\@\@AEAAXXZ
     */
    MCAPI void _initializeLoadProfiler();

protected:
    /**
     * @hash   1207909526
     * @symbol  ?SHADERCACHE_PATH\@AppPlatform\@\@1V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const SHADERCACHE_PATH;

private:
    /**
     * @hash   -921782199
     * @symbol  ?mIsInitialized\@AppPlatform\@\@0_NA
     */
    MCAPI static bool mIsInitialized;

};