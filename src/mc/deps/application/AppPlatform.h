#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/queries/core/PlatformType.h"
#include "mc/deps/application/AppAction.h"
#include "mc/deps/application/ClipboardFeatureFlags.h"
#include "mc/deps/application/DeviceSunsetTier.h"
#include "mc/deps/application/IAppPlatform.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/application/OsVersion.h"
#include "mc/deps/application/ProcessExecutionState.h"
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
#include "mc/deps/core/platform/UIScalingRules.h"
#include "mc/deps/core/platform_info/RefreshRate.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/secure_storage/ISecureStorageKeySystem.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/PointerType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class AppLifecycleContext;
class AppPlatformListener;
class BatteryMonitorInterface;
class FilePickerSettings;
class HardwareMemoryTierUtil;
class IAppPlatformImpl;
class IFileAccess;
class PDFWriter;
class PropertyBag;
class SecureStorage;
class SecureStorageKey;
class ThermalMonitorInterface;
class UriListener;
class WebviewInterface;
struct TextBoxSelection;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class FileHandlePool; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace dragon::platform { struct SurfaceParameters; }
namespace mce { class UUID; }
namespace mce { struct Image; }
class ActivationUri;
class IPlatformScreenshots;
class ImagePickingCallback;
class PushNotificationMessage;
class RectangleArea;
class ThrottledFileWriteManager;
struct IntegrityTokenResult;
namespace ApplicationSignal { class ClipboardCopy; }
namespace ApplicationSignal { class ClipboardPaste; }
namespace ApplicationSignal { class ClipboardPasteRequest; }
namespace Bedrock { class CommonPlatform; }
namespace MarketplaceErrorUtils { struct StoreErrorResult; }
namespace Social { struct UserCreationData; }
namespace Webview { class PlatformArguments; }
// clang-format on

class AppPlatform : public ::IAppPlatform, public ::ISecureStorageKeySystem {
public:
    // AppPlatform inner types declare
    // clang-format off
    struct Members;
    struct ReadMode;
    // clang-format on

    // AppPlatform inner types define
    struct Members {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>   mUnka2a8a3;
        ::ll::UntypedStorage<1, 1>   mUnkb2c0ab;
        ::ll::UntypedStorage<1, 1>   mUnk35061c;
        ::ll::UntypedStorage<1, 1>   mUnk3183d1;
        ::ll::UntypedStorage<8, 16>  mUnkcb0667;
        ::ll::UntypedStorage<8, 104> mUnkae0b40;
        ::ll::UntypedStorage<1, 1>   mUnkc12fb9;
#ifdef LL_PLAT_C
        ::ll::UntypedStorage<8, 64> mUnk7631fc;
#endif
        ::ll::UntypedStorage<8, 64> mUnk20c062;
        ::ll::UntypedStorage<1, 4>  mUnke1ae19;
        ::ll::UntypedStorage<4, 4>  mUnkaac7c0;
        ::ll::UntypedStorage<8, 80> mUnkba2c5b;
        ::ll::UntypedStorage<8, 32> mUnka5d7fd;
        ::ll::UntypedStorage<8, 32> mUnk25aed0;
        ::ll::UntypedStorage<8, 32> mUnkaf64d4;
        ::ll::UntypedStorage<8, 8>  mUnk791f51;
        ::ll::UntypedStorage<8, 8>  mUnkfbe993;
        ::ll::UntypedStorage<8, 8>  mUnkae8a09;
        ::ll::UntypedStorage<8, 8>  mUnk46ecd8;
        ::ll::UntypedStorage<8, 32> mUnkf671e5;
        ::ll::UntypedStorage<8, 8>  mUnk9efcac;
        ::ll::UntypedStorage<8, 8>  mUnkd3b21d;
        ::ll::UntypedStorage<1, 1>  mUnk1ad2d4;
        ::ll::UntypedStorage<8, 40> mUnk358dbd;
        ::ll::UntypedStorage<8, 8>  mUnkf66c38;
        ::ll::UntypedStorage<1, 1>  mUnk53d0fc;
        ::ll::UntypedStorage<1, 1>  mUnkaf3f8c;
        ::ll::UntypedStorage<4, 4>  mUnke504bc;
        ::ll::UntypedStorage<4, 4>  mUnk24be5f;
        ::ll::UntypedStorage<1, 1>  mUnk789785;
        ::ll::UntypedStorage<1, 1>  mUnk96237d;
        ::ll::UntypedStorage<1, 1>  mUnke52c8b;
        ::ll::UntypedStorage<1, 1>  mUnk66e939;
        ::ll::UntypedStorage<1, 1>  mUnk56c10c;
        ::ll::UntypedStorage<1, 1>  mUnk1ef1b6;
        ::ll::UntypedStorage<1, 1>  mUnk3f635a;
        ::ll::UntypedStorage<8, 32> mUnk141735;
        ::ll::UntypedStorage<8, 80> mUnkde5b8c;
        ::ll::UntypedStorage<8, 80> mUnk1a150b;
        ::ll::UntypedStorage<8, 8>  mUnk916e20;
        ::ll::UntypedStorage<8, 8>  mUnk4cc470;
        ::ll::UntypedStorage<8, 8>  mUnk93c948;
        ::ll::UntypedStorage<8, 16> mUnkf6391a;
        ::ll::UntypedStorage<8, 16> mUnk2a6789;
        ::ll::UntypedStorage<8, 16> mUnk533549;
        ::ll::UntypedStorage<8, 8>  mUnkd4fe80;
        ::ll::UntypedStorage<4, 4>  mUnk7f648d;
        ::ll::UntypedStorage<8, 16> mUnk9179d2;
        ::ll::UntypedStorage<8, 8>  mUnk4c5947;
        ::ll::UntypedStorage<8, 8>  mUnk6aeab2;
        ::ll::UntypedStorage<8, 8>  mUnk5ba4ac;
#ifdef LL_PLAT_C
        ::ll::UntypedStorage<8, 8> mUnk4cf931;
#endif
        ::ll::UntypedStorage<8, 8>  mUnk74fa0c;
        ::ll::UntypedStorage<8, 80> mUnk70bdfb;
        ::ll::UntypedStorage<8, 16> mUnkef7d77;
        // NOLINTEND

