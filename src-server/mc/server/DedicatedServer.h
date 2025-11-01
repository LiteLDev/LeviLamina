#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/IMinecraftApp.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/islands/AppIsland.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ScopeExit.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/network/PacketGroupDefinition.h"

// auto generated forward declare list
// clang-format off
class AllowListFile;
class AppConfigs;
class CDNConfig;
class ConsoleInputReader;
class EditorBootstrapper;
class FileArchiver;
class IEDUSystems;
class IGameModuleShared;
class IMinecraftEventing;
class LevelDbEnv;
class LevelSettings;
class Minecraft;
class PermissionsFile;
class PropertiesSettings;
class ServerInstanceEventCoordinator;
class ServerTextSettings;
class SignalingService;
class SignalingServiceSignInJob;
class TestConfig;
struct ImguiProfiler;
namespace Automation { class AutomationClient; }
namespace Bedrock { class ActivationArguments; }
namespace Bedrock::Http { class DispatcherInterface; }
namespace Bedrock::Http { class DispatcherProcess; }
namespace Bedrock::Services { class AuthHelper; }
namespace Bedrock::Services { class DiscoveryHelper; }
namespace CodeBuilder { class IManager; }
namespace Core { class FilePathManager; }
namespace Core { class FileSystem; }
// clang-format on

class DedicatedServer : public ::IMinecraftApp, public ::Bedrock::AppIsland {
public:
    // DedicatedServer inner types define
    enum class StartResult : int {
        Success = 0,
        PortOccupied = 1,
        InvalidSettings = 2,
        MissingDependency = 3,
        RuntimeError = 4,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Minecraft>> mMinecraft;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Core::FileSystem>> mFileSystem;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::ServerInstanceEventCoordinator>> mServerInstanceEventCoordinator;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mWantsToQuit;
    ::ll::TypedStorage<4, 4, ::std::atomic<::DedicatedServer::StartResult>> mResult;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConsoleInputReader>> mConsoleInputReader;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IGameModuleShared>> mGameModule;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AppConfigs>> mAppConfig;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::AppConfigs>> mAppConfigServiceRegistrationToken;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Http::DispatcherProcess>> mHttpDispatcher;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::Bedrock::Http::DispatcherInterface>> mHttpDispatcherServiceRegistrationToken;
    ::ll::TypedStorage<8, 32, ::std::string> mSessionID;
    ::ll::TypedStorage<8, 64, ::Bedrock::ScopeExit> mOnDestructioncloseAndResetAllLogs;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelDbEnv>> mLevelDbEnv;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CodeBuilder::IManager>> mCodeBuilder;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::CodeBuilder::IManager>> mCodeBuilderRegistrationToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ImguiProfiler>> mImguiProfiler;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::ImguiProfiler>> mImguiProfilerRegistrationToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FileArchiver>> mFileArchiver;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EditorBootstrapper>> mEditorBootstrapper;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CDNConfig>> mCDNConfig;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerTextSettings>> mServerTextSettings;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SignalingService>> mSignalingService;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SignalingServiceSignInJob>> mSignalingServiceSignInJob;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Services::DiscoveryHelper>> mDiscoveryServiceHelper;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Services::AuthHelper>> mAuthServiceHelper;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IEDUSystems>> mEduSystems;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DedicatedServer() /*override*/;

    // vIndex: 5
    virtual bool stop() /*override*/;

    // vIndex: 8
    virtual ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> getFileArchiver() const /*override*/;

    // vIndex: 1
    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft> getPrimaryMinecraft() /*override*/;

    // vIndex: 2
    virtual ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> getAutomationClient() const /*override*/;

    // vIndex: 3
    virtual bool isEduMode() const /*override*/;

    // vIndex: 4
    virtual bool isDedicatedServer() const /*override*/;

    // vIndex: 5
    virtual void onNetworkMaxPlayersChanged(uint newMaxPlayerCount) /*override*/;

    // vIndex: 6
    virtual ::IGameModuleShared& getGameModuleShared() /*override*/;

    // vIndex: 7
    virtual void requestServerShutdown(::std::string const&) /*override*/;

    // vIndex: 9
    virtual bool requestInGamePause(::SubClientId const&, bool) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DedicatedServer();

    MCAPI void initializeAppConfigs();

    MCAPI void initializeCodeBuilder();

    MCAPI void initializeHttp(::PropertiesSettings const& properties);

    MCAPI void initializeImguiProfiler();

    MCAPI void initializeLogging(::TestConfig& testConfig);

    MCAPI ::std::future<bool> initializeMultiplayerKeys(::Minecraft& minecraft, ::Bedrock::NonOwnerPointer<::Bedrock::Services::DiscoveryHelper> discovery, ::PropertiesSettings const& properties);

    MCAPI void initializeServices(::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing> minecraftEventing, ::PropertiesSettings& properties);

    MCAPI ::DedicatedServer::StartResult runDedicatedServerLoop(::Core::FilePathManager& filePathManager, ::PropertiesSettings& properties, ::LevelSettings& settings, ::AllowListFile& userAllowList, ::std::unique_ptr<::PermissionsFile>& permissionsFile, ::std::optional<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder, ::Bedrock::ActivationArguments const& args, ::TestConfig& testConfig);

    MCAPI void shutdownServices();

    MCAPI ::DedicatedServer::StartResult start(::std::string const& sessionID, ::Bedrock::ActivationArguments const& args);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $stop();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> $getFileArchiver() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Minecraft> $getPrimaryMinecraft();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> $getAutomationClient() const;

    MCAPI bool $isEduMode() const;

    MCFOLD bool $isDedicatedServer() const;

    MCFOLD void $onNetworkMaxPlayersChanged(uint newMaxPlayerCount);

    MCFOLD ::IGameModuleShared& $getGameModuleShared();

    MCAPI void $requestServerShutdown(::std::string const&);

    MCFOLD bool $requestInGamePause(::SubClientId const&, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForAppIsland();

    MCNAPI static void** $vftableForIMinecraftApp();
    // NOLINTEND

};
