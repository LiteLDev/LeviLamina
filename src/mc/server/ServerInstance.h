#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/StorageAreaStateListener.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/server/ServerGraphicsSettings.h"
#include "mc/server/ServerInstanceInitArguments.h"
#include "mc/world/GameCallbacks.h"

// auto generated forward declare list
// clang-format off
class CDNConfig;
class EducationOptions;
class ILevel;
class ItemRegistry;
class ItemRegistryRef;
class LevelData;
class LevelStorage;
class LinkedAssetValidator;
class LoopbackPacketSender;
class Minecraft;
class ResourcePackManager;
class Scheduler;
class ServerInstanceEventCoordinator;
class ServerLevel;
class ServerNetworkSystem;
class ServerScriptManager;
class ServerTextSettings;
class TextFilteringProcessor;
class Timer;
class WorldSessionEndPoint;
struct DimensionFactoryAndManager;
struct ServerInstanceArguments;
struct ServerInstanceInitArguments;
namespace Core { class FileStorageArea; }
namespace Editor { class IEditorManager; }
namespace Scripting { class RegistryManager; }
namespace ServerInstanceMessenger { class IMessenger; }
namespace br::worldgen { class StructureSetRegistry; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ServerInstance : public ::Bedrock::EnableNonOwnerReferences,
                       public ::AppPlatformListener,
                       public ::GameCallbacks,
                       public ::Core::StorageAreaStateListener {
public:
    // ServerInstance inner types declare
    // clang-format off
    struct CreateServerLevelOps;
    struct HostMultiplayerOps;
    struct NetworkToggleOptions;
    // clang-format on

    // ServerInstance inner types define
    enum class InstanceState : int {
        Running          = 0,
        Suspended        = 1,
        WaitingLeaveGame = 2,
        Stopped          = 3,
        NotStarted       = 4,
    };

    struct CreateServerLevelOps {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkfbffdb;
        ::ll::UntypedStorage<1, 1>  mUnkd12db4;
        ::ll::UntypedStorage<8, 8>  mUnk212caf;
        ::ll::UntypedStorage<8, 8>  mUnk42e420;
        ::ll::UntypedStorage<8, 64> mUnk4fa1c3;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateServerLevelOps& operator=(CreateServerLevelOps const&);
        CreateServerLevelOps(CreateServerLevelOps const&);
        CreateServerLevelOps();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CreateServerLevelOps();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_S void* $ctor(::ServerInstance::CreateServerLevelOps&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct HostMultiplayerOps {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk238da3;
        ::ll::UntypedStorage<8, 8> mUnkfc9e39;
        ::ll::UntypedStorage<8, 8> mUnked7b20;
        ::ll::UntypedStorage<4, 4> mUnkc92d4a;
        ::ll::UntypedStorage<1, 1> mUnka2dec3;
        ::ll::UntypedStorage<8, 8> mUnk3aa863;
        // NOLINTEND

    public:
        // prevent constructor by default
        HostMultiplayerOps& operator=(HostMultiplayerOps const&);
        HostMultiplayerOps(HostMultiplayerOps const&);
        HostMultiplayerOps();
    };

    struct NetworkToggleOptions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk18547d;
        ::ll::UntypedStorage<1, 1> mUnk926d13;
        ::ll::UntypedStorage<1, 1> mUnkeaef64;
        ::ll::UntypedStorage<1, 1> mUnk905ba3;
        ::ll::UntypedStorage<1, 1> mUnk5f5870;
        ::ll::UntypedStorage<8, 8> mUnk148b7c;
        // NOLINTEND

    public:
        // prevent constructor by default
        NetworkToggleOptions& operator=(NetworkToggleOptions const&);
        NetworkToggleOptions(NetworkToggleOptions const&);
        NetworkToggleOptions();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                          mLastSyncTime;
    ::ll::TypedStorage<1, 1, bool const>                                                       mIsDedicatedServer;
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
    ::ll::TypedStorage<8, 16, ::std::thread>                                                   mServerInstanceThread;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                     mResumeMutex;
    ::ll::TypedStorage<8, 72, ::std::condition_variable>                                       mResumeSignal;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scripting::RegistryManager>>                  mScriptRegistryManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerScriptManager>>                         mServerScriptManager;
    ::ll::TypedStorage<8, 64, ::std::function<void(char const*)>> mScriptWatchdogCriticalErrorCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Connection::DisconnectFailReason, char const*)>>
                                                                                      mUnrecoverableErrorCallback;
    ::ll::TypedStorage<1, 1, bool>                                                    mHandledLevelCorruption;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TextFilteringProcessor>>             mTextFilteringProcessor;
    ::ll::TypedStorage<8, 8, ::std::chrono::microseconds>                             mWakeupInterval;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mLevelId;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mServerName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WorldSessionEndPoint>>               mWorldSessionEndPoint;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Core::FileStorageArea>>             mStorageAreaForLevel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ItemRegistry>>                      mServerItemRegistry;
    ::ll::TypedStorage<1, 1, bool>                                                    mEnableItemStackNetManager;
    ::ll::TypedStorage<1, 1, bool>                                                    mEnableRealmsStories;
    ::ll::TypedStorage<1, 1, bool>                                                    mbInitialized;
    ::ll::TypedStorage<1, 1, bool>                                                    mbFlaggedForEarlyDestruction;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::ServerInstance>>            mServiceRegistrationToken;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasScheduledLeaveGame;
    ::ll::TypedStorage<1, 1, bool>                                                    mCriticalDiskErrorTelemetrySent;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Editor::IEditorManager>>             mEditorManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::CDNConfig>>                mCDNConfig;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ServerTextSettings>>       mServerTextSettings;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx>> mCerealContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LinkedAssetValidator>>               mLinkedAssetValidator;
    ::ll::TypedStorage<1, 1, ::ServerGraphicsSettings>                                mGraphicsSettings;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ServerInstanceMessenger::IMessenger>>> mMessenger;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<bool() const>> mShouldDisableNetworkOnSuspend;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerInstance() /*override*/;

    virtual void onLowMemory(::LowMemorySeverity) /*override*/;

    virtual void onLevelCorrupt() /*override*/;

    virtual void onGameModeChanged() /*override*/;

    virtual void onTick(int nTick, int maxTick) /*override*/;

    virtual void onInternetUpdate() /*override*/;

    virtual void onGameSessionReset() /*override*/;

    virtual void onLevelExit() /*override*/;

    virtual void onRequestResourceReload() /*override*/;

    virtual void onLowDiskSpace(bool const bSet) /*override*/;

    virtual void onOutOfDiskSpace(bool const bSet) /*override*/;

    virtual void onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode) /*override*/;

    virtual void onAppSuspended() /*override*/;

    virtual void onAppResumed() /*override*/;

    virtual void updateScreens() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ServerInstance(::ServerInstanceArguments&& args);

    MCAPI_C void _finishLoadingLinkedAssets(::ResourcePackManager& rpm);

    MCAPI void _resetServerScriptManager();

    MCAPI void _shutdownStorage(::Bedrock::UniqueOwnerPointer<::LevelStorage>& storage);

    MCAPI void _update();

    MCAPI bool _useClientSideChunkGeneration(::LevelData* levelData) const;

    MCAPI void disconnectAllClients(::Connection::DisconnectFailReason reason);

    MCAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> getEditorManager() const;

    MCAPI ::ItemRegistryRef getServerItemRegistry() const;

    MCAPI bool initializeServer(::ServerInstanceInitArguments&& args);

    MCAPI_S void leaveGameSync();

    MCAPI void onCriticalScriptError(::Connection::DisconnectFailReason clientReason, char const* logMessage);

    MCAPI void queueForServerThread(::std::function<void()> command);

    MCAPI_S void setScriptWatchdogCriticalErrorCallback(::std::function<void(char const*)> criticalErrorCallback);

    MCAPI_S void setUnrecoverableErrorCallback(
        ::std::function<void(::Connection::DisconnectFailReason, char const*)> unrecoverableErrorCallback
    );

    MCAPI_C void startLeaveGame();

    MCAPI_S void startServerThread();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::brstd::move_only_function<
        ::std::unique_ptr<::ServerLevel>(::ServerInstanceInitArguments::CreateLevelArguments&&) const>
    createServerLevelCallback(::ServerInstance::CreateServerLevelOps&& ops);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& ASSET_EXTRACTION_ERROR();

    MCAPI static ::std::string const& ENTITY_REGISTRY_CREATION_ERROR();

    MCAPI static ::std::string const& FINAL_LEVEL_STORAGE_STATE_ERROR();

    MCAPI static ::std::string const& HOST_MULTIPLAYER_ERROR();

    MCAPI static ::std::string const& INITIAL_LEVEL_STORAGE_STATE_ERROR();

    MCAPI static ::std::string const& LEVEL_STORAGE_CREATION_ERROR();

    MCAPI static ::std::string const& PACK_SOURCE_LOADING_ERROR();

    MCAPI static ::std::string const& POST_INIT_ERROR();

    MCAPI static ::std::chrono::nanoseconds const& SERVER_MAX_DELAY_BEFORE_SLOWDOWN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ServerInstanceArguments&& args);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLevelCorrupt();

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

#ifdef LL_PLAT_C
    MCAPI void $onLowMemory(::LowMemorySeverity);
#endif


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
