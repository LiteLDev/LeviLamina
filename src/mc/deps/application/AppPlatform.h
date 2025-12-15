#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/MousePointerType.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/application/AppAction.h"
#include "mc/deps/application/ClipboardFeatureFlags.h"
#include "mc/deps/application/DeviceSunsetTier.h"
#include "mc/deps/application/IAppPlatform.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/application/OsVersion.h"
#include "mc/deps/application/StoragePermissionResult.h"
#include "mc/deps/core/NetworkConnectionType.h"
#include "mc/deps/core/debug/AssertDialogResponse.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/AppFocusState.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/platform/FullscreenMode.h"
#include "mc/deps/core/platform/OperationMode.h"
#include "mc/deps/core/platform/PermissionRequestReason.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/core/platform/UIScalingRules.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/secure_storage/ISecureStorageKeySystem.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/input/InputMode.h"
#include "mc/options/UIProfile.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
class AppLifecycleContext;
class AppPlatformListener;
class BatteryMonitorInterface;
class FilePickerSettings;
class HardwareMemoryTierUtil;
class IAppPlatformImpl;
class IFileAccess;
class IPlatformScreenshots;
class ImagePickingCallback;
class PDFWriter;
class PropertyBag;
class PushNotificationMessage;
class RectangleArea;
class SecureStorage;
class SecureStorageKey;
class ThermalMonitorInterface;
class ThrottledFileWriteManager;
class UriListener;
struct IntegrityTokenResult;
namespace ApplicationSignal { class ClipboardCopy; }
namespace ApplicationSignal { class ClipboardPaste; }
namespace ApplicationSignal { class ClipboardPasteRequest; }
namespace Bedrock { class IApplicationDataStores; }
namespace Bedrock::Threading { class Mutex; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Social { struct UserCreationData; }
namespace mce { class UUID; }
namespace mce { struct Image; }
class WebviewInterface;
namespace Social { struct MultiplayerService; }
namespace Webview { struct PlatformArguments; }
// clang-format on

class AppPlatform : public ::IAppPlatform, public ::ISecureStorageKeySystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk49db95;
    ::ll::UntypedStorage<1, 1>   mUnkcb9aaa;
    ::ll::UntypedStorage<1, 1>   mUnkbe6f7b;
    ::ll::UntypedStorage<1, 1>   mUnk513795;
    ::ll::UntypedStorage<1, 1>   mUnkce9805;
    ::ll::UntypedStorage<8, 16>  mUnk7a3ae6;
    ::ll::UntypedStorage<8, 104> mUnke68af5;
    ::ll::UntypedStorage<1, 1>   mUnk3eb9fc;
#ifdef LL_PLAT_C
    ::ll::UntypedStorage<8, 8>  mUnk2a484c;
    ::ll::UntypedStorage<8, 64> mUnkd51380;
#endif
    ::ll::UntypedStorage<8, 64> mUnkb50203;
    ::ll::UntypedStorage<1, 4>  mUnka5d242;
    ::ll::UntypedStorage<4, 4>  mUnk678160;
    ::ll::UntypedStorage<8, 80> mUnkafb54c;
    ::ll::UntypedStorage<8, 32> mUnked78dc;
    ::ll::UntypedStorage<8, 32> mUnkb79db9;
    ::ll::UntypedStorage<8, 32> mUnk2d8cb0;
    ::ll::UntypedStorage<8, 8>  mUnkdc46a5;
    ::ll::UntypedStorage<8, 8>  mUnk59b922;
    ::ll::UntypedStorage<8, 8>  mUnk14a700;
    ::ll::UntypedStorage<8, 8>  mUnk2c6ecf;
    ::ll::UntypedStorage<1, 1>  mUnk31e0b7;
    ::ll::UntypedStorage<8, 32> mUnk6d6135;
    ::ll::UntypedStorage<8, 8>  mUnk896a24;
    ::ll::UntypedStorage<8, 8>  mUnk69a5b2;
    ::ll::UntypedStorage<1, 1>  mUnkd7bea9;
    ::ll::UntypedStorage<8, 40> mUnk20e405;
    ::ll::UntypedStorage<8, 8>  mUnk69afa6;
    ::ll::UntypedStorage<1, 1>  mUnk6e12ac;
    ::ll::UntypedStorage<1, 1>  mUnkff6e88;
    ::ll::UntypedStorage<4, 4>  mUnk1d28ac;
    ::ll::UntypedStorage<4, 4>  mUnk81425d;
    ::ll::UntypedStorage<1, 1>  mUnkd5341c;
    ::ll::UntypedStorage<1, 1>  mUnkdcaaf8;
    ::ll::UntypedStorage<1, 1>  mUnk113b3b;
    ::ll::UntypedStorage<1, 1>  mUnkbe6182;
    ::ll::UntypedStorage<1, 1>  mUnkb00e9d;
    ::ll::UntypedStorage<1, 1>  mUnk78da06;
    ::ll::UntypedStorage<1, 1>  mUnk2ff939;
    ::ll::UntypedStorage<8, 32> mUnkd9746f;
    ::ll::UntypedStorage<8, 80> mUnk267c61;
    ::ll::UntypedStorage<8, 32> mUnk26e8ea;
    ::ll::UntypedStorage<8, 80> mUnkd6f5b8;
    ::ll::UntypedStorage<8, 8>  mUnkb30295;
    ::ll::UntypedStorage<8, 8>  mUnk40dee2;
    ::ll::UntypedStorage<8, 8>  mUnk92e07d;
    ::ll::UntypedStorage<8, 16> mUnk706c14;
    ::ll::UntypedStorage<8, 16> mUnk391b07;
    ::ll::UntypedStorage<8, 16> mUnke84b85;
    ::ll::UntypedStorage<8, 16> mUnkb30208;
    ::ll::UntypedStorage<8, 8>  mUnkf2b382;
    ::ll::UntypedStorage<4, 4>  mUnk50488d;
    ::ll::UntypedStorage<8, 16> mUnkea295c;
    ::ll::UntypedStorage<8, 8>  mUnk412bfa;
    ::ll::UntypedStorage<8, 8>  mUnkdd0de7;
    ::ll::UntypedStorage<8, 8>  mUnkf9ffce;
#ifdef LL_PLAT_C
    ::ll::UntypedStorage<8, 8> mUnk85aa65;
#endif
    ::ll::UntypedStorage<8, 8> mUnkb00836;
    // NOLINTEND

public:
    // prevent constructor by default
    AppPlatform();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AppPlatform() /*override*/;

    virtual void initialize();

    virtual void teardown();

    virtual void initAppPlatformNetworkSettings() /*override*/;

    virtual void initializeScreenDependentResources();

