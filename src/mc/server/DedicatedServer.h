#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/IMinecraftApp.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/islands/AppIsland.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AllowListFile;
class FileArchiver;
class IGameModuleShared;
class LevelSettings;
class Minecraft;
class PermissionsFile;
class PropertiesSettings;
class TestConfig;
namespace Automation { class AutomationClient; }
namespace Bedrock { class ActivationArguments; }
namespace Core { class FilePathManager; }
// clang-format on

class DedicatedServer : public ::IMinecraftApp, public ::Bedrock::AppIsland {
public:
    // DedicatedServer inner types define
    enum class StartResult : int {
        Success           = 0,
        PortOccupied      = 1,
        InvalidSettings   = 2,
        MissingDependency = 3,
        RuntimeError      = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk68043b;
    ::ll::UntypedStorage<8, 24> mUnkbdf2c1;
    ::ll::UntypedStorage<8, 8>  mUnkceb2ec;
    ::ll::UntypedStorage<1, 1>  mUnk193fee;
    ::ll::UntypedStorage<4, 4>  mUnkacb014;
    ::ll::UntypedStorage<8, 8>  mUnka2d04f;
    ::ll::UntypedStorage<8, 8>  mUnkeefa08;
    ::ll::UntypedStorage<8, 8>  mUnka4b40a;
    ::ll::UntypedStorage<8, 8>  mUnkf12457;
    ::ll::UntypedStorage<8, 16> mUnk7e3932;
    ::ll::UntypedStorage<8, 8>  mUnk7918f1;
    ::ll::UntypedStorage<8, 32> mUnk8d1b07;
    ::ll::UntypedStorage<8, 64> mUnke208cc;
    ::ll::UntypedStorage<8, 8>  mUnk52b1b9;
    ::ll::UntypedStorage<8, 8>  mUnk4044be;
    ::ll::UntypedStorage<8, 8>  mUnka4996b;
    ::ll::UntypedStorage<8, 8>  mUnk8f0902;
    ::ll::UntypedStorage<8, 8>  mUnk85bec9;
    ::ll::UntypedStorage<8, 8>  mUnk5ad410;
    ::ll::UntypedStorage<8, 8>  mUnk646615;
    ::ll::UntypedStorage<8, 8>  mUnkdadb88;
    ::ll::UntypedStorage<8, 8>  mUnk5d6b3b;
    // NOLINTEND

public:
    // prevent constructor by default
    DedicatedServer& operator=(DedicatedServer const&);
    DedicatedServer(DedicatedServer const&);

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

    MCAPI void initializeHttp();

    MCAPI void initializeImguiProfiler();

    MCAPI void initializeLogging(::TestConfig& testConfig);

    MCAPI ::DedicatedServer::StartResult runDedicatedServerLoop(
        ::Core::FilePathManager&              filePathManager,
        ::PropertiesSettings&                 properties,
        ::LevelSettings&                      settings,
        ::AllowListFile&                      userAllowList,
        ::std::unique_ptr<::PermissionsFile>& permissionsFile,
        ::Bedrock::ActivationArguments const& args,
        ::TestConfig&                         testConfig
    );

    MCAPI ::DedicatedServer::StartResult
    start(::std::string const& sessionID, ::Bedrock::ActivationArguments const& args);
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
    MCAPI static void** $vftableForAppIsland();

    MCAPI static void** $vftableForIMinecraftApp();
    // NOLINTEND
};
