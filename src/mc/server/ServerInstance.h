#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/AppPlatformListener.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/StorageAreaStateListener.h"
#include "mc/deps/core/threading/SPSCQueue.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/nether_net/LogSeverity.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/server/ServerGraphicsSettings.h"
#include "mc/world/GameCallbacks.h"
#include "mc/world/level/ForceBlockNetworkIdsAreHashes.h"

// auto generated forward declare list
// clang-format off
class AllowList;
class BlockTypeRegistry;
class CDNConfig;
class DebugEndPoint;
class EducationOptions;
class Experiments;
class IContentTierManager;
class IMinecraftApp;
class IMinecraftEventing;
class IResourcePackRepository;
class ItemRegistry;
class ItemRegistryRef;
class LevelData;
class LevelSettings;
class LevelStorage;
class LinkedAssetValidator;
class LoopbackPacketSender;
class Minecraft;
class NetworkSessionOwner;
class PermissionsFile;
class ResourcePackManager;
class Scheduler;
class ServerInstanceEventCoordinator;
class ServerMetrics;
class ServerNetworkSystem;
class ServerScriptManager;
class ServerTextSettings;
class SignalingService;
class TextFilteringProcessor;
class Timer;
class WorldSessionEndPoint;
struct ConnectionDefinition;
struct NetworkServerConfig;
struct NetworkSettingOptions;
struct PlayerMovementSettings;
struct PortMappingInfo;
struct ScriptSettings;
struct TextProcessorInitParams;
namespace Core { class FilePathManager; }
namespace Core { class FileStorageArea; }
namespace Editor { class IEditorManager; }
namespace NetherNet { struct NetworkID; }
namespace Scripting { class RegistryManager; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

class ServerInstance : public ::Bedrock::EnableNonOwnerReferences,
                       public ::AppPlatformListener,
                       public ::GameCallbacks,
                       public ::Core::StorageAreaStateListener {
public:
    // ServerInstance inner types define
    enum class InstanceState : int {
        Running          = 0,
        Suspended        = 1,
        WaitingLeaveGame = 2,
        Stopped          = 3,
        NotStarted       = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                          mLastSyncTime;
    ::ll::TypedStorage<8, 8, ::IMinecraftApp const&>                                           mApp;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Minecraft>>                                   mMinecraft;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerNetworkSystem>>                         mNetwork;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LoopbackPacketSender>>                        mPacketSender;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Timer>>                                       mSimTimer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Timer>>                                       mRealTimer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scheduler>>                                   mScheduler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EducationOptions>>                            mEducationOptions;
    ::ll::TypedStorage<8, 8, ::LevelStorage*>                                                  mStorage;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                              mInUpdate;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>                                               mWriteRefCounter;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                              mThreadShouldJoin;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                     mMutexDestruction;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ServerInstanceEventCoordinator>> mEventCoordinator;
    ::ll::TypedStorage<4, 4, ::std::atomic<::ServerInstance::InstanceState>>                   mInstanceState;
    ::ll::TypedStorage<8, 80, ::SPSCQueue<::std::function<void()>, 512>>                       mCommandQueue;
    ::ll::TypedStorage<8, 16, ::std::thread>                                                   mServerInstanceThread;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                     mResumeMutex;
    ::ll::TypedStorage<8, 72, ::std::condition_variable>                                       mResumeSignal;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerScriptManager>>                         mServerScriptManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scripting::RegistryManager>>                  mScriptRegistryManager;
    ::ll::TypedStorage<8, 64, ::std::function<void(char const*)>>               mScriptWatchdogCriticalErrorCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(char const*, char const*)>>  mUnrecoverableErrorCallback;
    ::ll::TypedStorage<1, 1, bool>                                              mHandledLevelCorruption;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TextFilteringProcessor>>       mTextFilteringProcessor;
    ::ll::TypedStorage<8, 8, ::std::chrono::microseconds>                       mWakeupInterval;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mLevelId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WorldSessionEndPoint>>         mWorldSessionEndPoint;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Core::FileStorageArea>>       mStorageAreaForLevel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ItemRegistry>>                mServerItemRegistry;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockTypeRegistry>>           mBlockRegistry;
    ::ll::TypedStorage<1, 1, bool>                                              mEnableItemStackNetManager;
    ::ll::TypedStorage<1, 1, bool>                                              mbInitialized;
    ::ll::TypedStorage<1, 1, bool>                                              mbFlaggedForEarlyDestruction;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::ServerInstance>>      mServiceRegistrationToken;
    ::ll::TypedStorage<1, 1, bool>                                              mHasScheduledLeaveGame;
    ::ll::TypedStorage<1, 1, bool>                                              mCriticalDiskErrorTelemetrySent;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Editor::IEditorManager>>       mEditorManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::CDNConfig>>          mCDNConfig;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ServerTextSettings>> mServerTextSettings;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx>> mCerealContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LinkedAssetValidator>>               mLinkedAssetValidator;
    ::ll::TypedStorage<1, 1, ::ServerGraphicsSettings>                                mGraphicsSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInstance& operator=(ServerInstance const&);
    ServerInstance(ServerInstance const&);
    ServerInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerInstance() /*override*/;

    // vIndex: 19
    virtual void onLowMemory(::LowMemorySeverity) /*override*/;

    // vIndex: 1
    virtual void onLevelCorrupt() /*override*/;

    // vIndex: 2
    virtual void onCriticalScriptError(char const* clientDisconnectMessage, char const* logMessage) /*override*/;

    // vIndex: 3
    virtual void onGameModeChanged() /*override*/;

    // vIndex: 5
    virtual void onTick(int nTick, int maxTick) /*override*/;

    // vIndex: 6
    virtual void onInternetUpdate() /*override*/;

    // vIndex: 7
    virtual void onGameSessionReset() /*override*/;

    // vIndex: 8
    virtual void onLevelExit() /*override*/;

    // vIndex: 9
    virtual void onRequestResourceReload() /*override*/;

    // vIndex: 2
    virtual void onLowDiskSpace(bool const bSet) /*override*/;

    // vIndex: 3
    virtual void onOutOfDiskSpace(bool const bSet) /*override*/;

    // vIndex: 4
    virtual void onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode) /*override*/;

    // vIndex: 4
    virtual void onAppSuspended() /*override*/;

    // vIndex: 5
    virtual void onAppResumed() /*override*/;

    // vIndex: 10
    virtual void updateScreens() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerInstance(
        ::IMinecraftApp&                                                       app,
        ::Bedrock::NotNullNonOwnerPtr<::ServerInstanceEventCoordinator> const& coordinator
    );

    MCAPI void _resetServerScriptManager();

    MCAPI void _shutdownStorage(::Bedrock::UniqueOwnerPointer<::LevelStorage>& storage);

    MCAPI void _update();

    MCAPI bool _useClientSideChunkGeneration(::LevelData* levelData) const;

    MCAPI void disconnectAllClientsWithMessage(::std::string msg);

    MCAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> getEditorManager() const;

    MCAPI ::ItemRegistryRef getServerItemRegistry() const;

    MCAPI bool initializeServer(
        ::IMinecraftApp&                                                             app,
        ::AllowList&                                                                 allowList,
        ::PermissionsFile*                                                           permissionsFile,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&                pathManager,
        ::std::chrono::seconds                                                       maxPlayerIdleTime,
        ::std::string                                                                levelId,
        ::std::string                                                                levelName,
        ::std::string                                                                serverName,
        ::LevelSettings                                                              levelSettings,
        int                                                                          maxChunkRadius,
        bool                                                                         shouldAnnounce,
        ::ConnectionDefinition                                                       connectionDefinition,
        ::NetworkServerConfig                                                        networkServerConfig,
        ::mce::UUID const&                                                           localPlayerId,
        ::IMinecraftEventing&                                                        eventing,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const&              resourcePackRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const&            contentTierManager,
        ::ResourcePackManager&                                                       clientResourcePackManager,
        ::std::function<::Bedrock::UniqueOwnerPointer<::LevelStorage>(::Scheduler&)> createLevelStorageCallback,
        ::std::string const&                                                         basePath,
        ::Bedrock::NotNullNonOwnerPtr<::LevelData>                                   levelData,
        ::std::unique_ptr<::EducationOptions>                                        educationOptions,
        ::ResourcePackManager*                                                       localServerResourcePackManager,
        ::std::function<void()>                                                      criticalSaveCallback,
        ::std::function<void()>                                                      compactionCallback,
        ::ServerMetrics*                                                             serverMetrics,
        ::DebugEndPoint*                                                             debugEndPoint,
        bool                                                                         enableWorldSessionEndPoint,
        ::std::shared_ptr<::Core::FileStorageArea>                                   storageAreaForLevel,
        ::NetworkSettingOptions const&                                               networkSettings,
        bool                                                                         enableItemStackNetManager,
        bool                                                                         enableItemTransactionLogger,
        ::std::optional<::PlayerMovementSettings>                                    playerMovementSettings,
        ::ScriptSettings&&                                                           scriptSettings,
        ::Experiments const&                                                         levelExperiments,
        bool                                                                         isServerVisibleToLanDiscovery,
        bool                                                                         enablePacketRateLimiting,
        float                                                                        worldSizeMB,
        ::std::optional<bool>                                                        clientSideGenerationEnabled,
        ::ForceBlockNetworkIdsAreHashes                                              blockNetworkIdsAreHashes,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner>                         networkSessionOwner,
        ::Bedrock::NonOwnerPointer<::CDNConfig>                                      cdnConfig,
        ::Bedrock::NonOwnerPointer<::ServerTextSettings>                             serverTextSettings,
        ::PortMappingInfo const&                                                     portMappingInfo,
        ::NetherNet::LogSeverity                                                     defaultLogSeverity,
        ::TextProcessorInitParams                                                    textProcessorInitParams,
        ::std::optional<::NetherNet::NetworkID>                                      netherNetId,
        ::Bedrock::NonOwnerPointer<::SignalingService>                               signalingService,
        ::std::optional<bool>                                                        disableClientVibrantVisuals
    );

    MCAPI void leaveGameSync();

    MCAPI void queueForServerThread(::std::function<void()> command);

    MCAPI void setScriptWatchdogCriticalErrorCallback(::std::function<void(char const*)> criticalErrorCallback);

    MCAPI void
    setUnrecoverableErrorCallback(::std::function<void(char const*, char const*)> unrecoverableErrorCallback);

    MCAPI void setWakeupFrequency(int hertz);

    MCAPI void startLeaveGame();

    MCAPI void startServerThread();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool forceOffClientChunkGeneration(::LevelData& levelData);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::chrono::nanoseconds const& SERVER_MAX_DELAY_BEFORE_SLOWDOWN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::IMinecraftApp& app, ::Bedrock::NotNullNonOwnerPtr<::ServerInstanceEventCoordinator> const& coordinator);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLowMemory(::LowMemorySeverity);

    MCAPI void $onLevelCorrupt();

    MCAPI void $onCriticalScriptError(char const* clientDisconnectMessage, char const* logMessage);

    MCFOLD void $onGameModeChanged();

    MCFOLD void $onTick(int nTick, int maxTick);

    MCFOLD void $onInternetUpdate();

    MCFOLD void $onGameSessionReset();

    MCFOLD void $onLevelExit();

    MCAPI void $onRequestResourceReload();

    MCAPI void $onLowDiskSpace(bool const bSet);

    MCAPI void $onOutOfDiskSpace(bool const bSet);

    MCAPI void $onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode);

    MCAPI void $onAppSuspended();

    MCAPI void $onAppResumed();

    MCFOLD void $updateScreens();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForGameCallbacks();

    MCNAPI static void** $vftableForStorageAreaStateListener();

    MCNAPI static void** $vftableForAppPlatformListener();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
