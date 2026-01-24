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
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::Threading { class Mutex; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace mce { class UUID; }
namespace mce { struct Image; }
class WebviewInterface;
namespace Social { struct MultiplayerService; }
namespace Social { struct UserCreationData; }
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
    AppPlatform& operator=(AppPlatform const&);
    AppPlatform(AppPlatform const&);
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

    virtual ::Bedrock::PubSub::Subscription
        addStorageDirectoryChangedSubscriber(::std::function<void(::Core::Path const&)>);

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

    virtual void setTextBoxBackend(::std::string const&) = 0;

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
    MCAPI AppPlatform(bool registerService, ::std::unique_ptr<::IAppPlatformImpl> impl);

    MCAPI_C void _clipboardCopyHandler(::ApplicationSignal::ClipboardCopy const& signal);

    MCAPI_C void _clipboardPasteHandler(::ApplicationSignal::ClipboardPaste const& signal);

    MCAPI_C void _clipboardPasteRequestHandler(::ApplicationSignal::ClipboardPasteRequest const& signal);

    MCAPI void _fireAppTerminated();

    MCAPI void _initializeLoadProfiler();

    MCAPI_C ::Bedrock::NotNullNonOwnerPtr<::Bedrock::IApplicationDataStores> getApplicationDataStores();

    MCAPI_C ::UIProfile getDefaultUIProfile() const;

    MCFOLD_S ::Core::PathBuffer<::std::string> getInternalStoragePath() const;

    MCAPI ::std::optional<::std::locale> getLocaleForDateTimeFormatting() const;

    MCAPI ::gsl::not_null<::Bedrock::PubSub::Connector<void(::LowMemorySeverity)>*> getOnLowMemoryConnector();

    MCAPI_C double getTotalActiveSeconds();

    MCFOLD ::Core::PathBuffer<::std::string> getUserdataPath() const;

    MCAPI_C void loadImage(::mce::Image& out, ::Core::Path const& filename);

    MCAPI_C ::mce::Image loadTexture(::Core::Path const& filename);

    MCAPI_C ::mce::Image loadTextureFromStream(::std::string const& fileStream);

    MCAPI_C bool requiresNetworkOutageMessaging() const;

    MCAPI_C void setShareData(::std::string shareTitle, ::std::string shareText, ::std::string shareUri);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static bool updateImGuiKeyboard(uchar param, bool isDown);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& HOME_PATH();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& LOG_PATH();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& SETTINGS_PATH();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& SHADERCACHE_PATH();

    MCAPI_C static bool& mIsInitialized();

    MCAPI_C static ::ActivationUri& mPendingProtocolActivation();

    MCAPI_C static ::Bedrock::Threading::Mutex& mProtocolMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool registerService, ::std::unique_ptr<::IAppPlatformImpl> impl);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initialize();

    MCAPI void $teardown();

    MCAPI void $initAppPlatformNetworkSettings();

    MCFOLD void $initializeScreenDependentResources();

    MCAPI uint64 $getHighPerformanceThreadsCount() const;

    MCAPI uint64 $getTotalHardwareThreadsCount() const;

    MCFOLD void $initializeGraphicsDeviceTier();

    MCAPI void $addListener(::AppPlatformListener* l, float priority);

    MCAPI void $removeListener(::AppPlatformListener* l);

    MCAPI void $restartApp(bool restart);

    MCFOLD bool $restartRequested();

    MCFOLD int const $numberOfThrottledTreatmentPacksToImportPerMinute() const;

    MCFOLD bool const $areTreatmentPacksThrottled() const;

    MCAPI ::HardwareMemoryTierUtil const& $getHardwareMemoryTierUtil() const;

    MCAPI ::Bedrock::Threading::Async<::IntegrityTokenResult> $requestIntegrityToken(::std::string const& nonceToken);

    MCFOLD void $setIntegrityToken(::std::string const& integrityToken);

    MCFOLD void $setIntegrityTokenErrorMessage(::std::string const& errorMessage);

    MCFOLD bool $supportsInPackageRecursion() const;

    MCFOLD bool $supportsXboxLiveAchievements() const;

    MCFOLD void $hideSplashScreen();

    MCAPI ::std::string $getFeedbackBugsLink() const;

    MCAPI ::std::string $getFeedbackHelpLink() const;

    MCAPI auto $getModalErrorMessageProc() -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&);

    MCFOLD void $updateLocalization(::std::string const& loc);

    MCFOLD void $setSleepEnabled(bool enabled);

    MCAPI ::Core::PathBuffer<::std::string> $getScratchPath();

    MCFOLD ::Core::PathBuffer<::std::string> $getInternalPackStoragePath() const;

    MCAPI ::Core::PathBuffer<::std::string> $getSettingsPath();

    MCFOLD ::Core::PathBuffer<::std::string> $getLoggingPath() const;

    MCFOLD ::Core::PathBuffer<::std::string> $getPackagedShaderCachePath();

    MCAPI ::Core::PathBuffer<::std::string> $getShaderCachePath();

    MCFOLD ::Core::PathBuffer<::std::string> $getUserdataPathForLevels() const;

    MCFOLD ::Core::PathBuffer<::std::string> $getCacheStoragePath();

    MCFOLD ::Core::PathBuffer<::std::string> $getOnDiskScratchPath();

    MCAPI ::Core::PathBuffer<::std::string> $getOnDiskPackScratchPath();

    MCFOLD ::Core::PathBuffer<::std::string> $getLevelInfoCachePath() const;

    MCFOLD ::Core::PathBuffer<::std::string> $getCatalogSearchScratchPath();

    MCAPI ::Core::PathBuffer<::std::string> $getUserStorageRootPath() const;

    MCFOLD ::std::shared_ptr<::Core::FileStorageArea> $getOrCreateStorageAreaForUser(::Social::UserCreationData const&);

    MCFOLD bool $hasSeparatedStorageAreasForContentAcquisition() const;

    MCFOLD uint64 $getOptimalLDBSize();

    MCAPI int $getMaxLDBFilesOpen() const;

    MCFOLD bool $getDisableLDBSeekCompactions() const;

    MCFOLD void $showDialog(int dialogId);

    MCFOLD void $createUserInput();

    MCAPI void $createUserInput(int dialogId);

    MCFOLD int $getUserInputStatus();

    MCFOLD ::std::vector<::std::string> $getUserInput();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> $getFileAccess(::ResourceFileSystem fileSystem);

    MCAPI ::Core::PathBuffer<::std::string> $copyImportFileToTempFolder(::Core::Path const& filePath);

    MCFOLD void $registerFileForCollectionWithCrashDump(::Core::Path const& fileName);

    MCFOLD void $registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const;

    MCAPI int $getScreenWidth() const;

    MCAPI int $getScreenHeight() const;

    MCAPI int $getDisplayWidth();

    MCAPI int $getDisplayHeight();

    MCFOLD void $setScreenSize(int width, int height);

    MCFOLD void $setWindowSize(int width, int height);

    MCFOLD void $setWindowText(::std::string const& title);

    MCFOLD ::std::optional<::OperationMode> $getOperationMode() const;

    MCFOLD bool $allowContentLogWriteToDisk();

    MCFOLD uint $getMaxClubsRequests() const;

    MCFOLD bool $supportsLaunchingLegacyVersion() const;

    MCFOLD void $launchLegacyVersion();

    MCFOLD bool $canManageLegacyData() const;

    MCFOLD bool $supportsDayOneExperience() const;

    MCFOLD bool $canMigrateWorldData() const;

    MCFOLD bool $isContentAutoUpdateAllowed() const;

    MCAPI int $getMaxSimultaneousDownloads() const;

    MCFOLD uint $getMaxSimultaneousServiceRequests() const;

    MCFOLD bool $isDownloadAndImportBlocking() const;

    MCFOLD bool $isDownloadBuffered() const;

    MCFOLD bool $supportsAutoSaveOnDBCompaction() const;

    MCFOLD bool $supportsVibration() const;

    MCFOLD void $vibrate(int milliSeconds);

    MCAPI ::Core::PathBuffer<::std::string> $getAssetFileFullPath(::Core::Path const& filename);

    MCAPI ::std::string $_readAssetFileInternal(::Core::Path const& filename);

    MCAPI bool $hasAssetFile(::Core::Path const& filename);

    MCAPI bool $copyAssetFile(::Core::Path const& filename, ::Core::Path const& destination);

    MCAPI ::std::set<::Core::PathBuffer<::std::string>>
    $listAssetFilesIn(::Core::Path const& path, ::std::string const& extension) const;

    MCFOLD bool $supportsClientUpdate() const;

    MCAPI ::std::string $getClientUpdateUrl() const;

    MCFOLD int $checkLicense();

    MCFOLD bool $hasBuyButtonWhenInvalidLicense();

    MCAPI bool $isNetworkAvailable() const;

    MCFOLD bool $isLANAvailable() const;

    MCFOLD bool $isNetworkEnabled(bool onlyWifiAllowed) const;

    MCFOLD void $setNetworkAllowed(bool allowed);

    MCFOLD bool $isNetworkAllowed() const;

    MCFOLD bool $isInternetAvailable() const;

    MCFOLD ::std::optional<bool> $isOnWifiConnectionTelemetryValue();

    MCFOLD ::NetworkConnectionType $getNetworkConnectionType();

    MCAPI void $setNetworkConnectionType(::NetworkConnectionType connectionType);

    MCAPI int $getDefaultNetworkMaxPlayers() const;

    MCFOLD bool $multiplayerRequiresPremiumAccess() const;

    MCFOLD bool $multiplayerRequiresUGCEnabled() const;

    MCFOLD bool $isCrossPlatformToggleVisible() const;

    MCFOLD bool $isTelemetryAllowed();

    MCFOLD void $buyGame();

    MCFOLD void $finish();

    MCFOLD bool $canLaunchUri(::std::string const& uri);

    MCFOLD void $launchUri(::std::string const& uri);

    MCFOLD void $launchSettings();

    MCFOLD bool $useXboxControlHelpers() const;

    MCFOLD ::PlatformType $getPlatformType() const;

    MCFOLD bool $isCentennial() const;

    MCFOLD ::std::string $getPackageFamilyName() const;

    MCFOLD ::BuildPlatform $getBuildPlatform() const;

    MCFOLD int $getNumberOfParticleFramesToInterpolate() const;

    MCAPI int $getDpi() const;

    MCAPI void $setDpi(int dpi);

    MCAPI ::UIScalingRules $getUIScalingRules() const;

    MCAPI void $setUIScalingRules(::UIScalingRules UIScalingRules);

    MCFOLD bool $hasIDEProfiler();

    MCAPI ::std::string $getPlatformStringVar(int stringId);

    MCAPI uint64 $getMaximumUsedMemory();

    MCAPI uint64 $getLowPhysicalMemoryThreshold() const;

    MCAPI void $calculateIfLowMemoryDevice();

    MCAPI bool $isLowMemoryDevice() const;

    MCAPI bool $isLowPhysicalMemoryDevice() const;

    MCFOLD uint64 $getTextureMemoryBudget() const;

    MCFOLD uint64 $getSingleMipDefaultMemoryBudget() const;

    MCFOLD void $readyForApplicationExitInfo() const;

    MCFOLD ::DeviceSunsetTier $getDeviceSunsetTier() const;

    MCAPI int $getMaxSimRadiusInChunks() const;

    MCFOLD ::std::vector<::std::string> $getBroadcastAddresses();

    MCFOLD ::std::vector<::std::string> $getIPAddresses();

    MCFOLD bool $useAppPlatformForTelemetryIPAddress();

    MCAPI ::std::string $getModelName();

    MCFOLD bool $usesHDRBrightness() const;

    MCFOLD void $updateBootstrapSettingsFromTreatmentsAsync();

    MCFOLD void $setFullscreenMode(::FullscreenMode const fullscreenMode);

    MCAPI bool $isNetworkThrottled() const;

    MCFOLD bool $isLANAllowed() const;

    MCFOLD bool $doesLANRequireMultiplayerRestrictions() const;

    MCAPI void $collectGraphicsHardwareDetails();

    MCAPI ::std::string $getEdition() const;

    MCFOLD ::OsVersion $getOSVersion() const;

    MCAPI void $setThreadsFrozen(bool frozen);

    MCAPI bool $areThreadsFrozen() const;

    MCFOLD float $getDefaultSafeZoneScaleX() const;

    MCFOLD float $getDefaultSafeZoneScaleY() const;

    MCFOLD float $getDefaultSafeZoneScaleAll() const;

    MCFOLD float $getDefaultScreenPositionX() const;

    MCFOLD float $getDefaultScreenPositionY() const;

    MCAPI bool $isQuitCapable() const;

    MCFOLD bool $requireControllerAtStartup() const;

    MCFOLD bool $notifyControllerConnectionStateChange() const;

    MCFOLD bool $platformRequiresControllerApplet() const;