    public:
        // prevent constructor by default
        Members& operator=(Members const&);
        Members(Members const&);
        Members();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Members();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI static bool& mIsInitialized();

        MCNAPI static ::ActivationUri& mPendingProtocolActivation();

        MCNAPI static ::std::mutex& mProtocolMutex();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ReadMode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnka0c5b9;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReadMode& operator=(ReadMode const&);
        ReadMode(ReadMode const&);
        ReadMode();
    };

    using Listener = ::AppPlatformListener;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::AppPlatform::Members>>> mMembers;
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

    virtual uint64 getHighPerformanceThreadsCount() const;

    virtual uint64 getTotalHardwareThreadsCount() const;

    virtual void initializeGraphicsDeviceTier();

    virtual void addListener(::AppPlatformListener* l, float priority);

    virtual void removeListener(::AppPlatformListener* l);

    virtual ::ProcessExecutionState getProcessExecutionState() const;

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

    virtual int getKeyFromKeyCode(int, int, int);

    virtual void textEditComponentGainedFocus(
        ::std::string const& currentText,
        int                  maxLength,
        bool                 limitInput,
        bool                 numbersOnly,
        bool                 isMultiline
    );

    virtual void textEditComponentLostFocus();

    virtual void showKeyboard(
        ::std::string const& currentText,
        int                  maxLength,
        bool                 limitInput,
        bool                 numbersOnly,
        bool                 isMultiline,
        int const            controllerId,
        ::glm::vec2 const&   position,
        float                controlHeight,
        ::InputMode          inputMode
    );

    virtual void hideKeyboard();

    virtual bool blankLineDismissesChat() const;

    virtual bool signWrapsTextEntry() const;

    virtual bool isFullScreenKeyboard() const;

    virtual bool actionSuspendsApp(::AppAction) const;

    virtual float getKeyboardHeight() const;

    virtual bool refocusMouse(bool lostMouse, bool oldMouseGrabbed);

    virtual void setMousePointerType(::Bedrock::Input::PointerType pointerType);

    virtual void hideMousePointer();

    virtual void showMousePointer();

    virtual void postInteractiveSignIn();

    virtual bool useHardwareMouse();

    virtual void provideHardwareMouseImageData(::mce::Image const&);

    virtual bool hasCustomSoftwareCursor() const;

    virtual ::Core::PathBuffer<::std::string> getCustomSoftwareCursorAsset() const;

    virtual bool getPointerFocus();

    virtual void setPointerFocus(bool lostFocus);

    virtual bool isInvertScrollEnabled() const;

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

    virtual void pickImage(::std::shared_ptr<::ImagePickingCallback> callback) = 0;

    virtual void pickFile(::std::shared_ptr<::FilePickerSettings> settings);

    virtual bool supportsAlbumExport() const;

    virtual bool supportsPDFExport() const;

    virtual ::std::shared_ptr<::PDFWriter> createPlatformPDFWriter();

    virtual void shareFile(::Core::Path const&, ::std::function<void(bool)>);

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

    virtual void getClipboardTextAsync(::std::function<void(::std::string const&)>) const;

    virtual bool supportsShare() const;

