#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

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
        class Core::FilePathManager&            filePathManager,
        class PropertiesSettings&               properties,
        class LevelSettings&                    settings,
        class AllowListFile&                    userAllowList,
        std::unique_ptr<class PermissionsFile>& permissionsFile
    );

    MCAPI ::DedicatedServer::StartResult
    start(std::string const& sessionID, class Bedrock::ActivationArguments const& args);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void initializeLogging();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockAppIsland();

    MCAPI static void** $vftableForIMinecraftApp();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI Bedrock::NotNullNonOwnerPtr<class Automation::AutomationClient> getAutomationClient$() const;

    MCAPI Bedrock::NotNullNonOwnerPtr<class FileArchiver> getFileArchiver$() const;

    MCAPI class IGameModuleShared& getGameModuleShared$();

    MCAPI Bedrock::NotNullNonOwnerPtr<class Minecraft> getPrimaryMinecraft$();

    MCAPI bool isDedicatedServer$() const;

    MCAPI bool isEduMode$() const;

    MCAPI void onNetworkMaxPlayersChanged$(uint newMaxPlayerCount);

    MCAPI void requestServerShutdown$(std::string const&);

    MCAPI bool stop$();

    // NOLINTEND
};