    virtual uint64 getHighPerformanceThreadsCount() const;

    virtual uint64 getTotalHardwareThreadsCount() const;

    virtual void initializeGraphicsDeviceTier();

    virtual void addListener(::AppPlatformListener* l, float priority);

    virtual void removeListener(::AppPlatformListener* l);

    virtual void restartApp(bool restart);

    virtual bool restartRequested() /*override*/;

    virtual ::Core::PathBuffer<::std::string> getPackagePath() const = 0;

    virtual int const numberOfThrottledTreatmentPacksToImportPerMinute() const /*override*/;

    virtual bool const areTreatmentPacksThrottled() const /*override*/;

    virtual ::HardwareMemoryTierUtil const& getHardwareMemoryTierUtil() const /*override*/;

#ifdef LL_PLAT_C
    virtual ::Core::PathBuffer<::std::string> getDataUrl() const = 0;

    virtual void loadPNG(::mce::Image& out, ::Core::Path const& filename);

    virtual void loadTGA(::mce::Image& out, ::Core::Path const& filename);

    virtual void loadJPEG(::mce::Image& out, ::Core::Path const& filename);

    virtual int getKeyFromKeyCode(int keyCode, int metaState, int deviceId);

    virtual void textEditComponentGainedFocus(::std::string const&, int, bool, bool, bool);

    virtual void textEditComponentLostFocus();

    virtual void
    showKeyboard(::std::string const&, int, bool, bool, bool, int const, ::glm::vec2 const&, float, ::InputMode);

    virtual void hideKeyboard();

    virtual bool blankLineDismissesChat() const;

    virtual bool signWrapsTextEntry() const;

    virtual bool isFullScreenKeyboard() const;

    virtual bool actionSuspendsApp(::AppAction) const;

    virtual float getKeyboardHeight() const;

    virtual bool refocusMouse(bool lostMouse, bool oldMouseGrabbed);

    virtual void setMousePointerType(::ui::MousePointerType);

    virtual void hideMousePointer();

    virtual void showMousePointer();

    virtual void postInteractiveSignIn();

    virtual bool useHardwareMouse();

    virtual void provideHardwareMouseImageData(::mce::Image const& imageData);

    virtual bool hasCustomSoftwareCursor() const;

    virtual ::Core::PathBuffer<::std::string> getCustomSoftwareCursorAsset() const;

    virtual bool getPointerFocus();

    virtual void setPointerFocus(bool lostFocus);

    virtual void toggleSimulateTouchWithMouse();

    virtual void _fireAppSuspended();

    virtual void _fireAppResumed();

    virtual void _fireAppFocusLost();

    virtual void _fireAppFocusGained();

    virtual void _fireResizeBegin();

    virtual void _fireResizeEnd();

    virtual void _fireDeviceLost();

    virtual void _fireSurfaceCreated();

    virtual void _fireSurfaceDestroyed();

    virtual void _fireAppConfigurationChanged();

    virtual void _fireAppPaused();

    virtual void _fireAppUnpaused();

    virtual void swapBuffers() = 0;

    virtual void discardBackbuffer();

    virtual ::std::string getSystemLocale() const = 0;

    virtual ::std::string getTermsOfUseHyperlink() const;

    virtual void pickImage(::std::shared_ptr<::ImagePickingCallback>) = 0;

    virtual void pickFile(::std::shared_ptr<::FilePickerSettings> settings);

    virtual bool supportsAlbumExport() const;

    virtual bool supportsPDFExport() const;

    virtual ::std::shared_ptr<::PDFWriter> createPlatformPDFWriter();

    virtual void shareFile(::Core::Path const& path, ::std::function<void(bool)> onCompletionCallback);

    virtual bool hasHardwareBackButton();

    virtual bool supportsMSAA() const;

    virtual bool supports3rdPartyServers() const;

    virtual bool supportsManualAddedServers() const;

    virtual bool supportsFilePicking() const;

    virtual bool supportsTouch() const;

    virtual bool supportsKeyboardMouse() const;

    virtual bool supportsGamepad() const;

    virtual ::ClipboardFeatureFlags getClipboardFeatures() const;

    virtual bool supportsClipboardSet() const;

    virtual bool supportsClipboardGet() const;

    virtual bool supportsClipboardAsyncGet() const;

    virtual void setClipboard(::std::string const& value) const;

    virtual ::std::wstring getClipboardText() const;

    virtual void getClipboardTextAsync(::std::function<void(::std::string const&)> callback) const;

    virtual bool supportsShare() const;

    virtual void share() const;

    virtual bool allowSplitScreen();

    virtual float splitScreenRenderDistScalar(uint numPlayers);

    virtual float uiOpenRenderDistScalar();

    virtual void pushNotificationReceived(::PushNotificationMessage const& msg);

    virtual void openStoragePermissionRequest(
        ::PermissionRequestReason                        reason,
        ::std::function<void(::StoragePermissionResult)> resultCallback
    );

    virtual void setStorageDirectory(
        ::FileStorageDirectory dir,
        bool                   isCallback,
        ::PropertyBag const&   extraData,
        ::std::function<void(bool)>
    );

    virtual ::FileStorageDirectory setInitialStorageDirectory(::FileStorageDirectory dir);

    virtual ::FileStorageDirectory getStorageDirectory() const;

    virtual void setStorageDirectoryChangeDenied(::std::function<void(::FileStorageDirectory)> callback);

    virtual void setStorageDirectoryChanged(::std::function<void(::Core::Path const&)> callback);

    virtual void runStoragePermissionResultCallback(::StoragePermissionResult result);

    virtual bool hasExternalStoragePermission();

    virtual bool delayOptionSaveUntilCloudSync() const;

    virtual void updateTextEditBoxPosition(
        ::RectangleArea const& controlPosition,
        ::RectangleArea const& selectionPosition,
        float const            guiScale
    );

    virtual ::BatteryMonitorInterface const& getBatteryMonitorInterface() const;

    virtual ::ThermalMonitorInterface const& getThermalMonitorInterface() const;

    virtual void trialCorrelationStart();

    virtual void setAllowLostFocusToasts(bool allowLostFocusToasts);

    virtual void setShowLostFocusToasts(bool showLostFocusToasts);

    virtual bool getShowLostFocusToasts();

    virtual double getTimeSFromProcessStart() const = 0;

#endif
    virtual ::Bedrock::Threading::Async<::IntegrityTokenResult> requestIntegrityToken(::std::string const& nonceToken);

    virtual void setIntegrityToken(::std::string const& integrityToken);

    virtual void setIntegrityTokenErrorMessage(::std::string const& errorMessage);

    virtual bool supportsInPackageRecursion() const;

    virtual bool supportsXboxLiveAchievements() const;