    virtual void share() const;

    virtual bool allowSplitScreen();

    virtual float splitScreenRenderDistScalar(uint numPlayers);

    virtual float uiOpenRenderDistScalar();

    virtual void pushNotificationReceived(::PushNotificationMessage const& msg);

    virtual void openStoragePermissionRequest(
        ::PermissionRequestReason,
        ::std::function<void(::StoragePermissionResult)> resultCallback
    );

    virtual void setStorageDirectory(
        ::FileStorageDirectory      dir,
        bool                        isCallback,
        ::PropertyBag const&        extraData,
        ::std::function<void(bool)> onComplete
    );

    virtual ::FileStorageDirectory setInitialStorageDirectory(::FileStorageDirectory);

    virtual ::FileStorageDirectory getStorageDirectory() const;

    virtual void setStorageDirectoryChangeDenied(::std::function<void(::FileStorageDirectory)>);

    virtual ::Bedrock::PubSub::Subscription
    addStorageDirectoryChangedSubscriber(::std::function<void(::Core::Path const&)> callback);

    virtual void runStoragePermissionResultCallback(::StoragePermissionResult result);

    virtual bool hasExternalStoragePermission();

    virtual bool delayOptionSaveUntilCloudSync() const;

    virtual void updateTextEditBoxPosition(::RectangleArea const&, ::RectangleArea const&, float const);

    virtual ::BatteryMonitorInterface const& getBatteryMonitorInterface() const;

    virtual ::ThermalMonitorInterface const& getThermalMonitorInterface() const;

    virtual void trialCorrelationStart();

    virtual void setAllowLostFocusToasts(bool allowLostFocusToasts);

    virtual void setShowLostFocusToasts(bool showLostFocusToasts);

    virtual bool getShowLostFocusToasts();

    virtual double getTimeSFromProcessStart() const = 0;

    virtual ::Bedrock::Threading::Async<::IntegrityTokenResult> requestIntegrityToken(::std::string const& nonceToken);

#endif
    virtual void setIntegrityToken(::std::string const&);

    virtual void setIntegrityTokenErrorMessage(::std::string const&);

    virtual bool supportsInPackageRecursion() const;

    virtual bool supportsXboxLiveAchievements() const;

    virtual void hideSplashScreen();

    virtual ::std::string getFeedbackBugsLink() const;

    virtual ::std::string getFeedbackHelpLink() const;

    virtual auto getModalErrorMessageProc() -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&);

    virtual void updateLocalization(::std::string const&);

    virtual void setSleepEnabled(bool);

    virtual ::Core::PathBuffer<::std::string> getScratchPath();

    virtual ::Core::PathBuffer<::std::string> getInternalPackStoragePath() const;

    virtual ::Core::PathBuffer<::std::string> getSettingsPath();

    virtual ::Core::PathBuffer<::std::string> getSharedSettingsPath();

    virtual ::Core::PathBuffer<::std::string> getLoggingPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> getPackagedShaderCachePath();

    virtual ::Core::PathBuffer<::std::string> getShaderCachePath();

    virtual ::Core::PathBuffer<::std::string> getUserdataPathForLevels() const;

    virtual ::Core::PathBuffer<::std::string> getCacheStoragePath();

    virtual ::Core::PathBuffer<::std::string> getTextureCacheStoragePath();

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

    virtual void showDialog(int);

    virtual void createUserInput();

    virtual void createUserInput(int dialogId);

    virtual int getUserInputStatus();

    virtual ::std::vector<::std::string> getUserInput();

    virtual ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> getFileAccess(::ResourceFileSystem fileSystem);

    virtual ::Core::PathBuffer<::std::string> copyImportFileToTempFolder(::Core::Path const& filePath);

    virtual void registerFileForCollectionWithCrashDump(::Core::Path const&);

    virtual void registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const;

    virtual int getScreenWidth() const;

    virtual int getScreenHeight() const;

    virtual int getDisplayWidth();

    virtual int getDisplayHeight();

#ifdef LL_PLAT_S
    virtual void setScreenSize(int, int);
#else // LL_PLAT_C
    virtual void setScreenSize(int width, int height);
#endif

    virtual void setWindowSize(int width, int height);

#ifdef LL_PLAT_S
    virtual void setWindowText(::std::string const& title);
#else // LL_PLAT_C
    virtual void setWindowText(::std::string const&);
