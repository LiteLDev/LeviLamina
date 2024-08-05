#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Automation { class AutomationClient; }
namespace Bedrock { class ActivationArguments; }
namespace Core { class FilePathManager; }
// clang-format on

class DedicatedServer {
public:
    // DedicatedServer inner types define
    enum class StartResult {};

public:
    // prevent constructor by default
    DedicatedServer& operator=(DedicatedServer const&);
    DedicatedServer(DedicatedServer const&);

public:
    // NOLINTBEGIN
    MCVAPI Bedrock::NotNullNonOwnerPtr<class Automation::AutomationClient> getAutomationClient() const;

    MCVAPI Bedrock::NotNullNonOwnerPtr<class FileArchiver> getFileArchiver() const;

    MCVAPI class IGameModuleShared& getGameModuleShared();

    MCVAPI Bedrock::NotNullNonOwnerPtr<class Minecraft> getPrimaryMinecraft();

    MCVAPI bool isDedicatedServer() const;

    MCVAPI bool isEduMode() const;

    MCVAPI void onNetworkMaxPlayersChanged(uint newMaxPlayerCount);

    MCVAPI void requestServerShutdown(std::string const&);

    MCVAPI bool stop();

    MCVAPI ~DedicatedServer();

    MCAPI DedicatedServer();

    MCAPI ::DedicatedServer::StartResult runDedicatedServerLoop(
        class Core::FilePathManager& filePathManager,
        class PropertiesSettings&    properties,
        class LevelSettings&         settings,
        class AllowListFile&,
        std::unique_ptr<class PermissionsFile>& permissionsFile
    );

    MCAPI ::DedicatedServer::StartResult start(std::string const& sessionID, class Bedrock::ActivationArguments const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void initializeLogging();

    // NOLINTEND
};