    virtual void hideSplashScreen();

    virtual ::std::string getFeedbackBugsLink() const;

    virtual ::std::string getFeedbackHelpLink() const;

    virtual auto getModalErrorMessageProc() -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&);

    virtual void updateLocalization(::std::string const& loc);

    virtual void setSleepEnabled(bool enabled);

    virtual ::Core::PathBuffer<::std::string> getScratchPath();

    virtual ::Core::PathBuffer<::std::string> getInternalPackStoragePath() const;

    virtual ::Core::PathBuffer<::std::string> getSettingsPath();

    virtual ::Core::PathBuffer<::std::string> getLoggingPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> getPackagedShaderCachePath();

    virtual ::Core::PathBuffer<::std::string> getShaderCachePath();

    virtual ::Core::PathBuffer<::std::string> getUserdataPathForLevels() const;

    virtual ::Core::PathBuffer<::std::string> getCacheStoragePath();

    virtual ::Core::PathBuffer<::std::string> getOnDiskScratchPath();

    virtual ::Core::PathBuffer<::std::string> getOnDiskPackScratchPath();

    virtual ::Core::PathBuffer<::std::string> getLevelInfoCachePath() const;

    virtual ::Core::PathBuffer<::std::string> getCatalogSearchScratchPath();

    virtual ::Core::PathBuffer<::std::string> getUserStorageRootPath() const;

    virtual ::std::shared_ptr<::Core::FileStorageArea> getOrCreateStorageAreaForUser(::Social::UserCreationData const&);

    virtual bool hasSeparatedStorageAreasForContentAcquisition() const;

    virtual uint64 getOptimalLDBSize();

    virtual int getMaxLDBFilesOpen() const;

    virtual bool getDisableLDBSeekCompactions() const;

    virtual void showDialog(int dialogId);

    virtual void createUserInput();

    virtual void createUserInput(int dialogId);

    virtual int getUserInputStatus();

    virtual ::std::vector<::std::string> getUserInput();

    virtual ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> getFileAccess(::ResourceFileSystem fileSystem);

    virtual ::Core::PathBuffer<::std::string> copyImportFileToTempFolder(::Core::Path const& filePath);

    virtual void registerFileForCollectionWithCrashDump(::Core::Path const& fileName);

    virtual void registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const;

    virtual int getScreenWidth() const;

    virtual int getScreenHeight() const;

    virtual int getDisplayWidth();

    virtual int getDisplayHeight();

    virtual void setScreenSize(int width, int height);

    virtual void setWindowSize(int width, int height);

    virtual void setWindowText(::std::string const& title);

    virtual ::std::optional<::OperationMode> getOperationMode() const;

    virtual bool allowContentLogWriteToDisk();

    virtual uint getMaxClubsRequests() const;

    virtual void queueForMainThread_DEPRECATED(::std::function<void()>) = 0;

    virtual ::MPMCQueue<::std::function<void()>>& getMainThreadQueue() = 0;

    virtual bool supportsLaunchingLegacyVersion() const;

    virtual void launchLegacyVersion();

    virtual bool canManageLegacyData() const;

    virtual bool supportsDayOneExperience() const;

    virtual bool canMigrateWorldData() const;

    virtual bool isContentAutoUpdateAllowed() const;

    virtual int getMaxSimultaneousDownloads() const;

    virtual uint getMaxSimultaneousServiceRequests() const;

    virtual bool isDownloadAndImportBlocking() const;

    virtual bool isDownloadBuffered() const;

    virtual bool supportsAutoSaveOnDBCompaction() const;

    virtual ::std::string getTextBoxBackend() const = 0;

    virtual void setTextBoxBackend(::std::string const& str) = 0;

    virtual int getCaretPosition() const = 0;

    virtual void setCaretPosition(int) = 0;

    virtual bool supportsVibration() const;

    virtual void vibrate(int milliSeconds);

    virtual ::Core::PathBuffer<::std::string> getAssetFileFullPath(::Core::Path const& filename);

    virtual ::std::string _readAssetFileInternal(::Core::Path const& filename);

    virtual bool hasAssetFile(::Core::Path const& filename);

    virtual bool copyAssetFile(::Core::Path const& filename, ::Core::Path const& destination);

    virtual ::std::set<::Core::PathBuffer<::std::string>>
    listAssetFilesIn(::Core::Path const& path, ::std::string const& extension) const;

    virtual bool supportsClientUpdate() const;

    virtual ::std::string getClientUpdateUrl() const;

    virtual int checkLicense();

    virtual bool hasBuyButtonWhenInvalidLicense();

    virtual bool isNetworkAvailable() const /*override*/;

    virtual bool isLANAvailable() const /*override*/;

    virtual bool isNetworkEnabled(bool onlyWifiAllowed) const /*override*/;

    virtual void setNetworkAllowed(bool allowed);

    virtual bool isNetworkAllowed() const;

    virtual bool isInternetAvailable() const /*override*/;

    virtual ::std::optional<bool> isOnWifiConnectionTelemetryValue();

    virtual ::NetworkConnectionType getNetworkConnectionType();

    virtual void setNetworkConnectionType(::NetworkConnectionType connectionType);

    virtual int getDefaultNetworkMaxPlayers() const;

    virtual bool multiplayerRequiresPremiumAccess() const /*override*/;

    virtual bool multiplayerRequiresUGCEnabled() const /*override*/;

    virtual bool isCrossPlatformToggleVisible() const;

    virtual bool isTelemetryAllowed();

    virtual bool isTrialWorldsTransferToFullGameAllowed() const;

    virtual void buyGame();

    virtual void finish();

    virtual bool canLaunchUri(::std::string const& uri);

    virtual void launchUri(::std::string const& uri);

    virtual void launchSettings();

    virtual bool useXboxControlHelpers() const;

    virtual ::PlatformType getPlatformType() const;

    virtual bool isCentennial() const;

    virtual ::std::string getPackageFamilyName() const;

    virtual ::BuildPlatform getBuildPlatform() const /*override*/;

    virtual ::std::string getPlatformString() const = 0;

    virtual ::std::string getSubPlatformString() const = 0;

    virtual int getNumberOfParticleFramesToInterpolate() const;

    virtual int getDpi() const;

    virtual void setDpi(int dpi);

    virtual ::UIScalingRules getUIScalingRules() const;

    virtual void setUIScalingRules(::UIScalingRules UIScalingRules);

    virtual bool hasIDEProfiler();

    virtual ::std::string getPlatformStringVar(int stringId);

    virtual ::std::string getApplicationId() const = 0;

    virtual uint64 getFreeMemory() const = 0;

    virtual uint64 getMemoryLimit() const = 0;

    virtual uint64 getUsedMemory() = 0;

    virtual uint64 getTotalPhysicalMemory() const = 0;

    virtual uint64 getMaximumUsedMemory();

    virtual uint64 getLowMemoryEventThreshold(::LowMemorySeverity) const;

    virtual uint64 getLowMemoryEventRecoveryThreshold(::LowMemorySeverity severity) const;

    virtual uint64 getLowPhysicalMemoryThreshold() const /*override*/;

    virtual void calculateIfLowMemoryDevice();

    virtual bool isLowMemoryDevice() const /*override*/;

    virtual bool isLowPhysicalMemoryDevice() const /*override*/;

    virtual uint64 getTextureMemoryBudget() const;

    virtual uint64 getSingleMipDefaultMemoryBudget() const;

    virtual void readyForApplicationExitInfo() const;

    virtual ::DeviceSunsetTier getDeviceSunsetTier() const;

    virtual int getMaxSimRadiusInChunks() const;

    virtual ::std::vector<::std::string> getBroadcastAddresses();

    virtual ::std::vector<::std::string> getIPAddresses();

    virtual bool useAppPlatformForTelemetryIPAddress();

    virtual ::std::string getModelName();

    virtual bool usesHDRBrightness() const;

    virtual void updateBootstrapSettingsFromTreatmentsAsync();