#endif

    virtual ::std::optional<::OperationMode> getOperationMode() const;

    virtual bool allowContentLogWriteToDisk();

    virtual uint getMaxClubsRequests() const;

    virtual void queueForMainThread_DEPRECATED(::std::function<void()> callback) = 0;

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

    virtual void setTextBoxBackend(::std::string const& newText) = 0;

    virtual int getCaretPosition() const = 0;

    virtual void setCaretPosition(int position) = 0;

    virtual void setTextBoxSelection(::TextBoxSelection selection);

    virtual bool supportsVibration() const;

    virtual void vibrate(int);

    virtual ::Core::PathBuffer<::std::string> getAssetFileFullPath(::Core::Path const& filename);

    virtual ::Bedrock::Result<::std::string> _readAssetFileInternal(::Core::PathView filename);

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

    virtual bool isNetworkEnabled(bool) const /*override*/;

    virtual void setNetworkAllowed(bool);

    virtual bool isNetworkAllowed() const;

    virtual bool isInternetAvailable() const /*override*/;

    virtual ::std::optional<bool> isOnWifiConnectionTelemetryValue();

    virtual ::NetworkConnectionType getNetworkConnectionType();

    virtual void setNetworkConnectionType(::NetworkConnectionType connectionType);

    virtual int getDefaultNetworkMaxPlayers() const /*override*/;

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

    virtual ::std::string getPlatformStringVar(int);

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

    virtual ::std::string getModelNameForUI();

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

    virtual ::IPlatformScreenshots& getPlatformScreenshots();

    virtual bool isRealmsEnabled() const /*override*/;

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

    virtual uint64 calculateAvailableDiskFreeSpace(::Core::Path const& rootPath) = 0;

    virtual bool supportsFliteTTS() const;

    virtual ::std::unique_ptr<::SecureStorage> getSecureStorage();

    virtual ::std::unique_ptr<::SecureStorage> getSharedSecureStorage();

    virtual ::SecureStorageKey getSecureStorageKey(::std::string const&) /*override*/;

    virtual void setSecureStorageKey(::std::string const&, ::SecureStorageKey const&) /*override*/;

    virtual bool devHotReloadRenderResources() const;

    virtual bool shouldPauseDownloadsWhenEnterGame() const;

    virtual bool compareAppReceiptToLocalReceipt(::std::string const&);

    virtual ::mce::UUID const& getThirdPartyPackUUID() const;

    virtual ::mce::UUID const& getPlatformBetaPackUUID() const;

    virtual bool saveTreatmentPacksAsZips() const;

    virtual bool saveEncryptedPacksAsZips() const;

    virtual bool saveEncryptedWorldTemplatePacksAsZips() const;

    virtual bool saveEncryptedPersonaPacksAsZips() const;

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

    virtual bool minimizeBackgroundDownloads() const;

    virtual bool requiresAutoSaveIconExplanationPopup() const;

    virtual uint maxFileDataRequestConcurrency() const;

    virtual void goToExternalConsumablesStoreListing() const /*override*/;

    virtual float getStoreNetworkFailureTimeout() const;

    virtual ::std::shared_ptr<::Core::FileStorageArea>
    createLoggingStorageArea(::Core::FileAccessType fileAccessType, ::Core::PathView loggingPath);

    virtual uint getPlatformErrorCodeForStoreError(::MarketplaceErrorUtils::StoreErrorResult const&);

    virtual void handlePlatformSpecificCommerceError(uint, ::std::string const&);

    virtual bool isEduMode() const;

    virtual bool importAsFlatFile() const;

    virtual bool isWebviewSupported() const;

#ifdef LL_PLAT_S
    virtual ::std::shared_ptr<::WebviewInterface> createWebview(::Webview::PlatformArguments&& args) const;
#else // LL_PLAT_C
    virtual ::std::shared_ptr<::WebviewInterface> createWebview(::Webview::PlatformArguments&&) const;
#endif

    virtual bool canAppSelfTerminate() const = 0;

    virtual bool getPlatformTTSExists() const;

    virtual bool getPlatformTTSEnabled() const;

    virtual ::dragon::platform::SurfaceParameters getRenderSurfaceParameters() const;

    virtual bool shouldRemoveGraphicsDeviceOnAppTermination() const;

    virtual bool isJoinableViaExternalServers() const;

    virtual void onPrimaryUserNetworkReady();

    virtual bool isDisplayInitialized() const;

    virtual bool usesAsyncOptionSaving() const;

    virtual void showPlatformStoreIcon(bool);

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
    virtual ::std::optional<::RefreshRate> getRefreshRate() const;

    virtual ::Core::PathBuffer<::std::string> _getCurrentStoragePath() const = 0;

    virtual ::Core::PathBuffer<::std::string> _getExternalStoragePath() const = 0;

    virtual ::Core::PathBuffer<::std::string> _getInternalStoragePath() const = 0;

    virtual ::Core::PathBuffer<::std::string> _getUserdataPath() const = 0;

    virtual ::Core::PathBuffer<::std::string> _getSharedDataPath() const = 0;

    virtual ::std::chrono::milliseconds getWatchdogTimerDurationForAppSuspend() const;

