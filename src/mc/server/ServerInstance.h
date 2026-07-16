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
class AppPlatform;
class CDNConfig;
class ChatLoggingEventListener;
class EducationOptions;
class ILevel;
class IMinecraftEventing;
class ItemRegistry;
class LevelData;
class LevelStorage;
class LinkedAssetValidator;
class LocalProfilerControlBroker;
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
struct ConnectionDefinition;
struct DimensionFactoryAndManager;
struct NetworkServerConfig;
struct ServerInstanceArguments;
struct ServerInstanceInitArguments;
struct ServerNetworkHandlerDependencies;
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
        // CreateServerLevelOps inner types define
        using CreateDimensionFactoryCallback =
            ::brstd::move_only_function<::std::unique_ptr<::DimensionFactoryAndManager>(
                ::Bedrock::NotNullNonOwnerPtr<::ILevel>,
                ::br::worldgen::StructureSetRegistry&
            ) const>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ServerInstance&>      mInstance;
        ::ll::TypedStorage<1, 1, bool>                   mServerAuthSound;
        ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>  mEventing;
        ::ll::TypedStorage<8, 8, ::ResourcePackManager&> mClientResourcePackManager;
        ::ll::TypedStorage<
            8,
            64,
            ::brstd::move_only_function<::std::unique_ptr<::DimensionFactoryAndManager>(
                ::Bedrock::NotNullNonOwnerPtr<::ILevel>,
                ::br::worldgen::StructureSetRegistry&
            ) const>>
            mCreateDimensionFactoryAndManager;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateServerLevelOps& operator=(CreateServerLevelOps const&);
        CreateServerLevelOps(CreateServerLevelOps const&);
        CreateServerLevelOps();
    };

    struct HostMultiplayerOps {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ServerInstance&>                    mInstance;
        ::ll::TypedStorage<8, 8, ::NetworkServerConfig&&>              mNetworkServerConfig;
        ::ll::TypedStorage<8, 8, ::std::string const&>                 mHostPublicKey;
        ::ll::TypedStorage<4, 4, int>                                  mMaxChunkRadius;
        ::ll::TypedStorage<1, 1, bool>                                 mShouldAnnounce;
        ::ll::TypedStorage<8, 8, ::ServerNetworkHandlerDependencies&&> mServerNetworkOptions;
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
        ::ll::TypedStorage<8, 8, ::AppPlatform const&>          mPlatform;
        ::ll::TypedStorage<1, 1, bool>                          mDisableLanSignaling;
        ::ll::TypedStorage<1, 1, bool>                          mIsServerVisibleToLanDiscovery;
        ::ll::TypedStorage<1, 1, bool>                          mEnablePacketRateLimiting;
        ::ll::TypedStorage<8, 8, ::ConnectionDefinition const&> mConnectionDefinition;
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
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<bool() const>>    mShouldDisableNetworkOnSuspend;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChatLoggingEventListener>> mChatLoggingEventListener;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::LocalProfilerControlBroker>> mLocalProfilerControlBroker;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInstance();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ServerInstance() /*override*/;
#else // LL_PLAT_C
    virtual ~ServerInstance() /*override*/ = default;
#endif

    virtual void onLowMemory(::LowMemorySeverity) /*override*/;

    virtual void onLevelCorrupt() /*override*/;

    virtual void onGameModeChanged() /*override*/;

    virtual void onTick(int, int) /*override*/;

    virtual void onInternetUpdate() /*override*/;

    virtual void onGameSessionReset() /*override*/;

    virtual void onLevelExit() /*override*/;

    virtual void onRequestResourceReload() /*override*/;

    virtual void onLowDiskSpace(bool const) /*override*/;

    virtual void onOutOfDiskSpace(bool const) /*override*/;

    virtual void onCriticalDiskError(bool const, ::Core::LevelStorageState const&) /*override*/;

    virtual void onAppSuspended() /*override*/;

    virtual void onAppResumed() /*override*/;

    virtual void updateScreens() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ServerInstance(::ServerInstanceArguments&& args);

#ifdef LL_PLAT_C
    MCAPI void finishLoadingLinkedAssets(::ResourcePackManager& rpm);
#endif

    MCAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> getEditorManager() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string getLevelId() const;
#endif

    MCAPI bool initializeServer(::ServerInstanceInitArguments&& args);

    MCAPI void leaveGameSync();

    MCAPI void queueForServerThread(::std::function<void()> command);

#ifdef LL_PLAT_C
    MCAPI bool requestInGamePause(bool status);
#endif

    MCAPI void startLeaveGame();

    MCAPI void startServerThread();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::brstd::move_only_function<
        ::std::unique_ptr<::ServerLevel>(::ServerInstanceInitArguments::CreateLevelArguments&&) const>
    createServerLevelCallback(::ServerInstance::CreateServerLevelOps&& ops);

#ifdef LL_PLAT_S
    MCAPI static bool forceOffClientChunkGeneration(::LevelData& levelData);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& POST_INIT_ERROR();
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

    // NOLINTEND
};
