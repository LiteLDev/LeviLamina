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
#include "mc/deps/core/utility/pub_sub/Connector.h"
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
    virtual void initializeGraphicsDeviceTier();

    // vIndex: 27
    virtual uchar getGraphicsDeviceTier() const;

    // vIndex: 28
    virtual void addListener(::AppPlatformListener* l, float priority);

    // vIndex: 29
    virtual void removeListener(::AppPlatformListener* l);

    // vIndex: 30
    virtual void restartApp(bool restart);

    // vIndex: 1
    virtual bool restartRequested() /*override*/;

    // vIndex: 31
    virtual ::Core::PathBuffer<::std::string> getPackagePath() const = 0;

    // vIndex: 7
    virtual int const numberOfThrottledTreatmentPacksToImportPerMinute() const /*override*/;

    // vIndex: 8
    virtual bool const areTreatmentPacksThrottled() const /*override*/;

    // vIndex: 32
    virtual bool hasFastAlphaTest() const;

    // vIndex: 33
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::IntegrityTokenResult>>
    requestIntegrityToken(::std::string const& nonceToken);

    // vIndex: 34
    virtual void setIntegrityToken(::std::string const& integrityToken);

    // vIndex: 35
    virtual void setIntegrityTokenErrorMessage(::std::string const& errorMessage);

    // vIndex: 36
    virtual bool supportsInPackageRecursion() const;

    // vIndex: 37
    virtual bool supportsXboxLiveAchievements() const;

    // vIndex: 38
    virtual void hideSplashScreen();

    // vIndex: 39
    virtual ::std::string getFeedbackBugsLink() const;

    // vIndex: 40
    virtual ::std::string getFeedbackHelpLink() const;

    // vIndex: 41
    virtual auto getModalErrorMessageProc() -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&);

    // vIndex: 42
    virtual void updateLocalization(::std::string const& loc);

    // vIndex: 43
    virtual void setSleepEnabled(bool enabled);

    // vIndex: 44
    virtual ::Core::PathBuffer<::std::string> getScratchPath();

    // vIndex: 45
    virtual ::Core::PathBuffer<::std::string> getInternalPackStoragePath() const;

    // vIndex: 46
    virtual ::Core::PathBuffer<::std::string> getSettingsPath();

    // vIndex: 2
    virtual ::Core::PathBuffer<::std::string> getLoggingPath() const /*override*/;

    // vIndex: 47
    virtual ::Core::PathBuffer<::std::string> getPackagedShaderCachePath();

    // vIndex: 48
    virtual ::Core::PathBuffer<::std::string> getShaderCachePath();

    // vIndex: 49
    virtual ::Core::PathBuffer<::std::string> getUserdataPathForLevels() const;

    // vIndex: 50
    virtual ::Core::PathBuffer<::std::string> getCacheStoragePath();

    // vIndex: 51
    virtual ::Core::PathBuffer<::std::string> getOnDiskScratchPath();

    // vIndex: 52
    virtual ::Core::PathBuffer<::std::string> getOnDiskPackScratchPath();

    // vIndex: 53
    virtual ::Core::PathBuffer<::std::string> getLevelInfoCachePath() const;

    // vIndex: 54
    virtual ::Core::PathBuffer<::std::string> getCatalogSearchScratchPath();

    // vIndex: 55
    virtual ::Core::PathBuffer<::std::string> getUserStorageRootPath() const;

    // vIndex: 56
    virtual ::std::shared_ptr<::Core::FileStorageArea> getOrCreateStorageAreaForUser(::Social::UserCreationData const&);

    // vIndex: 57
    virtual bool hasSeparatedStorageAreasForContentAcquisition() const;

    // vIndex: 58
    virtual uint64 getOptimalLDBSize();

    // vIndex: 59
    virtual int getMaxLDBFilesOpen() const;

    // vIndex: 60
    virtual bool getDisableLDBSeekCompactions() const;

    // vIndex: 61
    virtual void showDialog(int dialogId);

    // vIndex: 63
    virtual void createUserInput();

    // vIndex: 62
    virtual void createUserInput(int dialogId);

    // vIndex: 64
    virtual int getUserInputStatus();

    // vIndex: 65
    virtual ::std::vector<::std::string> getUserInput();

    // vIndex: 66
    virtual ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> getFileAccess(::ResourceFileSystem fileSystem);

    // vIndex: 67
    virtual ::Core::PathBuffer<::std::string> copyImportFileToTempFolder(::Core::Path const& filePath);

    // vIndex: 68
    virtual void registerFileForCollectionWithCrashDump(::Core::Path const& fileName);

    // vIndex: 69
    virtual void registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const;

    // vIndex: 70
    virtual int getScreenWidth() const;

    // vIndex: 71
    virtual int getScreenHeight() const;

    // vIndex: 72
    virtual int getDisplayWidth();

    // vIndex: 73
    virtual int getDisplayHeight();

    // vIndex: 74
    virtual void setScreenSize(int width, int height);

    // vIndex: 75
    virtual void setWindowSize(int width, int height);

    // vIndex: 76
    virtual void setWindowText(::std::string const& title);

    // vIndex: 77
    virtual ::std::optional<::OperationMode> getOperationMode() const;

    // vIndex: 78
    virtual bool allowContentLogWriteToDisk();

    // vIndex: 79
    virtual uint getMaxClubsRequests() const;

    // vIndex: 80
    virtual void queueForMainThread_DEPRECATED(::std::function<void()>) = 0;

    // vIndex: 81
    virtual ::MPMCQueue<::std::function<void()>>& getMainThreadQueue() = 0;

    // vIndex: 82
    virtual bool supportsLaunchingLegacyVersion() const;

    // vIndex: 83
    virtual void launchLegacyVersion();

    // vIndex: 84
    virtual bool canManageLegacyData() const;

    // vIndex: 85
    virtual bool supportsDayOneExperience() const;

    // vIndex: 86
    virtual bool canMigrateWorldData() const;

    // vIndex: 87
    virtual bool isContentAutoUpdateAllowed() const;

    // vIndex: 88
    virtual int getMaxSimultaneousDownloads() const;

    // vIndex: 89
    virtual uint getMaxSimultaneousServiceRequests() const;

    // vIndex: 90
    virtual bool isDownloadAndImportBlocking() const;

    // vIndex: 91
    virtual bool isDownloadBuffered() const;

    // vIndex: 92
    virtual bool supportsAutoSaveOnDBCompaction() const;

    // vIndex: 93
    virtual ::std::string getTextBoxBackend() const = 0;

    // vIndex: 94
    virtual void setTextBoxBackend(::std::string const&) = 0;

    // vIndex: 95
    virtual int getCaretPosition() const = 0;

    // vIndex: 96
    virtual void setCaretPosition(int) = 0;

    // vIndex: 97
    virtual bool supportsVibration() const;

    // vIndex: 98
    virtual void vibrate(int milliSeconds);

    // vIndex: 99
    virtual ::Core::PathBuffer<::std::string> getAssetFileFullPath(::Core::Path const& filename);

    // vIndex: 100
    virtual ::std::string readAssetFile(::Core::Path const& filename);

    // vIndex: 101
    virtual bool hasAssetFile(::Core::Path const& filename);

    // vIndex: 102
    virtual bool copyAssetFile(::Core::Path const& filename, ::Core::Path const& destination);

    // vIndex: 103
    virtual ::std::set<::Core::PathBuffer<::std::string>>
    listAssetFilesIn(::Core::Path const& path, ::std::string const& extension) const;

    // vIndex: 104
    virtual bool supportsClientUpdate() const;

    // vIndex: 105
    virtual ::std::string getClientUpdateUrl() const;

    // vIndex: 106
    virtual int checkLicense();

    // vIndex: 107
    virtual bool hasBuyButtonWhenInvalidLicense();

    // vIndex: 10
    virtual bool isNetworkAvailable() const /*override*/;

    // vIndex: 11
    virtual bool isLANAvailable() const /*override*/;

    // vIndex: 9
    virtual bool isNetworkEnabled(bool onlyWifiAllowed) const /*override*/;

    // vIndex: 108
    virtual void setNetworkAllowed(bool allowed);

    // vIndex: 109
    virtual bool isNetworkAllowed() const;

    // vIndex: 13
    virtual bool isInternetAvailable() const /*override*/;

    // vIndex: 110
    virtual ::std::optional<bool> isOnWifiConnectionTelemetryValue();

    // vIndex: 111
    virtual ::NetworkConnectionType getNetworkConnectionType();

    // vIndex: 112
    virtual void setNetworkConnectionType(::NetworkConnectionType connectionType);

    // vIndex: 113
    virtual int getDefaultNetworkMaxPlayers() const;

    // vIndex: 14
    virtual bool multiplayerRequiresPremiumAccess() const /*override*/;

    // vIndex: 15
    virtual bool multiplayerRequiresUGCEnabled() const /*override*/;

    // vIndex: 114
    virtual bool isCrossPlatformToggleVisible() const;

    // vIndex: 115
    virtual bool isTelemetryAllowed();

    // vIndex: 116
    virtual bool isTrialWorldsTransferToFullGameAllowed() const;

    // vIndex: 117
    virtual void buyGame();

    // vIndex: 118
    virtual void finish();

    // vIndex: 119
    virtual bool canLaunchUri(::std::string const& uri);

    // vIndex: 120
    virtual void launchUri(::std::string const& uri);

    // vIndex: 121
    virtual void launchSettings();

    // vIndex: 122
    virtual bool useXboxControlHelpers() const;

    // vIndex: 123
    virtual ::PlatformType getPlatformType() const;

    // vIndex: 124
    virtual bool isCentennial() const;

    // vIndex: 125
    virtual ::std::string getPackageFamilyName() const;

    // vIndex: 16
    virtual ::BuildPlatform getBuildPlatform() const /*override*/;

    // vIndex: 126
    virtual ::std::string getPlatformString() const = 0;

    // vIndex: 127
    virtual ::std::string getSubPlatformString() const = 0;

    // vIndex: 128
    virtual void setARVRPlatform(::ARVRPlatform platform);

    // vIndex: 17
    virtual ::ARVRPlatform getARVRPlatform() const /*override*/;

    // vIndex: 129
    virtual int getNumberOfParticleFramesToInterpolate() const;

    // vIndex: 130
    virtual int getDpi() const;

    // vIndex: 131
    virtual void setDpi(int dpi);

    // vIndex: 132
    virtual ::UIScalingRules getUIScalingRules() const;

    // vIndex: 133
    virtual void setUIScalingRules(::UIScalingRules UIScalingRules);

    // vIndex: 134
    virtual void setVRControllerType(::VRControllerType controllerType);

    // vIndex: 135
    virtual ::VRControllerType getVRControllerType() const;

    // vIndex: 136
    virtual bool hasIDEProfiler();

    // vIndex: 137
    virtual ::std::string getPlatformStringVar(int stringId);

    // vIndex: 138
    virtual ::std::string getApplicationId() const = 0;

    // vIndex: 139
    virtual uint64 getFreeMemory() const = 0;

    // vIndex: 140
    virtual uint64 getMemoryLimit() const = 0;

    // vIndex: 141
    virtual uint64 getUsedMemory() = 0;

    // vIndex: 20
    virtual uint64 getTotalPhysicalMemory() const = 0;

    // vIndex: 142
    virtual uint64 getMaximumUsedMemory();

    // vIndex: 143
    virtual uint64 getLowMemoryEventThreshold() const;

    // vIndex: 144
    virtual uint64 getLowMemoryEventRecoveryThreshold() const;

    // vIndex: 19
    virtual uint64 getLowPhysicalMemoryThreshold() const /*override*/;

    // vIndex: 145
    virtual void calculateIfLowMemoryDevice();

    // vIndex: 3
    virtual bool isLowMemoryDevice() const /*override*/;

    // vIndex: 4
    virtual bool isLowPhysicalMemoryDevice() const /*override*/;

    // vIndex: 146
    virtual uint64 getTextureMemoryBudget() const;

    // vIndex: 147
    virtual uint64 getSingleMipDefaultMemoryBudget() const;

    // vIndex: 148
    virtual ::DeviceSunsetTier getDeviceSunsetTier() const;

    // vIndex: 149
    virtual int getMaxSimRadiusInChunks() const;

    // vIndex: 150
    virtual ::std::vector<::std::string> getBroadcastAddresses();

    // vIndex: 151
    virtual ::std::vector<::std::string> getIPAddresses();

    // vIndex: 152
    virtual bool useAppPlatformForTelemetryIPAddress();

    // vIndex: 153
    virtual ::std::string getModelName();

    // vIndex: 154
    virtual bool usesHDRBrightness() const;

    // vIndex: 155
    virtual void updateBootstrapSettingsFromTreatmentsAsync();

    // vIndex: 156
    virtual void setFullscreenMode(::FullscreenMode const fullscreenMode);

    // vIndex: 157
    virtual bool isNetworkThrottled() const;

    // vIndex: 12
    virtual bool isLANAllowed() const /*override*/;

    // vIndex: 158
    virtual bool doesLANRequireMultiplayerRestrictions() const;

    // vIndex: 159
    virtual void collectGraphicsHardwareDetails();

    // vIndex: 160
    virtual ::std::string getEdition() const;

    // vIndex: 161
    virtual ::OsVersion getOSVersion() const;

    // vIndex: 162
    virtual bool isFireTV() const;

    // vIndex: 163
    virtual bool isWin10Arm() const;

    // vIndex: 164
    virtual void setThreadsFrozen(bool frozen);

    // vIndex: 165
    virtual bool areThreadsFrozen() const;

    // vIndex: 166
    virtual float getDefaultSafeZoneScaleX() const;

    // vIndex: 167
    virtual float getDefaultSafeZoneScaleY() const;

    // vIndex: 168
    virtual float getDefaultSafeZoneScaleAll() const;

    // vIndex: 169
    virtual float getDefaultScreenPositionX() const;

    // vIndex: 170
    virtual float getDefaultScreenPositionY() const;

    // vIndex: 171
    virtual bool isQuitCapable() const;

    // vIndex: 172
    virtual bool requireControllerAtStartup() const;

    // vIndex: 173
    virtual bool notifyControllerConnectionStateChange() const;

    // vIndex: 174
    virtual bool platformRequiresControllerApplet() const;

    // vIndex: 175
    virtual ::InputMode getDefaultInputMode() const;

    // vIndex: 176
    virtual ::AppFocusState getFocusState();

    // vIndex: 177
    virtual ::AppLifecycleContext& getAppLifecycleContext();

    // vIndex: 178
    virtual uint64 calculateAvailableDiskFreeSpace(::Core::Path const&) = 0;

    // vIndex: 179
    virtual bool supportsFliteTTS() const;

    // vIndex: 180
    virtual ::std::unique_ptr<::SecureStorage> getSecureStorage();

    // vIndex: 1
    virtual ::SecureStorageKey getSecureStorageKey(::std::string const& key) /*override*/;

    // vIndex: 2
    virtual void setSecureStorageKey(::std::string const& key, ::SecureStorageKey const& value) /*override*/;

    // vIndex: 181
    virtual bool devHotReloadRenderResources() const;

    // vIndex: 182
    virtual bool shouldPauseDownloadsWhenEnterGame() const;

    // vIndex: 183
    virtual bool compareAppReceiptToLocalReceipt(::std::string const& otherReceipt);

    // vIndex: 184
    virtual ::mce::UUID const& getThirdPartyPackUUID() const;

    // vIndex: 185
    virtual bool saveTreatmentPacksAsZips() const;

    // vIndex: 186
    virtual bool saveEncryptedPacksAsZips() const;

    // vIndex: 187
    virtual bool saveEncryptedWorldTemplatePacksAsZips() const;

    // vIndex: 188
    virtual bool allowsResourcePackDevelopment() const;

    // vIndex: 189
    virtual bool supportsLegacySinglePremiumCacheDirectory() const;

    // vIndex: 190
    virtual bool supportsWorldShare() const;

    // vIndex: 191
    virtual bool hasJournalingFilesystem() const;

    // vIndex: 192
    virtual bool isAutoCompactionEnabled() const;

    // vIndex: 193
    virtual ::std::chrono::nanoseconds getLevelSaveInterval() const;

    // vIndex: 194
    virtual ::std::chrono::nanoseconds getOptionsSaveInterval() const;

    // vIndex: 195
    virtual bool hasPlatformSpecificInvites() const;

    // vIndex: 196
    virtual bool usePlatformProfilePicturesOnly() const;

    // vIndex: 197
    virtual bool allowBetaXblSignIn() const;

    // vIndex: 198
    virtual bool requiresXboxLiveSigninToPlay() const;

    // vIndex: 199
    virtual bool requiresLiveGoldForMultiplayer() const;

    // vIndex: 200
    virtual bool shouldRegisterForXboxLiveNotifications() const;

    // vIndex: 5
    virtual bool isRealmsEnabled() const /*override*/;

    // vIndex: 201
    virtual bool minimizeBackgroundDownloads() const;

    // vIndex: 202
    virtual bool requiresAutoSaveIconExplanationPopup() const;

    // vIndex: 203
    virtual ::std::optional<::ScreenshotOptions> getExtraLevelSaveDataIconParams(::std::string const& levelId) const;

    // vIndex: 204
    virtual ::std::vector<::std::shared_ptr<::Social::MultiplayerService>> getMultiplayerServiceListToRegister() const;

    // vIndex: 18
    virtual ::std::vector<::Social::MultiplayerServiceIdentifier>
    getBroadcastingMultiplayerServiceIds(bool xblBroadcast, bool platformBroadcast) const /*override*/;

    // vIndex: 205
    virtual uint maxFileDataRequestConcurrency() const;

    // vIndex: 206
    virtual void goToExternalConsumablesStoreListing() const;

    // vIndex: 207
    virtual float getStoreNetworkFailureTimeout() const;

    // vIndex: 208
    virtual ::std::shared_ptr<::Core::FileStorageArea>
    createLoggingStorageArea(::Core::FileAccessType fileAccessType, ::Core::Path const& loggingPath);

    // vIndex: 209
    virtual void handlePlatformSpecificCommerceError(uint error);

    // vIndex: 210
    virtual bool isEduMode() const;

    // vIndex: 211
    virtual bool importAsFlatFile() const;

    // vIndex: 212
    virtual bool isWebviewSupported() const;

    // vIndex: 213
    virtual ::std::shared_ptr<::WebviewInterface> createWebview(::Webview::PlatformArguments&&) const;

    // vIndex: 214
    virtual bool canAppSelfTerminate() const = 0;

    // vIndex: 215
    virtual bool getPlatformTTSExists() const;

    // vIndex: 216
    virtual bool getPlatformTTSEnabled() const;

    // vIndex: 217
    virtual ::std::variant<::HWND__*, ::std::monostate> getRenderSurfaceParameters() const;

    // vIndex: 218
    virtual bool shouldRemoveGraphicsDeviceOnAppTermination() const;

    // vIndex: 219
    virtual bool isJoinableViaExternalServers() const;

    // vIndex: 220
    virtual void onPrimaryUserNetworkReady();

    // vIndex: 221
    virtual bool isDisplayInitialized() const;

    // vIndex: 222
    virtual bool usesAsyncOptionSaving() const;

    // vIndex: 223
    virtual void showPlatformStoreIcon(bool shouldShow);

    // vIndex: 224
    virtual void showPlatformEmptyStoreDialog(::std::function<void(bool)>&& callback);

    // vIndex: 225
    virtual bool supportsVRModeSwap() const;

    // vIndex: 226
    virtual bool canSwapVRMode(bool const inVRMode) const;

    // vIndex: 227
    virtual void tryEnterVRMode(bool duringStartup, ::std::function<void(bool)> callback);

    // vIndex: 228
    virtual void exitVRMode(::std::function<void()> callback);

    // vIndex: 229
    virtual void initializeGameStreaming();

    // vIndex: 230
    virtual void notifyNetworkConfigurationChanged();

    // vIndex: 231
    virtual void setKeepScreenOnFlag(bool);

    // vIndex: 232
    virtual void initializeMulticast() const;

    // vIndex: 233
    virtual void requestMulticastReceivePermission();

    // vIndex: 234
    virtual bool hasMulticastReceivePermission() const;

    // vIndex: 235
    virtual void releaseMulticastReceivePermission() const;

    // vIndex: 236
    virtual void onMinecraftGameInitComplete();

    // vIndex: 237
    virtual void onFullGameUnlock();

    // vIndex: 238
    virtual bool is24HourTimeFormat() const;

    // vIndex: 239
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>>
        showOSUserDialog(::std::string, ::std::string, ::std::string);

    // vIndex: 240
    virtual ::Core::PathBuffer<::std::string> _getCurrentStoragePath() const = 0;

    // vIndex: 241
    virtual ::Core::PathBuffer<::std::string> _getExternalStoragePath() const = 0;

    // vIndex: 242
    virtual ::Core::PathBuffer<::std::string> _getInternalStoragePath() const = 0;

    // vIndex: 243
    virtual ::Core::PathBuffer<::std::string> _getUserdataPath() const = 0;

    // vIndex: 244
    virtual bool _tryEnableCPUBoost();

    // vIndex: 245
    virtual void _disableCPUBoost();

    // vIndex: 246
    virtual void _initializeFileStorageAreas();

    // vIndex: 247
    virtual void _teardownFileStorageAreas();

    // vIndex: 248
    virtual int getPlatformDpi() const;

    // vIndex: 249
    virtual ::UIScalingRules getPlatformUIScalingRules() const;

    // vIndex: 250
    virtual ::Core::PathBuffer<::std::string> getPlatformTempPath() const = 0;

    // vIndex: 251
    virtual void _onInitialize();

    // vIndex: 252
    virtual void _onTeardown();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AppPlatform(bool registerService);

    MCAPI void _fireAppTerminated();

    MCAPI void _initializeLoadProfiler();

    MCFOLD ::Core::PathBuffer<::std::string> getInternalStoragePath() const;

    MCAPI ::gsl::not_null<::Bedrock::PubSub::Connector<void()>*> getOnLowMemoryConnector();
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

    MCFOLD void $initializeScreenDependentResources();

    MCAPI uint64 $getHighPerformanceThreadsCount() const;

    MCAPI uint64 $getTotalHardwareThreadsCount() const;

    MCFOLD void $initializeGraphicsDeviceTier();

    MCFOLD uchar $getGraphicsDeviceTier() const;

    MCAPI void $addListener(::AppPlatformListener* l, float priority);

    MCAPI void $removeListener(::AppPlatformListener* l);

    MCFOLD void $restartApp(bool restart);

    MCFOLD bool $restartRequested();

    MCFOLD int const $numberOfThrottledTreatmentPacksToImportPerMinute() const;

    MCFOLD bool const $areTreatmentPacksThrottled() const;

    MCFOLD bool $hasFastAlphaTest() const;

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::IntegrityTokenResult>>
    $requestIntegrityToken(::std::string const& nonceToken);

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

    MCAPI ::std::string $readAssetFile(::Core::Path const& filename);

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

    MCAPI ::NetworkConnectionType $getNetworkConnectionType();

    MCAPI void $setNetworkConnectionType(::NetworkConnectionType connectionType);

    MCAPI int $getDefaultNetworkMaxPlayers() const;

    MCFOLD bool $multiplayerRequiresPremiumAccess() const;

    MCFOLD bool $multiplayerRequiresUGCEnabled() const;

    MCFOLD bool $isCrossPlatformToggleVisible() const;

    MCFOLD bool $isTelemetryAllowed();

    MCFOLD bool $isTrialWorldsTransferToFullGameAllowed() const;

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

    MCAPI void $setARVRPlatform(::ARVRPlatform platform);

    MCAPI ::ARVRPlatform $getARVRPlatform() const;

    MCFOLD int $getNumberOfParticleFramesToInterpolate() const;

    MCAPI int $getDpi() const;

    MCAPI void $setDpi(int dpi);

    MCAPI ::UIScalingRules $getUIScalingRules() const;

    MCAPI void $setUIScalingRules(::UIScalingRules UIScalingRules);

    MCAPI void $setVRControllerType(::VRControllerType controllerType);

    MCAPI ::VRControllerType $getVRControllerType() const;

    MCFOLD bool $hasIDEProfiler();

    MCAPI ::std::string $getPlatformStringVar(int stringId);

    MCAPI uint64 $getMaximumUsedMemory();

    MCFOLD uint64 $getLowMemoryEventThreshold() const;

    MCAPI uint64 $getLowMemoryEventRecoveryThreshold() const;

    MCAPI uint64 $getLowPhysicalMemoryThreshold() const;

    MCAPI void $calculateIfLowMemoryDevice();

    MCAPI bool $isLowMemoryDevice() const;

    MCAPI bool $isLowPhysicalMemoryDevice() const;

    MCFOLD uint64 $getTextureMemoryBudget() const;

    MCFOLD uint64 $getSingleMipDefaultMemoryBudget() const;

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

    MCFOLD bool $isFireTV() const;

    MCFOLD bool $isWin10Arm() const;

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

    MCAPI ::InputMode $getDefaultInputMode() const;

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

    MCAPI ::std::optional<::ScreenshotOptions> $getExtraLevelSaveDataIconParams(::std::string const& levelId) const;

    MCFOLD ::std::vector<::std::shared_ptr<::Social::MultiplayerService>> $getMultiplayerServiceListToRegister() const;

    MCFOLD ::std::vector<::Social::MultiplayerServiceIdentifier>
    $getBroadcastingMultiplayerServiceIds(bool xblBroadcast, bool platformBroadcast) const;

    MCFOLD uint $maxFileDataRequestConcurrency() const;

    MCFOLD void $goToExternalConsumablesStoreListing() const;

    MCAPI float $getStoreNetworkFailureTimeout() const;

    MCAPI ::std::shared_ptr<::Core::FileStorageArea>
    $createLoggingStorageArea(::Core::FileAccessType fileAccessType, ::Core::Path const& loggingPath);

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

    MCFOLD bool $supportsVRModeSwap() const;

    MCFOLD bool $canSwapVRMode(bool const inVRMode) const;

    MCFOLD void $tryEnterVRMode(bool duringStartup, ::std::function<void(bool)> callback);

    MCFOLD void $exitVRMode(::std::function<void()> callback);

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

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>>
        $showOSUserDialog(::std::string, ::std::string, ::std::string);

    MCFOLD bool $_tryEnableCPUBoost();

    MCFOLD void $_disableCPUBoost();

    MCFOLD void $_initializeFileStorageAreas();

    MCAPI void $_teardownFileStorageAreas();

    MCFOLD int $getPlatformDpi() const;

    MCAPI ::UIScalingRules $getPlatformUIScalingRules() const;

    MCFOLD void $_onInitialize();

    MCFOLD void $_onTeardown();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIAppPlatform();

    MCAPI static void** $vftableForISecureStorageKeySystem();
    // NOLINTEND
};