#ifdef LL_PLAT_C
    virtual void _notifyUriListeners(::ActivationUri const& uri, bool ignoreVerb);

#endif
    virtual bool _tryEnableCPUBoost();

    virtual void _disableCPUBoost();

    virtual ::Bedrock::CommonPlatform* getPlatformShim() const;

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
    MCAPI AppPlatform(::std::unique_ptr<::IAppPlatformImpl> impl, bool registerService);

#ifdef LL_PLAT_C
    MCAPI void _clipboardCopyHandler(::ApplicationSignal::ClipboardCopy const& signal);

    MCAPI void _clipboardPasteHandler(::ApplicationSignal::ClipboardPaste const& signal);

    MCAPI void _clipboardPasteRequestHandler(::ApplicationSignal::ClipboardPasteRequest const& signal);
#endif

    MCAPI void _setDeviceTier(::std::string tier);

#ifdef LL_PLAT_C
    MCAPI void _setLocale(::std::string locale);
#endif

#ifdef LL_PLAT_S
    MCAPI void _terminateListeners();
#endif

#ifdef LL_PLAT_C
    MCAPI void checkAndTriggerOnLowMemory();
#endif

    MCAPI ::std::shared_ptr<::Core::FileHandlePool> getArchiveHandlePool() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string getDeviceIdWarning() const;
#endif

    MCAPI ::std::string getGraphicsDeviceTier() const;

    MCAPI ::std::optional<::std::locale> getLocaleForDateTimeFormatting() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string getShareText() const;

    MCAPI ::std::string getShareTitle() const;

    MCAPI ::std::string getShareUri() const;

    MCAPI double getTotalActiveSeconds();

    MCAPI void loadImage(::mce::Image& out, ::Core::Path const& filename);
#endif

    MCAPI ::Bedrock::Result<::std::string>
    readAssetFile(::Core::PathView filename, ::AppPlatform::ReadMode const& readMode);

#ifdef LL_PLAT_C
    MCAPI bool requiresNetworkOutageMessaging() const;

    MCAPI void setShareData(::std::string shareTitle, ::std::string shareText, ::std::string shareUri);

    MCAPI void setShareMetaData(::std::string const& shareTitle, ::std::string const& shareText);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static ::Bedrock::Result<::std::string> _readAssetFileGeneric(::Core::PathView filename);
#endif

#ifdef LL_PLAT_C
    MCAPI static void imGuiAddInputChar(ushort c);

    MCAPI static bool mouseInputHandledByImGui();

    MCAPI static bool updateImGuiKeyboard(uchar param, bool isDown);

    MCAPI static void updateImGuiMouseButton(uchar button, bool isDown);

    MCAPI static void updateImGuiMousePosition(float x, float y);

    MCAPI static void updateImGuiMouseScrollBar(float value);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& HOME_PATH();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& LOG_PATH();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& SETTINGS_PATH();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& SHADERCACHE_PATH();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::IAppPlatformImpl> impl, bool registerService);
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

    MCAPI uint64 $getHighPerformanceThreadsCount() const;

    MCAPI uint64 $getTotalHardwareThreadsCount() const;

    MCFOLD void $initializeGraphicsDeviceTier();

    MCAPI void $addListener(::AppPlatformListener* l, float priority);

    MCAPI void $removeListener(::AppPlatformListener* l);

    MCAPI ::ProcessExecutionState $getProcessExecutionState() const;

    MCAPI void $restartApp(bool restart);

    MCAPI bool $restartRequested();

    MCFOLD int const $numberOfThrottledTreatmentPacksToImportPerMinute() const;

    MCFOLD bool const $areTreatmentPacksThrottled() const;

    MCAPI ::HardwareMemoryTierUtil const& $getHardwareMemoryTierUtil() const;

    MCFOLD void $setIntegrityToken(::std::string const&);

    MCFOLD void $setIntegrityTokenErrorMessage(::std::string const&);

    MCFOLD bool $supportsInPackageRecursion() const;

    MCFOLD bool $supportsXboxLiveAchievements() const;

    MCFOLD void $hideSplashScreen();

    MCAPI ::std::string $getFeedbackBugsLink() const;

    MCAPI ::std::string $getFeedbackHelpLink() const;

    MCAPI auto $getModalErrorMessageProc() -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&);

    MCFOLD void $updateLocalization(::std::string const&);

    MCFOLD void $setSleepEnabled(bool);

    MCAPI ::Core::PathBuffer<::std::string> $getScratchPath();

    MCAPI ::Core::PathBuffer<::std::string> $getInternalPackStoragePath() const;

    MCAPI ::Core::PathBuffer<::std::string> $getSettingsPath();

    MCAPI ::Core::PathBuffer<::std::string> $getSharedSettingsPath();

    MCFOLD ::Core::PathBuffer<::std::string> $getLoggingPath() const;

    MCFOLD ::Core::PathBuffer<::std::string> $getPackagedShaderCachePath();

    MCAPI ::Core::PathBuffer<::std::string> $getShaderCachePath();

    MCFOLD ::Core::PathBuffer<::std::string> $getUserdataPathForLevels() const;

    MCFOLD ::Core::PathBuffer<::std::string> $getCacheStoragePath();

    MCAPI ::Core::PathBuffer<::std::string> $getTextureCacheStoragePath();

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

    MCFOLD void $showDialog(int);

    MCFOLD void $createUserInput();

    MCAPI void $createUserInput(int dialogId);

    MCFOLD int $getUserInputStatus();

    MCFOLD ::std::vector<::std::string> $getUserInput();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> $getFileAccess(::ResourceFileSystem fileSystem);

    MCAPI ::Core::PathBuffer<::std::string> $copyImportFileToTempFolder(::Core::Path const& filePath);

    MCFOLD void $registerFileForCollectionWithCrashDump(::Core::Path const&);

    MCFOLD void $registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const;

    MCAPI int $getScreenWidth() const;

    MCAPI int $getScreenHeight() const;

    MCAPI int $getDisplayWidth();

    MCAPI int $getDisplayHeight();