#ifdef LL_PLAT_S
    MCAPI ::InputMode $getDefaultInputMode() const;
#endif

    MCAPI ::AppFocusState $getFocusState();

    MCFOLD ::AppLifecycleContext& $getAppLifecycleContext();

    MCFOLD bool $supportsFliteTTS() const;

    MCAPI ::std::unique_ptr<::SecureStorage> $getSecureStorage();

    MCAPI ::SecureStorageKey $getSecureStorageKey(::std::string const& key);

    MCFOLD void $setSecureStorageKey(::std::string const& key, ::SecureStorageKey const& value);

    MCFOLD bool $devHotReloadRenderResources() const;

    MCFOLD bool $shouldPauseDownloadsWhenEnterGame() const;

    MCFOLD bool $compareAppReceiptToLocalReceipt(::std::string const& otherReceipt);

    MCAPI ::mce::UUID const& $getThirdPartyPackUUID() const;

    MCFOLD bool $saveTreatmentPacksAsZips() const;

    MCFOLD bool $saveEncryptedPacksAsZips() const;

    MCFOLD bool $saveEncryptedWorldTemplatePacksAsZips() const;

    MCFOLD bool $allowsResourcePackDevelopment() const;

    MCFOLD bool $supportsLegacySinglePremiumCacheDirectory() const;

    MCFOLD bool $supportsWorldShare() const;

    MCFOLD bool $hasJournalingFilesystem() const;

    MCFOLD bool $isAutoCompactionEnabled() const;

    MCAPI ::std::chrono::nanoseconds $getLevelSaveInterval() const;

    MCAPI ::std::chrono::nanoseconds $getOptionsSaveInterval() const;

    MCFOLD bool $hasPlatformSpecificInvites() const;

    MCFOLD bool $usePlatformProfilePicturesOnly() const;

    MCFOLD bool $allowBetaXblSignIn() const;

    MCFOLD bool $requiresXboxLiveSigninToPlay() const;

    MCFOLD bool $requiresLiveGoldForMultiplayer() const;

    MCFOLD bool $shouldRegisterForXboxLiveNotifications() const;

    MCAPI bool $isRealmsEnabled() const;

    MCFOLD bool $minimizeBackgroundDownloads() const;

    MCFOLD bool $requiresAutoSaveIconExplanationPopup() const;

    MCAPI ::IPlatformScreenshots& $getPlatformScreenshots();

    MCFOLD ::std::vector<::std::shared_ptr<::Social::MultiplayerService>> $getMultiplayerServiceListToRegister() const;

    MCFOLD ::std::vector<::Social::MultiplayerServiceIdentifier>
    $getBroadcastingMultiplayerServiceIds(bool xblBroadcast, bool platformBroadcast) const;

    MCFOLD uint $maxFileDataRequestConcurrency() const;

    MCFOLD void $goToExternalConsumablesStoreListing() const;

    MCAPI float $getStoreNetworkFailureTimeout() const;

    MCAPI ::std::shared_ptr<::Core::FileStorageArea>
    $createLoggingStorageArea(::Core::FileAccessType fileAccessType, ::Core::PathView loggingPath);

    MCFOLD void $handlePlatformSpecificCommerceError(uint error);

    MCFOLD bool $isEduMode() const;

    MCFOLD bool $importAsFlatFile() const;

    MCFOLD bool $isWebviewSupported() const;

    MCFOLD ::std::shared_ptr<::WebviewInterface> $createWebview(::Webview::PlatformArguments&&) const;

    MCFOLD bool $getPlatformTTSExists() const;

    MCFOLD bool $getPlatformTTSEnabled() const;

    MCAPI ::std::variant<::HWND__*, ::std::monostate> $getRenderSurfaceParameters() const;

    MCFOLD bool $shouldRemoveGraphicsDeviceOnAppTermination() const;

    MCFOLD bool $isJoinableViaExternalServers() const;

    MCFOLD void $onPrimaryUserNetworkReady();

    MCFOLD bool $isDisplayInitialized() const;

    MCFOLD bool $usesAsyncOptionSaving() const;

    MCFOLD void $showPlatformStoreIcon(bool shouldShow);

    MCAPI void $showPlatformEmptyStoreDialog(::std::function<void(bool)>&& callback);

    MCFOLD void $initializeGameStreaming();

    MCAPI void $notifyNetworkConfigurationChanged();

    MCFOLD void $setKeepScreenOnFlag(bool);

    MCFOLD void $initializeMulticast() const;

    MCFOLD void $requestMulticastReceivePermission();

    MCFOLD bool $hasMulticastReceivePermission() const;

    MCFOLD void $releaseMulticastReceivePermission() const;

    MCFOLD void $onMinecraftGameInitComplete();

    MCFOLD void $onFullGameUnlock();

    MCFOLD bool $is24HourTimeFormat() const;

    MCAPI ::Bedrock::Threading::Async<bool> $showOSUserDialog(::std::string, ::std::string, ::std::string);

    MCFOLD bool $_tryEnableCPUBoost();

    MCFOLD void $_disableCPUBoost();

    MCFOLD void $_initializeFileStorageAreas();

    MCAPI void $_teardownFileStorageAreas();

    MCFOLD int $getPlatformDpi() const;

    MCAPI ::UIScalingRules $getPlatformUIScalingRules() const;

    MCFOLD void $_onInitialize();

    MCFOLD void $_onTeardown();

