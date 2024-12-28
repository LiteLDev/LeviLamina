#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/application/DeviceSunsetTier.h"
#include "mc/deps/application/IAppPlatform.h"
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
#include "mc/deps/core/secure_storage/ISecureStorageKeySystem.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/VRControllerType.h"

// auto generated forward declare list
// clang-format off
class AppLifecycleContext;
class AppPlatformListener;
class IFileAccess;
class SecureStorage;
class SecureStorageKey;
class WebviewInterface;
struct IntegrityTokenResult;
struct ScreenshotOptions;
namespace Bedrock { struct PlatformRuntimeInfo; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Social { class MultiplayerService; }
namespace Social { struct UserCreationData; }
namespace Webview { class PlatformArguments; }
namespace mce { class UUID; }
// clang-format on

class AppPlatform : public ::IAppPlatform, public ::ISecureStorageKeySystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnkcb9aaa;
    ::ll::UntypedStorage<8, 8>   mUnk2be013;
    ::ll::UntypedStorage<8, 8>   mUnk6c1d8d;
    ::ll::UntypedStorage<1, 1>   mUnkbe6f7b;
    ::ll::UntypedStorage<1, 1>   mUnk513795;
    ::ll::UntypedStorage<1, 1>   mUnkce9805;
    ::ll::UntypedStorage<4, 4>   mUnk94a798;
    ::ll::UntypedStorage<8, 16>  mUnk7a3ae6;
    ::ll::UntypedStorage<8, 104> mUnke68af5;
    ::ll::UntypedStorage<1, 1>   mUnk3eb9fc;
    ::ll::UntypedStorage<8, 64>  mUnkb50203;
    ::ll::UntypedStorage<1, 4>   mUnka5d242;
    ::ll::UntypedStorage<4, 4>   mUnk678160;
    ::ll::UntypedStorage<8, 80>  mUnkafb54c;
    ::ll::UntypedStorage<8, 32>  mUnked78dc;
    ::ll::UntypedStorage<8, 32>  mUnkb79db9;
    ::ll::UntypedStorage<8, 32>  mUnk2d8cb0;
    ::ll::UntypedStorage<4, 4>   mUnkc074d8;
    ::ll::UntypedStorage<8, 8>   mUnkdc46a5;
    ::ll::UntypedStorage<8, 8>   mUnk59b922;
    ::ll::UntypedStorage<8, 8>   mUnk14a700;
    ::ll::UntypedStorage<8, 8>   mUnk2c6ecf;
    ::ll::UntypedStorage<1, 1>   mUnk31e0b7;
    ::ll::UntypedStorage<8, 32>  mUnk6d6135;
    ::ll::UntypedStorage<8, 8>   mUnk896a24;
    ::ll::UntypedStorage<8, 8>   mUnk69a5b2;
    ::ll::UntypedStorage<1, 1>   mUnkd7bea9;
    ::ll::UntypedStorage<8, 8>   mUnk69afa6;
    ::ll::UntypedStorage<1, 1>   mUnk6e12ac;
    ::ll::UntypedStorage<1, 1>   mUnkff6e88;
    ::ll::UntypedStorage<4, 4>   mUnk1d28ac;
    ::ll::UntypedStorage<4, 4>   mUnk81425d;
    ::ll::UntypedStorage<1, 1>   mUnkd5341c;
    ::ll::UntypedStorage<1, 1>   mUnkdcaaf8;
    ::ll::UntypedStorage<1, 1>   mUnk113b3b;
    ::ll::UntypedStorage<1, 1>   mUnkbe6182;
    ::ll::UntypedStorage<1, 1>   mUnkb00e9d;
    ::ll::UntypedStorage<1, 1>   mUnk78da06;
    ::ll::UntypedStorage<1, 1>   mUnk2ff939;
    ::ll::UntypedStorage<8, 32>  mUnkd9746f;
    ::ll::UntypedStorage<8, 80>  mUnk267c61;
    ::ll::UntypedStorage<8, 32>  mUnk26e8ea;
    ::ll::UntypedStorage<8, 80>  mUnkd6f5b8;
    ::ll::UntypedStorage<8, 8>   mUnkb30295;
    ::ll::UntypedStorage<8, 8>   mUnk40dee2;
    ::ll::UntypedStorage<8, 8>   mUnk92e07d;
    ::ll::UntypedStorage<8, 16>  mUnk31065b;
    ::ll::UntypedStorage<8, 16>  mUnk429079;
    ::ll::UntypedStorage<8, 16>  mUnk706c14;
    ::ll::UntypedStorage<8, 16>  mUnk391b07;
    ::ll::UntypedStorage<8, 16>  mUnke84b85;
    ::ll::UntypedStorage<8, 16>  mUnkb30208;
    ::ll::UntypedStorage<8, 8>   mUnkf2b382;
    ::ll::UntypedStorage<4, 4>   mUnk50488d;
    ::ll::UntypedStorage<8, 16>  mUnkea295c;
    ::ll::UntypedStorage<8, 8>   mUnk8138ec;
    // NOLINTEND

public:
    // prevent constructor by default
    AppPlatform& operator=(AppPlatform const&);
    AppPlatform(AppPlatform const&);
    AppPlatform();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AppPlatform() /*override*/;

    // vIndex: 21
    virtual void initialize();

    // vIndex: 22
    virtual void teardown();

    // vIndex: 6
    virtual void initAppPlatformNetworkSettings() /*override*/;

    // vIndex: 23
    virtual void initializeScreenDependentResources();

    // vIndex: 24
    virtual uint64 getHighPerformanceThreadsCount() const;