#ifdef LL_PLAT_S
    MCFOLD void $setScreenSize(int, int);
#else // LL_PLAT_C
    MCFOLD void $setScreenSize(int width, int height);
#endif

    MCFOLD void $setWindowSize(int width, int height);

#ifdef LL_PLAT_S
    MCFOLD void $setWindowText(::std::string const& title);
#else // LL_PLAT_C
    MCFOLD void $setWindowText(::std::string const&);
#endif

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

    MCAPI void $setTextBoxSelection(::TextBoxSelection selection);

    MCFOLD bool $supportsVibration() const;

    MCFOLD void $vibrate(int);

    MCAPI ::Core::PathBuffer<::std::string> $getAssetFileFullPath(::Core::Path const& filename);

    MCAPI ::Bedrock::Result<::std::string> $_readAssetFileInternal(::Core::PathView filename);

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

    MCFOLD bool $isNetworkEnabled(bool) const;

    MCFOLD void $setNetworkAllowed(bool);

    MCFOLD bool $isNetworkAllowed() const;

    MCFOLD bool $isInternetAvailable() const;

    MCFOLD ::std::optional<bool> $isOnWifiConnectionTelemetryValue();

    MCAPI ::NetworkConnectionType $getNetworkConnectionType();

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

    MCAPI ::std::string $getPlatformStringVar(int);

    MCAPI uint64 $getMaximumUsedMemory();

    MCFOLD uint64 $getLowMemoryEventThreshold(::LowMemorySeverity) const;

    MCAPI uint64 $getLowMemoryEventRecoveryThreshold(::LowMemorySeverity severity) const;

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

    MCAPI ::std::string $getModelNameForUI();

    MCFOLD void $updateBootstrapSettingsFromTreatmentsAsync();

    MCFOLD void $setFullscreenMode(::FullscreenMode const fullscreenMode);

    MCAPI bool $isNetworkThrottled() const;

    MCFOLD bool $isLANAllowed() const;

    MCFOLD bool $doesLANRequireMultiplayerRestrictions() const;

#ifdef LL_PLAT_S
    MCAPI void $collectGraphicsHardwareDetails();
#else // LL_PLAT_C
    MCFOLD void $collectGraphicsHardwareDetails();
#endif

    MCAPI ::std::string $getEdition() const;

    MCFOLD ::OsVersion $getOSVersion() const;

    MCAPI void $setThreadsFrozen(bool frozen);

    MCAPI bool $areThreadsFrozen() const;

    MCFOLD float $getDefaultSafeZoneScaleX() const;

    MCFOLD float $getDefaultSafeZoneScaleY() const;

    MCFOLD float $getDefaultSafeZoneScaleAll() const;

    MCFOLD float $getDefaultScreenPositionX() const;

    MCFOLD float $getDefaultScreenPositionY() const;

#ifdef LL_PLAT_S
    MCAPI bool $isQuitCapable() const;
#else // LL_PLAT_C
    MCFOLD bool $isQuitCapable() const;
