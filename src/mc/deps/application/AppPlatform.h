#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/core/FileAccessType.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/entity/systems/common/ResourceFileSystem.h"
#include "mc/enums/ARVRPlatform.h"
#include "mc/enums/AppFocusState.h"
#include "mc/enums/AssertDialogResponse.h"
#include "mc/enums/BuildPlatform.h"
#include "mc/enums/DeviceSunsetTier.h"
#include "mc/enums/FullscreenMode.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/OperationMode.h"
#include "mc/enums/OsVersion.h"
#include "mc/enums/PlatformType.h"
#include "mc/enums/UIScalingRules.h"
#include "mc/enums/VRControllerType.h"
#include "mc/network/NetworkConnectionType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct PlatformRuntimeInfo; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Social { class MultiplayerService; }
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
        AndroidScopedStorageInfo& operator=(AndroidScopedStorageInfo const&);
        AndroidScopedStorageInfo(AndroidScopedStorageInfo const&);
        AndroidScopedStorageInfo();

    public:
        // NOLINTBEGIN
        // symbol: ??1AndroidScopedStorageInfo@AppPlatform@@QEAA@XZ
        MCAPI ~AndroidScopedStorageInfo();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    AppPlatform& operator=(AppPlatform const&);
    AppPlatform(AppPlatform const&);
    AppPlatform();

