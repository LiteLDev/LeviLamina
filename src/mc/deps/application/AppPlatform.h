#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/application/DeviceSunsetTier.h"
#include "mc/deps/application/IAppPlatform.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/application/OsVersion.h"
#include "mc/deps/core/NetworkConnectionType.h"
#include "mc/deps/core/debug/AssertDialogResponse.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/AppFocusState.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/platform/FullscreenMode.h"
#include "mc/deps/core/platform/OperationMode.h"
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

// auto generated forward declare list
// clang-format off
class AppLifecycleContext;
class AppPlatformListener;
class HardwareMemoryTierUtil;
class IAppPlatformImpl;
class IFileAccess;
class IPlatformScreenshots;
class SecureStorage;
class SecureStorageKey;
class WebviewInterface;
struct IntegrityTokenResult;
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Social { class MultiplayerService; }
namespace Social { struct UserCreationData; }
namespace Webview { class PlatformArguments; }
namespace mce { class UUID; }
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
    ::ll::UntypedStorage<8, 64>  mUnkb50203;
    ::ll::UntypedStorage<1, 4>   mUnka5d242;
    ::ll::UntypedStorage<4, 4>   mUnk678160;
    ::ll::UntypedStorage<8, 80>  mUnkafb54c;
    ::ll::UntypedStorage<8, 32>  mUnked78dc;
    ::ll::UntypedStorage<8, 32>  mUnkb79db9;
    ::ll::UntypedStorage<8, 32>  mUnk2d8cb0;
    ::ll::UntypedStorage<8, 8>   mUnkdc46a5;
    ::ll::UntypedStorage<8, 8>   mUnk59b922;
    ::ll::UntypedStorage<8, 8>   mUnk14a700;
    ::ll::UntypedStorage<8, 8>   mUnk2c6ecf;
    ::ll::UntypedStorage<1, 1>   mUnk31e0b7;
    ::ll::UntypedStorage<8, 32>  mUnk6d6135;
    ::ll::UntypedStorage<8, 8>   mUnk896a24;
    ::ll::UntypedStorage<8, 8>   mUnk69a5b2;
    ::ll::UntypedStorage<1, 1>   mUnkd7bea9;
    ::ll::UntypedStorage<8, 40>  mUnk20e405;
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
    ::ll::UntypedStorage<8, 16>  mUnk706c14;
    ::ll::UntypedStorage<8, 16>  mUnk391b07;
    ::ll::UntypedStorage<8, 16>  mUnke84b85;
    ::ll::UntypedStorage<8, 16>  mUnkb30208;
    ::ll::UntypedStorage<8, 8>   mUnkf2b382;
    ::ll::UntypedStorage<4, 4>   mUnk50488d;
    ::ll::UntypedStorage<8, 16>  mUnkea295c;
    ::ll::UntypedStorage<8, 8>   mUnk412bfa;
    ::ll::UntypedStorage<8, 8>   mUnkdd0de7;
    ::ll::UntypedStorage<8, 8>   mUnkf9ffce;
    ::ll::UntypedStorage<8, 8>   mUnkb00836;
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

    // vIndex: 25
    virtual void initialize();

    // vIndex: 26
    virtual void teardown();

    // vIndex: 7
    virtual void initAppPlatformNetworkSettings() /*override*/;

    // vIndex: 27
    virtual void initializeScreenDependentResources();

    // vIndex: 28
    virtual uint64 getHighPerformanceThreadsCount() const;

    // vIndex: 29
    virtual uint64 getTotalHardwareThreadsCount() const;

    // vIndex: 30
    virtual void initializeGraphicsDeviceTier();

    // vIndex: 31
    virtual void addListener(::AppPlatformListener* l, float priority);

    // vIndex: 32
    virtual void removeListener(::AppPlatformListener* l);

    // vIndex: 33
    virtual void restartApp(bool restart);

    // vIndex: 1
    virtual bool restartRequested() /*override*/;

    // vIndex: 34
    virtual ::Core::PathBuffer<::std::string> getPackagePath() const = 0;

    // vIndex: 8
    virtual int const numberOfThrottledTreatmentPacksToImportPerMinute() const /*override*/;

    // vIndex: 9
    virtual bool const areTreatmentPacksThrottled() const /*override*/;

    // vIndex: 24
    virtual ::HardwareMemoryTierUtil const& getHardwareMemoryTierUtil() const /*override*/;

    // vIndex: 35
    virtual ::Bedrock::Threading::Async<::IntegrityTokenResult> requestIntegrityToken(::std::string const& nonceToken);

    // vIndex: 36
    virtual void setIntegrityToken(::std::string const& integrityToken);

    // vIndex: 37
    virtual void setIntegrityTokenErrorMessage(::std::string const& errorMessage);

    // vIndex: 38
    virtual bool supportsInPackageRecursion() const;

    // vIndex: 39
    virtual bool supportsXboxLiveAchievements() const;

    // vIndex: 40
    virtual void hideSplashScreen();

    // vIndex: 41
    virtual ::std::string getFeedbackBugsLink() const;

    // vIndex: 42
    virtual ::std::string getFeedbackHelpLink() const;

    // vIndex: 43
    virtual auto getModalErrorMessageProc() -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&);

    // vIndex: 44
    virtual void updateLocalization(::std::string const& loc);

    // vIndex: 45
    virtual void setSleepEnabled(bool enabled);

    // vIndex: 46
    virtual ::Core::PathBuffer<::std::string> getScratchPath();

    // vIndex: 47
    virtual ::Core::PathBuffer<::std::string> getInternalPackStoragePath() const;

    // vIndex: 48
    virtual ::Core::PathBuffer<::std::string> getSettingsPath();

    // vIndex: 2
    virtual ::Core::PathBuffer<::std::string> getLoggingPath() const /*override*/;

    // vIndex: 49
    virtual ::Core::PathBuffer<::std::string> getPackagedShaderCachePath();

    // vIndex: 50
    virtual ::Core::PathBuffer<::std::string> getShaderCachePath();

    // vIndex: 51
    virtual ::Core::PathBuffer<::std::string> getUserdataPathForLevels() const;

    // vIndex: 52
    virtual ::Core::PathBuffer<::std::string> getCacheStoragePath();

    // vIndex: 53
    virtual ::Core::PathBuffer<::std::string> getOnDiskScratchPath();

    // vIndex: 54
    virtual ::Core::PathBuffer<::std::string> getOnDiskPackScratchPath();

    // vIndex: 55
    virtual ::Core::PathBuffer<::std::string> getLevelInfoCachePath() const;

    // vIndex: 56
    virtual ::Core::PathBuffer<::std::string> getCatalogSearchScratchPath();

    // vIndex: 57
    virtual ::Core::PathBuffer<::std::string> getUserStorageRootPath() const;

    // vIndex: 58
    virtual ::std::shared_ptr<::Core::FileStorageArea> getOrCreateStorageAreaForUser(::Social::UserCreationData const&);

    // vIndex: 59
    virtual bool hasSeparatedStorageAreasForContentAcquisition() const;

    // vIndex: 60
    virtual uint64 getOptimalLDBSize();

    // vIndex: 61
    virtual int getMaxLDBFilesOpen() const;

    // vIndex: 62
    virtual bool getDisableLDBSeekCompactions() const;

    // vIndex: 63
    virtual void showDialog(int dialogId);

    // vIndex: 65
    virtual void createUserInput();

    // vIndex: 64
    virtual void createUserInput(int dialogId);

    // vIndex: 66
    virtual int getUserInputStatus();

    // vIndex: 67
    virtual ::std::vector<::std::string> getUserInput();

    // vIndex: 68
    virtual ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> getFileAccess(::ResourceFileSystem fileSystem);

    // vIndex: 69
    virtual ::Core::PathBuffer<::std::string> copyImportFileToTempFolder(::Core::Path const& filePath);

    // vIndex: 70
    virtual void registerFileForCollectionWithCrashDump(::Core::Path const& fileName);

    // vIndex: 71
    virtual void registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const;

    // vIndex: 72
    virtual int getScreenWidth() const;

    // vIndex: 73
    virtual int getScreenHeight() const;

    // vIndex: 74
    virtual int getDisplayWidth();

    // vIndex: 75
    virtual int getDisplayHeight();

    // vIndex: 76
    virtual void setScreenSize(int width, int height);

    // vIndex: 77
    virtual void setWindowSize(int width, int height);

    // vIndex: 78
    virtual void setWindowText(::std::string const& title);

    // vIndex: 79
    virtual ::std::optional<::OperationMode> getOperationMode() const;

    // vIndex: 80
    virtual bool allowContentLogWriteToDisk();

    // vIndex: 81
    virtual uint getMaxClubsRequests() const;

    // vIndex: 82
    virtual void queueForMainThread_DEPRECATED(::std::function<void()>) = 0;

    // vIndex: 83
    virtual ::MPMCQueue<::std::function<void()>>& getMainThreadQueue() = 0;

    // vIndex: 84
    virtual bool supportsLaunchingLegacyVersion() const;

    // vIndex: 85
    virtual void launchLegacyVersion();

    // vIndex: 86
    virtual bool canManageLegacyData() const;

    // vIndex: 87
    virtual bool supportsDayOneExperience() const;

    // vIndex: 88
    virtual bool canMigrateWorldData() const;

    // vIndex: 89
    virtual bool isContentAutoUpdateAllowed() const;

    // vIndex: 90
    virtual int getMaxSimultaneousDownloads() const;

    // vIndex: 91
    virtual uint getMaxSimultaneousServiceRequests() const;

    // vIndex: 92
    virtual bool isDownloadAndImportBlocking() const;

    // vIndex: 93
    virtual bool isDownloadBuffered() const;

    // vIndex: 94
    virtual bool supportsAutoSaveOnDBCompaction() const;

    // vIndex: 95
    virtual ::std::string getTextBoxBackend() const = 0;

    // vIndex: 96
    virtual void setTextBoxBackend(::std::string const&) = 0;

    // vIndex: 97
    virtual int getCaretPosition() const = 0;

    // vIndex: 98
    virtual void setCaretPosition(int) = 0;

    // vIndex: 99
    virtual bool supportsVibration() const;

    // vIndex: 100
    virtual void vibrate(int milliSeconds);

    // vIndex: 101
    virtual ::Core::PathBuffer<::std::string> getAssetFileFullPath(::Core::Path const& filename);

    // vIndex: 102
    virtual ::std::string _readAssetFileInternal(::Core::Path const& filename);

    // vIndex: 103
    virtual bool hasAssetFile(::Core::Path const& filename);

    // vIndex: 104
    virtual bool copyAssetFile(::Core::Path const& filename, ::Core::Path const& destination);

    // vIndex: 105
    virtual ::std::set<::Core::PathBuffer<::std::string>>
    listAssetFilesIn(::Core::Path const& path, ::std::string const& extension) const;

    // vIndex: 106
    virtual bool supportsClientUpdate() const;

    // vIndex: 107
    virtual ::std::string getClientUpdateUrl() const;

    // vIndex: 108
    virtual int checkLicense();

    // vIndex: 109
    virtual bool hasBuyButtonWhenInvalidLicense();

    // vIndex: 13
    virtual bool isNetworkAvailable() const /*override*/;

    // vIndex: 14
    virtual bool isLANAvailable() const /*override*/;

    // vIndex: 12
    virtual bool isNetworkEnabled(bool onlyWifiAllowed) const /*override*/;

    // vIndex: 110
    virtual void setNetworkAllowed(bool allowed);

    // vIndex: 111
    virtual bool isNetworkAllowed() const;

    // vIndex: 16
    virtual bool isInternetAvailable() const /*override*/;

    // vIndex: 112
    virtual ::std::optional<bool> isOnWifiConnectionTelemetryValue();

    // vIndex: 113
    virtual ::NetworkConnectionType getNetworkConnectionType();

    // vIndex: 114
    virtual void setNetworkConnectionType(::NetworkConnectionType connectionType);

    // vIndex: 115
    virtual int getDefaultNetworkMaxPlayers() const;

    // vIndex: 17
    virtual bool multiplayerRequiresPremiumAccess() const /*override*/;

    // vIndex: 18
    virtual bool multiplayerRequiresUGCEnabled() const /*override*/;

    // vIndex: 116
    virtual bool isCrossPlatformToggleVisible() const;

    // vIndex: 117
    virtual bool isTelemetryAllowed();

    // vIndex: 118
    virtual bool isTrialWorldsTransferToFullGameAllowed() const;

    // vIndex: 119
    virtual void buyGame();

    // vIndex: 120
    virtual void finish();

    // vIndex: 121
    virtual bool canLaunchUri(::std::string const& uri);

    // vIndex: 122
    virtual void launchUri(::std::string const& uri);

    // vIndex: 123
    virtual void launchSettings();

    // vIndex: 124
    virtual bool useXboxControlHelpers() const;

    // vIndex: 125
    virtual ::PlatformType getPlatformType() const;

    // vIndex: 126
    virtual bool isCentennial() const;

    // vIndex: 127
    virtual ::std::string getPackageFamilyName() const;

    // vIndex: 19
    virtual ::BuildPlatform getBuildPlatform() const /*override*/;

    // vIndex: 20
    virtual ::std::string getPlatformString() const = 0;

    // vIndex: 128
    virtual ::std::string getSubPlatformString() const = 0;

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

    // vIndex: 23
    virtual uint64 getTotalPhysicalMemory() const = 0;

    // vIndex: 140
    virtual uint64 getMaximumUsedMemory();

    // vIndex: 141
    virtual uint64 getLowMemoryEventThreshold(::LowMemorySeverity) const;

    // vIndex: 142
    virtual uint64 getLowMemoryEventRecoveryThreshold(::LowMemorySeverity severity) const;

    // vIndex: 22
    virtual uint64 getLowPhysicalMemoryThreshold() const /*override*/;

    // vIndex: 143
    virtual void calculateIfLowMemoryDevice();

    // vIndex: 3
    virtual bool isLowMemoryDevice() const /*override*/;

    // vIndex: 4
    virtual bool isLowPhysicalMemoryDevice() const /*override*/;

    // vIndex: 144
    virtual uint64 getTextureMemoryBudget() const;

    // vIndex: 145
    virtual uint64 getSingleMipDefaultMemoryBudget() const;

    // vIndex: 146
    virtual void readyForApplicationExitInfo() const;

    // vIndex: 147
    virtual ::DeviceSunsetTier getDeviceSunsetTier() const;

    // vIndex: 148
    virtual int getMaxSimRadiusInChunks() const;

    // vIndex: 149
    virtual ::std::vector<::std::string> getBroadcastAddresses();

    // vIndex: 150
    virtual ::std::vector<::std::string> getIPAddresses();

    // vIndex: 151
    virtual bool useAppPlatformForTelemetryIPAddress();

    // vIndex: 152
    virtual ::std::string getModelName();

    // vIndex: 153
    virtual bool usesHDRBrightness() const;

    // vIndex: 154
    virtual void updateBootstrapSettingsFromTreatmentsAsync();

    // vIndex: 155
    virtual void setFullscreenMode(::FullscreenMode const fullscreenMode);

    // vIndex: 156
    virtual bool isNetworkThrottled() const;

    // vIndex: 15
    virtual bool isLANAllowed() const /*override*/;

    // vIndex: 157
    virtual bool doesLANRequireMultiplayerRestrictions() const;

    // vIndex: 158
    virtual void collectGraphicsHardwareDetails();

    // vIndex: 159
    virtual ::std::string getEdition() const;

    // vIndex: 160
    virtual ::OsVersion getOSVersion() const;

    // vIndex: 161
    virtual void setThreadsFrozen(bool frozen);

    // vIndex: 162
    virtual bool areThreadsFrozen() const;

    // vIndex: 163
    virtual float getDefaultSafeZoneScaleX() const;

    // vIndex: 164
    virtual float getDefaultSafeZoneScaleY() const;

    // vIndex: 165
    virtual float getDefaultSafeZoneScaleAll() const;

    // vIndex: 166
    virtual float getDefaultScreenPositionX() const;

    // vIndex: 167
    virtual float getDefaultScreenPositionY() const;

    // vIndex: 168
    virtual bool isQuitCapable() const;

    // vIndex: 169
    virtual bool requireControllerAtStartup() const;

    // vIndex: 170
    virtual bool notifyControllerConnectionStateChange() const;

    // vIndex: 171
    virtual bool platformRequiresControllerApplet() const;

    // vIndex: 172
    virtual ::InputMode getDefaultInputMode() const;

    // vIndex: 173
    virtual ::AppFocusState getFocusState();

    // vIndex: 174
    virtual ::AppLifecycleContext& getAppLifecycleContext();

    // vIndex: 175
    virtual uint64 calculateAvailableDiskFreeSpace(::Core::Path const&) = 0;

    // vIndex: 176
    virtual bool supportsFliteTTS() const;

    // vIndex: 177
    virtual ::std::unique_ptr<::SecureStorage> getSecureStorage();

    // vIndex: 1
    virtual ::SecureStorageKey getSecureStorageKey(::std::string const& key) /*override*/;

    // vIndex: 2
    virtual void setSecureStorageKey(::std::string const& key, ::SecureStorageKey const& value) /*override*/;

    // vIndex: 178
    virtual bool devHotReloadRenderResources() const;

    // vIndex: 179
    virtual bool shouldPauseDownloadsWhenEnterGame() const;

    // vIndex: 180
    virtual bool compareAppReceiptToLocalReceipt(::std::string const& otherReceipt);

    // vIndex: 181
    virtual ::mce::UUID const& getThirdPartyPackUUID() const;

    // vIndex: 182
    virtual bool saveTreatmentPacksAsZips() const;

    // vIndex: 183
    virtual bool saveEncryptedPacksAsZips() const;

    // vIndex: 184
    virtual bool saveEncryptedWorldTemplatePacksAsZips() const;

    // vIndex: 185
    virtual bool allowsResourcePackDevelopment() const;

    // vIndex: 186
    virtual bool supportsLegacySinglePremiumCacheDirectory() const;

    // vIndex: 187
    virtual bool supportsWorldShare() const;

    // vIndex: 188
    virtual bool hasJournalingFilesystem() const;

    // vIndex: 189
    virtual bool isAutoCompactionEnabled() const;

    // vIndex: 190
    virtual ::std::chrono::nanoseconds getLevelSaveInterval() const;

    // vIndex: 191
    virtual ::std::chrono::nanoseconds getOptionsSaveInterval() const;

    // vIndex: 5
    virtual bool hasPlatformSpecificInvites() const /*override*/;

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

    // vIndex: 6
    virtual bool isRealmsEnabled() const /*override*/;

    // vIndex: 197
    virtual bool minimizeBackgroundDownloads() const;

    // vIndex: 198
    virtual bool requiresAutoSaveIconExplanationPopup() const;

    // vIndex: 199
    virtual ::IPlatformScreenshots& getPlatformScreenshots();

    // vIndex: 200
    virtual ::std::vector<::std::shared_ptr<::Social::MultiplayerService>> getMultiplayerServiceListToRegister() const;

    // vIndex: 21
    virtual ::std::vector<::Social::MultiplayerServiceIdentifier>
    getBroadcastingMultiplayerServiceIds(bool xblBroadcast, bool platformBroadcast) const /*override*/;

    // vIndex: 201
    virtual uint maxFileDataRequestConcurrency() const;

    // vIndex: 10
    virtual void goToExternalConsumablesStoreListing() const /*override*/;

    // vIndex: 202
    virtual float getStoreNetworkFailureTimeout() const;

    // vIndex: 203
    virtual ::std::shared_ptr<::Core::FileStorageArea>
    createLoggingStorageArea(::Core::FileAccessType fileAccessType, ::Core::PathView loggingPath);

    // vIndex: 204
    virtual void handlePlatformSpecificCommerceError(uint error);

    // vIndex: 205
    virtual bool isEduMode() const;

    // vIndex: 206
    virtual bool importAsFlatFile() const;

    // vIndex: 207
    virtual bool isWebviewSupported() const;

    // vIndex: 208
    virtual ::std::shared_ptr<::WebviewInterface> createWebview(::Webview::PlatformArguments&&) const;

    // vIndex: 209
    virtual bool canAppSelfTerminate() const = 0;

    // vIndex: 210
    virtual bool getPlatformTTSExists() const;

    // vIndex: 211
    virtual bool getPlatformTTSEnabled() const;

    // vIndex: 212
    virtual ::std::variant<::HWND__*, ::std::monostate> getRenderSurfaceParameters() const;

    // vIndex: 213
    virtual bool shouldRemoveGraphicsDeviceOnAppTermination() const;

    // vIndex: 214
    virtual bool isJoinableViaExternalServers() const;

    // vIndex: 215
    virtual void onPrimaryUserNetworkReady();

    // vIndex: 216
    virtual bool isDisplayInitialized() const;

    // vIndex: 217
    virtual bool usesAsyncOptionSaving() const;

    // vIndex: 218
    virtual void showPlatformStoreIcon(bool shouldShow);

    // vIndex: 11
    virtual void showPlatformEmptyStoreDialog(::std::function<void(bool)>&& callback) /*override*/;

    // vIndex: 219
    virtual void initializeGameStreaming();

    // vIndex: 220
    virtual void notifyNetworkConfigurationChanged();

    // vIndex: 221
    virtual void setKeepScreenOnFlag(bool);

    // vIndex: 222
    virtual void initializeMulticast() const;

    // vIndex: 223
    virtual void requestMulticastReceivePermission();

    // vIndex: 224
    virtual bool hasMulticastReceivePermission() const;

    // vIndex: 225
    virtual void releaseMulticastReceivePermission() const;

    // vIndex: 226
    virtual void onMinecraftGameInitComplete();

    // vIndex: 227
    virtual void onFullGameUnlock();

    // vIndex: 228
    virtual bool is24HourTimeFormat() const;

    // vIndex: 229
    virtual ::Bedrock::Threading::Async<bool> showOSUserDialog(::std::string, ::std::string, ::std::string);

    // vIndex: 230
    virtual ::Core::PathBuffer<::std::string> _getCurrentStoragePath() const = 0;

    // vIndex: 231
    virtual ::Core::PathBuffer<::std::string> _getExternalStoragePath() const = 0;

    // vIndex: 232
    virtual ::Core::PathBuffer<::std::string> _getInternalStoragePath() const = 0;

    // vIndex: 233
    virtual ::Core::PathBuffer<::std::string> _getUserdataPath() const = 0;

    // vIndex: 234
    virtual bool _tryEnableCPUBoost();

    // vIndex: 235
    virtual void _disableCPUBoost();

    // vIndex: 236
    virtual void _initializeFileStorageAreas();

    // vIndex: 237
    virtual void _teardownFileStorageAreas();

    // vIndex: 238
    virtual int getPlatformDpi() const;

    // vIndex: 239
    virtual ::UIScalingRules getPlatformUIScalingRules() const;

    // vIndex: 240
    virtual ::Core::PathBuffer<::std::string> getPlatformTempPath() const = 0;

    // vIndex: 241
    virtual void _onInitialize();

    // vIndex: 242
    virtual void _onTeardown();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AppPlatform(bool registerService, ::std::unique_ptr<::IAppPlatformImpl> impl);

    MCNAPI void _fireAppTerminated();

    MCNAPI void _initializeLoadProfiler();

    MCNAPI ::Core::PathBuffer<::std::string> getInternalStoragePath() const;

    MCNAPI ::std::optional<::std::locale> getLocaleForDateTimeFormatting() const;

    MCNAPI ::gsl::not_null<::Bedrock::PubSub::Connector<void(::LowMemorySeverity)>*> getOnLowMemoryConnector();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& HOME_PATH();

    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& LOG_PATH();

    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& SETTINGS_PATH();

    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& SHADERCACHE_PATH();
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

    MCNAPI ::InputMode $getDefaultInputMode() const;

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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIAppPlatform();

    MCNAPI static void** $vftableForISecureStorageKeySystem();
    // NOLINTEND
};