#ifdef LL_PLAT_C
    virtual ::std::string getDeviceId() const /*override*/;

    virtual ::std::string createUUID() = 0;

    virtual bool isTablet() const = 0;

    virtual void registerUriListener(::UriListener& listener);

    virtual void registerUriListener(::std::string const& verb, ::UriListener& listener);

    virtual void unregisterUriListener(::UriListener const& listener);

    virtual void notifyUriListeners(::ActivationUri const& uri);

    virtual void notifyUriListenerRegistrationDone();

#endif
    virtual void setFullscreenMode(::FullscreenMode const fullscreenMode);

    virtual bool isNetworkThrottled() const;

    virtual bool isLANAllowed() const /*override*/;

    virtual bool doesLANRequireMultiplayerRestrictions() const;

    virtual void collectGraphicsHardwareDetails();

    virtual ::std::string getEdition() const;

    virtual ::OsVersion getOSVersion() const;

    virtual void setThreadsFrozen(bool frozen);

    virtual bool areThreadsFrozen() const;

    virtual float getDefaultSafeZoneScaleX() const;

    virtual float getDefaultSafeZoneScaleY() const;

    virtual float getDefaultSafeZoneScaleAll() const;

    virtual float getDefaultScreenPositionX() const;

    virtual float getDefaultScreenPositionY() const;

    virtual bool isQuitCapable() const;

    virtual bool requireControllerAtStartup() const;

    virtual bool notifyControllerConnectionStateChange() const;

    virtual bool platformRequiresControllerApplet() const;

    virtual ::InputMode getDefaultInputMode() const;

    virtual ::AppFocusState getFocusState();

    virtual ::AppLifecycleContext& getAppLifecycleContext();

    virtual uint64 calculateAvailableDiskFreeSpace(::Core::Path const&) = 0;

    virtual bool supportsFliteTTS() const;

    virtual ::std::unique_ptr<::SecureStorage> getSecureStorage();

    virtual ::SecureStorageKey getSecureStorageKey(::std::string const& key) /*override*/;

    virtual void setSecureStorageKey(::std::string const& key, ::SecureStorageKey const& value) /*override*/;

    virtual bool devHotReloadRenderResources() const;

    virtual bool shouldPauseDownloadsWhenEnterGame() const;

    virtual bool compareAppReceiptToLocalReceipt(::std::string const& otherReceipt);

    virtual ::mce::UUID const& getThirdPartyPackUUID() const;

    virtual bool saveTreatmentPacksAsZips() const;

    virtual bool saveEncryptedPacksAsZips() const;

    virtual bool saveEncryptedWorldTemplatePacksAsZips() const;

    virtual bool allowsResourcePackDevelopment() const;

    virtual bool supportsLegacySinglePremiumCacheDirectory() const;

    virtual bool supportsWorldShare() const;

    virtual bool hasJournalingFilesystem() const;

    virtual bool isAutoCompactionEnabled() const;

    virtual ::std::chrono::nanoseconds getLevelSaveInterval() const;

    virtual ::std::chrono::nanoseconds getOptionsSaveInterval() const;

    virtual bool hasPlatformSpecificInvites() const /*override*/;

    virtual bool usePlatformProfilePicturesOnly() const;

    virtual bool allowBetaXblSignIn() const;

    virtual bool requiresXboxLiveSigninToPlay() const;

    virtual bool requiresLiveGoldForMultiplayer() const;

    virtual bool shouldRegisterForXboxLiveNotifications() const;

    virtual bool isRealmsEnabled() const /*override*/;

    virtual bool minimizeBackgroundDownloads() const;

    virtual bool requiresAutoSaveIconExplanationPopup() const;

    virtual ::IPlatformScreenshots& getPlatformScreenshots();

    virtual ::std::vector<::std::shared_ptr<::Social::MultiplayerService>> getMultiplayerServiceListToRegister() const;

    virtual ::std::vector<::Social::MultiplayerServiceIdentifier>
    getBroadcastingMultiplayerServiceIds(bool xblBroadcast, bool platformBroadcast) const /*override*/;

    virtual uint maxFileDataRequestConcurrency() const;

    virtual void goToExternalConsumablesStoreListing() const /*override*/;

    virtual float getStoreNetworkFailureTimeout() const;

    virtual ::std::shared_ptr<::Core::FileStorageArea>
    createLoggingStorageArea(::Core::FileAccessType fileAccessType, ::Core::PathView loggingPath);

    virtual void handlePlatformSpecificCommerceError(uint error);

    virtual bool isEduMode() const;

    virtual bool importAsFlatFile() const;

    virtual bool isWebviewSupported() const;

    virtual ::std::shared_ptr<::WebviewInterface> createWebview(::Webview::PlatformArguments&&) const;

    virtual bool canAppSelfTerminate() const = 0;

    virtual bool getPlatformTTSExists() const;

    virtual bool getPlatformTTSEnabled() const;

    virtual ::std::variant<::HWND__*, ::std::monostate> getRenderSurfaceParameters() const;

    virtual bool shouldRemoveGraphicsDeviceOnAppTermination() const;

    virtual bool isJoinableViaExternalServers() const;

    virtual void onPrimaryUserNetworkReady();

    virtual bool isDisplayInitialized() const;

    virtual bool usesAsyncOptionSaving() const;

    virtual void showPlatformStoreIcon(bool shouldShow);

    virtual void showPlatformEmptyStoreDialog(::std::function<void(bool)>&& callback) /*override*/;