#endif

    MCFOLD bool $requireControllerAtStartup() const;

    MCFOLD bool $notifyControllerConnectionStateChange() const;

    MCFOLD bool $platformRequiresControllerApplet() const;

    MCAPI ::InputMode $getDefaultInputMode() const;

    MCAPI ::AppFocusState $getFocusState();

    MCAPI ::AppLifecycleContext& $getAppLifecycleContext();

    MCFOLD bool $supportsFliteTTS() const;

    MCAPI ::std::unique_ptr<::SecureStorage> $getSecureStorage();

    MCAPI ::std::unique_ptr<::SecureStorage> $getSharedSecureStorage();

    MCAPI ::SecureStorageKey $getSecureStorageKey(::std::string const&);

    MCFOLD void $setSecureStorageKey(::std::string const&, ::SecureStorageKey const&);

    MCFOLD bool $devHotReloadRenderResources() const;

    MCFOLD bool $shouldPauseDownloadsWhenEnterGame() const;

    MCFOLD bool $compareAppReceiptToLocalReceipt(::std::string const&);

    MCFOLD ::mce::UUID const& $getThirdPartyPackUUID() const;

    MCFOLD ::mce::UUID const& $getPlatformBetaPackUUID() const;

    MCFOLD bool $saveTreatmentPacksAsZips() const;

    MCFOLD bool $saveEncryptedPacksAsZips() const;

    MCFOLD bool $saveEncryptedWorldTemplatePacksAsZips() const;

    MCFOLD bool $saveEncryptedPersonaPacksAsZips() const;

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

    MCFOLD bool $minimizeBackgroundDownloads() const;

    MCFOLD bool $requiresAutoSaveIconExplanationPopup() const;

    MCFOLD uint $maxFileDataRequestConcurrency() const;

    MCFOLD void $goToExternalConsumablesStoreListing() const;

    MCAPI float $getStoreNetworkFailureTimeout() const;

    MCAPI ::std::shared_ptr<::Core::FileStorageArea>
    $createLoggingStorageArea(::Core::FileAccessType fileAccessType, ::Core::PathView loggingPath);

    MCFOLD uint $getPlatformErrorCodeForStoreError(::MarketplaceErrorUtils::StoreErrorResult const&);

    MCFOLD void $handlePlatformSpecificCommerceError(uint, ::std::string const&);

    MCFOLD bool $isEduMode() const;

    MCFOLD bool $importAsFlatFile() const;

    MCFOLD bool $isWebviewSupported() const;

#ifdef LL_PLAT_S
    MCFOLD ::std::shared_ptr<::WebviewInterface> $createWebview(::Webview::PlatformArguments&& args) const;
#else // LL_PLAT_C
    MCFOLD ::std::shared_ptr<::WebviewInterface> $createWebview(::Webview::PlatformArguments&&) const;
#endif

    MCFOLD bool $getPlatformTTSExists() const;

    MCFOLD bool $getPlatformTTSEnabled() const;

    MCFOLD ::dragon::platform::SurfaceParameters $getRenderSurfaceParameters() const;

    MCFOLD bool $shouldRemoveGraphicsDeviceOnAppTermination() const;

    MCFOLD bool $isJoinableViaExternalServers() const;

    MCFOLD void $onPrimaryUserNetworkReady();

    MCFOLD bool $isDisplayInitialized() const;

    MCFOLD bool $usesAsyncOptionSaving() const;

    MCFOLD void $showPlatformStoreIcon(bool);

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

    MCFOLD ::std::optional<::RefreshRate> $getRefreshRate() const;

    MCAPI ::std::chrono::milliseconds $getWatchdogTimerDurationForAppSuspend() const;

    MCFOLD bool $_tryEnableCPUBoost();

    MCFOLD void $_disableCPUBoost();

    MCFOLD ::Bedrock::CommonPlatform* $getPlatformShim() const;

#ifdef LL_PLAT_S
    MCFOLD void $_initializeFileStorageAreas();
#else // LL_PLAT_C
    MCAPI void $_initializeFileStorageAreas();
#endif

    MCAPI void $_teardownFileStorageAreas();

    MCFOLD int $getPlatformDpi() const;

    MCAPI ::UIScalingRules $getPlatformUIScalingRules() const;

    MCFOLD void $_onInitialize();

    MCFOLD void $_onTeardown();

