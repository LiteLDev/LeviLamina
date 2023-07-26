#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct PlatformRuntimeInfo; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { enum class FileAccessType; }
namespace Social { class MultiplayerService; }
namespace Social { enum class MultiplayerServiceIdentifier; }
namespace Webview { class PlatformArguments; }
namespace mce { class UUID; }
// clang-format on

class AppPlatform {
public:
    // AppPlatform inner types declare
    // clang-format off
    struct AndroidScopedStorageInfo;
    // clang-format on

    // AppPlatform inner types define
    struct AndroidScopedStorageInfo {

    public:
        // prevent constructor by default
        AndroidScopedStorageInfo& operator=(AndroidScopedStorageInfo const&) = delete;
        AndroidScopedStorageInfo(AndroidScopedStorageInfo const&)            = delete;
        AndroidScopedStorageInfo()                                           = delete;

    public:
        /**
         * @symbol ??1AndroidScopedStorageInfo\@AppPlatform\@\@QEAA\@XZ
         */
        MCAPI ~AndroidScopedStorageInfo(); // NOLINT
    };

public:
    // prevent constructor by default
    AppPlatform& operator=(AppPlatform const&) = delete;
    AppPlatform(AppPlatform const&)            = delete;
    AppPlatform()                              = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPPLATFORM
    /**
     * @symbol ?_disableCPUBoost\@AppPlatform\@\@MEAAXXZ
     */
    MCVAPI void _disableCPUBoost(); // NOLINT
    /**
     * @symbol ?_initializeFileStorageAreas\@AppPlatform\@\@MEAAXXZ
     */
    MCVAPI void _initializeFileStorageAreas(); // NOLINT
    /**
     * @symbol ?_onInitialize\@AppPlatform\@\@EEAAXXZ
     */
    MCVAPI void _onInitialize(); // NOLINT
    /**
     * @symbol ?_onTeardown\@AppPlatform\@\@EEAAXXZ
     */
    MCVAPI void _onTeardown(); // NOLINT
    /**
     * @symbol ?_teardownFileStorageAreas\@AppPlatform\@\@MEAAXXZ
     */
    MCVAPI void _teardownFileStorageAreas(); // NOLINT
    /**
     * @symbol ?_tryEnableCPUBoost\@AppPlatform\@\@MEAA_NXZ
     */
    MCVAPI bool _tryEnableCPUBoost(); // NOLINT
    /**
     * @symbol ?addListener\@AppPlatform\@\@UEAAXPEAVAppPlatformListener\@\@M\@Z
     */
    MCVAPI void addListener(class AppPlatformListener*, float); // NOLINT
    /**
     * @symbol ?allowBetaXblSignIn\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool allowBetaXblSignIn() const; // NOLINT
    /**
     * @symbol ?allowContentLogWriteToDisk\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool allowContentLogWriteToDisk(); // NOLINT
    /**
     * @symbol ?allowsResourcePackDevelopment\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool allowsResourcePackDevelopment() const; // NOLINT
    /**
     * @symbol ?alwaysUseZippedPacksForDlc\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool alwaysUseZippedPacksForDlc() const; // NOLINT
    /**
     * @symbol ?areThreadsFrozen\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool areThreadsFrozen() const; // NOLINT
    /**
     * @symbol ?buyGame\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void buyGame(); // NOLINT
    /**
     * @symbol ?calculateIfLowMemoryDevice\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void calculateIfLowMemoryDevice(); // NOLINT
    /**
     * @symbol
     * ?canLaunchUri\@AppPlatform\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool canLaunchUri(std::string const&); // NOLINT
    /**
     * @symbol ?canManageLegacyData\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool canManageLegacyData() const; // NOLINT
    /**
     * @symbol ?canSwapVRMode\@AppPlatform\@\@UEBA_N_N\@Z
     */
    MCVAPI bool canSwapVRMode(bool) const; // NOLINT
    /**
     * @symbol ?checkLicense\@AppPlatform\@\@UEAAHXZ
     */
    MCVAPI int checkLicense(); // NOLINT
    /**
     * @symbol ?collectGraphicsHardwareDetails\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void collectGraphicsHardwareDetails(); // NOLINT
    /**
     * @symbol
     * ?compareAppReceiptToLocalReceipt\@AppPlatform\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool compareAppReceiptToLocalReceipt(std::string const&); // NOLINT
    /**
     * @symbol ?copyAssetFile\@AppPlatform\@\@UEAA_NAEBVPath\@Core\@\@0\@Z
     */
    MCVAPI bool copyAssetFile(class Core::Path const&, class Core::Path const&); // NOLINT
    /**
     * @symbol
     * ?copyImportFileToTempFolder\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const&); // NOLINT
    /**
     * @symbol
     * ?createLoggingStorageArea\@AppPlatform\@\@UEAA?AV?$shared_ptr\@VFileStorageArea\@Core\@\@\@std\@\@W4FileAccessType\@Core\@\@AEBVPath\@5\@\@Z
     */
    MCVAPI class std::shared_ptr<class Core::FileStorageArea>
    createLoggingStorageArea(enum class Core::FileAccessType, class Core::Path const&); // NOLINT
    /**
     * @symbol ?createUserInput\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void createUserInput(); // NOLINT
    /**
     * @symbol ?createUserInput\@AppPlatform\@\@UEAAXH\@Z
     */
    MCVAPI void createUserInput(int); // NOLINT
    /**
     * @symbol
     * ?createWebview\@AppPlatform\@\@UEBA?AV?$shared_ptr\@VWebviewInterface\@\@\@std\@\@$$QEAVPlatformArguments\@Webview\@\@\@Z
     */
    MCVAPI class std::shared_ptr<class WebviewInterface>
    createWebview(class Webview::PlatformArguments&&) const; // NOLINT
    /**
     * @symbol ?doesLANRequireMultiplayerRestrictions\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool doesLANRequireMultiplayerRestrictions() const; // NOLINT
    /**
     * @symbol ?exitVRMode\@AppPlatform\@\@UEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCVAPI void exitVRMode(class std::function<void(void)>); // NOLINT
    /**
     * @symbol ?finish\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void finish(); // NOLINT
    /**
     * @symbol ?getARVRPlatform\@AppPlatform\@\@UEBA?AW4ARVRPlatform\@\@XZ
     */
    MCVAPI enum class ARVRPlatform getARVRPlatform() const; // NOLINT
    /**
     * @symbol ?getAndroidScopedStorageInfo\@AppPlatform\@\@UEBAAEBUAndroidScopedStorageInfo\@1\@XZ
     */
    MCVAPI struct AppPlatform::AndroidScopedStorageInfo const& getAndroidScopedStorageInfo() const; // NOLINT
    /**
     * @symbol ?getAppLifecycleContext\@AppPlatform\@\@UEAAAEAVAppLifecycleContext\@\@XZ
     */
    MCVAPI class AppLifecycleContext& getAppLifecycleContext(); // NOLINT
    /**
     * @symbol
     * ?getAssetFileFullPath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCVAPI class Core::PathBuffer<std::string> getAssetFileFullPath(class Core::Path const&); // NOLINT
    /**
     * @symbol
     * ?getBroadcastAddresses\@AppPlatform\@\@UEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getBroadcastAddresses(); // NOLINT
    /**
     * @symbol
     * ?getBroadcastingMultiplayerServiceIds\@AppPlatform\@\@UEBA?AV?$vector\@W4MultiplayerServiceIdentifier\@Social\@\@V?$allocator\@W4MultiplayerServiceIdentifier\@Social\@\@\@std\@\@\@std\@\@_N0\@Z
     */
    MCVAPI std::vector<enum class Social::MultiplayerServiceIdentifier>
           getBroadcastingMultiplayerServiceIds(bool, bool) const; // NOLINT
    /**
     * @symbol ?getBuildPlatform\@AppPlatform\@\@UEBA?AW4BuildPlatform\@\@XZ
     */
    MCVAPI enum class BuildPlatform getBuildPlatform() const; // NOLINT
    /**
     * @symbol
     * ?getCacheStoragePath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getCacheStoragePath(); // NOLINT
    /**
     * @symbol
     * ?getCatalogSearchScratchPath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getCatalogSearchScratchPath(); // NOLINT
    /**
     * @symbol
     * ?getClientUpdateUrl\@AppPlatform\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getClientUpdateUrl() const; // NOLINT
    /**
     * @symbol ?getDefaultInputMode\@AppPlatform\@\@UEBA?AW4InputMode\@\@XZ
     */
    MCVAPI enum class InputMode getDefaultInputMode() const; // NOLINT
    /**
     * @symbol ?getDefaultNetworkMaxPlayers\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getDefaultNetworkMaxPlayers() const; // NOLINT
    /**
     * @symbol ?getDefaultSafeZoneScaleAll\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getDefaultSafeZoneScaleAll() const; // NOLINT
    /**
     * @symbol ?getDefaultSafeZoneScaleX\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getDefaultSafeZoneScaleX() const; // NOLINT
    /**
     * @symbol ?getDefaultSafeZoneScaleY\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getDefaultSafeZoneScaleY() const; // NOLINT
    /**
     * @symbol ?getDefaultScreenPositionX\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getDefaultScreenPositionX() const; // NOLINT
    /**
     * @symbol ?getDefaultScreenPositionY\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getDefaultScreenPositionY() const; // NOLINT
    /**
     * @symbol ?getDeviceSunsetTier\@AppPlatform\@\@UEBA?AW4DeviceSunsetTier\@\@XZ
     */
    MCVAPI enum class DeviceSunsetTier getDeviceSunsetTier() const; // NOLINT
    /**
     * @symbol ?getDisplayHeight\@AppPlatform\@\@UEAAHXZ
     */
    MCVAPI int getDisplayHeight(); // NOLINT
    /**
     * @symbol ?getDisplayWidth\@AppPlatform\@\@UEAAHXZ
     */
    MCVAPI int getDisplayWidth(); // NOLINT
    /**
     * @symbol ?getDpi\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getDpi() const; // NOLINT
    /**
     * @symbol
     * ?getEdition\@AppPlatform\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getEdition() const; // NOLINT
    /**
     * @symbol
     * ?getExtraLevelSaveDataIconParams\@AppPlatform\@\@UEBA?AV?$optional\@UScreenshotOptions\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCVAPI class std::optional<struct ScreenshotOptions>
    getExtraLevelSaveDataIconParams(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?getFeedbackBugsLink\@AppPlatform\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getFeedbackBugsLink() const; // NOLINT
    /**
     * @symbol
     * ?getFeedbackHelpLink\@AppPlatform\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getFeedbackHelpLink() const; // NOLINT
    /**
     * @symbol
     * ?getFileAccess\@AppPlatform\@\@UEAA?AV?$not_null\@V?$NonOwnerPointer\@VIFileAccess\@\@\@Bedrock\@\@\@gsl\@\@W4ResourceFileSystem\@\@\@Z
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class IFileAccess>>
        getFileAccess(enum class ResourceFileSystem); // NOLINT
    /**
     * @symbol ?getFocusState\@AppPlatform\@\@UEAA?AW4AppFocusState\@\@XZ
     */
    MCVAPI enum class AppFocusState getFocusState(); // NOLINT
    /**
     * @symbol ?getHighPerformanceThreadsCount\@AppPlatform\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getHighPerformanceThreadsCount() const; // NOLINT
    /**
     * @symbol
     * ?getIPAddresses\@AppPlatform\@\@UEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getIPAddresses(); // NOLINT
    /**
     * @symbol
     * ?getInternalPackStoragePath\@AppPlatform\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getInternalPackStoragePath() const; // NOLINT
    /**
     * @symbol ?getIsRunningInAppCenter\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool getIsRunningInAppCenter() const; // NOLINT
    /**
     * @symbol
     * ?getLevelInfoCachePath\@AppPlatform\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getLevelInfoCachePath() const; // NOLINT
    /**
     * @symbol
     * ?getLevelSaveInterval\@AppPlatform\@\@UEBA?AV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@XZ
     */
    MCVAPI class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>
    getLevelSaveInterval() const; // NOLINT
    /**
     * @symbol
     * ?getLoggingPath\@AppPlatform\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getLoggingPath() const; // NOLINT
    /**
     * @symbol ?getLowPhysicalMemoryThreshold\@AppPlatform\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getLowPhysicalMemoryThreshold() const; // NOLINT
    /**
     * @symbol ?getMaxLDBFilesOpen\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getMaxLDBFilesOpen() const; // NOLINT
    /**
     * @symbol ?getMaxSimRadiusInChunks\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getMaxSimRadiusInChunks() const; // NOLINT
    /**
     * @symbol ?getMaxSimultaneousDownloads\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getMaxSimultaneousDownloads() const; // NOLINT
    /**
     * @symbol ?getMaxSimultaneousServiceRequests\@AppPlatform\@\@UEBAIXZ
     */
    MCVAPI unsigned int getMaxSimultaneousServiceRequests() const; // NOLINT
    /**
     * @symbol ?getMaximumUsedMemory\@AppPlatform\@\@UEAA_KXZ
     */
    MCVAPI unsigned __int64 getMaximumUsedMemory(); // NOLINT
    /**
     * @symbol
     * ?getModalErrorMessageProc\@AppPlatform\@\@UEAAP6A?AW4AssertDialogResponse\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@ZXZ
     */
    MCVAPI enum class AssertDialogResponse (*)(std::string const&, std::string const&)
        getModalErrorMessageProc(); // NOLINT
    /**
     * @symbol
     * ?getModelName\@AppPlatform\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getModelName(); // NOLINT
    /**
     * @symbol
     * ?getMultiplayerServiceListToRegister\@AppPlatform\@\@UEBA?AV?$vector\@V?$shared_ptr\@VMultiplayerService\@Social\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VMultiplayerService\@Social\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<class std::shared_ptr<class Social::MultiplayerService>>
           getMultiplayerServiceListToRegister() const; // NOLINT
    /**
     * @symbol ?getNetworkConnectionType\@AppPlatform\@\@UEAA?AW4NetworkConnectionType\@\@XZ
     */
    MCVAPI enum class NetworkConnectionType getNetworkConnectionType(); // NOLINT
    /**
     * @symbol ?getNumberOfParticleFramesToInterpolate\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getNumberOfParticleFramesToInterpolate() const; // NOLINT
    /**
     * @symbol ?getOSVersion\@AppPlatform\@\@UEBA?AW4OsVersion\@\@XZ
     */
    MCVAPI enum class OsVersion getOSVersion() const; // NOLINT
    /**
     * @symbol
     * ?getOnDiskPackScratchPath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getOnDiskPackScratchPath(); // NOLINT
    /**
     * @symbol
     * ?getOnDiskScratchPath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getOnDiskScratchPath(); // NOLINT
    /**
     * @symbol ?getOperationMode\@AppPlatform\@\@UEBA?AV?$optional\@W4OperationMode\@\@\@std\@\@XZ
     */
    MCVAPI class std::optional<enum class OperationMode> getOperationMode() const; // NOLINT
    /**
     * @symbol ?getOptimalLDBSize\@AppPlatform\@\@UEAA_KXZ
     */
    MCVAPI unsigned __int64 getOptimalLDBSize(); // NOLINT
    /**
     * @symbol
     * ?getOptionsSaveInterval\@AppPlatform\@\@UEBA?AV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@XZ
     */
    MCVAPI class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>
    getOptionsSaveInterval() const; // NOLINT
    /**
     * @symbol
     * ?getPackageFamilyName\@AppPlatform\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getPackageFamilyName() const; // NOLINT
    /**
     * @symbol
     * ?getPackagedShaderCachePath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath(); // NOLINT
    /**
     * @symbol ?getPixelsPerMillimeter\@AppPlatform\@\@UEAAMXZ
     */
    MCVAPI float getPixelsPerMillimeter(); // NOLINT
    /**
     * @symbol ?getPlatformDpi\@AppPlatform\@\@EEBAHXZ
     */
    MCVAPI int getPlatformDpi() const; // NOLINT
    /**
     * @symbol
     * ?getPlatformStringVar\@AppPlatform\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCVAPI std::string getPlatformStringVar(int); // NOLINT
    /**
     * @symbol ?getPlatformTTSEnabled\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSEnabled() const; // NOLINT
    /**
     * @symbol ?getPlatformTTSExists\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSExists() const; // NOLINT
    /**
     * @symbol ?getPlatformType\@AppPlatform\@\@UEBA?AW4PlatformType\@\@XZ
     */
    MCVAPI enum class PlatformType getPlatformType() const; // NOLINT
    /**
     * @symbol ?getPlatformUIScalingRules\@AppPlatform\@\@EEBA?AW4UIScalingRules\@\@XZ
     */
    MCVAPI enum class UIScalingRules getPlatformUIScalingRules() const; // NOLINT
    /**
     * @symbol
     * ?getRenderSurfaceParameters\@AppPlatform\@\@UEBA?AV?$variant\@PEAUHWND__\@\@Umonostate\@std\@\@\@std\@\@XZ
     */
    MCVAPI class std::variant<struct HWND__*, struct std::monostate> getRenderSurfaceParameters() const; // NOLINT
    /**
     * @symbol ?getScreenHeight\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getScreenHeight() const; // NOLINT
    /**
     * @symbol ?getScreenWidth\@AppPlatform\@\@UEBAHXZ
     */
    MCVAPI int getScreenWidth() const; // NOLINT
    /**
     * @symbol
     * ?getSecureStorage\@AppPlatform\@\@UEAA?AV?$unique_ptr\@VSecureStorage\@\@U?$default_delete\@VSecureStorage\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class SecureStorage> getSecureStorage(); // NOLINT
    /**
     * @symbol
     * ?getSecureStorageKey\@AppPlatform\@\@UEAA?AVSecureStorageKey\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class SecureStorageKey getSecureStorageKey(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getSettingsPath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getSettingsPath(); // NOLINT
    /**
     * @symbol
     * ?getShaderCachePath\@AppPlatform\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getShaderCachePath(); // NOLINT
    /**
     * @symbol ?getStoreNetworkFailureTimeout\@AppPlatform\@\@UEBAMXZ
     */
    MCVAPI float getStoreNetworkFailureTimeout() const; // NOLINT
    /**
     * @symbol ?getThirdPartyPackUUID\@AppPlatform\@\@UEBAAEBVUUID\@mce\@\@XZ
     */
    MCVAPI class mce::UUID const& getThirdPartyPackUUID() const; // NOLINT
    /**
     * @symbol ?getTotalHardwareThreadsCount\@AppPlatform\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getTotalHardwareThreadsCount() const; // NOLINT
    /**
     * @symbol ?getUIScalingRules\@AppPlatform\@\@UEBA?AW4UIScalingRules\@\@XZ
     */
    MCVAPI enum class UIScalingRules getUIScalingRules() const; // NOLINT
    /**
     * @symbol
     * ?getUserInput\@AppPlatform\@\@UEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getUserInput(); // NOLINT
    /**
     * @symbol ?getUserInputStatus\@AppPlatform\@\@UEAAHXZ
     */
    MCVAPI int getUserInputStatus(); // NOLINT
    /**
     * @symbol
     * ?getUserStorageRootPath\@AppPlatform\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getUserStorageRootPath() const; // NOLINT
    /**
     * @symbol
     * ?getUserdataPathForLevels\@AppPlatform\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getUserdataPathForLevels() const; // NOLINT
    /**
     * @symbol ?getVRControllerType\@AppPlatform\@\@UEBA?AW4VRControllerType\@\@XZ
     */
    MCVAPI enum class VRControllerType getVRControllerType() const; // NOLINT
    /**
     * @symbol ?goToExternalConsumablesStoreListing\@AppPlatform\@\@UEBAXXZ
     */
    MCVAPI void goToExternalConsumablesStoreListing() const; // NOLINT
    /**
     * @symbol ?handlePlatformSpecificCommerceError\@AppPlatform\@\@UEAAXI\@Z
     */
    MCVAPI void handlePlatformSpecificCommerceError(unsigned int); // NOLINT
    /**
     * @symbol ?hasAssetFile\@AppPlatform\@\@UEAA_NAEBVPath\@Core\@\@\@Z
     */
    MCVAPI bool hasAssetFile(class Core::Path const&); // NOLINT
    /**
     * @symbol ?hasBuyButtonWhenInvalidLicense\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool hasBuyButtonWhenInvalidLicense(); // NOLINT
    /**
     * @symbol ?hasFastAlphaTest\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool hasFastAlphaTest() const; // NOLINT
    /**
     * @symbol ?hasIDEProfiler\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool hasIDEProfiler(); // NOLINT
    /**
     * @symbol ?hasJournalingFilesystem\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool hasJournalingFilesystem() const; // NOLINT
    /**
     * @symbol ?hasMulticastReceivePermission\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool hasMulticastReceivePermission() const; // NOLINT
    /**
     * @symbol ?hasPlatformSpecificInvites\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool hasPlatformSpecificInvites() const; // NOLINT
    /**
     * @symbol ?hasSeparatedStorageAreasForContentAcquisition\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool hasSeparatedStorageAreasForContentAcquisition() const; // NOLINT
    /**
     * @symbol ?hideSplashScreen\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void hideSplashScreen(); // NOLINT
    /**
     * @symbol ?importAsFlatFile\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool importAsFlatFile() const; // NOLINT
    /**
     * @symbol ?initAppPlatformNetworkSettings\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void initAppPlatformNetworkSettings(); // NOLINT
    /**
     * @symbol ?initialize\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void initialize(); // NOLINT
    /**
     * @symbol ?initializeGameStreaming\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void initializeGameStreaming(); // NOLINT
    /**
     * @symbol ?initializeMulticast\@AppPlatform\@\@UEBAXXZ
     */
    MCVAPI void initializeMulticast() const; // NOLINT
    /**
     * @symbol ?initializeScreenDependentResources\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void initializeScreenDependentResources(); // NOLINT
    /**
     * @symbol ?isAutoCompactionEnabled\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isAutoCompactionEnabled() const; // NOLINT
    /**
     * @symbol ?isCentennial\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isCentennial() const; // NOLINT
    /**
     * @symbol ?isContentAutoUpdateAllowed\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isContentAutoUpdateAllowed() const; // NOLINT
    /**
     * @symbol ?isCrossPlatformToggleVisible\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isCrossPlatformToggleVisible() const; // NOLINT
    /**
     * @symbol ?isDisplayInitialized\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isDisplayInitialized() const; // NOLINT
    /**
     * @symbol ?isDownloadAndImportBlocking\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isDownloadAndImportBlocking() const; // NOLINT
    /**
     * @symbol ?isDownloadBuffered\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isDownloadBuffered() const; // NOLINT
    /**
     * @symbol ?isEduMode\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isEduMode() const; // NOLINT
    /**
     * @symbol ?isFireTV\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isFireTV() const; // NOLINT
    /**
     * @symbol ?isInternetAvailable\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isInternetAvailable() const; // NOLINT
    /**
     * @symbol ?isJoinableViaExternalServers\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isJoinableViaExternalServers() const; // NOLINT
    /**
     * @symbol ?isLANAllowed\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isLANAllowed() const; // NOLINT
    /**
     * @symbol ?isLANAvailable\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isLANAvailable() const; // NOLINT
    /**
     * @symbol ?isLowMemoryDevice\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isLowMemoryDevice() const; // NOLINT
    /**
     * @symbol ?isLowPhysicalMemoryDevice\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isLowPhysicalMemoryDevice() const; // NOLINT
    /**
     * @symbol ?isNetworkAllowed\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isNetworkAllowed() const; // NOLINT
    /**
     * @symbol ?isNetworkAvailable\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isNetworkAvailable() const; // NOLINT
    /**
     * @symbol ?isNetworkEnabled\@AppPlatform\@\@UEBA_N_N\@Z
     */
    MCVAPI bool isNetworkEnabled(bool) const; // NOLINT
    /**
     * @symbol ?isNetworkThrottled\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isNetworkThrottled() const; // NOLINT
    /**
     * @symbol ?isOnWifiConnectionTelemetryValue\@AppPlatform\@\@UEAA?AV?$optional\@_N\@std\@\@XZ
     */
    MCVAPI class std::optional<bool> isOnWifiConnectionTelemetryValue(); // NOLINT
    /**
     * @symbol ?isQuitCapable\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isQuitCapable() const; // NOLINT
    /**
     * @symbol ?isRealmsEnabled\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isRealmsEnabled() const; // NOLINT
    /**
     * @symbol ?isTelemetryAllowed\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool isTelemetryAllowed(); // NOLINT
    /**
     * @symbol ?isTrialWorldsTransferToFullGameAllowed\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isTrialWorldsTransferToFullGameAllowed() const; // NOLINT
    /**
     * @symbol ?isWebviewSupported\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isWebviewSupported() const; // NOLINT
    /**
     * @symbol ?isWin10Arm\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool isWin10Arm() const; // NOLINT
    /**
     * @symbol ?launchLegacyVersion\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void launchLegacyVersion(); // NOLINT
    /**
     * @symbol ?launchSettings\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void launchSettings(); // NOLINT
    /**
     * @symbol
     * ?launchUri\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void launchUri(std::string const&); // NOLINT
    /**
     * @symbol
     * ?listAssetFilesIn\@AppPlatform\@\@UEBA?AV?$set\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@U?$less\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@4\@\@std\@\@AEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCVAPI class std::set<
        class Core::PathBuffer<std::string>,
        struct std::less<class Core::PathBuffer<std::string>>,
        class std::allocator<class Core::PathBuffer<std::string>>>
    listAssetFilesIn(class Core::Path const&, std::string const&) const; // NOLINT
    /**
     * @symbol ?maxFileDataRequestConcurrency\@AppPlatform\@\@UEBAIXZ
     */
    MCVAPI unsigned int maxFileDataRequestConcurrency() const; // NOLINT
    /**
     * @symbol ?minimizeBackgroundDownloads\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool minimizeBackgroundDownloads() const; // NOLINT
    /**
     * @symbol ?multiplayerRequiresPremiumAccess\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool multiplayerRequiresPremiumAccess() const; // NOLINT
    /**
     * @symbol ?multiplayerRequiresUGCEnabled\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool multiplayerRequiresUGCEnabled() const; // NOLINT
    /**
     * @symbol ?notifyControllerConnectionStateChange\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool notifyControllerConnectionStateChange() const; // NOLINT
    /**
     * @symbol ?notifyNetworkConfigurationChanged\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void notifyNetworkConfigurationChanged(); // NOLINT
    /**
     * @symbol ?onMinecraftGameInitComplete\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void onMinecraftGameInitComplete(); // NOLINT
    /**
     * @symbol ?onPrimaryUserNetworkReady\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void onPrimaryUserNetworkReady(); // NOLINT
    /**
     * @symbol ?platformRequiresControllerApplet\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool platformRequiresControllerApplet() const; // NOLINT
    /**
     * @symbol
     * ?readAssetFile\@AppPlatform\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    MCVAPI std::string readAssetFile(class Core::Path const&); // NOLINT
    /**
     * @symbol
     * ?registerExperimentsActiveCrashDump\@AppPlatform\@\@UEBAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void registerExperimentsActiveCrashDump(std::vector<std::string> const&) const; // NOLINT
    /**
     * @symbol ?registerFileForCollectionWithCrashDump\@AppPlatform\@\@UEAAXAEBVPath\@Core\@\@\@Z
     */
    MCVAPI void registerFileForCollectionWithCrashDump(class Core::Path const&); // NOLINT
    /**
     * @symbol ?releaseMulticastReceivePermission\@AppPlatform\@\@UEBAXXZ
     */
    MCVAPI void releaseMulticastReceivePermission() const; // NOLINT
    /**
     * @symbol ?reloadRenderResourcesOnResume\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool reloadRenderResourcesOnResume() const; // NOLINT
    /**
     * @symbol ?removeListener\@AppPlatform\@\@UEAAXPEAVAppPlatformListener\@\@\@Z
     */
    MCVAPI void removeListener(class AppPlatformListener*); // NOLINT
    /**
     * @symbol ?requestMulticastReceivePermission\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void requestMulticastReceivePermission(); // NOLINT
    /**
     * @symbol ?requireControllerAtStartup\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool requireControllerAtStartup() const; // NOLINT
    /**
     * @symbol ?requiresAutoSaveIconExplanationPopup\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool requiresAutoSaveIconExplanationPopup() const; // NOLINT
    /**
     * @symbol ?requiresLiveGoldForMultiplayer\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool requiresLiveGoldForMultiplayer() const; // NOLINT
    /**
     * @symbol ?requiresXboxLiveSigninToPlay\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool requiresXboxLiveSigninToPlay() const; // NOLINT
    /**
     * @symbol ?restartApp\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void restartApp(bool); // NOLINT
    /**
     * @symbol ?restartRequested\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool restartRequested(); // NOLINT
    /**
     * @symbol ?sendIntegrityCheckTelemetry\@AppPlatform\@\@UEAAXAEAVIMinecraftEventing\@\@\@Z
     */
    MCVAPI void sendIntegrityCheckTelemetry(class IMinecraftEventing&); // NOLINT
    /**
     * @symbol ?setARVRPlatform\@AppPlatform\@\@UEAAXW4ARVRPlatform\@\@\@Z
     */
    MCVAPI void setARVRPlatform(enum class ARVRPlatform); // NOLINT
    /**
     * @symbol ?setDpi\@AppPlatform\@\@UEAAXH\@Z
     */
    MCVAPI void setDpi(int); // NOLINT
    /**
     * @symbol ?setFullscreenMode\@AppPlatform\@\@UEAAXW4FullscreenMode\@\@\@Z
     */
    MCVAPI void setFullscreenMode(enum class FullscreenMode); // NOLINT
    /**
     * @symbol ?setKeepScreenOnFlag\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void setKeepScreenOnFlag(bool); // NOLINT
    /**
     * @symbol ?setNetworkAllowed\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void setNetworkAllowed(bool); // NOLINT
    /**
     * @symbol ?setNetworkConnectionType\@AppPlatform\@\@UEAAXW4NetworkConnectionType\@\@\@Z
     */
    MCVAPI void setNetworkConnectionType(enum class NetworkConnectionType); // NOLINT
    /**
     * @symbol ?setScreenSize\@AppPlatform\@\@UEAAXHH\@Z
     */
    MCVAPI void setScreenSize(int, int); // NOLINT
    /**
     * @symbol
     * ?setSecureStorageKey\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSecureStorageKey\@\@\@Z
     */
    MCVAPI void setSecureStorageKey(std::string const&, class SecureStorageKey const&); // NOLINT
    /**
     * @symbol ?setSleepEnabled\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void setSleepEnabled(bool); // NOLINT
    /**
     * @symbol ?setThreadsFrozen\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void setThreadsFrozen(bool); // NOLINT
    /**
     * @symbol ?setUIScalingRules\@AppPlatform\@\@UEAAXW4UIScalingRules\@\@\@Z
     */
    MCVAPI void setUIScalingRules(enum class UIScalingRules); // NOLINT
    /**
     * @symbol ?setVRControllerType\@AppPlatform\@\@UEAAXW4VRControllerType\@\@\@Z
     */
    MCVAPI void setVRControllerType(enum class VRControllerType); // NOLINT
    /**
     * @symbol ?setWindowSize\@AppPlatform\@\@UEAAXHH\@Z
     */
    MCVAPI void setWindowSize(int, int); // NOLINT
    /**
     * @symbol
     * ?setWindowText\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void setWindowText(std::string const&); // NOLINT
    /**
     * @symbol ?shouldPauseDownloadsWhenEnterGame\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool shouldPauseDownloadsWhenEnterGame() const; // NOLINT
    /**
     * @symbol ?shouldRegisterForXboxLiveNotifications\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool shouldRegisterForXboxLiveNotifications() const; // NOLINT
    /**
     * @symbol ?shouldRemoveGraphicsDeviceOnAppTermination\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool shouldRemoveGraphicsDeviceOnAppTermination() const; // NOLINT
    /**
     * @symbol ?showDialog\@AppPlatform\@\@UEAAXH\@Z
     */
    MCVAPI void showDialog(int); // NOLINT
    /**
     * @symbol ?showPlatformEmptyStoreDialog\@AppPlatform\@\@UEAAX$$QEAV?$function\@$$A6AX_N\@Z\@std\@\@\@Z
     */
    MCVAPI void showPlatformEmptyStoreDialog(class std::function<void(bool)>&&); // NOLINT
    /**
     * @symbol ?showPlatformStoreIcon\@AppPlatform\@\@UEAAX_N\@Z
     */
    MCVAPI void showPlatformStoreIcon(bool); // NOLINT
    /**
     * @symbol ?supportsAutoSaveOnDBCompaction\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsAutoSaveOnDBCompaction() const; // NOLINT
    /**
     * @symbol ?supportsClientUpdate\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsClientUpdate() const; // NOLINT
    /**
     * @symbol ?supportsDayOneExperience\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsDayOneExperience() const; // NOLINT
    /**
     * @symbol ?supportsFliteTTS\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsFliteTTS() const; // NOLINT
    /**
     * @symbol ?supportsInPackageRecursion\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsInPackageRecursion() const; // NOLINT
    /**
     * @symbol ?supportsLaunchingLegacyVersion\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsLaunchingLegacyVersion() const; // NOLINT
    /**
     * @symbol ?supportsLegacySinglePremiumCacheDirectory\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsLegacySinglePremiumCacheDirectory() const; // NOLINT
    /**
     * @symbol ?supportsVRModeSwap\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsVRModeSwap() const; // NOLINT
    /**
     * @symbol ?supportsVibration\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsVibration() const; // NOLINT
    /**
     * @symbol ?supportsWorldShare\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsWorldShare() const; // NOLINT
    /**
     * @symbol ?supportsXboxLiveAchievements\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool supportsXboxLiveAchievements() const; // NOLINT
    /**
     * @symbol ?teardown\@AppPlatform\@\@UEAAXXZ
     */
    MCVAPI void teardown(); // NOLINT
    /**
     * @symbol
     * ?trackPurchaseEvent\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0000000\@Z
     */
    MCVAPI void
    trackPurchaseEvent(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ?tryEnterVRMode\@AppPlatform\@\@UEAAX_NV?$function\@$$A6AX_N\@Z\@std\@\@\@Z
     */
    MCVAPI void tryEnterVRMode(bool, class std::function<void(bool)>); // NOLINT
    /**
     * @symbol
     * ?updateLocalization\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void updateLocalization(std::string const&); // NOLINT
    /**
     * @symbol
     * ?updateTextBoxText\@AppPlatform\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void updateTextBoxText(std::string const&); // NOLINT
    /**
     * @symbol ?useAppPlatformForTelemetryIPAddress\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool useAppPlatformForTelemetryIPAddress(); // NOLINT
    /**
     * @symbol ?useNativeStoreForRealmsPurchase\@AppPlatform\@\@UEAA_NXZ
     */
    MCVAPI bool useNativeStoreForRealmsPurchase(); // NOLINT
    /**
     * @symbol ?usePlatformProfilePicturesOnly\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool usePlatformProfilePicturesOnly() const; // NOLINT
    /**
     * @symbol ?useXboxControlHelpers\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool useXboxControlHelpers() const; // NOLINT
    /**
     * @symbol ?usesAsyncOptionSaving\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool usesAsyncOptionSaving() const; // NOLINT
    /**
     * @symbol ?usesHDRBrightness\@AppPlatform\@\@UEBA_NXZ
     */
    MCVAPI bool usesHDRBrightness() const; // NOLINT
    /**
     * @symbol ?vibrate\@AppPlatform\@\@UEAAXH\@Z
     */
    MCVAPI void vibrate(int); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AppPlatform(); // NOLINT
#endif
    /**
     * @symbol ??0AppPlatform\@\@QEAA\@_N\@Z
     */
    MCAPI AppPlatform(bool); // NOLINT
    /**
     * @symbol ?_fireAppTerminated\@AppPlatform\@\@QEAAXXZ
     */
    MCAPI void _fireAppTerminated(); // NOLINT
    /**
     * @symbol
     * ?accessPlatformRuntimeInformation_Shim\@AppPlatform\@\@QEAAAEAV?$unique_ptr\@UPlatformRuntimeInfo\@Bedrock\@\@U?$default_delete\@UPlatformRuntimeInfo\@Bedrock\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo>& accessPlatformRuntimeInformation_Shim(); // NOLINT
    /**
     * @symbol
     * ?getCurrentStoragePath\@AppPlatform\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getCurrentStoragePath() const; // NOLINT
    /**
     * @symbol
     * ?getInternalStoragePath\@AppPlatform\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getInternalStoragePath() const; // NOLINT
    /**
     * @symbol
     * ?getPlatformRuntimeInformation\@AppPlatform\@\@QEBAAEBV?$unique_ptr\@UPlatformRuntimeInfo\@Bedrock\@\@U?$default_delete\@UPlatformRuntimeInfo\@Bedrock\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo> const& getPlatformRuntimeInformation() const; // NOLINT
    /**
     * @symbol
     * ?getScratchPath\@AppPlatform\@\@QEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getScratchPath(); // NOLINT
    /**
     * @symbol
     * ?getUserdataPath\@AppPlatform\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getUserdataPath() const; // NOLINT
    /**
     * @symbol ?isTerminating\@AppPlatform\@\@QEBA_NXZ
     */
    MCAPI bool isTerminating() const; // NOLINT
    /**
     * @symbol ?notifyUserStorageInitialized\@AppPlatform\@\@QEAAXXZ
     */
    MCAPI void notifyUserStorageInitialized(); // NOLINT
    /**
     * @symbol ?HOME_PATH\@AppPlatform\@\@2V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const HOME_PATH; // NOLINT
    /**
     * @symbol ?LOG_PATH\@AppPlatform\@\@2V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const LOG_PATH; // NOLINT
    /**
     * @symbol ?SETTINGS_PATH\@AppPlatform\@\@2V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const SETTINGS_PATH; // NOLINT

    // protected:

    // private:
    /**
     * @symbol ?_initializeLoadProfiler\@AppPlatform\@\@AEAAXXZ
     */
    MCAPI void _initializeLoadProfiler(); // NOLINT

protected:
    /**
     * @symbol ?SHADERCACHE_PATH\@AppPlatform\@\@1V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const SHADERCACHE_PATH; // NOLINT

private:
    /**
     * @symbol ?mIsInitialized\@AppPlatform\@\@0_NA
     */
    MCAPI static bool mIsInitialized; // NOLINT
};