#ifdef LL_PLAT_C
    virtual void showXboxLiveUserSettings();

#endif
    virtual void initializeGameStreaming();

    virtual void notifyNetworkConfigurationChanged();

    virtual void setKeepScreenOnFlag(bool);

    virtual void initializeMulticast() const;

    virtual void requestMulticastReceivePermission();

    virtual bool hasMulticastReceivePermission() const;

    virtual void releaseMulticastReceivePermission() const;

    virtual void onMinecraftGameInitComplete();

    virtual void onFullGameUnlock();

    virtual bool is24HourTimeFormat() const;

    virtual ::Bedrock::Threading::Async<bool> showOSUserDialog(::std::string, ::std::string, ::std::string);

#ifdef LL_PLAT_C
    virtual ::Bedrock::NotNullNonOwnerPtr<::ThrottledFileWriteManager> getThrottledFileWriteManager() const;

#endif
    virtual ::Core::PathBuffer<::std::string> _getCurrentStoragePath() const = 0;

    virtual ::Core::PathBuffer<::std::string> _getExternalStoragePath() const = 0;

    virtual ::Core::PathBuffer<::std::string> _getInternalStoragePath() const = 0;

    virtual ::Core::PathBuffer<::std::string> _getUserdataPath() const = 0;

#ifdef LL_PLAT_C
    virtual void _notifyUriListeners(::ActivationUri const& uri, bool ignoreVerb);