#ifdef LL_PLAT_C
    MCFOLD void $loadPNG(::mce::Image& out, ::Core::Path const& filename);

    MCFOLD void $loadTGA(::mce::Image& out, ::Core::Path const& filename);

    MCFOLD void $loadJPEG(::mce::Image& out, ::Core::Path const& filename);

    MCFOLD int $getKeyFromKeyCode(int, int, int);

    MCFOLD void $textEditComponentGainedFocus(
        ::std::string const& currentText,
        int                  maxLength,
        bool                 limitInput,
        bool                 numbersOnly,
        bool                 isMultiline
    );

    MCFOLD void $textEditComponentLostFocus();

    MCAPI void $showKeyboard(
        ::std::string const& currentText,
        int                  maxLength,
        bool                 limitInput,
        bool                 numbersOnly,
        bool                 isMultiline,
        int const            controllerId,
        ::glm::vec2 const&   position,
        float                controlHeight,
        ::InputMode          inputMode
    );

    MCAPI void $hideKeyboard();

    MCAPI bool $blankLineDismissesChat() const;

    MCFOLD bool $signWrapsTextEntry() const;

    MCFOLD bool $isFullScreenKeyboard() const;

    MCFOLD bool $actionSuspendsApp(::AppAction) const;

    MCFOLD float $getKeyboardHeight() const;

    MCAPI bool $refocusMouse(bool lostMouse, bool oldMouseGrabbed);

    MCFOLD void $setMousePointerType(::Bedrock::Input::PointerType pointerType);

    MCFOLD void $hideMousePointer();

    MCFOLD void $showMousePointer();

    MCFOLD void $postInteractiveSignIn();

    MCFOLD bool $useHardwareMouse();

    MCFOLD void $provideHardwareMouseImageData(::mce::Image const&);

    MCFOLD bool $hasCustomSoftwareCursor() const;

    MCFOLD ::Core::PathBuffer<::std::string> $getCustomSoftwareCursorAsset() const;

    MCAPI bool $getPointerFocus();

    MCAPI void $setPointerFocus(bool lostFocus);

    MCFOLD bool $isInvertScrollEnabled() const;

    MCFOLD void $toggleSimulateTouchWithMouse();

    MCAPI void $_fireAppSuspended();

    MCAPI void $_fireAppResumed();

    MCAPI void $_fireAppFocusLost();

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

    MCAPI void $shareFile(::Core::Path const&, ::std::function<void(bool)>);

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

    MCFOLD void $getClipboardTextAsync(::std::function<void(::std::string const&)>) const;

    MCFOLD bool $supportsShare() const;

    MCFOLD void $share() const;

    MCAPI bool $allowSplitScreen();

    MCAPI float $splitScreenRenderDistScalar(uint numPlayers);

    MCAPI float $uiOpenRenderDistScalar();

    MCAPI void $pushNotificationReceived(::PushNotificationMessage const& msg);

    MCAPI void $openStoragePermissionRequest(
        ::PermissionRequestReason,
        ::std::function<void(::StoragePermissionResult)> resultCallback
    );

    MCFOLD void $setStorageDirectory(
        ::FileStorageDirectory      dir,
        bool                        isCallback,
        ::PropertyBag const&        extraData,
        ::std::function<void(bool)> onComplete
    );

    MCFOLD ::FileStorageDirectory $setInitialStorageDirectory(::FileStorageDirectory);

    MCFOLD ::FileStorageDirectory $getStorageDirectory() const;

    MCFOLD void $setStorageDirectoryChangeDenied(::std::function<void(::FileStorageDirectory)>);

    MCFOLD ::Bedrock::PubSub::Subscription
    $addStorageDirectoryChangedSubscriber(::std::function<void(::Core::Path const&)> callback);

    MCAPI void $runStoragePermissionResultCallback(::StoragePermissionResult result);

    MCFOLD bool $hasExternalStoragePermission();

    MCFOLD bool $delayOptionSaveUntilCloudSync() const;

    MCFOLD void $updateTextEditBoxPosition(::RectangleArea const&, ::RectangleArea const&, float const);

    MCAPI ::BatteryMonitorInterface const& $getBatteryMonitorInterface() const;

    MCAPI ::ThermalMonitorInterface const& $getThermalMonitorInterface() const;

    MCFOLD void $trialCorrelationStart();

    MCAPI void $setAllowLostFocusToasts(bool allowLostFocusToasts);

    MCAPI void $setShowLostFocusToasts(bool showLostFocusToasts);

    MCAPI bool $getShowLostFocusToasts();

    MCAPI ::Bedrock::Threading::Async<::IntegrityTokenResult> $requestIntegrityToken(::std::string const& nonceToken);

    MCAPI ::std::string $getDeviceId() const;

    MCAPI void $registerUriListener(::UriListener& listener);

    MCAPI void $registerUriListener(::std::string const& verb, ::UriListener& listener);

    MCAPI void $unregisterUriListener(::UriListener const& listener);

    MCAPI void $notifyUriListeners(::ActivationUri const& uri);

    MCAPI void $notifyUriListenerRegistrationDone();

    MCAPI ::IPlatformScreenshots& $getPlatformScreenshots();

    MCAPI bool $isRealmsEnabled() const;

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