    // vIndex: 25
    virtual uint64 getTotalHardwareThreadsCount() const;

    // vIndex: 26
    virtual void addListener(::AppPlatformListener* l, float priority);

    // vIndex: 27
    virtual void removeListener(::AppPlatformListener* l);

    // vIndex: 28
    virtual void restartApp(bool restart);

    // vIndex: 1
    virtual bool restartRequested() /*override*/;

    // vIndex: 29
    virtual ::Core::PathBuffer<::std::string> getPackagePath() const = 0;

    // vIndex: 7
    virtual int const numberOfThrottledTreatmentPacksToImportPerMinute() const /*override*/;

    // vIndex: 8
    virtual bool const areTreatmentPacksThrottled() const /*override*/;

    // vIndex: 30
    virtual bool hasFastAlphaTest() const;

    // vIndex: 31
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::IntegrityTokenResult>>
    requestIntegrityToken(::std::string const& nonceToken);

    // vIndex: 32
    virtual void setIntegrityToken(::std::string const& integrityToken);

    // vIndex: 33
    virtual void setIntegrityTokenErrorMessage(::std::string const& errorMessage);

    // vIndex: 34
    virtual bool supportsInPackageRecursion() const;

    // vIndex: 35
    virtual bool supportsXboxLiveAchievements() const;

    // vIndex: 36
    virtual void hideSplashScreen();

    // vIndex: 37
    virtual ::std::string getFeedbackBugsLink() const;

    // vIndex: 38
    virtual ::std::string getFeedbackHelpLink() const;