#endif
    virtual bool _tryEnableCPUBoost();

    virtual void _disableCPUBoost();

    virtual void _initializeFileStorageAreas();

    virtual void _teardownFileStorageAreas();

    virtual int getPlatformDpi() const;

    virtual ::UIScalingRules getPlatformUIScalingRules() const;

    virtual ::Core::PathBuffer<::std::string> getPlatformTempPath() const = 0;

    virtual void _onInitialize();

    virtual void _onTeardown();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AppPlatform(bool registerService, ::std::unique_ptr<::IAppPlatformImpl> impl);

    MCNAPI_C void _clipboardCopyHandler(::ApplicationSignal::ClipboardCopy const& signal);

    MCNAPI_C void _clipboardPasteHandler(::ApplicationSignal::ClipboardPaste const& signal);

    MCNAPI_C void _clipboardPasteRequestHandler(::ApplicationSignal::ClipboardPasteRequest const& signal);

    MCNAPI void _fireAppTerminated();

    MCNAPI void _initializeLoadProfiler();

    MCNAPI_C ::Bedrock::NotNullNonOwnerPtr<::Bedrock::IApplicationDataStores> getApplicationDataStores();

    MCNAPI_C ::UIProfile getDefaultUIProfile() const;

    MCNAPI_S ::Core::PathBuffer<::std::string> getInternalStoragePath() const;

    MCNAPI ::std::optional<::std::locale> getLocaleForDateTimeFormatting() const;

    MCNAPI ::gsl::not_null<::Bedrock::PubSub::Connector<void(::LowMemorySeverity)>*> getOnLowMemoryConnector();

    MCNAPI_C double getTotalActiveSeconds();

    MCNAPI_C void loadImage(::mce::Image& out, ::Core::Path const& filename);

    MCNAPI_C ::mce::Image loadTexture(::Core::Path const& filename);

    MCNAPI_C ::mce::Image loadTextureFromStream(::std::string const& fileStream);

    MCNAPI_C bool requiresNetworkOutageMessaging() const;

    MCNAPI_C void setShareData(::std::string shareTitle, ::std::string shareText, ::std::string shareUri);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static bool updateImGuiKeyboard(uchar param, bool isDown);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& HOME_PATH();

    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& LOG_PATH();

    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& SETTINGS_PATH();

    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& SHADERCACHE_PATH();

    MCNAPI_C static bool& mIsInitialized();

    MCNAPI_C static ::ActivationUri& mPendingProtocolActivation();

    MCNAPI_C static ::Bedrock::Threading::Mutex& mProtocolMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool registerService, ::std::unique_ptr<::IAppPlatformImpl> impl);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

    MCNAPI void $teardown();

    MCNAPI void $initAppPlatformNetworkSettings();

    MCNAPI void $initializeScreenDependentResources();

    MCNAPI uint64 $getHighPerformanceThreadsCount() const;

    MCNAPI uint64 $getTotalHardwareThreadsCount() const;

    MCNAPI void $initializeGraphicsDeviceTier();

    MCNAPI void $addListener(::AppPlatformListener* l, float priority);

    MCNAPI void $removeListener(::AppPlatformListener* l);

    MCNAPI void $restartApp(bool restart);

    MCNAPI bool $restartRequested();

    MCNAPI int const $numberOfThrottledTreatmentPacksToImportPerMinute() const;

    MCNAPI bool const $areTreatmentPacksThrottled() const;

    MCNAPI ::HardwareMemoryTierUtil const& $getHardwareMemoryTierUtil() const;

    MCNAPI ::Bedrock::Threading::Async<::IntegrityTokenResult> $requestIntegrityToken(::std::string const& nonceToken);

    MCNAPI void $setIntegrityToken(::std::string const& integrityToken);

    MCNAPI void $setIntegrityTokenErrorMessage(::std::string const& errorMessage);

    MCNAPI bool $supportsInPackageRecursion() const;

    MCNAPI bool $supportsXboxLiveAchievements() const;

    MCNAPI void $hideSplashScreen();

    MCNAPI ::std::string $getFeedbackBugsLink() const;

    MCNAPI ::std::string $getFeedbackHelpLink() const;

    MCNAPI auto $getModalErrorMessageProc() -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&);

    MCNAPI void $updateLocalization(::std::string const& loc);

    MCNAPI void $setSleepEnabled(bool enabled);

    MCNAPI ::Core::PathBuffer<::std::string> $getScratchPath();

    MCNAPI ::Core::PathBuffer<::std::string> $getInternalPackStoragePath() const;

    MCNAPI ::Core::PathBuffer<::std::string> $getSettingsPath();

    MCNAPI ::Core::PathBuffer<::std::string> $getLoggingPath() const;

    MCNAPI ::Core::PathBuffer<::std::string> $getPackagedShaderCachePath();

    MCNAPI ::Core::PathBuffer<::std::string> $getShaderCachePath();

    MCNAPI ::Core::PathBuffer<::std::string> $getUserdataPathForLevels() const;

    MCNAPI ::Core::PathBuffer<::std::string> $getCacheStoragePath();

    MCNAPI ::Core::PathBuffer<::std::string> $getOnDiskScratchPath();

    MCNAPI ::Core::PathBuffer<::std::string> $getOnDiskPackScratchPath();

    MCNAPI ::Core::PathBuffer<::std::string> $getLevelInfoCachePath() const;

    MCNAPI ::Core::PathBuffer<::std::string> $getCatalogSearchScratchPath();

    MCNAPI ::Core::PathBuffer<::std::string> $getUserStorageRootPath() const;

    MCNAPI ::std::shared_ptr<::Core::FileStorageArea> $getOrCreateStorageAreaForUser(::Social::UserCreationData const&);

    MCNAPI bool $hasSeparatedStorageAreasForContentAcquisition() const;

    MCNAPI uint64 $getOptimalLDBSize();

    MCNAPI int $getMaxLDBFilesOpen() const;

    MCNAPI bool $getDisableLDBSeekCompactions() const;

    MCNAPI void $showDialog(int dialogId);

    MCNAPI void $createUserInput();

    MCNAPI void $createUserInput(int dialogId);

    MCNAPI int $getUserInputStatus();

    MCNAPI ::std::vector<::std::string> $getUserInput();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> $getFileAccess(::ResourceFileSystem fileSystem);

    MCNAPI ::Core::PathBuffer<::std::string> $copyImportFileToTempFolder(::Core::Path const& filePath);

    MCNAPI void $registerFileForCollectionWithCrashDump(::Core::Path const& fileName);

    MCNAPI void $registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const;

    MCNAPI int $getScreenWidth() const;

    MCNAPI int $getScreenHeight() const;

    MCNAPI int $getDisplayWidth();

    MCNAPI int $getDisplayHeight();

    MCNAPI void $setScreenSize(int width, int height);

    MCNAPI void $setWindowSize(int width, int height);

    MCNAPI void $setWindowText(::std::string const& title);

    MCNAPI ::std::optional<::OperationMode> $getOperationMode() const;

    MCNAPI bool $allowContentLogWriteToDisk();

    MCNAPI uint $getMaxClubsRequests() const;

    MCNAPI bool $supportsLaunchingLegacyVersion() const;

    MCNAPI void $launchLegacyVersion();

    MCNAPI bool $canManageLegacyData() const;

    MCNAPI bool $supportsDayOneExperience() const;

    MCNAPI bool $canMigrateWorldData() const;

    MCNAPI bool $isContentAutoUpdateAllowed() const;

    MCNAPI int $getMaxSimultaneousDownloads() const;

    MCNAPI uint $getMaxSimultaneousServiceRequests() const;

    MCNAPI bool $isDownloadAndImportBlocking() const;

    MCNAPI bool $isDownloadBuffered() const;

    MCNAPI bool $supportsAutoSaveOnDBCompaction() const;

    MCNAPI bool $supportsVibration() const;

    MCNAPI void $vibrate(int milliSeconds);

    MCNAPI ::Core::PathBuffer<::std::string> $getAssetFileFullPath(::Core::Path const& filename);

    MCNAPI ::std::string $_readAssetFileInternal(::Core::Path const& filename);

    MCNAPI bool $hasAssetFile(::Core::Path const& filename);

    MCNAPI bool $copyAssetFile(::Core::Path const& filename, ::Core::Path const& destination);

    MCNAPI ::std::set<::Core::PathBuffer<::std::string>>
    $listAssetFilesIn(::Core::Path const& path, ::std::string const& extension) const;

    MCNAPI bool $supportsClientUpdate() const;

    MCNAPI ::std::string $getClientUpdateUrl() const;

    MCNAPI int $checkLicense();

    MCNAPI bool $hasBuyButtonWhenInvalidLicense();

    MCNAPI bool $isNetworkAvailable() const;

    MCNAPI bool $isLANAvailable() const;

    MCNAPI bool $isNetworkEnabled(bool onlyWifiAllowed) const;

    MCNAPI void $setNetworkAllowed(bool allowed);

    MCNAPI bool $isNetworkAllowed() const;

    MCNAPI bool $isInternetAvailable() const;

    MCNAPI ::std::optional<bool> $isOnWifiConnectionTelemetryValue();

    MCNAPI ::NetworkConnectionType $getNetworkConnectionType();

    MCNAPI void $setNetworkConnectionType(::NetworkConnectionType connectionType);

    MCNAPI int $getDefaultNetworkMaxPlayers() const;

    MCNAPI bool $multiplayerRequiresPremiumAccess() const;

    MCNAPI bool $multiplayerRequiresUGCEnabled() const;

    MCNAPI bool $isCrossPlatformToggleVisible() const;

    MCNAPI bool $isTelemetryAllowed();

    MCNAPI bool $isTrialWorldsTransferToFullGameAllowed() const;

    MCNAPI void $buyGame();

    MCNAPI void $finish();

    MCNAPI bool $canLaunchUri(::std::string const& uri);

    MCNAPI void $launchUri(::std::string const& uri);

    MCNAPI void $launchSettings();

    MCNAPI bool $useXboxControlHelpers() const;

    MCNAPI ::PlatformType $getPlatformType() const;

    MCNAPI bool $isCentennial() const;

    MCNAPI ::std::string $getPackageFamilyName() const;

    MCNAPI ::BuildPlatform $getBuildPlatform() const;

    MCNAPI int $getNumberOfParticleFramesToInterpolate() const;

    MCNAPI int $getDpi() const;

    MCNAPI void $setDpi(int dpi);

    MCNAPI ::UIScalingRules $getUIScalingRules() const;

    MCNAPI void $setUIScalingRules(::UIScalingRules UIScalingRules);

    MCNAPI bool $hasIDEProfiler();

    MCNAPI ::std::string $getPlatformStringVar(int stringId);

    MCNAPI uint64 $getMaximumUsedMemory();

    MCNAPI uint64 $getLowMemoryEventThreshold(::LowMemorySeverity) const;

    MCNAPI uint64 $getLowMemoryEventRecoveryThreshold(::LowMemorySeverity severity) const;

    MCNAPI uint64 $getLowPhysicalMemoryThreshold() const;

    MCNAPI void $calculateIfLowMemoryDevice();

    MCNAPI bool $isLowMemoryDevice() const;

    MCNAPI bool $isLowPhysicalMemoryDevice() const;

    MCNAPI uint64 $getTextureMemoryBudget() const;

    MCNAPI uint64 $getSingleMipDefaultMemoryBudget() const;

    MCNAPI void $readyForApplicationExitInfo() const;

    MCNAPI ::DeviceSunsetTier $getDeviceSunsetTier() const;

    MCNAPI int $getMaxSimRadiusInChunks() const;

    MCNAPI ::std::vector<::std::string> $getBroadcastAddresses();

    MCNAPI ::std::vector<::std::string> $getIPAddresses();

    MCNAPI bool $useAppPlatformForTelemetryIPAddress();

    MCNAPI ::std::string $getModelName();

    MCNAPI bool $usesHDRBrightness() const;

    MCNAPI void $updateBootstrapSettingsFromTreatmentsAsync();

    MCNAPI void $setFullscreenMode(::FullscreenMode const fullscreenMode);

    MCNAPI bool $isNetworkThrottled() const;

    MCNAPI bool $isLANAllowed() const;

    MCNAPI bool $doesLANRequireMultiplayerRestrictions() const;

    MCNAPI void $collectGraphicsHardwareDetails();

    MCNAPI ::std::string $getEdition() const;

    MCNAPI ::OsVersion $getOSVersion() const;

    MCNAPI void $setThreadsFrozen(bool frozen);

    MCNAPI bool $areThreadsFrozen() const;

    MCNAPI float $getDefaultSafeZoneScaleX() const;

    MCNAPI float $getDefaultSafeZoneScaleY() const;

    MCNAPI float $getDefaultSafeZoneScaleAll() const;

    MCNAPI float $getDefaultScreenPositionX() const;

    MCNAPI float $getDefaultScreenPositionY() const;

    MCNAPI bool $isQuitCapable() const;

    MCNAPI bool $requireControllerAtStartup() const;

    MCNAPI bool $notifyControllerConnectionStateChange() const;

    MCNAPI bool $platformRequiresControllerApplet() const;