#ifdef LL_PLAT_C
    MCFOLD void $loadPNG(::mce::Image& out, ::Core::Path const& filename);

    MCFOLD void $loadTGA(::mce::Image& out, ::Core::Path const& filename);

    MCFOLD void $loadJPEG(::mce::Image& out, ::Core::Path const& filename);

    MCFOLD int $getKeyFromKeyCode(int keyCode, int metaState, int deviceId);

    MCFOLD void $textEditComponentGainedFocus(::std::string const&, int, bool, bool, bool);

    MCFOLD void $textEditComponentLostFocus();

    MCFOLD void $hideKeyboard();

    MCAPI bool $blankLineDismissesChat() const;

    MCFOLD bool $signWrapsTextEntry() const;

    MCFOLD bool $isFullScreenKeyboard() const;

    MCFOLD bool $actionSuspendsApp(::AppAction) const;

    MCFOLD float $getKeyboardHeight() const;

    MCAPI bool $refocusMouse(bool lostMouse, bool oldMouseGrabbed);

    MCFOLD void $hideMousePointer();

    MCFOLD void $showMousePointer();

    MCFOLD void $postInteractiveSignIn();

    MCFOLD bool $useHardwareMouse();

    MCFOLD void $provideHardwareMouseImageData(::mce::Image const& imageData);

    MCFOLD bool $hasCustomSoftwareCursor() const;

    MCFOLD ::Core::PathBuffer<::std::string> $getCustomSoftwareCursorAsset() const;

    MCAPI bool $getPointerFocus();

    MCAPI void $setPointerFocus(bool lostFocus);

    MCFOLD void $toggleSimulateTouchWithMouse();

    MCAPI void $_fireAppSuspended();

    MCAPI void $_fireAppResumed();

    MCFOLD void $_fireAppFocusLost();

    MCAPI void $_fireAppFocusGained();

    MCAPI void $_fireResizeBegin();

    MCAPI void $_fireResizeEnd();

    MCAPI void $_fireDeviceLost();

    MCAPI void $_fireSurfaceCreated();

    MCAPI void $_fireSurfaceDestroyed();

    MCFOLD void $_fireAppConfigurationChanged();

    MCAPI void $_fireAppPaused();

    MCAPI void $_fireAppUnpaused();

    MCFOLD void $discardBackbuffer();

    MCAPI ::std::string $getTermsOfUseHyperlink() const;

    MCFOLD void $pickFile(::std::shared_ptr<::FilePickerSettings> settings);

    MCFOLD bool $supportsAlbumExport() const;

    MCFOLD bool $supportsPDFExport() const;

    MCFOLD ::std::shared_ptr<::PDFWriter> $createPlatformPDFWriter();

    MCFOLD void $shareFile(::Core::Path const& path, ::std::function<void(bool)> onCompletionCallback);

    MCFOLD bool $hasHardwareBackButton();

    MCFOLD bool $supportsMSAA() const;

    MCFOLD bool $supports3rdPartyServers() const;

    MCFOLD bool $supportsManualAddedServers() const;

    MCFOLD bool $supportsFilePicking() const;

    MCFOLD bool $supportsTouch() const;

    MCFOLD bool $supportsKeyboardMouse() const;

    MCFOLD bool $supportsGamepad() const;

    MCFOLD ::ClipboardFeatureFlags $getClipboardFeatures() const;

    MCAPI bool $supportsClipboardSet() const;

    MCAPI bool $supportsClipboardGet() const;

    MCAPI bool $supportsClipboardAsyncGet() const;

    MCFOLD void $setClipboard(::std::string const& value) const;

    MCAPI ::std::wstring $getClipboardText() const;

    MCFOLD void $getClipboardTextAsync(::std::function<void(::std::string const&)> callback) const;

    MCFOLD bool $supportsShare() const;

    MCFOLD void $share() const;

    MCAPI bool $allowSplitScreen();

    MCAPI float $splitScreenRenderDistScalar(uint numPlayers);

    MCAPI float $uiOpenRenderDistScalar();

    MCAPI void $pushNotificationReceived(::PushNotificationMessage const& msg);

    MCAPI void $openStoragePermissionRequest(
        ::PermissionRequestReason                        reason,
        ::std::function<void(::StoragePermissionResult)> resultCallback
    );

    MCFOLD void $setStorageDirectory(
        ::FileStorageDirectory dir,
        bool                   isCallback,
        ::PropertyBag const&   extraData,
        ::std::function<void(bool)>
    );

    MCFOLD ::FileStorageDirectory $setInitialStorageDirectory(::FileStorageDirectory dir);

    MCFOLD ::FileStorageDirectory $getStorageDirectory() const;

    MCFOLD void $setStorageDirectoryChangeDenied(::std::function<void(::FileStorageDirectory)> callback);

    MCAPI ::Bedrock::PubSub::Subscription
        $addStorageDirectoryChangedSubscriber(::std::function<void(::Core::Path const&)>);

    MCAPI void $runStoragePermissionResultCallback(::StoragePermissionResult result);

    MCFOLD bool $hasExternalStoragePermission();

    MCFOLD bool $delayOptionSaveUntilCloudSync() const;

    MCFOLD void $updateTextEditBoxPosition(
        ::RectangleArea const& controlPosition,
        ::RectangleArea const& selectionPosition,
        float const            guiScale
    );

    MCAPI ::BatteryMonitorInterface const& $getBatteryMonitorInterface() const;

    MCAPI ::ThermalMonitorInterface const& $getThermalMonitorInterface() const;

    MCFOLD void $trialCorrelationStart();

    MCAPI void $setAllowLostFocusToasts(bool allowLostFocusToasts);

    MCAPI void $setShowLostFocusToasts(bool showLostFocusToasts);

    MCAPI bool $getShowLostFocusToasts();

    MCFOLD uint64 $getLowMemoryEventThreshold(::LowMemorySeverity) const;

    MCAPI uint64 $getLowMemoryEventRecoveryThreshold(::LowMemorySeverity severity) const;

    MCAPI ::std::string $getDeviceId() const;

    MCAPI void $registerUriListener(::UriListener& listener);

    MCAPI void $registerUriListener(::std::string const& verb, ::UriListener& listener);

    MCAPI void $unregisterUriListener(::UriListener const& listener);

    MCAPI void $notifyUriListeners(::ActivationUri const& uri);

    MCAPI void $notifyUriListenerRegistrationDone();

    MCFOLD void $showXboxLiveUserSettings();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ThrottledFileWriteManager> $getThrottledFileWriteManager() const;

    MCAPI void $_notifyUriListeners(::ActivationUri const& uri, bool ignoreVerb);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIAppPlatform();

    MCNAPI static void** $vftableForISecureStorageKeySystem();
    // NOLINTEND
};