public:
    // NOLINTBEGIN
    // symbol: ?_disableCPUBoost@AppPlatform@@MEAAXXZ
    MCVAPI void _disableCPUBoost();

    // symbol: ?_initializeFileStorageAreas@AppPlatform@@MEAAXXZ
    MCVAPI void _initializeFileStorageAreas();

    // symbol: ?_onInitialize@AppPlatform@@EEAAXXZ
    MCVAPI void _onInitialize();

    // symbol: ?_onTeardown@AppPlatform@@EEAAXXZ
    MCVAPI void _onTeardown();

    // symbol: ?_teardownFileStorageAreas@AppPlatform@@MEAAXXZ
    MCVAPI void _teardownFileStorageAreas();

    // symbol: ?_tryEnableCPUBoost@AppPlatform@@MEAA_NXZ
    MCVAPI bool _tryEnableCPUBoost();

    // symbol: ?addListener@AppPlatform@@UEAAXPEAVAppPlatformListener@@M@Z
    MCVAPI void addListener(class AppPlatformListener* l, float priority);

    // symbol: ?allowBetaXblSignIn@AppPlatform@@UEBA_NXZ
    MCVAPI bool allowBetaXblSignIn() const;

    // symbol: ?allowContentLogWriteToDisk@AppPlatform@@UEAA_NXZ
    MCVAPI bool allowContentLogWriteToDisk();

    // symbol: ?allowsResourcePackDevelopment@AppPlatform@@UEBA_NXZ
    MCVAPI bool allowsResourcePackDevelopment() const;

    // symbol: ?alwaysUseZippedPacksForDlc@AppPlatform@@UEBA_NXZ
    MCVAPI bool alwaysUseZippedPacksForDlc() const;

    // symbol: ?areThreadsFrozen@AppPlatform@@UEBA_NXZ
    MCVAPI bool areThreadsFrozen() const;

    // symbol: ?buyGame@AppPlatform@@UEAAXXZ
    MCVAPI void buyGame();

    // symbol: ?calculateIfLowMemoryDevice@AppPlatform@@UEAAXXZ
    MCVAPI void calculateIfLowMemoryDevice();

    // symbol: ?canLaunchUri@AppPlatform@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI bool canLaunchUri(std::string const& uri);

    // symbol: ?canManageLegacyData@AppPlatform@@UEBA_NXZ
    MCVAPI bool canManageLegacyData() const;

    // symbol: ?canSwapVRMode@AppPlatform@@UEBA_N_N@Z
    MCVAPI bool canSwapVRMode(bool inVRMode) const;

    // symbol: ?checkLicense@AppPlatform@@UEAAHXZ
    MCVAPI int checkLicense();

    // symbol: ?collectGraphicsHardwareDetails@AppPlatform@@UEAAXXZ
    MCVAPI void collectGraphicsHardwareDetails();

    // symbol:
    // ?compareAppReceiptToLocalReceipt@AppPlatform@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI bool compareAppReceiptToLocalReceipt(std::string const& otherReceipt);

    // symbol: ?copyAssetFile@AppPlatform@@UEAA_NAEBVPath@Core@@0@Z
    MCVAPI bool copyAssetFile(class Core::Path const& filename, class Core::Path const& destination);

    // symbol:
    // ?copyImportFileToTempFolder@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const&);

    // symbol:
    // ?createLoggingStorageArea@AppPlatform@@UEAA?AV?$shared_ptr@VFileStorageArea@Core@@@std@@W4FileAccessType@Core@@AEBVPath@5@@Z
    MCVAPI std::shared_ptr<class Core::FileStorageArea>
           createLoggingStorageArea(::Core::FileAccessType fileAccessType, class Core::Path const& loggingPath);

    // symbol: ?createUserInput@AppPlatform@@UEAAXXZ
    MCVAPI void createUserInput();

    // symbol: ?createUserInput@AppPlatform@@UEAAXH@Z
    MCVAPI void createUserInput(int dialogId);

    // symbol:
    // ?createWebview@AppPlatform@@UEBA?AV?$shared_ptr@VWebviewInterface@@@std@@$$QEAVPlatformArguments@Webview@@@Z
    MCVAPI std::shared_ptr<class WebviewInterface> createWebview(class Webview::PlatformArguments&&) const;

    // symbol: ?doesLANRequireMultiplayerRestrictions@AppPlatform@@UEBA_NXZ
    MCVAPI bool doesLANRequireMultiplayerRestrictions() const;

    // symbol: ?exitVRMode@AppPlatform@@UEAAXV?$function@$$A6AXXZ@std@@@Z
    MCVAPI void exitVRMode(std::function<void()> callback);

    // symbol: ?finish@AppPlatform@@UEAAXXZ
    MCVAPI void finish();

    // symbol: ?getARVRPlatform@AppPlatform@@UEBA?AW4ARVRPlatform@@XZ
    MCVAPI ::ARVRPlatform getARVRPlatform() const;

    // symbol: ?getAndroidScopedStorageInfo@AppPlatform@@UEBAAEBUAndroidScopedStorageInfo@1@XZ
    MCVAPI struct AppPlatform::AndroidScopedStorageInfo const& getAndroidScopedStorageInfo() const;

    // symbol: ?getAppLifecycleContext@AppPlatform@@UEAAAEAVAppLifecycleContext@@XZ
    MCVAPI class AppLifecycleContext& getAppLifecycleContext();

    // symbol:
    // ?getAssetFileFullPath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
    MCVAPI class Core::PathBuffer<std::string> getAssetFileFullPath(class Core::Path const&);

    // symbol:
    // ?getBroadcastAddresses@AppPlatform@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCVAPI std::vector<std::string> getBroadcastAddresses();

    // symbol:
    // ?getBroadcastingMultiplayerServiceIds@AppPlatform@@UEBA?AV?$vector@W4MultiplayerServiceIdentifier@Social@@V?$allocator@W4MultiplayerServiceIdentifier@Social@@@std@@@std@@_N0@Z
    MCVAPI std::vector<::Social::MultiplayerServiceIdentifier>
           getBroadcastingMultiplayerServiceIds(bool xblBroadcast, bool platformBroadcast) const;

    // symbol: ?getBuildPlatform@AppPlatform@@UEBA?AW4BuildPlatform@@XZ
    MCVAPI ::BuildPlatform getBuildPlatform() const;

    // symbol:
    // ?getCacheStoragePath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getCacheStoragePath();

    // symbol:
    // ?getCatalogSearchScratchPath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getCatalogSearchScratchPath();

    // symbol: ?getClientUpdateUrl@AppPlatform@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getClientUpdateUrl() const;

    // symbol: ?getDefaultInputMode@AppPlatform@@UEBA?AW4InputMode@@XZ
    MCVAPI ::InputMode getDefaultInputMode() const;

    // symbol: ?getDefaultNetworkMaxPlayers@AppPlatform@@UEBAHXZ
    MCVAPI int getDefaultNetworkMaxPlayers() const;

    // symbol: ?getDefaultSafeZoneScaleAll@AppPlatform@@UEBAMXZ
    MCVAPI float getDefaultSafeZoneScaleAll() const;

    // symbol: ?getDefaultSafeZoneScaleX@AppPlatform@@UEBAMXZ
    MCVAPI float getDefaultSafeZoneScaleX() const;

    // symbol: ?getDefaultSafeZoneScaleY@AppPlatform@@UEBAMXZ
    MCVAPI float getDefaultSafeZoneScaleY() const;

    // symbol: ?getDefaultScreenPositionX@AppPlatform@@UEBAMXZ
    MCVAPI float getDefaultScreenPositionX() const;

    // symbol: ?getDefaultScreenPositionY@AppPlatform@@UEBAMXZ
    MCVAPI float getDefaultScreenPositionY() const;

    // symbol: ?getDeviceSunsetTier@AppPlatform@@UEBA?AW4DeviceSunsetTier@@XZ
    MCVAPI ::DeviceSunsetTier getDeviceSunsetTier() const;

    // symbol: ?getDisplayHeight@AppPlatform@@UEAAHXZ
    MCVAPI int getDisplayHeight();

    // symbol: ?getDisplayWidth@AppPlatform@@UEAAHXZ
    MCVAPI int getDisplayWidth();

    // symbol: ?getDpi@AppPlatform@@UEBAHXZ
    MCVAPI int getDpi() const;

    // symbol: ?getEdition@AppPlatform@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getEdition() const;

    // symbol:
    // ?getExtraLevelSaveDataIconParams@AppPlatform@@UEBA?AV?$optional@UScreenshotOptions@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCVAPI std::optional<struct ScreenshotOptions> getExtraLevelSaveDataIconParams(std::string const& levelId) const;

    // symbol: ?getFeedbackBugsLink@AppPlatform@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getFeedbackBugsLink() const;

    // symbol: ?getFeedbackHelpLink@AppPlatform@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getFeedbackHelpLink() const;

    // symbol:
    // ?getFileAccess@AppPlatform@@UEAA?AV?$not_null@V?$NonOwnerPointer@VIFileAccess@@@Bedrock@@@gsl@@W4ResourceFileSystem@@@Z
    MCVAPI Bedrock::NotNullNonOwnerPtr<class IFileAccess> getFileAccess(::ResourceFileSystem fileSystem);

    // symbol: ?getFocusState@AppPlatform@@UEAA?AW4AppFocusState@@XZ
    MCVAPI ::AppFocusState getFocusState();

    // symbol: ?getHighPerformanceThreadsCount@AppPlatform@@UEBA_KXZ
    MCVAPI uint64 getHighPerformanceThreadsCount() const;

    // symbol:
    // ?getIPAddresses@AppPlatform@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCVAPI std::vector<std::string> getIPAddresses();

    // symbol:
    // ?getInternalPackStoragePath@AppPlatform@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getInternalPackStoragePath() const;

    // symbol: ?getIsRunningInAppCenter@AppPlatform@@UEBA_NXZ
    MCVAPI bool getIsRunningInAppCenter() const;

    // symbol:
    // ?getLevelInfoCachePath@AppPlatform@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getLevelInfoCachePath() const;

    // symbol: ?getLevelSaveInterval@AppPlatform@@UEBA?AV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@XZ
    MCVAPI std::chrono::nanoseconds getLevelSaveInterval() const;

    // symbol:
    // ?getLoggingPath@AppPlatform@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getLoggingPath() const;

    // symbol: ?getLowPhysicalMemoryThreshold@AppPlatform@@UEBA_KXZ
    MCVAPI uint64 getLowPhysicalMemoryThreshold() const;

    // symbol: ?getMaxClubsRequests@AppPlatform@@UEBAIXZ
    MCVAPI uint getMaxClubsRequests() const;

    // symbol: ?getMaxLDBFilesOpen@AppPlatform@@UEBAHXZ
    MCVAPI int getMaxLDBFilesOpen() const;

    // symbol: ?getMaxSimRadiusInChunks@AppPlatform@@UEBAHXZ
    MCVAPI int getMaxSimRadiusInChunks() const;

    // symbol: ?getMaxSimultaneousDownloads@AppPlatform@@UEBAHXZ
    MCVAPI int getMaxSimultaneousDownloads() const;

    // symbol: ?getMaxSimultaneousServiceRequests@AppPlatform@@UEBAIXZ
    MCVAPI uint getMaxSimultaneousServiceRequests() const;

    // symbol: ?getMaximumUsedMemory@AppPlatform@@UEAA_KXZ
    MCVAPI uint64 getMaximumUsedMemory();

    // symbol:
    // ?getModalErrorMessageProc@AppPlatform@@UEAAP6A?AW4AssertDialogResponse@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@ZXZ
    MCVAPI auto getModalErrorMessageProc() -> ::AssertDialogResponse (*)(std::string const&, std::string const&);

    // symbol: ?getModelName@AppPlatform@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getModelName();

    // symbol:
    // ?getMultiplayerServiceListToRegister@AppPlatform@@UEBA?AV?$vector@V?$shared_ptr@VMultiplayerService@Social@@@std@@V?$allocator@V?$shared_ptr@VMultiplayerService@Social@@@std@@@2@@std@@XZ
    MCVAPI std::vector<std::shared_ptr<class Social::MultiplayerService>> getMultiplayerServiceListToRegister() const;

    // symbol: ?getNetworkConnectionType@AppPlatform@@UEAA?AW4NetworkConnectionType@@XZ
    MCVAPI ::NetworkConnectionType getNetworkConnectionType();

    // symbol: ?getNumberOfParticleFramesToInterpolate@AppPlatform@@UEBAHXZ
    MCVAPI int getNumberOfParticleFramesToInterpolate() const;

    // symbol: ?getOSVersion@AppPlatform@@UEBA?AW4OsVersion@@XZ
    MCVAPI ::OsVersion getOSVersion() const;

    // symbol:
    // ?getOnDiskPackScratchPath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getOnDiskPackScratchPath();

    // symbol:
    // ?getOnDiskScratchPath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getOnDiskScratchPath();

    // symbol: ?getOperationMode@AppPlatform@@UEBA?AV?$optional@W4OperationMode@@@std@@XZ
    MCVAPI std::optional<::OperationMode> getOperationMode() const;

    // symbol: ?getOptimalLDBSize@AppPlatform@@UEAA_KXZ
    MCVAPI uint64 getOptimalLDBSize();

    // symbol: ?getOptionsSaveInterval@AppPlatform@@UEBA?AV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@XZ
    MCVAPI std::chrono::nanoseconds getOptionsSaveInterval() const;

    // symbol: ?getPackageFamilyName@AppPlatform@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getPackageFamilyName() const;

    // symbol:
    // ?getPackagedShaderCachePath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath();

    // symbol: ?getPlatformDpi@AppPlatform@@EEBAHXZ
    MCVAPI int getPlatformDpi() const;

    // symbol:
    // ?getPlatformStringVar@AppPlatform@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCVAPI std::string getPlatformStringVar(int);

    // symbol: ?getPlatformTTSEnabled@AppPlatform@@UEBA_NXZ
    MCVAPI bool getPlatformTTSEnabled() const;

    // symbol: ?getPlatformTTSExists@AppPlatform@@UEBA_NXZ
    MCVAPI bool getPlatformTTSExists() const;

    // symbol: ?getPlatformType@AppPlatform@@UEBA?AW4PlatformType@@XZ
    MCVAPI ::PlatformType getPlatformType() const;

    // symbol: ?getPlatformUIScalingRules@AppPlatform@@EEBA?AW4UIScalingRules@@XZ
    MCVAPI ::UIScalingRules getPlatformUIScalingRules() const;

    // symbol: ?getRenderSurfaceParameters@AppPlatform@@UEBA?AV?$variant@PEAUHWND__@@Umonostate@std@@@std@@XZ
    MCVAPI std::variant<struct HWND__*, std::monostate> getRenderSurfaceParameters() const;

    // symbol:
    // ?getScratchPath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getScratchPath();

    // symbol: ?getScreenHeight@AppPlatform@@UEBAHXZ
    MCVAPI int getScreenHeight() const;

    // symbol: ?getScreenWidth@AppPlatform@@UEBAHXZ
    MCVAPI int getScreenWidth() const;

    // symbol:
    // ?getSecureStorage@AppPlatform@@UEAA?AV?$unique_ptr@VSecureStorage@@U?$default_delete@VSecureStorage@@@std@@@std@@XZ
    MCVAPI std::unique_ptr<class SecureStorage> getSecureStorage();

    // symbol:
    // ?getSecureStorageKey@AppPlatform@@UEAA?AVSecureStorageKey@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class SecureStorageKey getSecureStorageKey(std::string const& key);

    // symbol:
    // ?getSettingsPath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getSettingsPath();

    // symbol:
    // ?getShaderCachePath@AppPlatform@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getShaderCachePath();

    // symbol: ?getStoreNetworkFailureTimeout@AppPlatform@@UEBAMXZ
    MCVAPI float getStoreNetworkFailureTimeout() const;

    // symbol: ?getThirdPartyPackUUID@AppPlatform@@UEBAAEBVUUID@mce@@XZ
    MCVAPI class mce::UUID const& getThirdPartyPackUUID() const;

    // symbol: ?getTotalHardwareThreadsCount@AppPlatform@@UEBA_KXZ
    MCVAPI uint64 getTotalHardwareThreadsCount() const;

    // symbol: ?getUIScalingRules@AppPlatform@@UEBA?AW4UIScalingRules@@XZ
    MCVAPI ::UIScalingRules getUIScalingRules() const;

    // symbol:
    // ?getUserInput@AppPlatform@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCVAPI std::vector<std::string> getUserInput();

    // symbol: ?getUserInputStatus@AppPlatform@@UEAAHXZ
    MCVAPI int getUserInputStatus();

    // symbol:
    // ?getUserStorageRootPath@AppPlatform@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getUserStorageRootPath() const;

    // symbol:
    // ?getUserdataPathForLevels@AppPlatform@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getUserdataPathForLevels() const;

    // symbol: ?getVRControllerType@AppPlatform@@UEBA?AW4VRControllerType@@XZ
    MCVAPI ::VRControllerType getVRControllerType() const;

    // symbol: ?goToExternalConsumablesStoreListing@AppPlatform@@UEBAXXZ
    MCVAPI void goToExternalConsumablesStoreListing() const;

    // symbol: ?handlePlatformSpecificCommerceError@AppPlatform@@UEAAXI@Z
    MCVAPI void handlePlatformSpecificCommerceError(uint error);

    // symbol: ?hasAssetFile@AppPlatform@@UEAA_NAEBVPath@Core@@@Z
    MCVAPI bool hasAssetFile(class Core::Path const& filename);

    // symbol: ?hasBuyButtonWhenInvalidLicense@AppPlatform@@UEAA_NXZ
    MCVAPI bool hasBuyButtonWhenInvalidLicense();

    // symbol: ?hasFastAlphaTest@AppPlatform@@UEBA_NXZ
    MCVAPI bool hasFastAlphaTest() const;

    // symbol: ?hasIDEProfiler@AppPlatform@@UEAA_NXZ
    MCVAPI bool hasIDEProfiler();

    // symbol: ?hasJournalingFilesystem@AppPlatform@@UEBA_NXZ
    MCVAPI bool hasJournalingFilesystem() const;

    // symbol: ?hasMulticastReceivePermission@AppPlatform@@UEBA_NXZ
    MCVAPI bool hasMulticastReceivePermission() const;

    // symbol: ?hasPlatformSpecificInvites@AppPlatform@@UEBA_NXZ
    MCVAPI bool hasPlatformSpecificInvites() const;

    // symbol: ?hasSeparatedStorageAreasForContentAcquisition@AppPlatform@@UEBA_NXZ
    MCVAPI bool hasSeparatedStorageAreasForContentAcquisition() const;

    // symbol: ?hideSplashScreen@AppPlatform@@UEAAXXZ
    MCVAPI void hideSplashScreen();

    // symbol: ?importAsFlatFile@AppPlatform@@UEBA_NXZ
    MCVAPI bool importAsFlatFile() const;

    // symbol: ?initAppPlatformNetworkSettings@AppPlatform@@UEAAXXZ
    MCVAPI void initAppPlatformNetworkSettings();

    // symbol: ?initialize@AppPlatform@@UEAAXXZ
    MCVAPI void initialize();

    // symbol: ?initializeGameStreaming@AppPlatform@@UEAAXXZ
    MCVAPI void initializeGameStreaming();

    // symbol: ?initializeMulticast@AppPlatform@@UEBAXXZ
    MCVAPI void initializeMulticast() const;

    // symbol: ?initializeScreenDependentResources@AppPlatform@@UEAAXXZ
    MCVAPI void initializeScreenDependentResources();

    // symbol: ?isAutoCompactionEnabled@AppPlatform@@UEBA_NXZ
    MCVAPI bool isAutoCompactionEnabled() const;

    // symbol: ?isCentennial@AppPlatform@@UEBA_NXZ
    MCVAPI bool isCentennial() const;

    // symbol: ?isContentAutoUpdateAllowed@AppPlatform@@UEBA_NXZ
    MCVAPI bool isContentAutoUpdateAllowed() const;

    // symbol: ?isCrossPlatformToggleVisible@AppPlatform@@UEBA_NXZ
    MCVAPI bool isCrossPlatformToggleVisible() const;

    // symbol: ?isDisplayInitialized@AppPlatform@@UEBA_NXZ
    MCVAPI bool isDisplayInitialized() const;

    // symbol: ?isDownloadAndImportBlocking@AppPlatform@@UEBA_NXZ
    MCVAPI bool isDownloadAndImportBlocking() const;

    // symbol: ?isDownloadBuffered@AppPlatform@@UEBA_NXZ
    MCVAPI bool isDownloadBuffered() const;

    // symbol: ?isEduMode@AppPlatform@@UEBA_NXZ
    MCVAPI bool isEduMode() const;

    // symbol: ?isFireTV@AppPlatform@@UEBA_NXZ
    MCVAPI bool isFireTV() const;

    // symbol: ?isInternetAvailable@AppPlatform@@UEBA_NXZ
    MCVAPI bool isInternetAvailable() const;

    // symbol: ?isJoinableViaExternalServers@AppPlatform@@UEBA_NXZ
    MCVAPI bool isJoinableViaExternalServers() const;

    // symbol: ?isLANAllowed@AppPlatform@@UEBA_NXZ
    MCVAPI bool isLANAllowed() const;

    // symbol: ?isLANAvailable@AppPlatform@@UEBA_NXZ
    MCVAPI bool isLANAvailable() const;

    // symbol: ?isLowMemoryDevice@AppPlatform@@UEBA_NXZ
    MCVAPI bool isLowMemoryDevice() const;

    // symbol: ?isLowPhysicalMemoryDevice@AppPlatform@@UEBA_NXZ
    MCVAPI bool isLowPhysicalMemoryDevice() const;

    // symbol: ?isNetworkAllowed@AppPlatform@@UEBA_NXZ
    MCVAPI bool isNetworkAllowed() const;

    // symbol: ?isNetworkAvailable@AppPlatform@@UEBA_NXZ
    MCVAPI bool isNetworkAvailable() const;

    // symbol: ?isNetworkEnabled@AppPlatform@@UEBA_N_N@Z
    MCVAPI bool isNetworkEnabled(bool onlyWifiAllowed) const;

    // symbol: ?isNetworkThrottled@AppPlatform@@UEBA_NXZ
    MCVAPI bool isNetworkThrottled() const;

    // symbol: ?isOnWifiConnectionTelemetryValue@AppPlatform@@UEAA?AV?$optional@_N@std@@XZ
    MCVAPI std::optional<bool> isOnWifiConnectionTelemetryValue();

    // symbol: ?isQuitCapable@AppPlatform@@UEBA_NXZ
    MCVAPI bool isQuitCapable() const;

    // symbol: ?isRealmsEnabled@AppPlatform@@UEBA_NXZ
    MCVAPI bool isRealmsEnabled() const;

    // symbol: ?isTelemetryAllowed@AppPlatform@@UEAA_NXZ
    MCVAPI bool isTelemetryAllowed();

    // symbol: ?isTrialWorldsTransferToFullGameAllowed@AppPlatform@@UEBA_NXZ
    MCVAPI bool isTrialWorldsTransferToFullGameAllowed() const;

    // symbol: ?isWebviewSupported@AppPlatform@@UEBA_NXZ
    MCVAPI bool isWebviewSupported() const;

    // symbol: ?isWin10Arm@AppPlatform@@UEBA_NXZ
    MCVAPI bool isWin10Arm() const;

    // symbol: ?launchLegacyVersion@AppPlatform@@UEAAXXZ
    MCVAPI void launchLegacyVersion();

    // symbol: ?launchSettings@AppPlatform@@UEAAXXZ
    MCVAPI void launchSettings();

    // symbol: ?launchUri@AppPlatform@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void launchUri(std::string const& uri);

    // symbol:
    // ?listAssetFilesIn@AppPlatform@@UEBA?AV?$set@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@U?$less@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@4@@std@@AEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCVAPI std::set<class Core::PathBuffer<std::string>>
           listAssetFilesIn(class Core::Path const& path, std::string const& extension) const;

    // symbol: ?maxFileDataRequestConcurrency@AppPlatform@@UEBAIXZ
    MCVAPI uint maxFileDataRequestConcurrency() const;

    // symbol: ?minimizeBackgroundDownloads@AppPlatform@@UEBA_NXZ
    MCVAPI bool minimizeBackgroundDownloads() const;

    // symbol: ?multiplayerRequiresPremiumAccess@AppPlatform@@UEBA_NXZ
    MCVAPI bool multiplayerRequiresPremiumAccess() const;

    // symbol: ?multiplayerRequiresUGCEnabled@AppPlatform@@UEBA_NXZ
    MCVAPI bool multiplayerRequiresUGCEnabled() const;

    // symbol: ?notifyControllerConnectionStateChange@AppPlatform@@UEBA_NXZ
    MCVAPI bool notifyControllerConnectionStateChange() const;

    // symbol: ?notifyNetworkConfigurationChanged@AppPlatform@@UEAAXXZ
    MCVAPI void notifyNetworkConfigurationChanged();

    // symbol: ?onFullGameUnlock@AppPlatform@@UEAAXXZ
    MCVAPI void onFullGameUnlock();

    // symbol: ?onMinecraftGameInitComplete@AppPlatform@@UEAAXXZ
    MCVAPI void onMinecraftGameInitComplete();

    // symbol: ?onPrimaryUserNetworkReady@AppPlatform@@UEAAXXZ
    MCVAPI void onPrimaryUserNetworkReady();

    // symbol: ?platformRequiresControllerApplet@AppPlatform@@UEBA_NXZ
    MCVAPI bool platformRequiresControllerApplet() const;

    // symbol:
    // ?readAssetFile@AppPlatform@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@@Z
    MCVAPI std::string readAssetFile(class Core::Path const&);

    // symbol:
    // ?registerExperimentsActiveCrashDump@AppPlatform@@UEBAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI void registerExperimentsActiveCrashDump(std::vector<std::string> const& activeExperiments) const;

    // symbol: ?registerFileForCollectionWithCrashDump@AppPlatform@@UEAAXAEBVPath@Core@@@Z
    MCVAPI void registerFileForCollectionWithCrashDump(class Core::Path const& fileName);

    // symbol: ?releaseMulticastReceivePermission@AppPlatform@@UEBAXXZ
    MCVAPI void releaseMulticastReceivePermission() const;

    // symbol: ?reloadRenderResourcesOnResume@AppPlatform@@UEBA_NXZ
    MCVAPI bool reloadRenderResourcesOnResume() const;

    // symbol: ?removeListener@AppPlatform@@UEAAXPEAVAppPlatformListener@@@Z
    MCVAPI void removeListener(class AppPlatformListener* l);

    // symbol:
    // ?requestIntegrityToken@AppPlatform@@UEAA?AV?$shared_ptr@V?$IAsyncResult@UIntegrityTokenResult@@@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCVAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<struct IntegrityTokenResult>>
           requestIntegrityToken(std::string const&);

    // symbol: ?requestMulticastReceivePermission@AppPlatform@@UEAAXXZ
    MCVAPI void requestMulticastReceivePermission();

    // symbol: ?requireControllerAtStartup@AppPlatform@@UEBA_NXZ
    MCVAPI bool requireControllerAtStartup() const;

    // symbol: ?requiresAutoSaveIconExplanationPopup@AppPlatform@@UEBA_NXZ
    MCVAPI bool requiresAutoSaveIconExplanationPopup() const;

    // symbol: ?requiresLiveGoldForMultiplayer@AppPlatform@@UEBA_NXZ
    MCVAPI bool requiresLiveGoldForMultiplayer() const;

    // symbol: ?requiresXboxLiveSigninToPlay@AppPlatform@@UEBA_NXZ
    MCVAPI bool requiresXboxLiveSigninToPlay() const;

    // symbol: ?restartApp@AppPlatform@@UEAAX_N@Z
    MCVAPI void restartApp(bool restart);

    // symbol: ?restartRequested@AppPlatform@@UEAA_NXZ
    MCVAPI bool restartRequested();

    // symbol: ?setARVRPlatform@AppPlatform@@UEAAXW4ARVRPlatform@@@Z
    MCVAPI void setARVRPlatform(::ARVRPlatform platform);

    // symbol: ?setDpi@AppPlatform@@UEAAXH@Z
    MCVAPI void setDpi(int dpi);

    // symbol: ?setFullscreenMode@AppPlatform@@UEAAXW4FullscreenMode@@@Z
    MCVAPI void setFullscreenMode(::FullscreenMode fullscreenMode);

    // symbol: ?setIntegrityToken@AppPlatform@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void setIntegrityToken(std::string const&);

    // symbol:
    // ?setIntegrityTokenErrorMessage@AppPlatform@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void setIntegrityTokenErrorMessage(std::string const&);

    // symbol: ?setKeepScreenOnFlag@AppPlatform@@UEAAX_N@Z
    MCVAPI void setKeepScreenOnFlag(bool);

    // symbol: ?setNetworkAllowed@AppPlatform@@UEAAX_N@Z
    MCVAPI void setNetworkAllowed(bool allowed);

    // symbol: ?setNetworkConnectionType@AppPlatform@@UEAAXW4NetworkConnectionType@@@Z
    MCVAPI void setNetworkConnectionType(::NetworkConnectionType connectionType);

    // symbol: ?setScreenSize@AppPlatform@@UEAAXHH@Z
    MCVAPI void setScreenSize(int width, int height);

    // symbol:
    // ?setSecureStorageKey@AppPlatform@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSecureStorageKey@@@Z
    MCVAPI void setSecureStorageKey(std::string const& key, class SecureStorageKey const& value);

    // symbol: ?setSleepEnabled@AppPlatform@@UEAAX_N@Z
    MCVAPI void setSleepEnabled(bool enabled);

    // symbol: ?setThreadsFrozen@AppPlatform@@UEAAX_N@Z
    MCVAPI void setThreadsFrozen(bool frozen);

    // symbol: ?setUIScalingRules@AppPlatform@@UEAAXW4UIScalingRules@@@Z
    MCVAPI void setUIScalingRules(::UIScalingRules UIScalingRules);

    // symbol: ?setVRControllerType@AppPlatform@@UEAAXW4VRControllerType@@@Z
    MCVAPI void setVRControllerType(::VRControllerType controllerType);

    // symbol: ?setWindowSize@AppPlatform@@UEAAXHH@Z
    MCVAPI void setWindowSize(int width, int height);

    // symbol: ?setWindowText@AppPlatform@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void setWindowText(std::string const& title);

    // symbol: ?shouldPauseDownloadsWhenEnterGame@AppPlatform@@UEBA_NXZ
    MCVAPI bool shouldPauseDownloadsWhenEnterGame() const;

    // symbol: ?shouldRegisterForXboxLiveNotifications@AppPlatform@@UEBA_NXZ
    MCVAPI bool shouldRegisterForXboxLiveNotifications() const;

    // symbol: ?shouldRemoveGraphicsDeviceOnAppTermination@AppPlatform@@UEBA_NXZ
    MCVAPI bool shouldRemoveGraphicsDeviceOnAppTermination() const;

    // symbol: ?showDialog@AppPlatform@@UEAAXH@Z
    MCVAPI void showDialog(int dialogId);

    // symbol: ?showPlatformEmptyStoreDialog@AppPlatform@@UEAAX$$QEAV?$function@$$A6AX_N@Z@std@@@Z
    MCVAPI void showPlatformEmptyStoreDialog(std::function<void(bool)>&& callback);

    // symbol: ?showPlatformStoreIcon@AppPlatform@@UEAAX_N@Z
    MCVAPI void showPlatformStoreIcon(bool shouldShow);

    // symbol: ?supportsAutoSaveOnDBCompaction@AppPlatform@@UEBA_NXZ
    MCVAPI bool supportsAutoSaveOnDBCompaction() const;

    // symbol: ?supportsClientUpdate@AppPlatform@@UEBA_NXZ
    MCVAPI bool supportsClientUpdate() const;

    // symbol: ?supportsDayOneExperience@AppPlatform@@UEBA_NXZ
    MCVAPI bool supportsDayOneExperience() const;

    // symbol: ?supportsFliteTTS@AppPlatform@@UEBA_NXZ
    MCVAPI bool supportsFliteTTS() const;

    // symbol: ?supportsInPackageRecursion@AppPlatform@@UEBA_NXZ
    MCVAPI bool supportsInPackageRecursion() const;

    // symbol: ?supportsLaunchingLegacyVersion@AppPlatform@@UEBA_NXZ
    MCVAPI bool supportsLaunchingLegacyVersion() const;

    // symbol: ?supportsLegacySinglePremiumCacheDirectory@AppPlatform@@UEBA_NXZ
    MCVAPI bool supportsLegacySinglePremiumCacheDirectory() const;

    // symbol: ?supportsVRModeSwap@AppPlatform@@UEBA_NXZ
    MCVAPI bool supportsVRModeSwap() const;

    // symbol: ?supportsVibration@AppPlatform@@UEBA_NXZ
    MCVAPI bool supportsVibration() const;

    // symbol: ?supportsWorldShare@AppPlatform@@UEBA_NXZ
    MCVAPI bool supportsWorldShare() const;

    // symbol: ?supportsXboxLiveAchievements@AppPlatform@@UEBA_NXZ
    MCVAPI bool supportsXboxLiveAchievements() const;

    // symbol: ?teardown@AppPlatform@@UEAAXXZ
    MCVAPI void teardown();

    // symbol: ?tryEnterVRMode@AppPlatform@@UEAAX_NV?$function@$$A6AX_N@Z@std@@@Z
    MCVAPI void tryEnterVRMode(bool duringStartup, std::function<void(bool)> callback);

    // symbol: ?updateLocalization@AppPlatform@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void updateLocalization(std::string const& loc);

    // symbol: ?useAppPlatformForTelemetryIPAddress@AppPlatform@@UEAA_NXZ
    MCVAPI bool useAppPlatformForTelemetryIPAddress();

    // symbol: ?useNativeStoreForRealmsPurchase@AppPlatform@@UEAA_NXZ
    MCVAPI bool useNativeStoreForRealmsPurchase();

    // symbol: ?usePlatformProfilePicturesOnly@AppPlatform@@UEBA_NXZ
    MCVAPI bool usePlatformProfilePicturesOnly() const;

    // symbol: ?useXboxControlHelpers@AppPlatform@@UEBA_NXZ
    MCVAPI bool useXboxControlHelpers() const;

    // symbol: ?usesAsyncOptionSaving@AppPlatform@@UEBA_NXZ
    MCVAPI bool usesAsyncOptionSaving() const;

    // symbol: ?usesHDRBrightness@AppPlatform@@UEBA_NXZ
    MCVAPI bool usesHDRBrightness() const;

    // symbol: ?vibrate@AppPlatform@@UEAAXH@Z
    MCVAPI void vibrate(int milliSeconds);

    // symbol: ??1AppPlatform@@UEAA@XZ
    MCVAPI ~AppPlatform();

    // symbol: ??0AppPlatform@@QEAA@_N@Z
    MCAPI explicit AppPlatform(bool registerService);

    // symbol: ?_fireAppTerminated@AppPlatform@@QEAAXXZ
    MCAPI void _fireAppTerminated();

    // symbol:
    // ?accessPlatformRuntimeInformation_Shim@AppPlatform@@QEAAAEAV?$unique_ptr@UPlatformRuntimeInfo@Bedrock@@U?$default_delete@UPlatformRuntimeInfo@Bedrock@@@std@@@std@@XZ
    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo>& accessPlatformRuntimeInformation_Shim();

    // symbol:
    // ?getCurrentStoragePath@AppPlatform@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCAPI class Core::PathBuffer<std::string> getCurrentStoragePath() const;

    // symbol:
    // ?getInternalStoragePath@AppPlatform@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCAPI class Core::PathBuffer<std::string> getInternalStoragePath() const;

    // symbol:
    // ?getPlatformRuntimeInformation@AppPlatform@@QEBAAEBV?$unique_ptr@UPlatformRuntimeInfo@Bedrock@@U?$default_delete@UPlatformRuntimeInfo@Bedrock@@@std@@@std@@XZ
    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo> const& getPlatformRuntimeInformation() const;

    // symbol:
    // ?getUserdataPath@AppPlatform@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCAPI class Core::PathBuffer<std::string> getUserdataPath() const;

    // symbol: ?isTerminating@AppPlatform@@QEBA_NXZ
    MCAPI bool isTerminating() const;

    // symbol: ?notifyUserStorageInitialized@AppPlatform@@QEAAXXZ
    MCAPI void notifyUserStorageInitialized();

    // symbol: ?HOME_PATH@AppPlatform@@2V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@B
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const HOME_PATH;

    // symbol: ?LOG_PATH@AppPlatform@@2V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@B
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const LOG_PATH;

    // symbol: ?SETTINGS_PATH@AppPlatform@@2V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@B
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const SETTINGS_PATH;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_initializeLoadProfiler@AppPlatform@@AEAAXXZ
    MCAPI void _initializeLoadProfiler();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?SHADERCACHE_PATH@AppPlatform@@1V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@B
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const SHADERCACHE_PATH;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mIsInitialized@AppPlatform@@0_NA
    MCAPI static bool mIsInitialized;

    // NOLINTEND
};