#ifdef LL_PLAT_S
    MCNAPI ::InputMode $getDefaultInputMode() const;
#endif

    MCNAPI ::AppFocusState $getFocusState();

    MCNAPI ::AppLifecycleContext& $getAppLifecycleContext();

    MCNAPI bool $supportsFliteTTS() const;

    MCNAPI ::std::unique_ptr<::SecureStorage> $getSecureStorage();

    MCNAPI ::SecureStorageKey $getSecureStorageKey(::std::string const& key);

    MCNAPI void $setSecureStorageKey(::std::string const& key, ::SecureStorageKey const& value);

    MCNAPI bool $devHotReloadRenderResources() const;

    MCNAPI bool $shouldPauseDownloadsWhenEnterGame() const;

    MCNAPI bool $compareAppReceiptToLocalReceipt(::std::string const& otherReceipt);

    MCNAPI ::mce::UUID const& $getThirdPartyPackUUID() const;

    MCNAPI bool $saveTreatmentPacksAsZips() const;

    MCNAPI bool $saveEncryptedPacksAsZips() const;

    MCNAPI bool $saveEncryptedWorldTemplatePacksAsZips() const;

    MCNAPI bool $allowsResourcePackDevelopment() const;

    MCNAPI bool $supportsLegacySinglePremiumCacheDirectory() const;

    MCNAPI bool $supportsWorldShare() const;

    MCNAPI bool $hasJournalingFilesystem() const;

    MCNAPI bool $isAutoCompactionEnabled() const;

    MCNAPI ::std::chrono::nanoseconds $getLevelSaveInterval() const;

    MCNAPI ::std::chrono::nanoseconds $getOptionsSaveInterval() const;

    MCNAPI bool $hasPlatformSpecificInvites() const;

    MCNAPI bool $usePlatformProfilePicturesOnly() const;

    MCNAPI bool $allowBetaXblSignIn() const;

    MCNAPI bool $requiresXboxLiveSigninToPlay() const;

    MCNAPI bool $requiresLiveGoldForMultiplayer() const;

    MCNAPI bool $shouldRegisterForXboxLiveNotifications() const;

    MCNAPI bool $isRealmsEnabled() const;

    MCNAPI bool $minimizeBackgroundDownloads() const;

    MCNAPI bool $requiresAutoSaveIconExplanationPopup() const;

    MCNAPI ::IPlatformScreenshots& $getPlatformScreenshots();

    MCNAPI ::std::vector<::std::shared_ptr<::Social::MultiplayerService>> $getMultiplayerServiceListToRegister() const;

    MCNAPI ::std::vector<::Social::MultiplayerServiceIdentifier>
    $getBroadcastingMultiplayerServiceIds(bool xblBroadcast, bool platformBroadcast) const;

    MCNAPI uint $maxFileDataRequestConcurrency() const;

    MCNAPI void $goToExternalConsumablesStoreListing() const;

    MCNAPI float $getStoreNetworkFailureTimeout() const;

    MCNAPI ::std::shared_ptr<::Core::FileStorageArea>
    $createLoggingStorageArea(::Core::FileAccessType fileAccessType, ::Core::PathView loggingPath);

    MCNAPI void $handlePlatformSpecificCommerceError(uint error);

    MCNAPI bool $isEduMode() const;

    MCNAPI bool $importAsFlatFile() const;

    MCNAPI bool $isWebviewSupported() const;

    MCNAPI ::std::shared_ptr<::WebviewInterface> $createWebview(::Webview::PlatformArguments&&) const;

    MCNAPI bool $getPlatformTTSExists() const;

    MCNAPI bool $getPlatformTTSEnabled() const;

    MCNAPI ::std::variant<::HWND__*, ::std::monostate> $getRenderSurfaceParameters() const;

    MCNAPI bool $shouldRemoveGraphicsDeviceOnAppTermination() const;

    MCNAPI bool $isJoinableViaExternalServers() const;

    MCNAPI void $onPrimaryUserNetworkReady();

    MCNAPI bool $isDisplayInitialized() const;

    MCNAPI bool $usesAsyncOptionSaving() const;

    MCNAPI void $showPlatformStoreIcon(bool shouldShow);

    MCNAPI void $showPlatformEmptyStoreDialog(::std::function<void(bool)>&& callback);

    MCNAPI void $initializeGameStreaming();

    MCNAPI void $notifyNetworkConfigurationChanged();

    MCNAPI void $setKeepScreenOnFlag(bool);

    MCNAPI void $initializeMulticast() const;

    MCNAPI void $requestMulticastReceivePermission();

    MCNAPI bool $hasMulticastReceivePermission() const;

    MCNAPI void $releaseMulticastReceivePermission() const;

    MCNAPI void $onMinecraftGameInitComplete();

    MCNAPI void $onFullGameUnlock();

    MCNAPI bool $is24HourTimeFormat() const;

    MCNAPI ::Bedrock::Threading::Async<bool> $showOSUserDialog(::std::string, ::std::string, ::std::string);

    MCNAPI bool $_tryEnableCPUBoost();

    MCNAPI void $_disableCPUBoost();

    MCNAPI void $_initializeFileStorageAreas();

    MCNAPI void $_teardownFileStorageAreas();

    MCNAPI int $getPlatformDpi() const;

    MCNAPI ::UIScalingRules $getPlatformUIScalingRules() const;

    MCNAPI void $_onInitialize();

    MCNAPI void $_onTeardown();

