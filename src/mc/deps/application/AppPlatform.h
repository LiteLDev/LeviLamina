#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/application/DeviceSunsetTier.h"
#include "mc/deps/application/OsVersion.h"
#include "mc/deps/core/NetworkConnectionType.h"
#include "mc/deps/core/debug/AssertDialogResponse.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/ARVRPlatform.h"
#include "mc/deps/core/platform/AppFocusState.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/platform/FullscreenMode.h"
#include "mc/deps/core/platform/OperationMode.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/core/platform/UIScalingRules.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/string/StackString.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/VRControllerType.h"

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
        MCAPI ~AndroidScopedStorageInfo();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    AppPlatform& operator=(AppPlatform const&);
    AppPlatform(AppPlatform const&);
    AppPlatform();

public:
    // NOLINTBEGIN
    MCVAPI void _disableCPUBoost();

    MCVAPI void _initializeFileStorageAreas();

    MCVAPI void _onInitialize();

    MCVAPI void _onTeardown();

    MCVAPI void _teardownFileStorageAreas();

    MCVAPI bool _tryEnableCPUBoost();

    MCVAPI void addListener(class AppPlatformListener* l, float priority);

    MCVAPI bool allowBetaXblSignIn() const;

    MCVAPI bool allowContentLogWriteToDisk();

    MCVAPI bool allowsResourcePackDevelopment() const;

    MCVAPI bool areThreadsFrozen() const;

    MCVAPI void buyGame();

    MCVAPI void calculateIfLowMemoryDevice();

    MCVAPI bool canLaunchUri(std::string const& uri);

    MCVAPI bool canManageLegacyData() const;

    MCVAPI bool canMigrateWorldData() const;

    MCVAPI bool canSwapVRMode(bool inVRMode) const;

    MCVAPI int checkLicense();

    MCVAPI void collectGraphicsHardwareDetails();

    MCVAPI bool compareAppReceiptToLocalReceipt(std::string const& otherReceipt);

    MCVAPI bool copyAssetFile(class Core::Path const& filename, class Core::Path const& destination);

    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const& filePath);

    MCVAPI std::shared_ptr<class Core::FileStorageArea>
           createLoggingStorageArea(::Core::FileAccessType fileAccessType, class Core::Path const& loggingPath);

    MCVAPI void createUserInput();

    MCVAPI void createUserInput(int dialogId);

    MCVAPI std::shared_ptr<class WebviewInterface> createWebview(class Webview::PlatformArguments&&) const;

    MCVAPI bool doesLANRequireMultiplayerRestrictions() const;

    MCVAPI void exitVRMode(std::function<void()> callback);

    MCVAPI void finish();

    MCVAPI ::ARVRPlatform getARVRPlatform() const;

    MCVAPI struct AppPlatform::AndroidScopedStorageInfo const& getAndroidScopedStorageInfo() const;

    MCVAPI class AppLifecycleContext& getAppLifecycleContext();

    MCVAPI class Core::PathBuffer<std::string> getAssetFileFullPath(class Core::Path const& filename);

    MCVAPI std::vector<std::string> getBroadcastAddresses();

    MCVAPI std::vector<::Social::MultiplayerServiceIdentifier>
           getBroadcastingMultiplayerServiceIds(bool xblBroadcast, bool platformBroadcast) const;

    MCVAPI ::BuildPlatform getBuildPlatform() const;

    MCVAPI class Core::PathBuffer<std::string> getCacheStoragePath();

    MCVAPI class Core::PathBuffer<std::string> getCatalogSearchScratchPath();

    MCVAPI std::string getClientUpdateUrl() const;

    MCVAPI ::InputMode getDefaultInputMode() const;

    MCVAPI int getDefaultNetworkMaxPlayers() const;

    MCVAPI float getDefaultSafeZoneScaleAll() const;

    MCVAPI float getDefaultSafeZoneScaleX() const;

    MCVAPI float getDefaultSafeZoneScaleY() const;

    MCVAPI float getDefaultScreenPositionX() const;

    MCVAPI float getDefaultScreenPositionY() const;

    MCVAPI ::DeviceSunsetTier getDeviceSunsetTier() const;

    MCVAPI int getDisplayHeight();

    MCVAPI int getDisplayWidth();

    MCVAPI int getDpi() const;

    MCVAPI std::string getEdition() const;

    MCVAPI std::optional<struct ScreenshotOptions> getExtraLevelSaveDataIconParams(std::string const& levelId) const;

    MCVAPI std::string getFeedbackBugsLink() const;

    MCVAPI std::string getFeedbackHelpLink() const;

    MCVAPI Bedrock::NotNullNonOwnerPtr<class IFileAccess> getFileAccess(::ResourceFileSystem fileSystem);

    MCVAPI ::AppFocusState getFocusState();

    MCVAPI uint64 getHighPerformanceThreadsCount() const;

    MCVAPI std::vector<std::string> getIPAddresses();

    MCVAPI class Core::PathBuffer<std::string> getInternalPackStoragePath() const;

    MCVAPI bool getIsRunningInAppCenter() const;

    MCVAPI class Core::PathBuffer<std::string> getLevelInfoCachePath() const;

    MCVAPI std::chrono::nanoseconds getLevelSaveInterval() const;

    MCVAPI class Core::PathBuffer<std::string> getLoggingPath() const;

    MCVAPI uint64 getLowPhysicalMemoryThreshold() const;

    MCVAPI uint getMaxClubsRequests() const;

    MCVAPI int getMaxLDBFilesOpen() const;

    MCVAPI int getMaxSimRadiusInChunks() const;

    MCVAPI int getMaxSimultaneousDownloads() const;

    MCVAPI uint getMaxSimultaneousServiceRequests() const;

    MCVAPI uint64 getMaximumUsedMemory();

    MCVAPI auto getModalErrorMessageProc() -> ::AssertDialogResponse (*)(std::string const&, std::string const&);

    MCVAPI std::string getModelName();

    MCVAPI std::vector<std::shared_ptr<class Social::MultiplayerService>> getMultiplayerServiceListToRegister() const;

    MCVAPI ::NetworkConnectionType getNetworkConnectionType();

    MCVAPI int getNumberOfParticleFramesToInterpolate() const;

    MCVAPI ::OsVersion getOSVersion() const;

    MCVAPI class Core::PathBuffer<std::string> getOnDiskPackScratchPath();

    MCVAPI class Core::PathBuffer<std::string> getOnDiskScratchPath();

    MCVAPI std::optional<::OperationMode> getOperationMode() const;

    MCVAPI uint64 getOptimalLDBSize();

    MCVAPI std::chrono::nanoseconds getOptionsSaveInterval() const;

    MCVAPI std::string getPackageFamilyName() const;

    MCVAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath();

    MCVAPI int getPlatformDpi() const;

    MCVAPI std::string getPlatformStringVar(int stringId);

    MCVAPI bool getPlatformTTSEnabled() const;

    MCVAPI bool getPlatformTTSExists() const;

    MCVAPI ::PlatformType getPlatformType() const;

    MCVAPI ::UIScalingRules getPlatformUIScalingRules() const;

    MCVAPI std::variant<struct HWND__*, std::monostate> getRenderSurfaceParameters() const;

    MCVAPI class Core::PathBuffer<std::string> getScratchPath();

    MCVAPI int getScreenHeight() const;

    MCVAPI int getScreenWidth() const;

    MCVAPI std::unique_ptr<class SecureStorage> getSecureStorage();

    MCVAPI class SecureStorageKey getSecureStorageKey(std::string const& key);

    MCVAPI class Core::PathBuffer<std::string> getSettingsPath();

    MCVAPI class Core::PathBuffer<std::string> getShaderCachePath();

    MCVAPI float getStoreNetworkFailureTimeout() const;

    MCVAPI class mce::UUID const& getThirdPartyPackUUID() const;

    MCVAPI uint64 getTotalHardwareThreadsCount() const;

    MCVAPI ::UIScalingRules getUIScalingRules() const;

    MCVAPI std::vector<std::string> getUserInput();

    MCVAPI int getUserInputStatus();

    MCVAPI class Core::PathBuffer<std::string> getUserStorageRootPath() const;

    MCVAPI class Core::PathBuffer<std::string> getUserdataPathForLevels() const;

    MCVAPI ::VRControllerType getVRControllerType() const;

    MCVAPI void goToExternalConsumablesStoreListing() const;

    MCVAPI void handlePlatformSpecificCommerceError(uint error);

    MCVAPI bool hasAssetFile(class Core::Path const& filename);

    MCVAPI bool hasBuyButtonWhenInvalidLicense();

    MCVAPI bool hasFastAlphaTest() const;

    MCVAPI bool hasIDEProfiler();

    MCVAPI bool hasJournalingFilesystem() const;

    MCVAPI bool hasMulticastReceivePermission() const;

    MCVAPI bool hasPlatformSpecificInvites() const;

    MCVAPI bool hasSeparatedStorageAreasForContentAcquisition() const;

    MCVAPI void hideSplashScreen();

    MCVAPI bool importAsFlatFile() const;

    MCVAPI void initAppPlatformNetworkSettings();

    MCVAPI void initialize();

    MCVAPI void initializeGameStreaming();

    MCVAPI void initializeMulticast() const;

    MCVAPI void initializeScreenDependentResources();

    MCVAPI bool isAutoCompactionEnabled() const;

    MCVAPI bool isCentennial() const;

    MCVAPI bool isContentAutoUpdateAllowed() const;

    MCVAPI bool isCrossPlatformToggleVisible() const;

    MCVAPI bool isDisplayInitialized() const;

    MCVAPI bool isDownloadAndImportBlocking() const;

    MCVAPI bool isDownloadBuffered() const;

    MCVAPI bool isEduMode() const;

    MCVAPI bool isFireTV() const;

    MCVAPI bool isInternetAvailable() const;

    MCVAPI bool isJoinableViaExternalServers() const;

    MCVAPI bool isLANAllowed() const;

    MCVAPI bool isLANAvailable() const;

    MCVAPI bool isLowMemoryDevice() const;

    MCVAPI bool isLowPhysicalMemoryDevice() const;

    MCVAPI bool isNetworkAllowed() const;

    MCVAPI bool isNetworkAvailable() const;

    MCVAPI bool isNetworkEnabled(bool onlyWifiAllowed) const;

    MCVAPI bool isNetworkThrottled() const;

    MCVAPI std::optional<bool> isOnWifiConnectionTelemetryValue();

    MCVAPI bool isQuitCapable() const;

    MCVAPI bool isRealmsEnabled() const;

    MCVAPI bool isTelemetryAllowed();

    MCVAPI bool isTrialWorldsTransferToFullGameAllowed() const;

    MCVAPI bool isWebviewSupported() const;

    MCVAPI bool isWin10Arm() const;

    MCVAPI void launchLegacyVersion();

    MCVAPI void launchSettings();

    MCVAPI void launchUri(std::string const& uri);

    MCVAPI std::set<class Core::PathBuffer<std::string>>
           listAssetFilesIn(class Core::Path const& path, std::string const& extension) const;

    MCVAPI uint maxFileDataRequestConcurrency() const;

    MCVAPI bool minimizeBackgroundDownloads() const;

    MCVAPI bool multiplayerRequiresPremiumAccess() const;

    MCVAPI bool multiplayerRequiresUGCEnabled() const;

    MCVAPI bool notifyControllerConnectionStateChange() const;

    MCVAPI void notifyNetworkConfigurationChanged();

    MCVAPI void onFullGameUnlock();

    MCVAPI void onMinecraftGameInitComplete();

    MCVAPI void onPrimaryUserNetworkReady();

    MCVAPI bool platformRequiresControllerApplet() const;

    MCVAPI std::string readAssetFile(class Core::Path const& filename);

    MCVAPI void registerExperimentsActiveCrashDump(std::vector<std::string> const& activeExperiments) const;

    MCVAPI void registerFileForCollectionWithCrashDump(class Core::Path const& fileName);

    MCVAPI void releaseMulticastReceivePermission() const;

    MCVAPI bool reloadRenderResourcesOnResume() const;

    MCVAPI void removeListener(class AppPlatformListener* l);

    MCVAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<struct IntegrityTokenResult>>
           requestIntegrityToken(std::string const& nonceToken);

    MCVAPI void requestMulticastReceivePermission();

    MCVAPI bool requireControllerAtStartup() const;

    MCVAPI bool requiresAutoSaveIconExplanationPopup() const;

    MCVAPI bool requiresLiveGoldForMultiplayer() const;

    MCVAPI bool requiresXboxLiveSigninToPlay() const;

    MCVAPI void restartApp(bool restart);

    MCVAPI bool restartRequested();

    MCVAPI bool saveTreatmentPacksAsZips() const;

    MCVAPI void setARVRPlatform(::ARVRPlatform platform);

    MCVAPI void setDpi(int dpi);

    MCVAPI void setFullscreenMode(::FullscreenMode fullscreenMode);

    MCVAPI void setIntegrityToken(std::string const& integrityToken);

    MCVAPI void setIntegrityTokenErrorMessage(std::string const& errorMessage);

    MCVAPI void setKeepScreenOnFlag(bool);

    MCVAPI void setNetworkAllowed(bool allowed);

    MCVAPI void setNetworkConnectionType(::NetworkConnectionType connectionType);

    MCVAPI void setScreenSize(int width, int height);

    MCVAPI void setSecureStorageKey(std::string const& key, class SecureStorageKey const& value);

    MCVAPI void setSleepEnabled(bool enabled);

    MCVAPI void setThreadsFrozen(bool frozen);

    MCVAPI void setUIScalingRules(::UIScalingRules UIScalingRules);

    MCVAPI void setVRControllerType(::VRControllerType controllerType);

    MCVAPI void setWindowSize(int width, int height);

    MCVAPI void setWindowText(std::string const& title);

    MCVAPI bool shouldPauseDownloadsWhenEnterGame() const;

    MCVAPI bool shouldRegisterForXboxLiveNotifications() const;

    MCVAPI bool shouldRemoveGraphicsDeviceOnAppTermination() const;

    MCVAPI void showDialog(int dialogId);

    MCVAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<bool>>
           showOSUserDialog(std::string, std::string, std::string);

    MCVAPI void showPlatformEmptyStoreDialog(std::function<void(bool)>&& callback);

    MCVAPI void showPlatformStoreIcon(bool shouldShow);

    MCVAPI bool supportsAutoSaveOnDBCompaction() const;

    MCVAPI bool supportsClientUpdate() const;

    MCVAPI bool supportsDayOneExperience() const;

    MCVAPI bool supportsFliteTTS() const;

    MCVAPI bool supportsInPackageRecursion() const;

    MCVAPI bool supportsLaunchingLegacyVersion() const;

    MCVAPI bool supportsLegacySinglePremiumCacheDirectory() const;

    MCVAPI bool supportsVRModeSwap() const;

    MCVAPI bool supportsVibration() const;

    MCVAPI bool supportsWorldShare() const;

    MCVAPI bool supportsXboxLiveAchievements() const;

    MCVAPI void teardown();

    MCVAPI void tryEnterVRMode(bool duringStartup, std::function<void(bool)> callback);

    MCVAPI void updateLocalization(std::string const& loc);

    MCVAPI bool useAppPlatformForTelemetryIPAddress();

    MCVAPI bool useNativeStoreForRealmsPurchase();

    MCVAPI bool usePlatformProfilePicturesOnly() const;

    MCVAPI bool useXboxControlHelpers() const;

    MCVAPI bool usesAsyncOptionSaving() const;

    MCVAPI bool usesHDRBrightness() const;

    MCVAPI void vibrate(int milliSeconds);

    MCVAPI ~AppPlatform();

    MCAPI explicit AppPlatform(bool registerService);

    MCAPI void _fireAppTerminated();

    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo>& accessPlatformRuntimeInformation_Shim();

    MCAPI class Core::PathBuffer<std::string> getCurrentStoragePath() const;

    MCAPI class Core::PathBuffer<std::string> getInternalStoragePath() const;

    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo> const& getPlatformRuntimeInformation() const;

    MCAPI class Core::PathBuffer<std::string> getUserdataPath() const;

    MCAPI bool isTerminating() const;

    MCAPI void notifyUserStorageInitialized();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _initializeLoadProfiler();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForIAppPlatform();

    MCAPI static void** $vftableForISecureStorageKeySystem();

    MCAPI void* ctor$(bool registerService);

    MCAPI void dtor$();

    MCAPI void _disableCPUBoost$();

    MCAPI void _initializeFileStorageAreas$();

    MCAPI void _onInitialize$();

    MCAPI void _onTeardown$();

    MCAPI void _teardownFileStorageAreas$();

    MCAPI bool _tryEnableCPUBoost$();

    MCAPI void addListener$(class AppPlatformListener* l, float priority);

    MCAPI bool allowBetaXblSignIn$() const;

    MCAPI bool allowContentLogWriteToDisk$();

    MCAPI bool allowsResourcePackDevelopment$() const;

    MCAPI bool areThreadsFrozen$() const;

    MCAPI void buyGame$();

    MCAPI void calculateIfLowMemoryDevice$();

    MCAPI bool canLaunchUri$(std::string const& uri);

    MCAPI bool canManageLegacyData$() const;

    MCAPI bool canMigrateWorldData$() const;

    MCAPI bool canSwapVRMode$(bool inVRMode) const;

    MCAPI int checkLicense$();

    MCAPI void collectGraphicsHardwareDetails$();

    MCAPI bool compareAppReceiptToLocalReceipt$(std::string const& otherReceipt);

    MCAPI bool copyAssetFile$(class Core::Path const& filename, class Core::Path const& destination);

    MCAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder$(class Core::Path const& filePath);

    MCAPI std::shared_ptr<class Core::FileStorageArea>
          createLoggingStorageArea$(::Core::FileAccessType fileAccessType, class Core::Path const& loggingPath);

    MCAPI void createUserInput$();

    MCAPI void createUserInput$(int dialogId);

    MCAPI std::shared_ptr<class WebviewInterface> createWebview$(class Webview::PlatformArguments&&) const;

    MCAPI bool doesLANRequireMultiplayerRestrictions$() const;

    MCAPI void exitVRMode$(std::function<void()> callback);

    MCAPI void finish$();

    MCAPI ::ARVRPlatform getARVRPlatform$() const;

    MCAPI struct AppPlatform::AndroidScopedStorageInfo const& getAndroidScopedStorageInfo$() const;

    MCAPI class AppLifecycleContext& getAppLifecycleContext$();

    MCAPI class Core::PathBuffer<std::string> getAssetFileFullPath$(class Core::Path const& filename);

    MCAPI std::vector<std::string> getBroadcastAddresses$();

    MCAPI std::vector<::Social::MultiplayerServiceIdentifier>
          getBroadcastingMultiplayerServiceIds$(bool xblBroadcast, bool platformBroadcast) const;

    MCAPI ::BuildPlatform getBuildPlatform$() const;

    MCAPI class Core::PathBuffer<std::string> getCacheStoragePath$();

    MCAPI class Core::PathBuffer<std::string> getCatalogSearchScratchPath$();

    MCAPI std::string getClientUpdateUrl$() const;

    MCAPI ::InputMode getDefaultInputMode$() const;

    MCAPI int getDefaultNetworkMaxPlayers$() const;

    MCAPI float getDefaultSafeZoneScaleAll$() const;

    MCAPI float getDefaultSafeZoneScaleX$() const;

    MCAPI float getDefaultSafeZoneScaleY$() const;

    MCAPI float getDefaultScreenPositionX$() const;

    MCAPI float getDefaultScreenPositionY$() const;

    MCAPI ::DeviceSunsetTier getDeviceSunsetTier$() const;

    MCAPI int getDisplayHeight$();

    MCAPI int getDisplayWidth$();

    MCAPI int getDpi$() const;

    MCAPI std::string getEdition$() const;

    MCAPI std::optional<struct ScreenshotOptions> getExtraLevelSaveDataIconParams$(std::string const& levelId) const;

    MCAPI std::string getFeedbackBugsLink$() const;

    MCAPI std::string getFeedbackHelpLink$() const;

    MCAPI Bedrock::NotNullNonOwnerPtr<class IFileAccess> getFileAccess$(::ResourceFileSystem fileSystem);

    MCAPI ::AppFocusState getFocusState$();

    MCAPI uint64 getHighPerformanceThreadsCount$() const;

    MCAPI std::vector<std::string> getIPAddresses$();

    MCAPI class Core::PathBuffer<std::string> getInternalPackStoragePath$() const;

    MCAPI bool getIsRunningInAppCenter$() const;

    MCAPI class Core::PathBuffer<std::string> getLevelInfoCachePath$() const;

    MCAPI std::chrono::nanoseconds getLevelSaveInterval$() const;

    MCAPI class Core::PathBuffer<std::string> getLoggingPath$() const;

    MCAPI uint64 getLowPhysicalMemoryThreshold$() const;

    MCAPI uint getMaxClubsRequests$() const;

    MCAPI int getMaxLDBFilesOpen$() const;

    MCAPI int getMaxSimRadiusInChunks$() const;

    MCAPI int getMaxSimultaneousDownloads$() const;

    MCAPI uint getMaxSimultaneousServiceRequests$() const;

    MCAPI uint64 getMaximumUsedMemory$();

    MCAPI auto getModalErrorMessageProc$() -> ::AssertDialogResponse (*)(std::string const&, std::string const&);

    MCAPI std::string getModelName$();

    MCAPI std::vector<std::shared_ptr<class Social::MultiplayerService>> getMultiplayerServiceListToRegister$() const;

    MCAPI ::NetworkConnectionType getNetworkConnectionType$();

    MCAPI int getNumberOfParticleFramesToInterpolate$() const;

    MCAPI ::OsVersion getOSVersion$() const;

    MCAPI class Core::PathBuffer<std::string> getOnDiskPackScratchPath$();

    MCAPI class Core::PathBuffer<std::string> getOnDiskScratchPath$();

    MCAPI std::optional<::OperationMode> getOperationMode$() const;

    MCAPI uint64 getOptimalLDBSize$();

    MCAPI std::chrono::nanoseconds getOptionsSaveInterval$() const;

    MCAPI std::string getPackageFamilyName$() const;

    MCAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath$();

    MCAPI int getPlatformDpi$() const;

    MCAPI std::string getPlatformStringVar$(int stringId);

    MCAPI bool getPlatformTTSEnabled$() const;

    MCAPI bool getPlatformTTSExists$() const;

    MCAPI ::PlatformType getPlatformType$() const;

    MCAPI ::UIScalingRules getPlatformUIScalingRules$() const;

    MCAPI std::variant<struct HWND__*, std::monostate> getRenderSurfaceParameters$() const;

    MCAPI class Core::PathBuffer<std::string> getScratchPath$();

    MCAPI int getScreenHeight$() const;

    MCAPI int getScreenWidth$() const;

    MCAPI std::unique_ptr<class SecureStorage> getSecureStorage$();

    MCAPI class SecureStorageKey getSecureStorageKey$(std::string const& key);

    MCAPI class Core::PathBuffer<std::string> getSettingsPath$();

    MCAPI class Core::PathBuffer<std::string> getShaderCachePath$();

    MCAPI float getStoreNetworkFailureTimeout$() const;

    MCAPI class mce::UUID const& getThirdPartyPackUUID$() const;

    MCAPI uint64 getTotalHardwareThreadsCount$() const;

    MCAPI ::UIScalingRules getUIScalingRules$() const;

    MCAPI std::vector<std::string> getUserInput$();

    MCAPI int getUserInputStatus$();

    MCAPI class Core::PathBuffer<std::string> getUserStorageRootPath$() const;

    MCAPI class Core::PathBuffer<std::string> getUserdataPathForLevels$() const;

    MCAPI ::VRControllerType getVRControllerType$() const;

    MCAPI void goToExternalConsumablesStoreListing$() const;

    MCAPI void handlePlatformSpecificCommerceError$(uint error);

    MCAPI bool hasAssetFile$(class Core::Path const& filename);

    MCAPI bool hasBuyButtonWhenInvalidLicense$();

    MCAPI bool hasFastAlphaTest$() const;

    MCAPI bool hasIDEProfiler$();

    MCAPI bool hasJournalingFilesystem$() const;

    MCAPI bool hasMulticastReceivePermission$() const;

    MCAPI bool hasPlatformSpecificInvites$() const;

    MCAPI bool hasSeparatedStorageAreasForContentAcquisition$() const;

    MCAPI void hideSplashScreen$();

    MCAPI bool importAsFlatFile$() const;

    MCAPI void initAppPlatformNetworkSettings$();

    MCAPI void initialize$();

    MCAPI void initializeGameStreaming$();

    MCAPI void initializeMulticast$() const;

    MCAPI void initializeScreenDependentResources$();

    MCAPI bool isAutoCompactionEnabled$() const;

    MCAPI bool isCentennial$() const;

    MCAPI bool isContentAutoUpdateAllowed$() const;

    MCAPI bool isCrossPlatformToggleVisible$() const;

    MCAPI bool isDisplayInitialized$() const;

    MCAPI bool isDownloadAndImportBlocking$() const;

    MCAPI bool isDownloadBuffered$() const;

    MCAPI bool isEduMode$() const;

    MCAPI bool isFireTV$() const;

    MCAPI bool isInternetAvailable$() const;

    MCAPI bool isJoinableViaExternalServers$() const;

    MCAPI bool isLANAllowed$() const;

    MCAPI bool isLANAvailable$() const;

    MCAPI bool isLowMemoryDevice$() const;

    MCAPI bool isLowPhysicalMemoryDevice$() const;

    MCAPI bool isNetworkAllowed$() const;

    MCAPI bool isNetworkAvailable$() const;

    MCAPI bool isNetworkEnabled$(bool onlyWifiAllowed) const;

    MCAPI bool isNetworkThrottled$() const;

    MCAPI std::optional<bool> isOnWifiConnectionTelemetryValue$();

    MCAPI bool isQuitCapable$() const;

    MCAPI bool isRealmsEnabled$() const;

    MCAPI bool isTelemetryAllowed$();

    MCAPI bool isTrialWorldsTransferToFullGameAllowed$() const;

    MCAPI bool isWebviewSupported$() const;

    MCAPI bool isWin10Arm$() const;

    MCAPI void launchLegacyVersion$();

    MCAPI void launchSettings$();

    MCAPI void launchUri$(std::string const& uri);

    MCAPI std::set<class Core::PathBuffer<std::string>>
          listAssetFilesIn$(class Core::Path const& path, std::string const& extension) const;

    MCAPI uint maxFileDataRequestConcurrency$() const;

    MCAPI bool minimizeBackgroundDownloads$() const;

    MCAPI bool multiplayerRequiresPremiumAccess$() const;

    MCAPI bool multiplayerRequiresUGCEnabled$() const;

    MCAPI bool notifyControllerConnectionStateChange$() const;

    MCAPI void notifyNetworkConfigurationChanged$();

    MCAPI void onFullGameUnlock$();

    MCAPI void onMinecraftGameInitComplete$();

    MCAPI void onPrimaryUserNetworkReady$();

    MCAPI bool platformRequiresControllerApplet$() const;

    MCAPI std::string readAssetFile$(class Core::Path const& filename);

    MCAPI void registerExperimentsActiveCrashDump$(std::vector<std::string> const& activeExperiments) const;

    MCAPI void registerFileForCollectionWithCrashDump$(class Core::Path const& fileName);

    MCAPI void releaseMulticastReceivePermission$() const;

    MCAPI bool reloadRenderResourcesOnResume$() const;

    MCAPI void removeListener$(class AppPlatformListener* l);

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<struct IntegrityTokenResult>>
          requestIntegrityToken$(std::string const& nonceToken);

    MCAPI void requestMulticastReceivePermission$();

    MCAPI bool requireControllerAtStartup$() const;

    MCAPI bool requiresAutoSaveIconExplanationPopup$() const;

    MCAPI bool requiresLiveGoldForMultiplayer$() const;

    MCAPI bool requiresXboxLiveSigninToPlay$() const;

    MCAPI void restartApp$(bool restart);

    MCAPI bool restartRequested$();

    MCAPI bool saveTreatmentPacksAsZips$() const;

    MCAPI void setARVRPlatform$(::ARVRPlatform platform);

    MCAPI void setDpi$(int dpi);

    MCAPI void setFullscreenMode$(::FullscreenMode fullscreenMode);

    MCAPI void setIntegrityToken$(std::string const& integrityToken);

    MCAPI void setIntegrityTokenErrorMessage$(std::string const& errorMessage);

    MCAPI void setKeepScreenOnFlag$(bool);

    MCAPI void setNetworkAllowed$(bool allowed);

    MCAPI void setNetworkConnectionType$(::NetworkConnectionType connectionType);

    MCAPI void setScreenSize$(int width, int height);

    MCAPI void setSecureStorageKey$(std::string const& key, class SecureStorageKey const& value);

    MCAPI void setSleepEnabled$(bool enabled);

    MCAPI void setThreadsFrozen$(bool frozen);

    MCAPI void setUIScalingRules$(::UIScalingRules UIScalingRules);

    MCAPI void setVRControllerType$(::VRControllerType controllerType);

    MCAPI void setWindowSize$(int width, int height);

    MCAPI void setWindowText$(std::string const& title);

    MCAPI bool shouldPauseDownloadsWhenEnterGame$() const;

    MCAPI bool shouldRegisterForXboxLiveNotifications$() const;

    MCAPI bool shouldRemoveGraphicsDeviceOnAppTermination$() const;

    MCAPI void showDialog$(int dialogId);

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<bool>>
          showOSUserDialog$(std::string, std::string, std::string);

    MCAPI void showPlatformEmptyStoreDialog$(std::function<void(bool)>&& callback);

    MCAPI void showPlatformStoreIcon$(bool shouldShow);

    MCAPI bool supportsAutoSaveOnDBCompaction$() const;

    MCAPI bool supportsClientUpdate$() const;

    MCAPI bool supportsDayOneExperience$() const;

    MCAPI bool supportsFliteTTS$() const;

    MCAPI bool supportsInPackageRecursion$() const;

    MCAPI bool supportsLaunchingLegacyVersion$() const;

    MCAPI bool supportsLegacySinglePremiumCacheDirectory$() const;

    MCAPI bool supportsVRModeSwap$() const;

    MCAPI bool supportsVibration$() const;

    MCAPI bool supportsWorldShare$() const;

    MCAPI bool supportsXboxLiveAchievements$() const;

    MCAPI void teardown$();

    MCAPI void tryEnterVRMode$(bool duringStartup, std::function<void(bool)> callback);

    MCAPI void updateLocalization$(std::string const& loc);

    MCAPI bool useAppPlatformForTelemetryIPAddress$();

    MCAPI bool useNativeStoreForRealmsPurchase$();

    MCAPI bool usePlatformProfilePicturesOnly$() const;

    MCAPI bool useXboxControlHelpers$() const;

    MCAPI bool usesAsyncOptionSaving$() const;

    MCAPI bool usesHDRBrightness$() const;

    MCAPI void vibrate$(int milliSeconds);

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const& HOME_PATH();

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const& LOG_PATH();

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const& SETTINGS_PATH();

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const& SHADERCACHE_PATH();

    MCAPI static bool& mIsInitialized();

    // NOLINTEND
};