    // vIndex: 39
    virtual auto getModalErrorMessageProc() -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&);

    // vIndex: 40
    virtual void updateLocalization(::std::string const& loc);

    // vIndex: 41
    virtual void setSleepEnabled(bool enabled);

    // vIndex: 42
    virtual ::Core::PathBuffer<::std::string> getScratchPath();

    // vIndex: 43
    virtual ::Core::PathBuffer<::std::string> getInternalPackStoragePath() const;

    // vIndex: 44
    virtual ::Core::PathBuffer<::std::string> getSettingsPath();

    // vIndex: 2
    virtual ::Core::PathBuffer<::std::string> getLoggingPath() const /*override*/;

    // vIndex: 45
    virtual ::Core::PathBuffer<::std::string> getPackagedShaderCachePath();

    // vIndex: 46
    virtual ::Core::PathBuffer<::std::string> getShaderCachePath();

    // vIndex: 47
    virtual ::Core::PathBuffer<::std::string> getUserdataPathForLevels() const;

    // vIndex: 48
    virtual ::Core::PathBuffer<::std::string> getCacheStoragePath();

    // vIndex: 49
    virtual ::Core::PathBuffer<::std::string> getOnDiskScratchPath();

    // vIndex: 50
    virtual ::Core::PathBuffer<::std::string> getOnDiskPackScratchPath();

    // vIndex: 51
    virtual ::Core::PathBuffer<::std::string> getLevelInfoCachePath() const;

    // vIndex: 52
    virtual ::Core::PathBuffer<::std::string> getCatalogSearchScratchPath();

    // vIndex: 53
    virtual ::Core::PathBuffer<::std::string> getUserStorageRootPath() const;

    // vIndex: 54
    virtual ::std::shared_ptr<::Core::FileStorageArea> getOrCreateStorageAreaForUser(::Social::UserCreationData const&);

    // vIndex: 55
    virtual bool hasSeparatedStorageAreasForContentAcquisition() const;

    // vIndex: 56
    virtual uint64 getOptimalLDBSize();

    // vIndex: 57
    virtual int getMaxLDBFilesOpen() const;

    // vIndex: 58
    virtual bool getDisableLDBSeekCompactions() const;

    // vIndex: 59
    virtual void showDialog(int dialogId);

    // vIndex: 61
    virtual void createUserInput();

    // vIndex: 60
    virtual void createUserInput(int dialogId);

    // vIndex: 62
    virtual int getUserInputStatus();

    // vIndex: 63
    virtual ::std::vector<::std::string> getUserInput();

    // vIndex: 64
    virtual ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> getFileAccess(::ResourceFileSystem fileSystem);

    // vIndex: 65
    virtual ::Core::PathBuffer<::std::string> copyImportFileToTempFolder(::Core::Path const& filePath);

    // vIndex: 66
    virtual void registerFileForCollectionWithCrashDump(::Core::Path const& fileName);

    // vIndex: 67
    virtual void registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const;

    // vIndex: 68
    virtual int getScreenWidth() const;

    // vIndex: 69
    virtual int getScreenHeight() const;

    // vIndex: 70
    virtual int getDisplayWidth();

    // vIndex: 71
    virtual int getDisplayHeight();

    // vIndex: 72
    virtual void setScreenSize(int width, int height);

    // vIndex: 73
    virtual void setWindowSize(int width, int height);

    // vIndex: 74
    virtual void setWindowText(::std::string const& title);

    // vIndex: 75
    virtual ::std::optional<::OperationMode> getOperationMode() const;

    // vIndex: 76
    virtual bool allowContentLogWriteToDisk();

    // vIndex: 77
    virtual uint getMaxClubsRequests() const;

    // vIndex: 78
    virtual void queueForMainThread_DEPRECATED(::std::function<void()>) = 0;

    // vIndex: 79
    virtual ::MPMCQueue<::std::function<void()>>& getMainThreadQueue() = 0;

    // vIndex: 80
    virtual bool supportsLaunchingLegacyVersion() const;

    // vIndex: 81
    virtual void launchLegacyVersion();

    // vIndex: 82
    virtual bool canManageLegacyData() const;

    // vIndex: 83
    virtual bool supportsDayOneExperience() const;

    // vIndex: 84
    virtual bool canMigrateWorldData() const;

    // vIndex: 85
    virtual bool isContentAutoUpdateAllowed() const;

    // vIndex: 86
    virtual int getMaxSimultaneousDownloads() const;

    // vIndex: 87
    virtual uint getMaxSimultaneousServiceRequests() const;

    // vIndex: 88
    virtual bool isDownloadAndImportBlocking() const;

    // vIndex: 89
    virtual bool isDownloadBuffered() const;

    // vIndex: 90
    virtual bool supportsAutoSaveOnDBCompaction() const;

    // vIndex: 91
    virtual ::std::string getTextBoxBackend() const = 0;

    // vIndex: 92
    virtual void setTextBoxBackend(::std::string const&) = 0;

    // vIndex: 93
    virtual int getCaretPosition() const = 0;

    // vIndex: 94
    virtual void setCaretPosition(int) = 0;

    // vIndex: 95
    virtual bool supportsVibration() const;

    // vIndex: 96
    virtual void vibrate(int milliSeconds);

    // vIndex: 97
    virtual ::Core::PathBuffer<::std::string> getAssetFileFullPath(::Core::Path const& filename);

    // vIndex: 98
    virtual ::std::string readAssetFile(::Core::Path const& filename);

    // vIndex: 99
    virtual bool hasAssetFile(::Core::Path const& filename);

    // vIndex: 100
    virtual bool copyAssetFile(::Core::Path const& filename, ::Core::Path const& destination);

    // vIndex: 101
    virtual ::std::set<::Core::PathBuffer<::std::string>>
    listAssetFilesIn(::Core::Path const& path, ::std::string const& extension) const;

    // vIndex: 102
    virtual bool supportsClientUpdate() const;

    // vIndex: 103
    virtual ::std::string getClientUpdateUrl() const;

    // vIndex: 104
    virtual int checkLicense();

    // vIndex: 105
    virtual bool hasBuyButtonWhenInvalidLicense();

    // vIndex: 10
    virtual bool isNetworkAvailable() const /*override*/;

    // vIndex: 11
    virtual bool isLANAvailable() const /*override*/;

    // vIndex: 9
    virtual bool isNetworkEnabled(bool onlyWifiAllowed) const /*override*/;

    // vIndex: 106
    virtual void setNetworkAllowed(bool allowed);

    // vIndex: 107
    virtual bool isNetworkAllowed() const;

    // vIndex: 13
    virtual bool isInternetAvailable() const /*override*/;

    // vIndex: 108
    virtual ::std::optional<bool> isOnWifiConnectionTelemetryValue();

    // vIndex: 109
    virtual ::NetworkConnectionType getNetworkConnectionType();

    // vIndex: 110
    virtual void setNetworkConnectionType(::NetworkConnectionType connectionType);

    // vIndex: 111
    virtual int getDefaultNetworkMaxPlayers() const;

    // vIndex: 14
    virtual bool multiplayerRequiresPremiumAccess() const /*override*/;

    // vIndex: 15
    virtual bool multiplayerRequiresUGCEnabled() const /*override*/;

    // vIndex: 112
    virtual bool isCrossPlatformToggleVisible() const;

    // vIndex: 113
    virtual bool isTelemetryAllowed();

    // vIndex: 114
    virtual bool isTrialWorldsTransferToFullGameAllowed() const;

    // vIndex: 115
    virtual void buyGame();

    // vIndex: 116
    virtual void finish();

    // vIndex: 117
    virtual bool canLaunchUri(::std::string const& uri);

    // vIndex: 118
    virtual void launchUri(::std::string const& uri);

    // vIndex: 119
    virtual void launchSettings();

    // vIndex: 120
    virtual bool useXboxControlHelpers() const;

    // vIndex: 121
    virtual ::PlatformType getPlatformType() const;

    // vIndex: 122
    virtual bool isCentennial() const;

    // vIndex: 123
    virtual ::std::string getPackageFamilyName() const;

    // vIndex: 16
    virtual ::BuildPlatform getBuildPlatform() const /*override*/;

    // vIndex: 124
    virtual ::std::string getPlatformString() const = 0;

    // vIndex: 125
    virtual ::std::string getSubPlatformString() const = 0;

    // vIndex: 126
    virtual void setARVRPlatform(::ARVRPlatform platform);

    // vIndex: 17
    virtual ::ARVRPlatform getARVRPlatform() const /*override*/;

    // vIndex: 127
    virtual int getNumberOfParticleFramesToInterpolate() const;

    // vIndex: 128
    virtual int getDpi() const;

    // vIndex: 129
    virtual void setDpi(int dpi);

    // vIndex: 130
    virtual ::UIScalingRules getUIScalingRules() const;

    // vIndex: 131
    virtual void setUIScalingRules(::UIScalingRules UIScalingRules);

    // vIndex: 132
    virtual void setVRControllerType(::VRControllerType controllerType);

    // vIndex: 133
    virtual ::VRControllerType getVRControllerType() const;

    // vIndex: 134
    virtual bool hasIDEProfiler();

    // vIndex: 135
    virtual ::std::string getPlatformStringVar(int stringId);

    // vIndex: 136
    virtual ::std::string getApplicationId() const = 0;

    // vIndex: 137
    virtual uint64 getFreeMemory() const = 0;

    // vIndex: 138
    virtual uint64 getMemoryLimit() const = 0;

    // vIndex: 139
    virtual uint64 getUsedMemory() = 0;

    // vIndex: 20
    virtual uint64 getTotalPhysicalMemory() const = 0;

    // vIndex: 140
    virtual uint64 getMaximumUsedMemory();

    // vIndex: 141
    virtual uint64 getLowMemoryEventThreshold() const;

    // vIndex: 142
    virtual uint64 getLowMemoryEventRecoveryThreshold() const;

    // vIndex: 19
    virtual uint64 getLowPhysicalMemoryThreshold() const /*override*/;

    // vIndex: 143
    virtual void calculateIfLowMemoryDevice();

    // vIndex: 3
    virtual bool isLowMemoryDevice() const /*override*/;

    // vIndex: 4
    virtual bool isLowPhysicalMemoryDevice() const /*override*/;

    // vIndex: 144
    virtual ::DeviceSunsetTier getDeviceSunsetTier() const;

    // vIndex: 145
    virtual int getMaxSimRadiusInChunks() const;

    // vIndex: 146
    virtual ::std::vector<::std::string> getBroadcastAddresses();

    // vIndex: 147
    virtual ::std::vector<::std::string> getIPAddresses();

    // vIndex: 148
    virtual bool useAppPlatformForTelemetryIPAddress();

    // vIndex: 149
    virtual ::std::string getModelName();

    // vIndex: 150
    virtual bool usesHDRBrightness() const;

    // vIndex: 151
    virtual void updateBootstrapSettingsFromTreatmentsAsync();

    // vIndex: 152
    virtual void setFullscreenMode(::FullscreenMode const fullscreenMode);

    // vIndex: 153
    virtual bool isNetworkThrottled() const;

    // vIndex: 12
    virtual bool isLANAllowed() const /*override*/;

    // vIndex: 154
    virtual bool doesLANRequireMultiplayerRestrictions() const;

    // vIndex: 155
    virtual void collectGraphicsHardwareDetails();

    // vIndex: 156
    virtual ::std::string getEdition() const;

    // vIndex: 157
    virtual ::OsVersion getOSVersion() const;

    // vIndex: 158
    virtual bool isFireTV() const;

    // vIndex: 159
    virtual bool isWin10Arm() const;

    // vIndex: 160
    virtual void setThreadsFrozen(bool frozen);

    // vIndex: 161
    virtual bool areThreadsFrozen() const;

    // vIndex: 162
    virtual float getDefaultSafeZoneScaleX() const;

    // vIndex: 163
    virtual float getDefaultSafeZoneScaleY() const;

    // vIndex: 164
    virtual float getDefaultSafeZoneScaleAll() const;

    // vIndex: 165
    virtual float getDefaultScreenPositionX() const;

    // vIndex: 166
    virtual float getDefaultScreenPositionY() const;

    // vIndex: 167
    virtual bool isQuitCapable() const;

    // vIndex: 168
    virtual bool requireControllerAtStartup() const;

    // vIndex: 169
    virtual bool notifyControllerConnectionStateChange() const;

    // vIndex: 170
    virtual bool platformRequiresControllerApplet() const;

    // vIndex: 171
    virtual ::InputMode getDefaultInputMode() const;

    // vIndex: 172
    virtual ::AppFocusState getFocusState();

    // vIndex: 173
    virtual ::AppLifecycleContext& getAppLifecycleContext();

    // vIndex: 174
    virtual uint64 calculateAvailableDiskFreeSpace(::Core::Path const&) = 0;

    // vIndex: 175
    virtual bool supportsFliteTTS() const;

    // vIndex: 176
    virtual ::std::unique_ptr<::SecureStorage> getSecureStorage();

    // vIndex: 1
    virtual ::SecureStorageKey getSecureStorageKey(::std::string const& key) /*override*/;

    // vIndex: 2
    virtual void setSecureStorageKey(::std::string const& key, ::SecureStorageKey const& value) /*override*/;

    // vIndex: 177
    virtual bool devHotReloadRenderResources() const;

    // vIndex: 178
    virtual bool shouldPauseDownloadsWhenEnterGame() const;

    // vIndex: 179
    virtual bool compareAppReceiptToLocalReceipt(::std::string const& otherReceipt);

    // vIndex: 180
    virtual ::mce::UUID const& getThirdPartyPackUUID() const;

    // vIndex: 181
    virtual bool saveTreatmentPacksAsZips() const;

    // vIndex: 182
    virtual bool saveEncryptedPacksAsZips() const;

    // vIndex: 183
    virtual bool saveEncryptedWorldTemplatePacksAsZips() const;

    // vIndex: 184
    virtual bool allowsResourcePackDevelopment() const;

    // vIndex: 185
    virtual bool supportsLegacySinglePremiumCacheDirectory() const;

    // vIndex: 186
    virtual bool supportsWorldShare() const;

    // vIndex: 187
    virtual bool hasJournalingFilesystem() const;

    // vIndex: 188
    virtual bool isAutoCompactionEnabled() const;

    // vIndex: 189
    virtual ::std::chrono::nanoseconds getLevelSaveInterval() const;

    // vIndex: 190
    virtual ::std::chrono::nanoseconds getOptionsSaveInterval() const;

    // vIndex: 191
    virtual bool hasPlatformSpecificInvites() const;

    // vIndex: 192
    virtual bool usePlatformProfilePicturesOnly() const;

    // vIndex: 193
    virtual bool allowBetaXblSignIn() const;

    // vIndex: 194
    virtual bool requiresXboxLiveSigninToPlay() const;

    // vIndex: 195
    virtual bool requiresLiveGoldForMultiplayer() const;

    // vIndex: 196
    virtual bool shouldRegisterForXboxLiveNotifications() const;

    // vIndex: 5
    virtual bool isRealmsEnabled() const /*override*/;

    // vIndex: 197
    virtual bool minimizeBackgroundDownloads() const;

    // vIndex: 198
    virtual bool requiresAutoSaveIconExplanationPopup() const;

    // vIndex: 199
    virtual ::std::optional<::ScreenshotOptions> getExtraLevelSaveDataIconParams(::std::string const& levelId) const;

    // vIndex: 200
    virtual ::std::vector<::std::shared_ptr<::Social::MultiplayerService>> getMultiplayerServiceListToRegister() const;

    // vIndex: 18
    virtual ::std::vector<::Social::MultiplayerServiceIdentifier>
    getBroadcastingMultiplayerServiceIds(bool xblBroadcast, bool platformBroadcast) const /*override*/;

    // vIndex: 201
    virtual uint maxFileDataRequestConcurrency() const;

    // vIndex: 202
    virtual void goToExternalConsumablesStoreListing() const;

    // vIndex: 203
    virtual float getStoreNetworkFailureTimeout() const;

    // vIndex: 204
    virtual ::std::shared_ptr<::Core::FileStorageArea>
    createLoggingStorageArea(::Core::FileAccessType fileAccessType, ::Core::Path const& loggingPath);

    // vIndex: 205
    virtual void handlePlatformSpecificCommerceError(uint error);

    // vIndex: 206
    virtual bool isEduMode() const;

    // vIndex: 207
    virtual bool importAsFlatFile() const;

    // vIndex: 208
    virtual bool isWebviewSupported() const;

    // vIndex: 209
    virtual ::std::shared_ptr<::WebviewInterface> createWebview(::Webview::PlatformArguments&&) const;

    // vIndex: 210
    virtual bool canAppSelfTerminate() const = 0;

    // vIndex: 211
    virtual bool getPlatformTTSExists() const;

    // vIndex: 212
    virtual bool getPlatformTTSEnabled() const;

    // vIndex: 213
    virtual ::std::variant<::HWND__*, ::std::monostate> getRenderSurfaceParameters() const;

    // vIndex: 214
    virtual bool shouldRemoveGraphicsDeviceOnAppTermination() const;

    // vIndex: 215
    virtual bool isJoinableViaExternalServers() const;

    // vIndex: 216
    virtual void onPrimaryUserNetworkReady();

    // vIndex: 217
    virtual bool isDisplayInitialized() const;

    // vIndex: 218
    virtual bool usesAsyncOptionSaving() const;

    // vIndex: 219
    virtual void showPlatformStoreIcon(bool shouldShow);

    // vIndex: 220
    virtual void showPlatformEmptyStoreDialog(::std::function<void(bool)>&& callback);

    // vIndex: 221
    virtual bool supportsVRModeSwap() const;

    // vIndex: 222
    virtual bool canSwapVRMode(bool const inVRMode) const;

    // vIndex: 223
    virtual void tryEnterVRMode(bool duringStartup, ::std::function<void(bool)> callback);

    // vIndex: 224
    virtual void exitVRMode(::std::function<void()> callback);

    // vIndex: 225
    virtual void initializeGameStreaming();

    // vIndex: 226
    virtual void notifyNetworkConfigurationChanged();

    // vIndex: 227
    virtual void setKeepScreenOnFlag(bool);

    // vIndex: 228
    virtual bool getIsRunningInAppCenter() const;

    // vIndex: 229
    virtual void initializeMulticast() const;

    // vIndex: 230
    virtual void requestMulticastReceivePermission();

    // vIndex: 231
    virtual bool hasMulticastReceivePermission() const;

    // vIndex: 232
    virtual void releaseMulticastReceivePermission() const;

    // vIndex: 233
    virtual void onMinecraftGameInitComplete();

    // vIndex: 234
    virtual void onFullGameUnlock();

    // vIndex: 235
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>>
        showOSUserDialog(::std::string, ::std::string, ::std::string);

    // vIndex: 236
    virtual bool allowsExternalCommandExecution() const;

    // vIndex: 237
    virtual ::Core::PathBuffer<::std::string> _getCurrentStoragePath() const = 0;

    // vIndex: 238
    virtual ::Core::PathBuffer<::std::string> _getExternalStoragePath() const = 0;

    // vIndex: 239
    virtual ::Core::PathBuffer<::std::string> _getInternalStoragePath() const = 0;

    // vIndex: 240
    virtual ::Core::PathBuffer<::std::string> _getUserdataPath() const = 0;

    // vIndex: 241
    virtual bool _tryEnableCPUBoost();

    // vIndex: 242
    virtual void _disableCPUBoost();

    // vIndex: 243
    virtual void _initializeFileStorageAreas();

    // vIndex: 244
    virtual void _teardownFileStorageAreas();

    // vIndex: 245
    virtual int getPlatformDpi() const;

    // vIndex: 246
    virtual ::UIScalingRules getPlatformUIScalingRules() const;

    // vIndex: 247
    virtual ::Core::PathBuffer<::std::string> getPlatformTempPath() const = 0;

    // vIndex: 248
    virtual void _onInitialize();

    // vIndex: 249
    virtual void _onTeardown();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AppPlatform(bool registerService);

    MCAPI void _fireAppTerminated();

    MCAPI void _initializeLoadProfiler();

    MCAPI ::std::unique_ptr<::Bedrock::PlatformRuntimeInfo>& accessPlatformRuntimeInformation_Shim();

    MCAPI ::Core::PathBuffer<::std::string> getCurrentStoragePath() const;

    MCAPI ::Core::PathBuffer<::std::string> getInternalStoragePath() const;

    MCAPI ::std::unique_ptr<::Bedrock::PlatformRuntimeInfo> const& getPlatformRuntimeInformation() const;

    MCAPI ::Core::PathBuffer<::std::string> getUserdataPath() const;

    MCAPI bool isTerminating() const;

    MCAPI void notifyUserStorageInitialized();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& HOME_PATH();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& LOG_PATH();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& SETTINGS_PATH();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& SHADERCACHE_PATH();

    MCAPI static bool& mIsInitialized();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool registerService);
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

    MCAPI void $initializeScreenDependentResources();

    MCAPI uint64 $getHighPerformanceThreadsCount() const;

    MCAPI uint64 $getTotalHardwareThreadsCount() const;

    MCAPI void $addListener(::AppPlatformListener* l, float priority);

    MCAPI void $removeListener(::AppPlatformListener* l);

    MCAPI void $restartApp(bool restart);

    MCAPI bool $restartRequested();

    MCAPI int const $numberOfThrottledTreatmentPacksToImportPerMinute() const;

    MCAPI bool const $areTreatmentPacksThrottled() const;

    MCAPI bool $hasFastAlphaTest() const;

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::IntegrityTokenResult>>
    $requestIntegrityToken(::std::string const& nonceToken);

    MCAPI void $setIntegrityToken(::std::string const& integrityToken);

    MCAPI void $setIntegrityTokenErrorMessage(::std::string const& errorMessage);

    MCAPI bool $supportsInPackageRecursion() const;

    MCAPI bool $supportsXboxLiveAchievements() const;

    MCAPI void $hideSplashScreen();

    MCAPI ::std::string $getFeedbackBugsLink() const;

    MCAPI ::std::string $getFeedbackHelpLink() const;

    MCAPI auto $getModalErrorMessageProc() -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&);

    MCAPI void $updateLocalization(::std::string const& loc);

    MCAPI void $setSleepEnabled(bool enabled);

    MCAPI ::Core::PathBuffer<::std::string> $getScratchPath();

    MCAPI ::Core::PathBuffer<::std::string> $getInternalPackStoragePath() const;

    MCAPI ::Core::PathBuffer<::std::string> $getSettingsPath();

    MCAPI ::Core::PathBuffer<::std::string> $getLoggingPath() const;

    MCAPI ::Core::PathBuffer<::std::string> $getPackagedShaderCachePath();

    MCAPI ::Core::PathBuffer<::std::string> $getShaderCachePath();

    MCAPI ::Core::PathBuffer<::std::string> $getUserdataPathForLevels() const;

    MCAPI ::Core::PathBuffer<::std::string> $getCacheStoragePath();

    MCAPI ::Core::PathBuffer<::std::string> $getOnDiskScratchPath();

    MCAPI ::Core::PathBuffer<::std::string> $getOnDiskPackScratchPath();

    MCAPI ::Core::PathBuffer<::std::string> $getLevelInfoCachePath() const;

    MCAPI ::Core::PathBuffer<::std::string> $getCatalogSearchScratchPath();

    MCAPI ::Core::PathBuffer<::std::string> $getUserStorageRootPath() const;

    MCAPI ::std::shared_ptr<::Core::FileStorageArea> $getOrCreateStorageAreaForUser(::Social::UserCreationData const&);

    MCAPI bool $hasSeparatedStorageAreasForContentAcquisition() const;

    MCAPI uint64 $getOptimalLDBSize();

    MCAPI int $getMaxLDBFilesOpen() const;

    MCAPI bool $getDisableLDBSeekCompactions() const;

    MCAPI void $showDialog(int dialogId);

    MCAPI void $createUserInput();

    MCAPI void $createUserInput(int dialogId);

    MCAPI int $getUserInputStatus();

    MCAPI ::std::vector<::std::string> $getUserInput();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> $getFileAccess(::ResourceFileSystem fileSystem);

    MCAPI ::Core::PathBuffer<::std::string> $copyImportFileToTempFolder(::Core::Path const& filePath);

    MCAPI void $registerFileForCollectionWithCrashDump(::Core::Path const& fileName);

    MCAPI void $registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const;

    MCAPI int $getScreenWidth() const;

    MCAPI int $getScreenHeight() const;

    MCAPI int $getDisplayWidth();

    MCAPI int $getDisplayHeight();

    MCAPI void $setScreenSize(int width, int height);

    MCAPI void $setWindowSize(int width, int height);

    MCAPI void $setWindowText(::std::string const& title);

    MCAPI ::std::optional<::OperationMode> $getOperationMode() const;

    MCAPI bool $allowContentLogWriteToDisk();

    MCAPI uint $getMaxClubsRequests() const;

    MCAPI bool $supportsLaunchingLegacyVersion() const;

    MCAPI void $launchLegacyVersion();

    MCAPI bool $canManageLegacyData() const;

    MCAPI bool $supportsDayOneExperience() const;

    MCAPI bool $canMigrateWorldData() const;

    MCAPI bool $isContentAutoUpdateAllowed() const;

    MCAPI int $getMaxSimultaneousDownloads() const;

    MCAPI uint $getMaxSimultaneousServiceRequests() const;

    MCAPI bool $isDownloadAndImportBlocking() const;

    MCAPI bool $isDownloadBuffered() const;

    MCAPI bool $supportsAutoSaveOnDBCompaction() const;

    MCAPI bool $supportsVibration() const;

    MCAPI void $vibrate(int milliSeconds);

    MCAPI ::Core::PathBuffer<::std::string> $getAssetFileFullPath(::Core::Path const& filename);

    MCAPI ::std::string $readAssetFile(::Core::Path const& filename);

    MCAPI bool $hasAssetFile(::Core::Path const& filename);

    MCAPI bool $copyAssetFile(::Core::Path const& filename, ::Core::Path const& destination);

    MCAPI ::std::set<::Core::PathBuffer<::std::string>>
    $listAssetFilesIn(::Core::Path const& path, ::std::string const& extension) const;

    MCAPI bool $supportsClientUpdate() const;

    MCAPI ::std::string $getClientUpdateUrl() const;

    MCAPI int $checkLicense();

    MCAPI bool $hasBuyButtonWhenInvalidLicense();

    MCAPI bool $isNetworkAvailable() const;

    MCAPI bool $isLANAvailable() const;

    MCAPI bool $isNetworkEnabled(bool onlyWifiAllowed) const;

    MCAPI void $setNetworkAllowed(bool allowed);

    MCAPI bool $isNetworkAllowed() const;

    MCAPI bool $isInternetAvailable() const;

    MCAPI ::std::optional<bool> $isOnWifiConnectionTelemetryValue();

    MCAPI ::NetworkConnectionType $getNetworkConnectionType();

    MCAPI void $setNetworkConnectionType(::NetworkConnectionType connectionType);

    MCAPI int $getDefaultNetworkMaxPlayers() const;

    MCAPI bool $multiplayerRequiresPremiumAccess() const;

    MCAPI bool $multiplayerRequiresUGCEnabled() const;

    MCAPI bool $isCrossPlatformToggleVisible() const;

    MCAPI bool $isTelemetryAllowed();

    MCAPI bool $isTrialWorldsTransferToFullGameAllowed() const;

    MCAPI void $buyGame();

    MCAPI void $finish();

    MCAPI bool $canLaunchUri(::std::string const& uri);

    MCAPI void $launchUri(::std::string const& uri);

    MCAPI void $launchSettings();

    MCAPI bool $useXboxControlHelpers() const;

    MCAPI ::PlatformType $getPlatformType() const;

    MCAPI bool $isCentennial() const;

    MCAPI ::std::string $getPackageFamilyName() const;

    MCAPI ::BuildPlatform $getBuildPlatform() const;

    MCAPI void $setARVRPlatform(::ARVRPlatform platform);

    MCAPI ::ARVRPlatform $getARVRPlatform() const;

    MCAPI int $getNumberOfParticleFramesToInterpolate() const;

    MCAPI int $getDpi() const;

    MCAPI void $setDpi(int dpi);

    MCAPI ::UIScalingRules $getUIScalingRules() const;

    MCAPI void $setUIScalingRules(::UIScalingRules UIScalingRules);

    MCAPI void $setVRControllerType(::VRControllerType controllerType);

    MCAPI ::VRControllerType $getVRControllerType() const;

    MCAPI bool $hasIDEProfiler();

    MCAPI ::std::string $getPlatformStringVar(int stringId);

    MCAPI uint64 $getMaximumUsedMemory();

    MCAPI uint64 $getLowMemoryEventThreshold() const;

    MCAPI uint64 $getLowMemoryEventRecoveryThreshold() const;

    MCAPI uint64 $getLowPhysicalMemoryThreshold() const;

    MCAPI void $calculateIfLowMemoryDevice();

    MCAPI bool $isLowMemoryDevice() const;

    MCAPI bool $isLowPhysicalMemoryDevice() const;

    MCAPI ::DeviceSunsetTier $getDeviceSunsetTier() const;

    MCAPI int $getMaxSimRadiusInChunks() const;

    MCAPI ::std::vector<::std::string> $getBroadcastAddresses();

    MCAPI ::std::vector<::std::string> $getIPAddresses();

    MCAPI bool $useAppPlatformForTelemetryIPAddress();

    MCAPI ::std::string $getModelName();

    MCAPI bool $usesHDRBrightness() const;

    MCAPI void $updateBootstrapSettingsFromTreatmentsAsync();

    MCAPI void $setFullscreenMode(::FullscreenMode const fullscreenMode);

    MCAPI bool $isNetworkThrottled() const;

    MCAPI bool $isLANAllowed() const;

    MCAPI bool $doesLANRequireMultiplayerRestrictions() const;

    MCAPI void $collectGraphicsHardwareDetails();

    MCAPI ::std::string $getEdition() const;

    MCAPI ::OsVersion $getOSVersion() const;

    MCAPI bool $isFireTV() const;

    MCAPI bool $isWin10Arm() const;

    MCAPI void $setThreadsFrozen(bool frozen);

    MCAPI bool $areThreadsFrozen() const;

    MCAPI float $getDefaultSafeZoneScaleX() const;

    MCAPI float $getDefaultSafeZoneScaleY() const;

    MCAPI float $getDefaultSafeZoneScaleAll() const;

    MCAPI float $getDefaultScreenPositionX() const;

    MCAPI float $getDefaultScreenPositionY() const;

    MCAPI bool $isQuitCapable() const;

    MCAPI bool $requireControllerAtStartup() const;

    MCAPI bool $notifyControllerConnectionStateChange() const;

    MCAPI bool $platformRequiresControllerApplet() const;

    MCAPI ::InputMode $getDefaultInputMode() const;

    MCAPI ::AppFocusState $getFocusState();

    MCAPI ::AppLifecycleContext& $getAppLifecycleContext();

    MCAPI bool $supportsFliteTTS() const;

    MCAPI ::std::unique_ptr<::SecureStorage> $getSecureStorage();

    MCAPI ::SecureStorageKey $getSecureStorageKey(::std::string const& key);

    MCAPI void $setSecureStorageKey(::std::string const& key, ::SecureStorageKey const& value);

    MCAPI bool $devHotReloadRenderResources() const;

    MCAPI bool $shouldPauseDownloadsWhenEnterGame() const;

    MCAPI bool $compareAppReceiptToLocalReceipt(::std::string const& otherReceipt);

    MCAPI ::mce::UUID const& $getThirdPartyPackUUID() const;

    MCAPI bool $saveTreatmentPacksAsZips() const;

    MCAPI bool $saveEncryptedPacksAsZips() const;

    MCAPI bool $saveEncryptedWorldTemplatePacksAsZips() const;

    MCAPI bool $allowsResourcePackDevelopment() const;

    MCAPI bool $supportsLegacySinglePremiumCacheDirectory() const;

    MCAPI bool $supportsWorldShare() const;

    MCAPI bool $hasJournalingFilesystem() const;

    MCAPI bool $isAutoCompactionEnabled() const;

    MCAPI ::std::chrono::nanoseconds $getLevelSaveInterval() const;

    MCAPI ::std::chrono::nanoseconds $getOptionsSaveInterval() const;

    MCAPI bool $hasPlatformSpecificInvites() const;

    MCAPI bool $usePlatformProfilePicturesOnly() const;

    MCAPI bool $allowBetaXblSignIn() const;

    MCAPI bool $requiresXboxLiveSigninToPlay() const;

    MCAPI bool $requiresLiveGoldForMultiplayer() const;

    MCAPI bool $shouldRegisterForXboxLiveNotifications() const;

    MCAPI bool $isRealmsEnabled() const;

    MCAPI bool $minimizeBackgroundDownloads() const;

    MCAPI bool $requiresAutoSaveIconExplanationPopup() const;

    MCAPI ::std::optional<::ScreenshotOptions> $getExtraLevelSaveDataIconParams(::std::string const& levelId) const;

    MCAPI ::std::vector<::std::shared_ptr<::Social::MultiplayerService>> $getMultiplayerServiceListToRegister() const;

    MCAPI ::std::vector<::Social::MultiplayerServiceIdentifier>
    $getBroadcastingMultiplayerServiceIds(bool xblBroadcast, bool platformBroadcast) const;

    MCAPI uint $maxFileDataRequestConcurrency() const;

    MCAPI void $goToExternalConsumablesStoreListing() const;

    MCAPI float $getStoreNetworkFailureTimeout() const;

    MCAPI ::std::shared_ptr<::Core::FileStorageArea>
    $createLoggingStorageArea(::Core::FileAccessType fileAccessType, ::Core::Path const& loggingPath);

    MCAPI void $handlePlatformSpecificCommerceError(uint error);

    MCAPI bool $isEduMode() const;

    MCAPI bool $importAsFlatFile() const;

    MCAPI bool $isWebviewSupported() const;

    MCAPI ::std::shared_ptr<::WebviewInterface> $createWebview(::Webview::PlatformArguments&&) const;

    MCAPI bool $getPlatformTTSExists() const;

    MCAPI bool $getPlatformTTSEnabled() const;

    MCAPI ::std::variant<::HWND__*, ::std::monostate> $getRenderSurfaceParameters() const;

    MCAPI bool $shouldRemoveGraphicsDeviceOnAppTermination() const;

    MCAPI bool $isJoinableViaExternalServers() const;

    MCAPI void $onPrimaryUserNetworkReady();

    MCAPI bool $isDisplayInitialized() const;

    MCAPI bool $usesAsyncOptionSaving() const;

    MCAPI void $showPlatformStoreIcon(bool shouldShow);

    MCAPI void $showPlatformEmptyStoreDialog(::std::function<void(bool)>&& callback);

    MCAPI bool $supportsVRModeSwap() const;

    MCAPI bool $canSwapVRMode(bool const inVRMode) const;

    MCAPI void $tryEnterVRMode(bool duringStartup, ::std::function<void(bool)> callback);

    MCAPI void $exitVRMode(::std::function<void()> callback);

    MCAPI void $initializeGameStreaming();

    MCAPI void $notifyNetworkConfigurationChanged();

    MCAPI void $setKeepScreenOnFlag(bool);

    MCAPI bool $getIsRunningInAppCenter() const;

    MCAPI void $initializeMulticast() const;

    MCAPI void $requestMulticastReceivePermission();

    MCAPI bool $hasMulticastReceivePermission() const;

    MCAPI void $releaseMulticastReceivePermission() const;

    MCAPI void $onMinecraftGameInitComplete();

    MCAPI void $onFullGameUnlock();

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>>
        $showOSUserDialog(::std::string, ::std::string, ::std::string);

    MCAPI bool $allowsExternalCommandExecution() const;

    MCAPI bool $_tryEnableCPUBoost();

    MCAPI void $_disableCPUBoost();

    MCAPI void $_initializeFileStorageAreas();

    MCAPI void $_teardownFileStorageAreas();

    MCAPI int $getPlatformDpi() const;

    MCAPI ::UIScalingRules $getPlatformUIScalingRules() const;

    MCAPI void $_onInitialize();

    MCAPI void $_onTeardown();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIAppPlatform();

    MCAPI static void** $vftableForISecureStorageKeySystem();
    // NOLINTEND
};