#ifdef LL_PLAT_C
    MCNAPI void $loadPNG(::mce::Image& out, ::Core::Path const& filename);

    MCNAPI void $loadTGA(::mce::Image& out, ::Core::Path const& filename);

    MCNAPI void $loadJPEG(::mce::Image& out, ::Core::Path const& filename);

    MCNAPI int $getKeyFromKeyCode(int keyCode, int metaState, int deviceId);

    MCNAPI void $textEditComponentGainedFocus(::std::string const&, int, bool, bool, bool);

    MCNAPI void $textEditComponentLostFocus();

    MCNAPI void $hideKeyboard();

    MCNAPI bool $blankLineDismissesChat() const;

    MCNAPI bool $signWrapsTextEntry() const;

    MCNAPI bool $isFullScreenKeyboard() const;

    MCNAPI bool $actionSuspendsApp(::AppAction) const;

    MCNAPI float $getKeyboardHeight() const;

    MCNAPI bool $refocusMouse(bool lostMouse, bool oldMouseGrabbed);

    MCNAPI void $setMousePointerType(::ui::MousePointerType);

    MCNAPI void $hideMousePointer();

    MCNAPI void $showMousePointer();

    MCNAPI void $postInteractiveSignIn();

    MCNAPI bool $useHardwareMouse();

    MCNAPI void $provideHardwareMouseImageData(::mce::Image const& imageData);

    MCNAPI bool $hasCustomSoftwareCursor() const;

    MCNAPI ::Core::PathBuffer<::std::string> $getCustomSoftwareCursorAsset() const;

    MCNAPI bool $getPointerFocus();

    MCNAPI void $setPointerFocus(bool lostFocus);

    MCNAPI void $toggleSimulateTouchWithMouse();

    MCNAPI void $_fireAppSuspended();

    MCNAPI void $_fireAppResumed();

    MCNAPI void $_fireAppFocusLost();

    MCNAPI void $_fireAppFocusGained();

    MCNAPI void $_fireResizeBegin();

    MCNAPI void $_fireResizeEnd();

    MCNAPI void $_fireDeviceLost();

    MCNAPI void $_fireSurfaceCreated();

    MCNAPI void $_fireSurfaceDestroyed();

    MCNAPI void $_fireAppConfigurationChanged();

    MCNAPI void $_fireAppPaused();

    MCNAPI void $_fireAppUnpaused();

    MCNAPI void $discardBackbuffer();

    MCNAPI ::std::string $getTermsOfUseHyperlink() const;

    MCNAPI void $pickFile(::std::shared_ptr<::FilePickerSettings> settings);

    MCNAPI bool $supportsAlbumExport() const;

    MCNAPI bool $supportsPDFExport() const;

    MCNAPI ::std::shared_ptr<::PDFWriter> $createPlatformPDFWriter();

    MCNAPI void $shareFile(::Core::Path const& path, ::std::function<void(bool)> onCompletionCallback);

    MCNAPI bool $hasHardwareBackButton();

    MCNAPI bool $supportsMSAA() const;

    MCNAPI bool $supports3rdPartyServers() const;

    MCNAPI bool $supportsManualAddedServers() const;

    MCNAPI bool $supportsFilePicking() const;

    MCNAPI bool $supportsTouch() const;

    MCNAPI bool $supportsKeyboardMouse() const;

    MCNAPI bool $supportsGamepad() const;

    MCNAPI ::ClipboardFeatureFlags $getClipboardFeatures() const;

    MCNAPI bool $supportsClipboardSet() const;

    MCNAPI bool $supportsClipboardGet() const;

    MCNAPI bool $supportsClipboardAsyncGet() const;

    MCNAPI void $setClipboard(::std::string const& value) const;

    MCNAPI ::std::wstring $getClipboardText() const;

    MCNAPI void $getClipboardTextAsync(::std::function<void(::std::string const&)> callback) const;

    MCNAPI bool $supportsShare() const;

    MCNAPI void $share() const;

    MCNAPI bool $allowSplitScreen();

    MCNAPI float $splitScreenRenderDistScalar(uint numPlayers);

    MCNAPI float $uiOpenRenderDistScalar();

    MCNAPI void $pushNotificationReceived(::PushNotificationMessage const& msg);

    MCNAPI void $openStoragePermissionRequest(
        ::PermissionRequestReason                        reason,
        ::std::function<void(::StoragePermissionResult)> resultCallback
    );

    MCNAPI void $setStorageDirectory(
        ::FileStorageDirectory dir,
        bool                   isCallback,
        ::PropertyBag const&   extraData,
        ::std::function<void(bool)>
    );

    MCNAPI ::FileStorageDirectory $setInitialStorageDirectory(::FileStorageDirectory dir);

    MCNAPI ::FileStorageDirectory $getStorageDirectory() const;

    MCNAPI void $setStorageDirectoryChangeDenied(::std::function<void(::FileStorageDirectory)> callback);

    MCNAPI void $setStorageDirectoryChanged(::std::function<void(::Core::Path const&)> callback);

    MCNAPI void $runStoragePermissionResultCallback(::StoragePermissionResult result);

    MCNAPI bool $hasExternalStoragePermission();

    MCNAPI bool $delayOptionSaveUntilCloudSync() const;

    MCNAPI void $updateTextEditBoxPosition(
        ::RectangleArea const& controlPosition,
        ::RectangleArea const& selectionPosition,
        float const            guiScale
    );

    MCNAPI ::BatteryMonitorInterface const& $getBatteryMonitorInterface() const;

    MCNAPI ::ThermalMonitorInterface const& $getThermalMonitorInterface() const;

    MCNAPI void $trialCorrelationStart();

    MCNAPI void $setAllowLostFocusToasts(bool allowLostFocusToasts);

    MCNAPI void $setShowLostFocusToasts(bool showLostFocusToasts);

    MCNAPI bool $getShowLostFocusToasts();

    MCNAPI ::std::string $getDeviceId() const;

    MCNAPI void $registerUriListener(::UriListener& listener);

    MCNAPI void $registerUriListener(::std::string const& verb, ::UriListener& listener);

    MCNAPI void $unregisterUriListener(::UriListener const& listener);

    MCNAPI void $notifyUriListeners(::ActivationUri const& uri);

    MCNAPI void $notifyUriListenerRegistrationDone();

    MCNAPI void $showXboxLiveUserSettings();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ThrottledFileWriteManager> $getThrottledFileWriteManager() const;

    MCNAPI void $_notifyUriListeners(::ActivationUri const& uri, bool ignoreVerb);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIAppPlatform();

    MCNAPI static void** $vftableForISecureStorageKeySystem();
    // NOLINTEND
};
