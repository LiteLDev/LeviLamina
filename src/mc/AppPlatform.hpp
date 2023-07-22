/**
 * @file  AppPlatform.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  ?_createProxyResolver\@AppPlatform\@\@EEAA?AV?$unique_ptr\@VIProxyResolver\@Http\@Bedrock\@\@U?$default_delete\@VIProxyResolver\@Http\@Bedrock\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class Bedrock::Http::IProxyResolver> _createProxyResolver();
    /**
     * @symbol  ?_disableCPUBoost\@AppPlatform\@\@MEAAXXZ
     */
    MCVAPI void _disableCPUBoost();
    /**
     * @symbol  ?_initializeFileStorageAreas\@AppPlatform\@\@MEAAXXZ
     */
    MCVAPI void _initializeFileStorageAreas();
    /**
     * @symbol  ?_onInitialize\@AppPlatform\@\@EEAAXXZ
     */
    MCVAPI void _onInitialize();
    /**
     * @symbol  ?_onTeardown\@AppPlatform\@\@EEAAXXZ
     */
    MCVAPI void _onTeardown();
    /**
     * @symbol  ?_teardownFileStorageAreas\@AppPlatform\@\@MEAAXXZ
     */
    MCVAPI void _teardownFileStorageAreas();
    /**
     * @symbol  ?_tryEnableCPUBoost\@AppPlatform\@\@MEAA_NXZ
     */
    MCVAPI bool _tryEnableCPUBoost();
    /**
     * @symbol  ?addListener\@AppPlatform\@\@UEAAXPEAVAppPlatformListener\@\@M\@Z
     */
    MCVAPI void addListener(class AppPlatformListener *, float);
    /**
     * @symbol  ?allowBetaXblSignIn\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool allowBetaXblSignIn() const;
    /**
     * @symbol  ?allowContentLogWriteToDisk\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool allowContentLogWriteToDisk();
    /**
     * @symbol  ?allowsResourcePackDevelopment\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool allowsResourcePackDevelopment() const;
    /**
     * @symbol  ?alwaysUseZippedPacksForDlc\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool alwaysUseZippedPacksForDlc() const;
    /**
     * @symbol  ?areThreadsFrozen\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool areThreadsFrozen() const;
    /**
     * @symbol  ?buyGame\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void buyGame();
    /**
     * @symbol  ?calculateIfLowMemoryDevice\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void calculateIfLowMemoryDevice();
    /**
     * @symbol  ?canLaunchUri\@AppPlatform\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool canLaunchUri(std::string const &);
    /**
     * @symbol  ?canManageLegacyData\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool canManageLegacyData() const;
    /**
     * @symbol  ?canSwapVRMode\@AppPlatform\@\@UEBA_N_N\@Z
     */
    MCVAPI bool canSwapVRMode(bool) const;
    /**
     * @symbol  ?checkLicense\@AppPlatform\@\@UEAAHXZ
     */
    MCVAPI int checkLicense();
    /**
     * @symbol  ?collectGraphicsHardwareDetails\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void collectGraphicsHardwareDetails();
    /**
     * @symbol  ?compareAppReceiptToLocalReceipt\@AppPlatform\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool compareAppReceiptToLocalReceipt(std::string const &);
    /**
     * @symbol  ?copyAssetFile\@AppPlatform\@\@UEAA_NAEBVPath\@Core\@\@0\@Z
     */
    MCVAPI bool copyAssetFile(class Core::Path const &, class Core::Path const &);
    /**
     * @symbol  ?copyImportFileToTempFolder\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const &);
    /**
     * @symbol  ?createLoggingStorageArea\@AppPlatform\@\@UEAA?AV?$shared_ptr\@VFileStorageArea\@Core\@\@\@std\@\@W4FileAccessType\@Core\@\@AEBVPath\@5\@\@Z
     */
    MCVAPI class std::shared_ptr<class Core::FileStorageArea> createLoggingStorageArea(enum class Core::FileAccessType, class Core::Path const &);
    /**
     * @symbol  ?createUserInput\@AppPlatform\@\@UEAAXH\@Z
     */
    MCVAPI void createUserInput(int);
    /**
     * @symbol  ?createUserInput\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void createUserInput();
    /**
     * @symbol  ?createWebview\@AppPlatform\@\@UEBA?AV?$shared_ptr\@VWebviewInterface\@\@\@std\@\@$$QEAVPlatformArguments\@Webview\@\@\@Z
     */
    MCVAPI class std::shared_ptr<class WebviewInterface> createWebview(class Webview::PlatformArguments &&) const;
    /**
     * @symbol  ?doesLANRequireMultiplayerRestrictions\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool doesLANRequireMultiplayerRestrictions() const;
    /**
     * @symbol  ?exitVRMode\@AppPlatform\@\@UEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCVAPI void exitVRMode(class std::function<void (void)>);
    /**
     * @symbol  ?finish\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void finish();
    /**
     * @symbol  ?getARVRPlatform\@AppPlatform\@\@UEBA?AW4ARVRPlatform\@\@XZ
     */
    MCVAPI enum class ARVRPlatform getARVRPlatform() const;
    /**
     * @symbol  ?getAndroidScopedStorageInfo\@AppPlatform\@\@UEBAAEBUAndroidScopedStorageInfo\@1\@XZ
     */
    MCVAPI struct AppPlatform::AndroidScopedStorageInfo const & getAndroidScopedStorageInfo() const;
    /**
     * @symbol  ?getAppLifecycleContext\@AppPlatform\@\@UEAAAEAVAppLifecycleContext\@\@XZ
     */
    MCVAPI class AppLifecycleContext & getAppLifecycleContext();
    /**
     * @symbol  ?getAssetFileFullPath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCVAPI class Core::PathBuffer<std::string> getAssetFileFullPath(class Core::Path const &);
    /**
     * @symbol  ?getBroadcastAddresses\@AppPlatform\@\@UEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getBroadcastAddresses();
    /**
     * @symbol  ?getBroadcastingMultiplayerServiceIds\@AppPlatform\@\@UEBA?AV?$vector\@W4MultiplayerServiceIdentifier\@Social\@\@V?$allocator\@W4MultiplayerServiceIdentifier\@Social\@\@\@std\@\@\@std\@\@_N0\@Z
     */
    MCVAPI std::vector<enum class Social::MultiplayerServiceIdentifier> getBroadcastingMultiplayerServiceIds(bool, bool) const;
    /**
     * @symbol  ?getBuildPlatform\@AppPlatform\@\@UEBA?AW4BuildPlatform\@\@XZ
     */
    MCVAPI enum class BuildPlatform getBuildPlatform() const;
    /**
     * @symbol  ?getCacheStoragePath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getCacheStoragePath();
    /**
     * @symbol  ?getCatalogSearchScratchPath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getCatalogSearchScratchPath();
    /**
     * @symbol  ?getClientUpdateUrl\@AppPlatform\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getClientUpdateUrl() const;
    /**
     * @symbol  ?getDefaultInputMode\@AppPlatform\@\@UEBA?AW4InputMode\@\@XZ
     */
    MCVAPI enum class InputMode getDefaultInputMode() const;
    /**
     * @symbol  ?getDefaultNetworkMaxPlayers\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getDefaultNetworkMaxPlayers() const;
    /**
     * @symbol  ?getDefaultSafeZoneScaleX\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getDefaultSafeZoneScaleX() const;
    /**
     * @symbol  ?getDefaultSafeZoneScaleY\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getDefaultSafeZoneScaleY() const;
    /**
     * @symbol  ?getDefaultScreenPositionX\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getDefaultScreenPositionX() const;
    /**
     * @symbol  ?getDefaultScreenPositionY\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getDefaultScreenPositionY() const;
    /**
     * @symbol  ?getDeviceSunsetTier\@AppPlatform\@\@UEBA?AW4DeviceSunsetTier\@\@XZ
     */
    MCVAPI enum class DeviceSunsetTier getDeviceSunsetTier() const;
    /**
     * @symbol  ?getDisplayHeight\@AppPlatform\@\@UEAAHXZ
     */
    MCVAPI int getDisplayHeight();
    /**
     * @symbol  ?getDisplayWidth\@AppPlatform\@\@UEAAHXZ
     */
    MCVAPI int getDisplayWidth();
    /**
     * @symbol  ?getDpi\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getDpi() const;
    /**
     * @symbol  ?getEdition\@AppPlatform\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getEdition() const;
    /**
     * @symbol  ?getExtraLevelSaveDataIconParams\@AppPlatform\@\@UEBA?AV?$optional\@UScreenshotOptions\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCVAPI class std::optional<struct ScreenshotOptions> getExtraLevelSaveDataIconParams(std::string const &) const;
    /**
     * @symbol  ?getFeedbackBugsLink\@AppPlatform\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getFeedbackBugsLink() const;
    /**
     * @symbol  ?getFeedbackHelpLink\@AppPlatform\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getFeedbackHelpLink() const;
    /**
     * @symbol  ?getFileAccess\@AppPlatform\@\@UEAA?AV?$not_null\@V?$NonOwnerPointer\@VIFileAccess\@\@\@Bedrock\@\@\@gsl\@\@W4ResourceFileSystem\@\@\@Z
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class IFileAccess>> getFileAccess(enum class ResourceFileSystem);
    /**
     * @symbol  ?getFocusState\@AppPlatform\@\@UEAA?AW4AppFocusState\@\@XZ
     */
    MCVAPI enum class AppFocusState getFocusState();
    /**
     * @symbol  ?getHighPerformanceThreadsCount\@AppPlatform\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getHighPerformanceThreadsCount() const;
    /**
     * @symbol  ?getIPAddresses\@AppPlatform\@\@UEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getIPAddresses();
    /**
     * @symbol  ?getInternalPackStoragePath\@AppPlatform\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getInternalPackStoragePath() const;
    /**
     * @symbol  ?getLevelInfoCachePath\@AppPlatform\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getLevelInfoCachePath() const;
    /**
     * @symbol  ?getLevelSaveInterval\@AppPlatform\@\@UEBA?AV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@XZ
     */
    MCVAPI class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> getLevelSaveInterval() const;
    /**
     * @symbol  ?getLoggingPath\@AppPlatform\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getLoggingPath() const;
    /**
     * @symbol  ?getLowPhysicalMemoryThreshold\@AppPlatform\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getLowPhysicalMemoryThreshold() const;
    /**
     * @symbol  ?getMaxLDBFilesOpen\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getMaxLDBFilesOpen() const;
    /**
     * @symbol  ?getMaxSimRadiusInChunks\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getMaxSimRadiusInChunks() const;
    /**
     * @symbol  ?getMaxSimultaneousDownloads\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getMaxSimultaneousDownloads() const;
    /**
     * @symbol  ?getMaxSimultaneousServiceRequests\@AppPlatform\@\@UEBAIXZ
     */
    MCVAPI unsigned int getMaxSimultaneousServiceRequests() const;
    /**
     * @symbol  ?getMaximumUsedMemory\@AppPlatform\@\@UEAA_KXZ
     */
    MCVAPI unsigned __int64 getMaximumUsedMemory();
    /**
     * @symbol  ?getModalErrorMessageProc\@AppPlatform\@\@UEAAP6A?AW4AssertDialogResponse\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@ZXZ
     */
    MCVAPI enum class AssertDialogResponse ( *)(std::string const &, std::string const &) getModalErrorMessageProc();
    /**
     * @symbol  ?getModelName\@AppPlatform\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getModelName();
    /**
     * @symbol  ?getMultiplayerServiceListToRegister\@AppPlatform\@\@UEBA?AV?$vector\@V?$shared_ptr\@VMultiplayerService\@Social\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VMultiplayerService\@Social\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<class std::shared_ptr<class Social::MultiplayerService>> getMultiplayerServiceListToRegister() const;
    /**
     * @symbol  ?getNetworkConnectionType\@AppPlatform\@\@UEAA?AW4NetworkConnectionType\@\@XZ
     */
    MCVAPI enum class NetworkConnectionType getNetworkConnectionType();
    /**
     * @symbol  ?getNumberOfParticleFramesToInterpolate\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getNumberOfParticleFramesToInterpolate() const;
    /**
     * @symbol  ?getOSVersion\@AppPlatform\@\@UEBA?AW4OsVersion\@\@XZ
     */
    MCVAPI enum class OsVersion getOSVersion() const;
    /**
     * @symbol  ?getOnDiskPackScratchPath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getOnDiskPackScratchPath();
    /**
     * @symbol  ?getOnDiskScratchPath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getOnDiskScratchPath();
    /**
     * @symbol  ?getOperationMode\@AppPlatform\@\@UEBA?AV?$optional\@W4OperationMode\@\@\@std\@\@XZ
     */
    MCVAPI class std::optional<enum class OperationMode> getOperationMode() const;
    /**
     * @symbol  ?getOptimalLDBSize\@AppPlatform\@\@UEAA_KXZ
     */
    MCVAPI unsigned __int64 getOptimalLDBSize();
    /**
     * @symbol  ?getOptionsSaveInterval\@AppPlatform\@\@UEBA?AV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@XZ
     */
    MCVAPI class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> getOptionsSaveInterval() const;
    /**
     * @symbol  ?getPackageFamilyName\@AppPlatform\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getPackageFamilyName() const;
    /**
     * @symbol  ?getPackagedShaderCachePath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath();
    /**
     * @symbol  ?getPixelsPerMillimeter\@AppPlatform\@\@UEAAMXZ
     */
    MCVAPI float getPixelsPerMillimeter();
    /**
     * @symbol  ?getPlatformDpi\@AppPlatform\@\@EEBAHXZ
     */
    MCVAPI int getPlatformDpi() const;
    /**
     * @symbol  ?getPlatformStringVar\@AppPlatform\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCVAPI std::string getPlatformStringVar(int);
    /**
     * @symbol  ?getPlatformTTSEnabled\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSEnabled() const;
    /**
     * @symbol  ?getPlatformTTSExists\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSExists() const;
    /**
     * @symbol  ?getPlatformType\@AppPlatform\@\@UEBA?AW4PlatformType\@\@XZ
     */
    MCVAPI enum class PlatformType getPlatformType() const;
    /**
     * @symbol  ?getPlatformUIScalingRules\@AppPlatform\@\@EEBA?AW4UIScalingRules\@\@XZ
     */
    MCVAPI enum class UIScalingRules getPlatformUIScalingRules() const;
    /**
     * @symbol  ?getRenderSurfaceParameters\@AppPlatform\@\@UEBA?AV?$variant\@PEAUHWND__\@\@Umonostate\@std\@\@\@std\@\@XZ
     */
    MCVAPI class std::variant<struct HWND__*, struct std::monostate> getRenderSurfaceParameters() const;
    /**
     * @symbol  ?getScreenHeight\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getScreenHeight() const;
    /**
     * @symbol  ?getScreenWidth\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getScreenWidth() const;
    /**
     * @symbol  ?getSecureStorage\@AppPlatform\@\@UEAA?AV?$unique_ptr\@VSecureStorage\@\@U?$default_delete\@VSecureStorage\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class SecureStorage> getSecureStorage();
    /**
     * @symbol  ?getSecureStorageKey\@AppPlatform\@\@UEAA?AVSecureStorageKey\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class SecureStorageKey getSecureStorageKey(std::string const &);
    /**
     * @symbol  ?getSettingsPath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getSettingsPath();
    /**
     * @symbol  ?getShaderCachePath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getShaderCachePath();
    /**
     * @symbol  ?getStoreNetworkFailureTimeout\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getStoreNetworkFailureTimeout() const;
    /**
     * @symbol  ?getThirdPartyPackUUID\@AppPlatform\@\@UEBAAEBVUUID\@mce\@\@XZ
     */
    MCVAPI class mce::UUID const & getThirdPartyPackUUID() const;
    /**
     * @symbol  ?getTotalHardwareThreadsCount\@AppPlatform\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getTotalHardwareThreadsCount() const;
    /**
     * @symbol  ?getUIScalingRules\@AppPlatform\@\@UEBA?AW4UIScalingRules\@\@XZ
     */
    MCVAPI enum class UIScalingRules getUIScalingRules() const;
    /**
     * @symbol  ?getUserInput\@AppPlatform\@\@UEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getUserInput();
    /**
     * @symbol  ?getUserInputStatus\@AppPlatform\@\@UEAAHXZ
     */
    MCVAPI int getUserInputStatus();
    /**
     * @symbol  ?getUserStorageRootPath\@AppPlatform\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getUserStorageRootPath() const;
    /**
     * @symbol  ?getUserdataPathForLevels\@AppPlatform\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getUserdataPathForLevels() const;
    /**
     * @symbol  ?getVRControllerType\@AppPlatform\@\@UEBA?AW4VRControllerType\@\@XZ
     */
    MCVAPI enum class VRControllerType getVRControllerType() const;
    /**
     * @symbol  ?goToExternalConsumablesStoreListing\@AppPlatform\@\@UEBAXXZ
     */
    MCVAPI void goToExternalConsumablesStoreListing() const;
    /**
     * @symbol  ?handlePlatformSpecificCommerceError\@AppPlatform\@\@UEAAXI\@Z
     */
    MCVAPI void handlePlatformSpecificCommerceError(unsigned int);
    /**
     * @symbol  ?hasAssetFile\@AppPlatform\@\@UEAA_NAEBVPath\@Core\@\@\@Z
     */
    MCVAPI bool hasAssetFile(class Core::Path const &);
    /**
     * @symbol  ?hasBuyButtonWhenInvalidLicense\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool hasBuyButtonWhenInvalidLicense();
    /**
     * @symbol  ?hasFastAlphaTest\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool hasFastAlphaTest() const;
    /**
     * @symbol  ?hasIDEProfiler\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool hasIDEProfiler();
    /**
     * @symbol  ?hasJournalingFilesystem\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool hasJournalingFilesystem() const;
    /**
     * @symbol  ?hasPlatformSpecificInvites\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool hasPlatformSpecificInvites() const;
    /**
     * @symbol  ?hasSeparatedStorageAreasForContentAcquisition\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool hasSeparatedStorageAreasForContentAcquisition() const;
    /**
     * @symbol  ?hideSplashScreen\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void hideSplashScreen();
    /**
     * @symbol  ?importAsFlatFile\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool importAsFlatFile() const;
    /**
     * @symbol  ?initAppPlatformNetworkSettings\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void initAppPlatformNetworkSettings();
    /**
     * @symbol  ?initialize\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void initialize();
    /**
     * @symbol  ?initializeGameStreaming\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void initializeGameStreaming();
    /**
     * @symbol  ?initializeScreenDependentResources\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void initializeScreenDependentResources();
    /**
     * @symbol  ?isAutoCompactionEnabled\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isAutoCompactionEnabled() const;
    /**
     * @symbol  ?isCentennial\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isCentennial() const;
    /**
     * @symbol  ?isContentAutoUpdateAllowed\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isContentAutoUpdateAllowed() const;
    /**
     * @symbol  ?isCrossPlatformToggleVisible\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isCrossPlatformToggleVisible() const;
    /**
     * @symbol  ?isDisplayInitialized\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isDisplayInitialized() const;
    /**
     * @symbol  ?isDownloadAndImportBlocking\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isDownloadAndImportBlocking() const;
    /**
     * @symbol  ?isDownloadBuffered\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isDownloadBuffered() const;
    /**
     * @symbol  ?isEduMode\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isEduMode() const;
    /**
     * @symbol  ?isFireTV\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isFireTV() const;
    /**
     * @symbol  ?isJoinableViaExternalServers\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isJoinableViaExternalServers() const;
    /**
     * @symbol  ?isLANAllowed\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isLANAllowed() const;
    /**
     * @symbol  ?isLowMemoryDevice\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isLowMemoryDevice() const;
    /**
     * @symbol  ?isLowPhysicalMemoryDevice\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isLowPhysicalMemoryDevice() const;
    /**
     * @symbol  ?isNetworkAllowed\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isNetworkAllowed() const;
    /**
     * @symbol  ?isNetworkAvailable\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isNetworkAvailable() const;
    /**
     * @symbol  ?isNetworkEnabled\@AppPlatform\@\@UEBA_N_N\@Z
     */
    MCVAPI bool isNetworkEnabled(bool) const;
    /**
     * @symbol  ?isNetworkThrottled\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isNetworkThrottled() const;
    /**
     * @symbol  ?isOnWifiConnectionTelemetryValue\@AppPlatform\@\@UEAA?AV?$optional\@_N\@std\@\@XZ
     */
    MCVAPI class std::optional<bool> isOnWifiConnectionTelemetryValue();
    /**
     * @symbol  ?isQuitCapable\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isQuitCapable() const;
    /**
     * @symbol  ?isRealmsEnabled\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isRealmsEnabled() const;
    /**
     * @symbol  ?isTelemetryAllowed\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool isTelemetryAllowed();
    /**
     * @symbol  ?isTrialWorldsTransferToFullGameAllowed\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isTrialWorldsTransferToFullGameAllowed() const;
    /**
     * @symbol  ?isWebviewSupported\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isWebviewSupported() const;
    /**
     * @symbol  ?isWin10Arm\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isWin10Arm() const;
    /**
     * @symbol  ?launchLegacyVersion\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void launchLegacyVersion();
    /**
     * @symbol  ?launchSettings\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void launchSettings();
    /**
     * @symbol  ?launchUri\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void launchUri(std::string const &);
    /**
     * @symbol  ?listAssetFilesIn\@AppPlatform\@\@UEBA?AV?$set\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@U?$less\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@4\@\@std\@\@AEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCVAPI class std::set<class Core::PathBuffer<std::string>, struct std::less<class Core::PathBuffer<std::string>>, class std::allocator<class Core::PathBuffer<std::string>>> listAssetFilesIn(class Core::Path const &, std::string const &) const;
    /**
     * @symbol  ?maxFileDataRequestConcurrency\@AppPlatform\@\@UEBAIXZ
     */
    MCVAPI unsigned int maxFileDataRequestConcurrency() const;
    /**
     * @symbol  ?minimizeBackgroundDownloads\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool minimizeBackgroundDownloads() const;
    /**
     * @symbol  ?multiplayerRequiresPremiumAccess\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool multiplayerRequiresPremiumAccess() const;
    /**
     * @symbol  ?multiplayerRequiresUGCEnabled\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool multiplayerRequiresUGCEnabled() const;
    /**
     * @symbol  ?notifyControllerConnectionStateChange\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool notifyControllerConnectionStateChange() const;
    /**
     * @symbol  ?notifyNetworkConfigurationChanged\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void notifyNetworkConfigurationChanged();
    /**
     * @symbol  ?onPrimaryUserNetworkReady\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void onPrimaryUserNetworkReady();
    /**
     * @symbol  ?platformRequiresControllerApplet\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool platformRequiresControllerApplet() const;
    /**
     * @symbol  ?readAssetFile\@AppPlatform\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    MCVAPI std::string readAssetFile(class Core::Path const &);
    /**
     * @symbol  ?registerExperimentsActiveCrashDump\@AppPlatform\@\@UEBAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void registerExperimentsActiveCrashDump(std::vector<std::string> const &) const;
    /**
     * @symbol  ?registerFileForCollectionWithCrashDump\@AppPlatform\@\@UEAAXAEBVPath\@Core\@\@\@Z
     */
    MCVAPI void registerFileForCollectionWithCrashDump(class Core::Path const &);
    /**
     * @symbol  ?reloadRenderResourcesOnResume\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool reloadRenderResourcesOnResume() const;
    /**
     * @symbol  ?removeListener\@AppPlatform\@\@UEAAXPEAVAppPlatformListener\@\@\@Z
     */
    MCVAPI void removeListener(class AppPlatformListener *);
    /**
     * @symbol  ?requireControllerAtStartup\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool requireControllerAtStartup() const;
    /**
     * @symbol  ?requiresAutoSaveIconExplanationPopup\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool requiresAutoSaveIconExplanationPopup() const;
    /**
     * @symbol  ?requiresLiveGoldForMultiplayer\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool requiresLiveGoldForMultiplayer() const;
    /**
     * @symbol  ?requiresPatchNoticePopup\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool requiresPatchNoticePopup() const;
    /**
     * @symbol  ?requiresXboxLiveSigninToPlay\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool requiresXboxLiveSigninToPlay() const;
    /**
     * @symbol  ?restartApp\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void restartApp(bool);
    /**
     * @symbol  ?restartRequested\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool restartRequested();
    /**
     * @symbol  ?setARVRPlatform\@AppPlatform\@\@UEAAXW4ARVRPlatform\@\@\@Z
     */
    MCVAPI void setARVRPlatform(enum class ARVRPlatform);
    /**
     * @symbol  ?setDpi\@AppPlatform\@\@UEAAXH\@Z
     */
    MCVAPI void setDpi(int);
    /**
     * @symbol  ?setFullscreenMode\@AppPlatform\@\@UEAAXW4FullscreenMode\@\@\@Z
     */
    MCVAPI void setFullscreenMode(enum class FullscreenMode);
    /**
     * @symbol  ?setKeepScreenOnFlag\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void setKeepScreenOnFlag(bool);
    /**
     * @symbol  ?setNetworkAllowed\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void setNetworkAllowed(bool);
    /**
     * @symbol  ?setNetworkConnectionType\@AppPlatform\@\@UEAAXW4NetworkConnectionType\@\@\@Z
     */
    MCVAPI void setNetworkConnectionType(enum class NetworkConnectionType);
    /**
     * @symbol  ?setScreenSize\@AppPlatform\@\@UEAAXHH\@Z
     */
    MCVAPI void setScreenSize(int, int);
    /**
     * @symbol  ?setSecureStorageKey\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSecureStorageKey\@\@\@Z
     */
    MCVAPI void setSecureStorageKey(std::string const &, class SecureStorageKey const &);
    /**
     * @symbol  ?setSleepEnabled\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void setSleepEnabled(bool);
    /**
     * @symbol  ?setThreadsFrozen\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void setThreadsFrozen(bool);
    /**
     * @symbol  ?setUIScalingRules\@AppPlatform\@\@UEAAXW4UIScalingRules\@\@\@Z
     */
    MCVAPI void setUIScalingRules(enum class UIScalingRules);
    /**
     * @symbol  ?setVRControllerType\@AppPlatform\@\@UEAAXW4VRControllerType\@\@\@Z
     */
    MCVAPI void setVRControllerType(enum class VRControllerType);
    /**
     * @symbol  ?setWindowSize\@AppPlatform\@\@UEAAXHH\@Z
     */
    MCVAPI void setWindowSize(int, int);
    /**
     * @symbol  ?setWindowText\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void setWindowText(std::string const &);
    /**
     * @symbol  ?shouldPauseDownloadsWhenEnterGame\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool shouldPauseDownloadsWhenEnterGame() const;
    /**
     * @symbol  ?shouldRegisterForXboxLiveNotifications\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool shouldRegisterForXboxLiveNotifications() const;
    /**
     * @symbol  ?shouldRemoveGraphicsDeviceOnAppTermination\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool shouldRemoveGraphicsDeviceOnAppTermination() const;
    /**
     * @symbol  ?showDialog\@AppPlatform\@\@UEAAXH\@Z
     */
    MCVAPI void showDialog(int);
    /**
     * @symbol  ?showPlatformEmptyStoreDialog\@AppPlatform\@\@UEAAX$$QEAV?$function\@$$A6AX_N\@Z\@std\@\@\@Z
     */
    MCVAPI void showPlatformEmptyStoreDialog(class std::function<void (bool)> &&);
    /**
     * @symbol  ?showPlatformStoreIcon\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void showPlatformStoreIcon(bool);
    /**
     * @symbol  ?supportsAutoSaveOnDBCompaction\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsAutoSaveOnDBCompaction() const;
    /**
     * @symbol  ?supportsClientUpdate\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsClientUpdate() const;
    /**
     * @symbol  ?supportsDayOneExperience\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsDayOneExperience() const;
    /**
     * @symbol  ?supportsFliteTTS\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsFliteTTS() const;
    /**
     * @symbol  ?supportsInPackageRecursion\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsInPackageRecursion() const;
    /**
     * @symbol  ?supportsLaunchingLegacyVersion\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsLaunchingLegacyVersion() const;
    /**
     * @symbol  ?supportsLegacySinglePremiumCacheDirectory\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsLegacySinglePremiumCacheDirectory() const;
    /**
     * @symbol  ?supportsVRModeSwap\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsVRModeSwap() const;
    /**
     * @symbol  ?supportsVibration\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsVibration() const;
    /**
     * @symbol  ?supportsWorldShare\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsWorldShare() const;
    /**
     * @symbol  ?supportsXboxLiveAchievements\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsXboxLiveAchievements() const;
    /**
     * @symbol  ?teardown\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void teardown();
    /**
     * @symbol  ?trackPurchaseEvent\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0000000\@Z
     */
    MCVAPI void trackPurchaseEvent(std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @symbol  ?tryEnterVRMode\@AppPlatform\@\@UEAAX_NV?$function\@$$A6AX_N\@Z\@std\@\@\@Z
     */
    MCVAPI void tryEnterVRMode(bool, class std::function<void (bool)>);
    /**
     * @symbol  ?updateLocalization\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void updateLocalization(std::string const &);
    /**
     * @symbol  ?updateTextBoxText\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void updateTextBoxText(std::string const &);
    /**
     * @symbol  ?useAppPlatformForTelemetryIPAddress\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool useAppPlatformForTelemetryIPAddress();
    /**
     * @symbol  ?useNativeStoreForRealmsPurchase\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool useNativeStoreForRealmsPurchase();
    /**
     * @symbol  ?usePlatformProfilePicturesOnly\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool usePlatformProfilePicturesOnly() const;
    /**
     * @symbol  ?useXboxControlHelpers\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool useXboxControlHelpers() const;
    /**
     * @symbol  ?usesAsyncOptionSaving\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool usesAsyncOptionSaving() const;
    /**
     * @symbol  ?usesHDRBrightness\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool usesHDRBrightness() const;
    /**
     * @symbol  ?vibrate\@AppPlatform\@\@UEAAXH\@Z
     */
    MCVAPI void vibrate(int);
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~AppPlatform();
#endif
    /**
     * @symbol  ??0AppPlatform\@\@QEAA\@_N\@Z
     */
    MCAPI AppPlatform(bool);
    /**
     * @symbol  ?_fireAppTerminated\@AppPlatform\@\@QEAAXXZ
     */
    MCAPI void _fireAppTerminated();
    /**
     * @symbol  ?accessPlatformRuntimeInformation_Shim\@AppPlatform\@\@QEAAAEAV?$unique_ptr\@UPlatformRuntimeInfo\@Bedrock\@\@U?$default_delete\@UPlatformRuntimeInfo\@Bedrock\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo> & accessPlatformRuntimeInformation_Shim();
    /**
     * @symbol  ?getCurrentStoragePath\@AppPlatform\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getCurrentStoragePath() const;
    /**
     * @symbol  ?getInternalStoragePath\@AppPlatform\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getInternalStoragePath() const;
    /**
     * @symbol  ?getPlatformRuntimeInformation\@AppPlatform\@\@QEBAAEBV?$unique_ptr\@UPlatformRuntimeInfo\@Bedrock\@\@U?$default_delete\@UPlatformRuntimeInfo\@Bedrock\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo> const & getPlatformRuntimeInformation() const;
    /**
     * @symbol  ?getProxyResolver\@AppPlatform\@\@QEAA?AV?$not_null\@V?$NonOwnerPointer\@VIProxyResolver\@Http\@Bedrock\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class Bedrock::Http::IProxyResolver>> getProxyResolver();
    /**
     * @symbol  ?getScratchPath\@AppPlatform\@\@QEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getScratchPath();
    /**
     * @symbol  ?getUserdataPath\@AppPlatform\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getUserdataPath() const;
    /**
     * @symbol  ?isTerminating\@AppPlatform\@\@QEBA_NXZ
     */
    MCAPI bool isTerminating() const;
    /**
     * @symbol  ?notifyUserStorageInitialized\@AppPlatform\@\@QEAAXXZ
     */
    MCAPI void notifyUserStorageInitialized();
    /**
     * @symbol  ?HOME_PATH\@AppPlatform\@\@2V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const HOME_PATH;
    /**
     * @symbol  ?LOG_PATH\@AppPlatform\@\@2V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const LOG_PATH;
    /**
     * @symbol  ?SETTINGS_PATH\@AppPlatform\@\@2V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const SETTINGS_PATH;

//protected:

//private:
    /**
     * @symbol  ?_initializeLoadProfiler\@AppPlatform\@\@AEAAXXZ
     */
    MCAPI void _initializeLoadProfiler();

protected:
    /**
     * @symbol  ?SHADERCACHE_PATH\@AppPlatform\@\@1V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const SHADERCACHE_PATH;

private:
    /**
     * @symbol  ?mIsInitialized\@AppPlatform\@\@0_NA
     */
    MCAPI static bool mIsInitialized;

};